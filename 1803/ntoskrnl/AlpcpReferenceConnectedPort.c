/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x1404CF2BC
 * Callers:
 *     AlpcpPortQueryServerSessionInfo @ 0x1404898B8 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpExposeHandleAttribute @ 0x1404CA8B0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1404CEEA0 (AlpcpImpersonateMessage.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140551F78 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
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
LABEL_8:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        KeAbPostRelease(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 )
      v2 &= -(__int64)(ObReferenceObjectSafe(v2) != 0);
    goto LABEL_8;
  }
  ObfReferenceObject((PVOID)a1);
  return a1;
}
