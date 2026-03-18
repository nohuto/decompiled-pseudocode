/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C00583B0
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C0053500 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C006F8DC (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C007A780 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 * Callees:
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0058AA4 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char *v4; // r10
  unsigned __int64 v5; // rbx
  char *v6; // rcx
  VIDMM_MDL_RANGE *v7; // rdi
  unsigned __int64 *v9; // r13
  VIDMM_MDL_RANGE *v10; // rax
  char v11; // r15
  unsigned __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rsi
  struct VIDMM_MDL_RANGE *NextRange; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  v4 = (char *)this + 8;
  v5 = a3;
  v6 = (char *)*((_QWORD *)this + 1);
  LOBYTE(a3) = 0;
  v7 = 0LL;
  v9 = a2;
  if ( v6 == v4 )
    goto LABEL_16;
  do
  {
    if ( (_BYTE)a3 )
      break;
    a2 = (unsigned __int64 *)*((_QWORD *)v6 - 1);
    v10 = (VIDMM_MDL_RANGE *)(v6 - 24);
    v6 = *(char **)v6;
    LOBYTE(a3) = (unsigned __int64)a2 > v5;
    if ( (unsigned __int64)a2 <= v5 )
      v10 = v7;
    v7 = v10;
  }
  while ( v6 != v4 );
  if ( !v7 || *((_QWORD *)v7 + 1) > v5 )
  {
LABEL_16:
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3);
    v22[3] = 270LL;
    v22[4] = 52LL;
    v22[5] = 17LL;
    v22[6] = v7;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  v11 = 0;
  v12 = v5;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *((_QWORD *)v7 + 1);
    v15 = *((_QWORD *)v7 + 2);
    v16 = (v12 - v14) >> 12;
    if ( a4 <= v15 )
    {
      v15 = a4;
      v11 = 1;
    }
    v17 = ((v15 - v14) >> 12) - v16;
    memmove(&v9[v13], (const void *)(*(_QWORD *)v7 + 8 * (v16 + 6)), 8 * v17);
    v12 = *((_QWORD *)v7 + 2);
    v13 += v17;
    NextRange = VIDMM_MDL_RANGE::GetNextRange(v7);
    v7 = NextRange;
    if ( v11 )
      break;
    if ( *((_QWORD *)NextRange + 1) != v12 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
      v23[3] = 270LL;
      v23[4] = 52LL;
      v23[5] = 18LL;
      v23[6] = v7;
      v23[7] = 0LL;
      WdLogEvent5_WdCriticalError(v23);
    }
  }
  if ( v13 != (a4 - v5) >> 12 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v24[3] = 270LL;
    v24[4] = 52LL;
    v24[5] = 19LL;
    v24[6] = v13;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
}
