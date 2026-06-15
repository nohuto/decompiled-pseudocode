/*
 * XREFs of PdcPortClose @ 0x18010C198
 * Callers:
 *     Pdcv2ActivationClientUnregister @ 0x18010BE5C (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     PdcpAlpcReleaseResources @ 0x18010C51C (PdcpAlpcReleaseResources.c)
 */

__int64 __fastcall PdcPortClose(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  void *v4; // rsi
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 16;
  v6[0] = 0LL;
  v6[1] = 0LL;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    ZwAlpcDisconnectPort(v3, 1LL);
    ZwAlpcQueryInformation(*(_QWORD *)(a1 + 8), 0LL, v6, 16LL, 0LL);
    ReleaseSRWLockShared((PSRWLOCK)v1);
    if ( *(_QWORD *)(a1 + 32) )
    {
      *(_DWORD *)(a1 + 120) = HIDWORD(v6[0]);
      while ( 1 )
      {
        v7 = *(_DWORD *)(a1 + 124);
        if ( v7 == *(_DWORD *)(a1 + 120) )
          break;
        RtlWaitOnAddress(a1 + 124, &v7, 4LL);
      }
    }
  }
  else
  {
    ReleaseSRWLockShared((PSRWLOCK)v1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)v1);
  *(_DWORD *)(v1 + 8) = GetCurrentThreadId();
  v4 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(v1 + 8) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  if ( v4 )
    CloseHandle(v4);
  if ( *(_QWORD *)(a1 + 32) )
    TpWaitForAlpcCompletion();
  return PdcpAlpcReleaseResources(a1);
}
