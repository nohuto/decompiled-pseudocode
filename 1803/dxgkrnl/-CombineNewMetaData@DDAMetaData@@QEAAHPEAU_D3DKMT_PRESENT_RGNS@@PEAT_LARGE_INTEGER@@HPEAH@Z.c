/*
 * XREFs of ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C01D1A80
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01D355C (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C01D1D0C (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01D2BDC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01D2C90 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        union _LARGE_INTEGER *a3,
        int a4,
        int *a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

  v20 = 0LL;
  v19 = 11000;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 11000);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 11000);
  v10 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v10 )
    goto LABEL_5;
  v10 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v10 )
    goto LABEL_5;
  if ( !*((_QWORD *)this + 8) )
  {
    v13 = 0;
    goto LABEL_11;
  }
  v10 = DDAMetaData::ConvertGdiRgnToRects(this);
  if ( !v10 )
  {
LABEL_5:
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    goto LABEL_14;
  }
  v13 = 1;
LABEL_11:
  *a5 = v13;
  *((union _LARGE_INTEGER *)this + 1) = *a3;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_14:
  v14 = *((_QWORD *)this + 8);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)this + 7) + 128LL))(v14, v12);
    *((_QWORD *)this + 8) = 0LL;
  }
  v15 = *((_QWORD *)this + 9);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)this + 7) + 128LL))(v15, v12);
    *((_QWORD *)this + 9) = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v19);
  return v10;
}
