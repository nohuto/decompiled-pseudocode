/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0544
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0094048 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00029A4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C00245A4 (McTemplateK0pqqqqqqqqppp.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0080018 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01ACE40 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  char *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGHWQUEUE *i; // rsi
  char v14; // si
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rdx
  __int128 v21; // xmm1
  char **v22; // rcx
  __int64 v23; // rax
  DXGPROCESS *v24; // rcx
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  struct _MDL *v29; // [rsp+30h] [rbp-41h]
  _QWORD v30[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v31; // [rsp+98h] [rbp+27h] BYREF
  __int128 v32; // [rsp+A8h] [rbp+37h]

  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 104));
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v23 + 24) = 1421LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 396) )
  {
    v6 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 396) = 1;
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v7 + 16);
    if ( *(_BYTE *)(v8 + 185) )
    {
      if ( *((_DWORD *)this + 7) )
      {
        v24 = *(DXGPROCESS **)(v6 + 40);
        *(_QWORD *)&v31 = 0LL;
        HostProcess = DXGPROCESS::GetHostProcess(v24);
        v26 = *(struct VMBCHANNEL__ **)(v8 + 3888);
        *((_QWORD *)&v31 + 1) = HostProcess;
        v27 = *((_DWORD *)this + 7);
        LODWORD(v32) = 7;
        DWORD2(v32) = v27;
        VmBusSendSyncMessage(v26, (struct DXGKVMB_COMMAND_BASE *)&v31, 0x20u, 0LL, 0LL, v29);
        *((_DWORD *)this + 7) = 0;
      }
    }
    else
    {
      v9 = (char *)this + 160;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v7 + 696, 0LL);
      *(_QWORD *)(v7 + 704) = KeGetCurrentThread();
      v10 = *((_QWORD *)this + 20);
      if ( v10 )
      {
        if ( *(char **)(v10 + 8) != v9 || (v22 = (char **)*((_QWORD *)this + 21), *v22 != v9) )
          __fastfail(3u);
        *v22 = (char *)v10;
        *(_QWORD *)(v10 + 8) = v22;
        --*(_DWORD *)(v7 + 688);
      }
      *(_QWORD *)(v7 + 704) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 696, 0LL);
      KeLeaveCriticalRegion();
      for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 46); i != (DXGCONTEXT *)((char *)this + 368) && i; i = *(DXGHWQUEUE **)i )
        DXGHWQUEUE::DestroyCoreState(i, (struct COREDEVICEACCESS *)a2);
      if ( *((_QWORD *)this + 29) || *((_QWORD *)this + 30) )
      {
        if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
        {
          v14 = 0;
        }
        else
        {
          v14 = 1;
          if ( *((_BYTE *)a2 + 80) )
            COREACCESS::Release((COREACCESS *)(a2 + 5));
          COREACCESS::Release((COREACCESS *)(a2 + 1));
        }
        v15 = *((_QWORD *)this + 29);
        v30[0] = 9LL;
        v30[1] = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 504LL)
                                                                + 8LL)
                                                    + 240LL))(
            v15,
            v30);
        v16 = *((_QWORD *)this + 30);
        if ( v16 )
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 504LL)
                                                                + 8LL)
                                                    + 240LL))(
            v16,
            v30);
        if ( v14 )
        {
          COREACCESS::AcquireShared((COREACCESS *)(a2 + 1));
          if ( *((_BYTE *)a2 + 80) )
            COREACCESS::AcquireShared((COREACCESS *)(a2 + 5));
        }
        if ( *((DXGCONTEXT **)this + 37) != (DXGCONTEXT *)((char *)this + 296)
          || (v17 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 632LL) != *((_QWORD *)this + 2) + 632LL) )
        {
          v17 = 1;
        }
        v18 = *((_QWORD *)this + 29);
        if ( v18 && v17 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 504LL)
                                                              + 8LL)
                                                  + 248LL))(
            v18,
            0LL);
        v11 = *((_QWORD *)this + 30);
        if ( v11 && v17 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 504LL)
                                                              + 8LL)
                                                  + 248LL))(
            v11,
            0LL);
      }
      if ( *((_QWORD *)this + 39) )
      {
        if ( !*((_QWORD *)this + 7) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v28 + 24) = 1521LL;
          WdLogEvent5_WdAssertion(v28);
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                       + 512LL))(*((_QWORD *)this + 39));
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 528LL)
                                                           + 8LL)
                                               + 496LL))(
          *((_QWORD *)this + 39),
          (char *)this + 344);
        *((_QWORD *)this + 39) = 0LL;
      }
      v19 = *((_QWORD *)this + 40);
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 528LL)
                                                            + 8LL)
                                                + 496LL))(
          v19,
          0LL);
        *((_QWORD *)this + 40) = 0LL;
      }
      if ( *((_QWORD *)this + 28) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 448LL))();
        *((_QWORD *)this + 28) = 0LL;
      }
      if ( *((_QWORD *)this + 29) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 504LL) + 8LL) + 224LL))();
        *((_QWORD *)this + 29) = 0LL;
      }
      if ( *((_QWORD *)this + 30) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 504LL) + 8LL) + 224LL))();
        *((_QWORD *)this + 30) = 0LL;
      }
      if ( *((_QWORD *)this + 31) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL) + 984LL))();
        *((_QWORD *)this + 31) = 0LL;
      }
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
      {
        v20 = (void *)*((_QWORD *)this + 23);
        if ( v20 )
        {
          ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v20, v12);
          *((_QWORD *)this + 23) = 0LL;
        }
      }
      if ( bTracingEnabled )
      {
        v21 = *((_OWORD *)this + 13);
        v31 = *((_OWORD *)this + 12);
        v32 = v21;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            DWORD1(v31),
            &EventDestroyContext,
            v31,
            *((_QWORD *)this + 2),
            *((_DWORD *)this + 88),
            *((_DWORD *)this + 89),
            (_DWORD)v31,
            DWORD1(v31),
            DWORD2(v31),
            HIDWORD(v31),
            (_DWORD)v32,
            0,
            this,
            0LL,
            0LL);
      }
      if ( !*((_BYTE *)this + 397) )
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          this,
          0,
          *((_DWORD *)this + 88));
    }
  }
}
