/*
 * XREFs of VfCheckUserHandle @ 0x1407B85A8
 * Callers:
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x1406F0C50 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x1407A6E28 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x1407A8E84 (VfDriverIsKernelImageAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1407B6C28 (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned __int64 *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  char v9; // si
  PVOID Object; // [rsp+30h] [rbp-A8h] BYREF
  int v11; // [rsp+38h] [rbp-A0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-58h] BYREF

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
            while ( VfDriverIsKernelImageAddress(*v6) )
            {
              if ( !KernelVerifier )
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
              if ( ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL) < 0 )
                goto LABEL_21;
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
LABEL_21:
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
