/*
 * XREFs of ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FF80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180010290 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::CheckPendingRequestsThreadpoolCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  DWORD v5; // ebx
  _BYTE *Value; // rdi
  _BYTE *v7; // rax
  DWORD v9; // ebx
  _BYTE TlsValue[80]; // [rsp+20h] [rbp-68h] BYREF

  v3 = HampLockTrackerId;
  memset(TlsValue, 0, 72);
  if ( HampLockTrackerId != -1 )
  {
    TlsGetValue(HampLockTrackerId);
    TlsSetValue(v3, TlsValue);
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v5) )
        __int2c();
      *(_QWORD *)Value |= 1uLL;
      ++Value[8];
    }
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800681D0 = GetCurrentThreadId();
  if ( *((_DWORD *)a2 + 4) == 1 )
    *(_DWORD *)(a2[3] + 240LL) &= ~1u;
  ExecutionModel::BaseResourceSet::CheckAllPendingRequests((ExecutionModel::BaseResourceSet *)a2);
  dword_1800681D0 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*v7 & 1) == 0 )
      __int2c();
    if ( v7[8]-- == 1 )
      *(_QWORD *)v7 &= ~1uLL;
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
}
