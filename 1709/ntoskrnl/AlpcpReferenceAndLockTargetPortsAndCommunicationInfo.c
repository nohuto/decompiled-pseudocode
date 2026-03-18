/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404A0D90
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1404651EC (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1404A0B50 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140468B3C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // r15
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 16);
  v6 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v4 - 2), 0LL);
  if ( v6 == 2 )
  {
    v7 = *v4;
    v8 = v4[1];
  }
  else if ( v6 == 1 )
  {
    v7 = *v4;
    v8 = *v4;
  }
  else
  {
    v7 = v4[2];
    v8 = v7;
  }
  if ( v7 && !ObReferenceObjectSafe(v7) )
    v7 = 0LL;
  if ( v8 && !ObReferenceObjectSafe(v8) )
    v8 = 0LL;
  if ( v7 && v8 )
  {
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    if ( v8 != v7 )
      ExAcquirePushLockSharedEx(v8 + 352, 0LL);
    if ( (*(_DWORD *)(v7 + 416) & 0x20) != 0 || (*(_DWORD *)(v8 + 416) & 0x20) != 0 )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v4, (signed __int64 *)v7, (signed __int64 *)v8);
      return 3221225527LL;
    }
    else
    {
      *a2 = v7;
      result = 0LL;
      *a3 = v8;
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v7 )
      ObfDereferenceObject((PVOID)v7);
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    return 3221225527LL;
  }
  return result;
}
