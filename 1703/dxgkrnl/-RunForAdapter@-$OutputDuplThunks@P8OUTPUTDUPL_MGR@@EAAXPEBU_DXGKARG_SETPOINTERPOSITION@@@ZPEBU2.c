/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C009ED80
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *__hidden this, const struct _DXGKARG_SETPOINTERPOSITION *), __int64))
{
  struct DXGADAPTER *v6; // rbx
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v15; // al
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  DXGADAPTER *v25; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v27[8]; // [rsp+50h] [rbp-49h] BYREF
  struct DXGADAPTER *v28; // [rsp+58h] [rbp-41h]
  char v29; // [rsp+60h] [rbp-39h]
  unsigned __int64 v30; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v31[8]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v32[32]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v33[72]; // [rsp+98h] [rbp-1h] BYREF
  struct DXGADAPTER *v34; // [rsp+F0h] [rbp+57h] BYREF
  struct OUTPUTDUPL_MGR *v35; // [rsp+108h] [rbp+6Fh] BYREF

  v25 = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  v26 = -1LL;
  v8 = a3;
  v34 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v25, &v30, &v34, &v26, &v35);
    v6 = (struct DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v20 + 24) = a1;
      *(_QWORD *)(v20 + 32) = v6;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v6;
    }
    v6 = v34;
    RemoteOutputDuplMgr = v35;
    if ( v34 )
    {
      v15 = 1;
LABEL_5:
      v16 = 0;
      v28 = v6;
      v29 = 0;
      if ( v15 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        v16 = v29;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v6, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v25),
            DXGADAPTER::ReleaseReference(v6),
            LODWORD(v6) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31),
            (int)v6 >= 0) )
      {
        if ( (unsigned int)v8 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v24 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v24 + 24) = v8;
          WdLogEvent5_WdError(v24);
          LODWORD(v6) = -1071774972;
        }
        else
        {
          LODWORD(v6) = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerPositionChange, a5);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      if ( v16 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
      return (unsigned int)v6;
    }
LABEL_17:
    v15 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    goto LABEL_17;
  v23 = WdLogNewEntry5_WdError(v22, v21);
  *(_QWORD *)(v23 + 24) = 90LL;
  WdLogEvent5_WdError(v23);
  return 3221226021LL;
}
