/*
 * XREFs of ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140270400
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1402703A4 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1402704F0 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // edi
  char v4; // cl
  _QWORD *v6; // r8
  unsigned __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = (_QWORD *)a1;
  if ( a1 < a1 + 168 )
  {
    do
    {
      v7 = v6[1];
      if ( v7 != -1LL && (*v6 <= *(_QWORD *)(a1 + 184) || v7 <= a2) )
      {
        *v6 = -1LL;
        v3 |= 1 << v4;
        v6[1] = -1LL;
      }
      v6 += 3;
      ++v4;
    }
    while ( (unsigned __int64)v6 < a1 + 168 );
  }
  memset(v11, 0, 0x20uLL);
  v11[2] = 1;
  v8 = v11[0] & 0xFFFFFFF8 | 6;
  *(_DWORD *)(a1 + 224) |= 1u;
  v11[0] = v8;
  while ( v3 )
  {
    _BitScanForward(&v9, v3);
    v11[4] = v9;
    v3 &= ~(1 << v9);
    ST_STORE<SM_TRAITS>::StWorkItemProcess(a1 - 5744, (char *)v11 + 1);
  }
  *(_DWORD *)(a1 + 224) &= ~1u;
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(a1, 0LL);
}
