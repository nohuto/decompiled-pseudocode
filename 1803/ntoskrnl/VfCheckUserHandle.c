/*
 * XREFs of VfCheckUserHandle @ 0x140825800
 * Callers:
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x14075A020 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x140813FA8 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x140815EBC (VfDriverIsKernelImageAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140821DA0 (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // ebp
  __int64 v5; // rdi
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  char v9; // si
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  int v11; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-68h] BYREF

  if ( (MmVerifierData & 0x100) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
      {
        if ( BugCheckParameter2 )
        {
          v3 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
          v4 = v3;
          v5 = 0LL;
          if ( v3 )
          {
            v6 = (unsigned __int64 *)BackTrace;
            do
            {
              v7 = *v6;
              if ( VfDriverIsKernelImageAddress(*v6) )
              {
                if ( KernelVerifier )
                  break;
              }
              else
              {
                if ( (unsigned int)VfTargetDriversIsEnabled(v8) )
                  break;
                if ( !ViDriverXDVBase
                  || !ViDriverXDVImageSize
                  || v7 < ViDriverXDVBase
                  || v7 >= ViDriverXDVBase + (unsigned __int64)(unsigned int)ViDriverXDVImageSize )
                {
                  return;
                }
              }
              v5 = (unsigned int)(v5 + 1);
              ++v6;
            }
            while ( (unsigned int)v5 < v4 );
            if ( (unsigned int)v5 < v4 && !(unsigned int)VfUtilIsLocalSystem(Process) )
            {
              if ( ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL) < 0 )
                goto LABEL_25;
              v9 = 0;
              if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v11) >= 0
                && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
                 || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
              {
                v9 = 1;
              }
              ObfDereferenceObject(Object);
              if ( !v9 )
              {
LABEL_25:
                if ( ViHandleBreaksEnabled )
                  VerifierBugCheckIfAppropriate(
                    0xC4u,
                    0xF6uLL,
                    BugCheckParameter2,
                    (ULONG_PTR)Process,
                    (__int64)BackTrace[v5]);
              }
            }
          }
        }
      }
    }
  }
}
