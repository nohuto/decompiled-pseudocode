/*
 * XREFs of VfCheckUserHandle @ 0x1407767AC
 * Callers:
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x1406C21D0 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x140765258 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x1407672E0 (VfDriverIsKernelImageAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140774E6C (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(HANDLE Handle)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned __int64 *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r8d
  char v10; // si
  PVOID Object; // [rsp+30h] [rbp-A8h] BYREF
  int v12; // [rsp+38h] [rbp-A0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-58h] BYREF

  if ( (MmVerifierData & 0x100) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
      {
        if ( Handle )
        {
          v3 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
          v4 = v3;
          v5 = 0LL;
          if ( v3 )
          {
            v6 = (unsigned __int64 *)BackTrace;
            while ( VfDriverIsKernelImageAddress(*v6) )
            {
              if ( !v9 )
              {
                v5 = (unsigned int)(v5 + 1);
                v6 = (unsigned __int64 *)(v7 + 8);
                if ( (unsigned int)v5 < v4 )
                  continue;
              }
              goto LABEL_13;
            }
            if ( !(unsigned int)VfTargetDriversIsEnabled(v8) )
              return;
LABEL_13:
            if ( (unsigned int)v5 < v4 && !(unsigned int)VfUtilIsLocalSystem(Process) )
            {
              if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
                goto LABEL_21;
              v10 = 0;
              if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v12) >= 0
                && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
                 || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
              {
                v10 = 1;
              }
              ObfDereferenceObject(Object);
              if ( !v10 )
              {
LABEL_21:
                if ( ViHandleBreaksEnabled )
                {
                  if ( (MmVerifierData & 0x800) != 0 )
                    VerifierBugCheckIfAppropriate(
                      0xC4u,
                      0xF6uLL,
                      (ULONG_PTR)Handle,
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
}
