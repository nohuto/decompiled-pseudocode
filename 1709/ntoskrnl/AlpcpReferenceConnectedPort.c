/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x14049D6B0
 * Callers:
 *     AlpcpPortQueryServerSessionInfo @ 0x14043CC94 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpImpersonateMessage @ 0x14049DC60 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x14049F8D4 (AlpcpExposeHandleAttribute.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405626DC (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
      return v2;
    ExAcquirePushLockSharedEx(v3 - 16, 0LL);
    v4 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
    if ( v4 == 2 )
    {
      v2 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      if ( v4 != 3 )
      {
LABEL_9:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        KeAbPostRelease(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 && !ObReferenceObjectSafe(v2) )
      v2 = 0LL;
    goto LABEL_9;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
