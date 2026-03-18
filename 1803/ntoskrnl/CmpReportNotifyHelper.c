/*
 * XREFs of CmpReportNotifyHelper @ 0x1404E2660
 * Callers:
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpTransIsTransActive @ 0x14022215C (CmpTransIsTransActive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpDelayedDerefKeys @ 0x1404E2844 (CmpDelayedDerefKeys.c)
 *     CmpNotifyTriggerCheck @ 0x1404E289C (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
 */

__int64 __fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int16 v6; // dx
  volatile signed __int64 *v10; // r14
  __int64 KcbAtLayerHeight; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 CurrentIrql; // r12
  __int64 *i; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(_WORD *)(a1 + 2);
  v20[1] = v20;
  v20[0] = v20;
  v10 = (volatile signed __int64 *)(a2 + 1672);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v6);
  ExAcquirePushLockExclusiveEx(a2 + 1672, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(__int64 **)(a2 + 1584); i; i = (__int64 *)*i )
  {
    v12 = i[4];
    if ( (*(_DWORD *)(v12 + 4) & 0x7FE00000u) > (*(_DWORD *)(KcbAtLayerHeight + 4) & 0x7FE00000u) )
      break;
    if ( (a4 & (_DWORD)i[6] & 0x3FFFFFFF) != 0 && ((i[6] & 0x40000000) != 0 || v12 == KcbAtLayerHeight) )
    {
      v18 = *(_QWORD *)(i[5] + 56);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v18) && (!v18 || (unsigned int)CmpTransIsTransActive(v18)) )
      {
        v13 = i[4];
        v19 = KcbAtLayerHeight;
        v12 = (*(_DWORD *)(v13 + 4) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(KcbAtLayerHeight + 4) >> 21) & 0x3FFu) > (unsigned int)v12 )
        {
          do
            v19 = *(_QWORD *)(v19 + 64);
          while ( ((*(_DWORD *)(v19 + 4) >> 21) & 0x3FFu) > (unsigned int)v12 );
        }
        if ( v19 == v13 && (unsigned __int8)CmpNotifyTriggerCheck(i, a1, a3) )
          CmpPostNotify((_DWORD)i, v12, v13, 268, 0, (__int64)v20, a5);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10, v12, v13, v14);
  KeAbPostRelease((ULONG_PTR)v10);
  return CmpDelayedDerefKeys(v20);
}
