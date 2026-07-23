/*
 * XREFs of ExpWnfReadStateData @ 0x140500CA8
 * Callers:
 *     NtQueryWnfStateData @ 0x1404FFEEC (NtQueryWnfStateData.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013D8 (ExpWnfDeliverThreadNotifications.c)
 *     ExQueryWnfStateData @ 0x140597570 (ExQueryWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall ExpWnfReadStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  signed __int64 *v9; // rbx
  PRTL_BALANCED_NODE v10; // rdi
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-48h]

  v14 = 0;
  v9 = (signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, (__int64)v10, (ULONG_PTR)v9);
  if ( v10 )
    BYTE2(v10[1].Left) |= 1u;
  v11 = *(_DWORD **)(a1 + 88);
  if ( !v11 )
  {
    *a2 = 0;
    goto LABEL_10;
  }
  if ( v11 == (_DWORD *)1 )
  {
    *a2 = *(_DWORD *)(a1 + 96);
LABEL_10:
    *a5 = 0;
    goto LABEL_13;
  }
  *a2 = v11[3];
  *a5 = v11[2];
  v12 = v11[2];
  if ( a4 < v12 )
  {
    v14 = -1073741789;
  }
  else
  {
    memmove(a3, v11 + 4, v12);
    v14 = 0;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return v14;
}
