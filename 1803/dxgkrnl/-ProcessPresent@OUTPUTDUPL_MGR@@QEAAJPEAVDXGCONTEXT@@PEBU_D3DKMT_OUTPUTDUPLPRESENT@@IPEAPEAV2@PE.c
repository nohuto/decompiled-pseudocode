/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CB610
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01CB2CC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C01474E4 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C01B3D28 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C01B4BD8 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01C9FA8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C01CA5BC (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01D2F14 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct COREDEVICEACCESS *a6)
{
  unsigned int v8; // edi
  __int64 v9; // r14
  unsigned int ActiveContextCount; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 *v18; // r14
  unsigned int v19; // r15d
  int v20; // eax
  DXGDIAGNOSTICSWITHMUTEX **v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // [rsp+30h] [rbp-108h]
  _BYTE v31[24]; // [rsp+48h] [rbp-F0h] BYREF
  struct _VIDMM_DMA_BUFFER *v32; // [rsp+60h] [rbp-D8h] BYREF

  v8 = 0;
  v9 = a4;
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, a3->VidPnSourceId);
  v12 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a6, ActiveContextCount, &v32);
  if ( v12 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  v15 = *((_QWORD *)this + 2);
  v16 = 3 * v9;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, *(struct DXGFASTMUTEX *const *)(v15 + 24 * v9), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  v18 = *(__int64 **)(v15 + 24 * v9 + 8);
  v19 = 0;
  v20 = 1;
  v28 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_20;
  while ( 1 )
  {
    v17 = *v18;
    if ( !*v18 || !*(_DWORD *)(v17 + 316) )
      goto LABEL_16;
    if ( v20 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        v12 = OUTPUTDUPL_MGR::LogPresentParams(v21, a3, *(const void ***)(v15 + 8 * v16 + 16));
        if ( v12 < 0 )
          goto LABEL_19;
      }
      v28 = 0;
      v17 = *v18;
    }
    v23 = OUTPUTDUPL_CONTEXT::ProcessPresent(
            (OUTPUTDUPL_CONTEXT *)v17,
            a2,
            a3,
            *(struct AUTOEXPANDALLOCATION **)(v15 + 8 * v16 + 16),
            a5);
    v12 = v23;
    if ( v23 == -1071775486 )
    {
      v17 = 259LL;
      v12 = 259;
      *(_DWORD *)(*v18 + 280) = 1;
LABEL_14:
      v8 = 259;
      goto LABEL_15;
    }
    if ( v23 < 0 )
      break;
    v17 = 259LL;
    if ( v23 == 259 )
      goto LABEL_14;
LABEL_15:
    v20 = v28;
LABEL_16:
    ++v19;
    ++v18;
    if ( v19 >= *((_DWORD *)this + 2) )
      goto LABEL_20;
  }
  v8 = v23;
LABEL_19:
  v24 = WdLogNewEntry5_WdError(v22);
  *(_QWORD *)(v24 + 24) = a2;
  WdLogEvent5_WdError(v24);
LABEL_20:
  if ( v31[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
  if ( v12 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v25 + 24) = a4;
    WdLogEvent5_WdError(v25);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, a4, 0LL, 0, 0, 7);
    if ( v8 != v12 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v27 + 24) = 1165LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( v8 != -1073741130 )
      v8 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v8;
}
