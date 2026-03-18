/*
 * XREFs of ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C01B1A90
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01B3560 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C01B1D00 (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01B2BE0 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01B2C90 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        union _LARGE_INTEGER *a3,
        int a4,
        int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 11000);
  v11 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v11 )
    goto LABEL_5;
  v11 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v11 )
    goto LABEL_5;
  if ( !*((_QWORD *)this + 8) )
  {
    *a5 = 0;
    goto LABEL_11;
  }
  v11 = DDAMetaData::ConvertGdiRgnToRects(this);
  if ( !v11 )
  {
LABEL_5:
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    goto LABEL_14;
  }
  *a5 = 1;
LABEL_11:
  *((union _LARGE_INTEGER *)this + 1) = *a3;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_14:
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 8) = 0LL;
  }
  v14 = *((_QWORD *)this + 9);
  if ( v14 )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v13, 11000);
  return v11;
}
