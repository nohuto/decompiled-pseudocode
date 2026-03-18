/*
 * XREFs of PnpRemoveDeviceActionRequests @ 0x14015ABF0
 * Callers:
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpDeleteDeviceActionRequest @ 0x1400FFD98 (PnpDeleteDeviceActionRequest.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // si
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 **v7; // rax
  _DWORD *v8; // rax
  struct _KEVENT *v9; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v5 = *(__int64 **)v3;
      if ( *(_QWORD *)(v3 + 16) == a1 )
      {
        if ( v5[1] != v3 || (v7 = *(__int64 ***)(v3 + 8), *v7 != (__int64 *)v3) )
          __fastfail(3u);
        *v7 = v5;
        v5[1] = (__int64)v7;
        v8 = *(_DWORD **)(v3 + 48);
        if ( v8 )
          *v8 = -1073741810;
        v9 = *(struct _KEVENT **)(v3 + 40);
        if ( v9 )
          KeSetEvent(v9, 0, 0);
        ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 16), 0x746C6644u);
        PnpDeleteDeviceActionRequest((volatile signed __int32 *)v3);
      }
      v3 = (__int64)v5;
    }
    while ( v5 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock(&PnpSpinLock);
  result = v4;
  __writecr8(v4);
  return result;
}
