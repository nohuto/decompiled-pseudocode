/*
 * XREFs of ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007B108
 * Callers:
 *     VidMmInitializePagingProcess @ 0x1C00161C0 (VidMmInitializePagingProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0079834 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0079CB4 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007B468 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     VidSchCreateSystemDevices @ 0x1C007C648 (VidSchCreateSystemDevices.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007C84C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int inited; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320), this);
  if ( inited < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v15 + 24) = 20591LL;
LABEL_14:
    WdLogEvent5_WdAssertion(v15);
    goto LABEL_8;
  }
  inited = VidSchCreateSystemDevices(*(_QWORD *)(*((_QWORD *)this + 2) + 512LL));
  if ( inited < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v15 + 24) = 20602LL;
    goto LABEL_14;
  }
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v15 + 24) = 20614LL;
    goto LABEL_14;
  }
  v9 = 0;
  if ( *((_DWORD *)this + 1604) )
  {
    while ( 1 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, v9, 0);
      if ( inited < 0 )
        break;
      if ( ++v9 >= *((_DWORD *)this + 1604) )
        goto LABEL_7;
    }
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v15 + 24) = 20626LL;
    goto LABEL_14;
  }
LABEL_7:
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v15 + 24) = 20638LL;
    goto LABEL_14;
  }
LABEL_8:
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
