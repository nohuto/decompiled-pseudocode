/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01CC170
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01CC308 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00AAB1C (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00AC9CC (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rbx
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax
  char v19; // si
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGADAPTER *v22; // [rsp+40h] [rbp-61h] BYREF
  DXGADAPTER *v23; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-49h] BYREF
  struct DXGADAPTER *v26; // [rsp+60h] [rbp-41h]
  char v27; // [rsp+68h] [rbp-39h]
  unsigned __int64 v28; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v30[32]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v31[40]; // [rsp+A8h] [rbp+7h] BYREF
  struct OUTPUTDUPL_MGR *v32; // [rsp+100h] [rbp+5Fh] BYREF

  v23 = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v24 = -1LL;
  v8 = a3;
  v22 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
    if ( !RemoteOutputDuplMgr )
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = 90LL;
      WdLogEvent5_WdError(v17);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v23, &v28, &v22, &v24, &v32);
  v5 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v22;
    RemoteOutputDuplMgr = v32;
    if ( v22 )
    {
      v15 = 1;
LABEL_9:
      v19 = 0;
      v26 = v5;
      v27 = 0;
      if ( v15 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
        v19 = v27;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReferenceNoTracking(v23),
            DXGADAPTER::ReleaseReferenceNoTracking(v5),
            LODWORD(v5) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29),
            (int)v5 >= 0) )
      {
        if ( (unsigned int)v8 < *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          LODWORD(v5) = a5(RemoteOutputDuplMgr, a4);
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v21 + 24) = v8;
          WdLogEvent5_WdError(v21);
          LODWORD(v5) = -1071774972;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      if ( v19 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      return (unsigned int)v5;
    }
LABEL_8:
    v15 = 0;
    goto LABEL_9;
  }
  v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v13 + 24) = a1;
  *(_QWORD *)(v13 + 32) = v5;
  WdLogEvent5_WdWarning(v13);
  return (unsigned int)v5;
}
