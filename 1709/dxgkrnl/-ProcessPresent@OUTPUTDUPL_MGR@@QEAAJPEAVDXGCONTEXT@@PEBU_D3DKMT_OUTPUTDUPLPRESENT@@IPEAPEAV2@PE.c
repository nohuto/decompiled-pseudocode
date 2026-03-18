/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C8480
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01C8178 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0170720 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C01B73B0 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C01B7F2C (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01C6E80 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C01C7498 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01CCCCC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
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
  OUTPUTDUPL_CONTEXT **v17; // r14
  unsigned int v18; // r15d
  __int64 v19; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-108h]
  _BYTE v29[24]; // [rsp+48h] [rbp-F0h] BYREF
  struct _VIDMM_DMA_BUFFER *v30; // [rsp+60h] [rbp-D8h] BYREF

  v8 = 0;
  v9 = a4;
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, a3->VidPnSourceId);
  v12 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a6, ActiveContextCount, &v30);
  if ( v12 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  v15 = *((_QWORD *)this + 2);
  v16 = 3 * v9;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *(struct DXGFASTMUTEX *const *)(v15 + 24 * v9));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v17 = *(OUTPUTDUPL_CONTEXT ***)(v15 + 24 * v9 + 8);
  v18 = 0;
  v19 = 1LL;
  v26 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_20;
  while ( 1 )
  {
    if ( !*v17 || !*((_DWORD *)*v17 + 79) )
      goto LABEL_16;
    if ( (_DWORD)v19 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        v12 = OUTPUTDUPL_MGR::LogPresentParams(v20, a3, *(PVOID **)(v15 + 8 * v16 + 16));
        if ( v12 < 0 )
          goto LABEL_19;
      }
      v26 = 0;
    }
    v12 = OUTPUTDUPL_CONTEXT::ProcessPresent(*v17, a2, a3, *(struct AUTOEXPANDALLOCATION **)(v15 + 8 * v16 + 16), a5);
    if ( v12 == -1071775486 )
    {
      v12 = 259;
      *((_DWORD *)*v17 + 70) = 1;
LABEL_14:
      v8 = 259;
      goto LABEL_15;
    }
    if ( v12 < 0 )
      break;
    if ( v12 == 259 )
      goto LABEL_14;
LABEL_15:
    v19 = v26;
LABEL_16:
    ++v18;
    ++v17;
    if ( v18 >= *((_DWORD *)this + 2) )
      goto LABEL_20;
  }
  v8 = v12;
LABEL_19:
  v22 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v22 + 24) = a2;
  WdLogEvent5_WdError(v22);
LABEL_20:
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  if ( v12 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v23 + 24) = a4;
    WdLogEvent5_WdError(v23);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, a4, 0LL, 0, 0, 7);
    if ( v8 != v12 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v25 + 24) = 1165LL;
      WdLogEvent5_WdAssertion(v25);
    }
    if ( v8 != -1073741130 )
      v8 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v8;
}
