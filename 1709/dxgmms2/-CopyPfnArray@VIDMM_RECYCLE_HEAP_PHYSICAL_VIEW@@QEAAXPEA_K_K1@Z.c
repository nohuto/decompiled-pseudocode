/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C004C6B4
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C006B688 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C006B798 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ @ 0x1C00A6580 (-GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ.c)
 * Callees:
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C004CE58 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v4; // r10
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // rbx
  unsigned __int64 v7; // r14
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // r9
  unsigned __int64 v10; // rax
  char v11; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  struct VIDMM_MDL_RANGE *NextRange; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  v4 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v5 = 0LL;
  v7 = a3;
  v8 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  LOBYTE(a3) = 0;
  if ( v8 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    goto LABEL_17;
  do
  {
    if ( (_BYTE)a3 )
      break;
    this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v8 - 24);
    a3 = 0LL;
    v10 = *((_QWORD *)v8 - 1);
    v8 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v8;
    if ( v10 > v7 )
      a3 = 1LL;
    else
      this = v5;
    v5 = this;
  }
  while ( v8 != v4 );
  if ( !v5 || *((_QWORD *)v5 + 1) > v7 )
  {
LABEL_17:
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, 1LL, a3);
    v22[7] = 0LL;
    v22[3] = 270LL;
    v22[4] = 52LL;
    v22[5] = 17LL;
    v22[6] = v5;
    WdLogEvent5_WdCriticalError(v22);
  }
  v11 = 0;
  v12 = v7;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *((_QWORD *)v5 + 1);
    v15 = *((_QWORD *)v5 + 2);
    v16 = (v12 - v14) >> 12;
    if ( a4 <= v15 )
    {
      v15 = a4;
      v11 = 1;
    }
    v17 = ((v15 - v14) >> 12) - v16;
    memmove(&a2[v13], (const void *)(*(_QWORD *)v5 + 8 * (v16 + 6)), 8 * v17);
    v12 = *((_QWORD *)v5 + 2);
    v13 += v17;
    NextRange = VIDMM_MDL_RANGE::GetNextRange(v5);
    v5 = NextRange;
    if ( v11 )
      break;
    if ( *((_QWORD *)NextRange + 1) != v12 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, 1LL, v21);
      v23[7] = 0LL;
      v23[3] = 270LL;
      v23[4] = 52LL;
      v23[5] = 18LL;
      v23[6] = v5;
      WdLogEvent5_WdCriticalError(v23);
    }
  }
  if ( v13 != (a4 - v7) >> 12 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v24[7] = 0LL;
    v24[3] = 270LL;
    v24[4] = 52LL;
    v24[5] = 19LL;
    v24[6] = v13;
    WdLogEvent5_WdCriticalError(v24);
  }
}
