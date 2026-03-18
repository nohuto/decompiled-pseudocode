/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4
 * Callers:
 *     OutputDuplPresent @ 0x1C01B03B0 (OutputDuplPresent.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C003A590 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003A65C (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01010E4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *a1,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  struct DXGADAPTER **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int OutputDuplManager; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  DXGADAPTER **v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  DXGADAPTER *v33; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-51h] BYREF
  DXGADAPTER *v35; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v37[8]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v38; // [rsp+70h] [rbp-31h]
  char v39; // [rsp+78h] [rbp-29h]
  _BYTE v40[8]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v41[32]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v42[56]; // [rsp+B0h] [rbp+Fh] BYREF
  struct OUTPUTDUPL_MGR *v43; // [rsp+118h] [rbp+77h] BYREF

  v35 = 0LL;
  v33 = 0LL;
  if ( (a3->Flags.Value & 2) != 0 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  }
  else
  {
    v8 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v33, (__int64)a2, (__int64)a3, (__int64)a4);
    v12 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v35, v9, v10, v11);
    OutputDuplManager = FindOutputDuplManager(a1, a3->VidPnSourceId, v12, &v36, v8, &v34, &v43);
    if ( OutputDuplManager < 0 )
      goto LABEL_19;
    RemoteOutputDuplMgr = v43;
  }
  if ( !RemoteOutputDuplMgr )
  {
    v19 = WdLogNewEntry5_WdAssertion(v14, v13, v16, v17);
    *(_QWORD *)(v19 + 24) = 2697LL;
    WdLogEvent5_WdAssertion(v19);
    OutputDuplManager = -1073741275;
    goto LABEL_19;
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
  {
    v20 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v20 + 24) = a3->VidPnSourceId;
    WdLogEvent5_WdError(v20);
    OutputDuplManager = -1073741811;
    goto LABEL_19;
  }
  v21 = *((_QWORD *)a2 + 2);
  v39 = 0;
  v38 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, *((_QWORD *)a2 + 2), 2LL, v22, 0);
  OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40);
  if ( OutputDuplManager >= 0 )
  {
    Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a3->Flags.Value;
    if ( (*(_BYTE *)&Value & 2) != 0 || (*(_BYTE *)&Value & 8) != 0 )
      goto LABEL_16;
    v25 = (DXGADAPTER **)*((_QWORD *)v33 + 285);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdError(0LL, v23);
      *(_QWORD *)(v26 + 24) = v33 != 0LL;
      WdLogEvent5_WdError(v26);
      OutputDuplManager = -1073741811;
      goto LABEL_17;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v25, *((const struct DXGDEVICE **)a2 + 2), a3->VidPnSourceId) )
    {
LABEL_16:
      OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                            RemoteOutputDuplMgr,
                            a2,
                            a3,
                            a3->VidPnSourceId,
                            a4,
                            (struct COREDEVICEACCESS *)v40);
    }
    else
    {
      v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      *(_QWORD *)(v31 + 24) = a2;
      *(_QWORD *)(v31 + 32) = a3->VidPnSourceId;
      WdLogEvent5_WdWarning(v31);
      OutputDuplManager = -1071775744;
    }
  }
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  if ( v39 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
LABEL_19:
  DXGADAPTER_REFERENCE::Assign(&v33, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v35, 0LL);
  return (unsigned int)OutputDuplManager;
}
