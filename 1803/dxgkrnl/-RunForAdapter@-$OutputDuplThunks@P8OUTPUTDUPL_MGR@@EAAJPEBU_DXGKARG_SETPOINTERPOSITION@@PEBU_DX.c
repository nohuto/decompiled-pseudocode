/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00ACA68
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
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

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__usercall *)@<rax>(OUTPUTDUPL_MGR *__hidden this@<rcx>, const struct _DXGKARG_SETPOINTERPOSITION *@<rdx>, const struct _DXGKARG_SETPOINTERSHAPE *@<r8>, unsigned int@<r9d>, unsigned int), __int64, __int64, int, int))
{
  struct DXGADAPTER *v9; // rbx
  __int64 v11; // r15
  int OutputDuplManager; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v17; // al
  char v18; // r14
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  DXGADAPTER *v25; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v27[8]; // [rsp+50h] [rbp-61h] BYREF
  struct DXGADAPTER *v28; // [rsp+58h] [rbp-59h]
  char v29; // [rsp+60h] [rbp-51h]
  unsigned __int64 v30; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v31[8]; // [rsp+70h] [rbp-41h] BYREF
  _BYTE v32[32]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v33[72]; // [rsp+98h] [rbp-19h] BYREF
  struct DXGADAPTER *v34; // [rsp+F0h] [rbp+3Fh] BYREF
  struct OUTPUTDUPL_MGR *v35; // [rsp+108h] [rbp+57h] BYREF

  v25 = 0LL;
  v9 = 0LL;
  v35 = 0LL;
  v26 = -1LL;
  v11 = a3;
  v34 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v25, &v30, &v34, &v26, &v35);
    v9 = (struct DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v21 + 24) = a1;
      *(_QWORD *)(v21 + 32) = v9;
      WdLogEvent5_WdWarning(v21);
      return (unsigned int)v9;
    }
    v9 = v34;
    RemoteOutputDuplMgr = v35;
    if ( v34 )
    {
      v17 = 1;
LABEL_5:
      v18 = 0;
      v28 = v9;
      v29 = 0;
      if ( v17 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        v18 = v29;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v9, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReferenceNoTracking(v25),
            DXGADAPTER::ReleaseReferenceNoTracking(v9),
            LODWORD(v9) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31),
            (int)v9 >= 0) )
      {
        if ( (unsigned int)v11 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v24 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v24 + 24) = v11;
          WdLogEvent5_WdError(v24);
          LODWORD(v9) = -1071774972;
        }
        else
        {
          LODWORD(v9) = a9(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a5, a6, a7, a8);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
      return (unsigned int)v9;
    }
LABEL_17:
    v17 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
  if ( RemoteOutputDuplMgr )
    goto LABEL_17;
  v23 = WdLogNewEntry5_WdError(v22);
  *(_QWORD *)(v23 + 24) = 90LL;
  WdLogEvent5_WdError(v23);
  return 3221226021LL;
}
