/*
 * XREFs of ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00A3E48
 * Callers:
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00A3F68 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00A3D08 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferList(
        __int64 a1,
        _QWORD **a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(a1 + 8) + 39912LL));
  v9 = *a2;
  while ( v9 != a2 )
  {
    v10 = (__int64)(v9 - 54);
    v9 = (_QWORD *)*v9;
    if ( *(_WORD *)(*(_QWORD *)(v10 + 520) + 4LL) != 1 )
    {
      v11 = (_QWORD *)(v10 + 432);
      v12 = *(_QWORD *)(v10 + 432);
      v13 = *(_QWORD **)(v10 + 440);
      if ( *(_QWORD *)(v12 + 8) != v10 + 432 || (_QWORD *)*v13 != v11 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = 0LL;
      if ( *(_DWORD *)(v10 + 128) == 2
        && *(_QWORD *)(v10 + 136) == a1
        && *(_WORD *)(*(_QWORD *)(v10 + 520) + 4LL) == 2
        && (int)VIDMM_SEGMENT::TrimAllocation((VIDMM_GLOBAL **)a1, v10, a3, a4, a5) >= 0 )
      {
        break;
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 8) + 39912LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  return 3221225473LL;
}
