/*
 * XREFs of ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0047C38
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058948 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C0047C0C (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A190 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFaultedAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  int v5; // ebx
  bool *v6; // rbp
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 *v11; // r10
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rax
  int inited; // eax
  __int64 v17; // rax

  v5 = 0;
  v6 = a4;
  LOBYTE(a4) = a3;
  *a5 = 0LL;
  v9 = **a2;
  v10 = a2 + 7;
  v11 = a2[7];
  v12 = a2[8];
  if ( (_QWORD *)v11[1] != v10 || (_QWORD *)*v12 != v10 )
    __fastfail(3u);
  *v12 = (__int64)v11;
  v13 = 3LL;
  v11[1] = (__int64)v12;
  *v10 = 0LL;
  v14 = a2[12];
  *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
  a2[8] = 0LL;
  if ( *((_WORD *)v14 + 2) < 3u )
  {
    if ( (*(_DWORD *)(v9 + 76) & 0x100000) != 0 )
    {
      v5 = -1071775466;
    }
    else
    {
      v5 = VIDMM_GLOBAL::PageInOneAllocation(this, a2, (**(_DWORD **)(v9 + 520) & 0x20000) != 0 ? 5 : 0, a4, v6, a5);
      if ( v5 != -1071775466 )
        goto LABEL_6;
    }
    if ( (*(_DWORD *)(v9 + 76) & 0x8000000) == 0 )
      goto LABEL_12;
    inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)a2, 0, v6, a5);
    *(_DWORD *)(v9 + 76) &= ~0x100000u;
    v5 = inited;
LABEL_6:
    if ( v5 >= 0 )
    {
      VIDMM_GLOBAL::ReferenceAllocationForSubmission(
        (VIDMM_GLOBAL *)**a2,
        (struct VIDMM_ALLOC *)a2,
        (*(_DWORD *)(**a2 + 76) & 0x8000000) != 0);
      return (unsigned int)v5;
    }
LABEL_12:
    v17 = WdLogNewEntry5_WdWarning(v13, v12);
    *(_QWORD *)(v17 + 32) = v5;
    *(_QWORD *)(v17 + 24) = a2;
    WdLogEvent5_WdWarning(v17);
  }
  return (unsigned int)v5;
}
