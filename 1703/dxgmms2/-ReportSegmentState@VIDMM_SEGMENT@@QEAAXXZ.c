/*
 * XREFs of ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A31FC
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094F98 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 *     Template_pppttxqx @ 0x1C00218CC (Template_pppttxqx.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00491B4 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegmentState(VIDMM_SEGMENT *this, __int64 a2, _BOOL8 a3)
{
  char *v3; // rbp
  char *v5; // rdi
  _QWORD **v6; // r12
  _QWORD *v7; // r14
  _QWORD **v8; // rax
  _QWORD *v9; // r15
  _QWORD *v10; // rbp
  __int64 **v11; // r13
  __int64 v12; // rsi
  char *v13; // rdi
  char *i; // rbx
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+48h] [rbp-40h]

  v3 = (char *)this + 160;
  v5 = (char *)*((_QWORD *)this + 20);
  while ( v5 != v3 )
  {
    v6 = (_QWORD **)(v5 + 16);
    v5 = *(char **)v5;
    v7 = *v6;
    if ( *v6 != v6 )
    {
      do
      {
        v8 = (_QWORD **)(v7 + 2);
        v7 = (_QWORD *)*v7;
        v9 = *v8;
        if ( *v8 != v8 )
        {
          v10 = v8;
          do
          {
            v11 = (__int64 **)(v9 - 7);
            v9 = (_QWORD *)*v9;
            v12 = **v11;
            if ( *(VIDMM_SEGMENT **)(v12 + 136) == this )
            {
              a3 = *(_DWORD *)(v12 + 164) != 0;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v17) = *((_DWORD *)this + 4) + 1;
                LODWORD(v16) = 0;
                LODWORD(v15) = *(_DWORD *)(v12 + 164) != 0;
                Template_pppttxqx(
                  (unsigned int)v17,
                  (__int64)v11[1],
                  a3,
                  *(_QWORD *)((*v11)[1] + 8),
                  v11[1][3],
                  v11,
                  v15,
                  v16,
                  *(_QWORD *)(v12 + 16),
                  v17,
                  *(_QWORD *)(v12 + 144));
              }
            }
            if ( *(VIDMM_SEGMENT **)(v12 + 264) == this )
            {
              a3 = *(_DWORD *)(v12 + 164) != 0;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v17) = *((_DWORD *)this + 4) + 1;
                LODWORD(v16) = 1;
                LODWORD(v15) = *(_DWORD *)(v12 + 164) != 0;
                Template_pppttxqx(
                  (unsigned int)v17,
                  (__int64)v11[1],
                  a3,
                  *(_QWORD *)((*v11)[1] + 8),
                  v11[1][3],
                  v11,
                  v15,
                  v16,
                  *(_QWORD *)(v12 + 16),
                  v17,
                  *(_QWORD *)(v12 + 144));
              }
            }
            if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
              VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw((struct _VIDMM_GLOBAL_ALLOC *)v12, a2, a3);
          }
          while ( v9 != v10 );
        }
      }
      while ( v7 != v6 );
      v3 = (char *)this + 160;
    }
  }
  v13 = (char *)this + 200;
  for ( i = (char *)*((_QWORD *)this + 25); i != v13; i = *(char **)i )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqx((unsigned int)(*(_DWORD *)(*((_QWORD *)i - 35) + 16LL) + 1), &EventReportMarkedGlobalAllocation, a3);
  }
}
