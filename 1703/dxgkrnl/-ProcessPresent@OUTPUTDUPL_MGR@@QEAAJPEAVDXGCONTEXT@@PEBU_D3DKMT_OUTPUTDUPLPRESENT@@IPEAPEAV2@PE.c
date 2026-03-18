/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01010E4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B9EE0 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0101040 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C010122C (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01AD388 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C01AD9A0 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01B2F14 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        __int64 a4,
        struct DXGCONTEXT **a5,
        struct COREDEVICEACCESS *a6)
{
  unsigned int v8; // edi
  __int64 v9; // r13
  __int64 ActiveContextCount; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  OUTPUTDUPL_CONTEXT **v22; // r14
  unsigned int v23; // ebp
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  OUTPUTDUPL_MGR *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned int v40; // [rsp+30h] [rbp-108h]
  unsigned int v41; // [rsp+34h] [rbp-104h]
  _BYTE v43[24]; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD v44[16]; // [rsp+60h] [rbp-D8h] BYREF

  v8 = 0;
  v9 = (unsigned int)a4;
  v41 = a4;
  ActiveContextCount = (unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, a3->VidPnSourceId, (__int64)a3, a4);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v26 + 24) = 6183LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_QWORD *)a2 + 39) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v27 + 24) = 6184LL;
    WdLogEvent5_WdAssertion(v27);
  }
  LODWORD(v15) = 0;
  if ( (_DWORD)ActiveContextCount )
  {
    memset(v44, 0, 8 * ActiveContextCount);
    *((_DWORD *)a2 + 80) = ActiveContextCount;
    *((_QWORD *)a2 + 39) = v44;
  }
  v16 = 0LL;
  if ( (_DWORD)ActiveContextCount )
  {
    while ( 1 )
    {
      v28 = DXGCONTEXT::AcquireDmaBuffer(a2, (struct _VIDMM_DMA_BUFFER **)&v44[v16], a6, 1);
      v15 = v28;
      if ( v28 < 0 )
        break;
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= (unsigned int)ActiveContextCount )
        goto LABEL_8;
    }
    v29 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v29 + 24) = v15;
    WdLogEvent5_WdError(v29);
    DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  }
LABEL_8:
  if ( (int)v15 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v30 + 24) = a2;
    WdLogEvent5_WdError(v30);
    return (unsigned int)v15;
  }
  v17 = 3 * v9;
  v18 = *((_QWORD *)this + 2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, *(struct DXGFASTMUTEX *const *)(v18 + 8 * v17), v13, v14);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  v22 = *(OUTPUTDUPL_CONTEXT ***)(v18 + 8 * v17 + 8);
  v23 = 0;
  v24 = 1LL;
  v40 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_12;
  while ( 1 )
  {
    if ( !*v22 || !*((_DWORD *)*v22 + 79) )
      goto LABEL_11;
    if ( (_DWORD)v24 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        LODWORD(v15) = OUTPUTDUPL_MGR::LogPresentParams(v31, a3, *(struct AUTOEXPANDALLOCATION **)(v18 + 8 * v17 + 16));
        if ( (int)v15 < 0 )
          goto LABEL_33;
      }
      v40 = 0;
    }
    LODWORD(v15) = OUTPUTDUPL_CONTEXT::ProcessPresent(
                     *v22,
                     a2,
                     a3,
                     *(struct AUTOEXPANDALLOCATION **)(v18 + 8 * v17 + 16),
                     a5);
    if ( (_DWORD)v15 == -1071775486 )
    {
      LODWORD(v15) = 259;
      *((_DWORD *)*v22 + 70) = 1;
LABEL_30:
      v8 = 259;
      goto LABEL_31;
    }
    if ( (int)v15 < 0 )
      break;
    if ( (_DWORD)v15 == 259 )
      goto LABEL_30;
LABEL_31:
    v24 = v40;
LABEL_11:
    ++v23;
    ++v22;
    if ( v23 >= *((_DWORD *)this + 2) )
      goto LABEL_12;
  }
  v8 = v15;
LABEL_33:
  v33 = WdLogNewEntry5_WdError(v32, v19);
  *(_QWORD *)(v33 + 24) = a2;
  WdLogEvent5_WdError(v33);
LABEL_12:
  if ( v43[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v19, v20, v21);
  if ( (int)v15 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v24, v19);
    *(_QWORD *)(v34 + 24) = v41;
    WdLogEvent5_WdError(v34);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, v41, 0LL, 0LL, 0, 7);
    if ( v8 != (_DWORD)v15 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = 1084LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( v8 != -1073741130 )
      v8 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v8;
}
