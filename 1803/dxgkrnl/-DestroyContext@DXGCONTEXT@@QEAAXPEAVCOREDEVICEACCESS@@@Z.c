/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FD9FC
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E84EC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F3654 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00162D4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002CB50 (McTemplateK0pqqqqqqqqppp.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00A3018 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2990 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, struct COREDEVICEACCESS *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  char *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  DXGHWQUEUE *i; // rsi
  char v13; // r14
  DXGADAPTER **v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rdx
  __int128 v23; // xmm1
  __int64 v24; // rax
  DXGPROCESS *v25; // rcx
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v27; // rcx
  int v28; // eax
  char **v29; // rcx
  __int64 v30; // rax
  struct _MDL *v31; // [rsp+30h] [rbp-41h]
  _QWORD v32[2]; // [rsp+88h] [rbp+17h] BYREF
  __int128 v33; // [rsp+98h] [rbp+27h] BYREF
  __int128 v34; // [rsp+A8h] [rbp+37h]

  v2 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v2 + 72) )
  {
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 104));
    v2 = *((_QWORD *)this + 2);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v2 + 16) + 16LL)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v24 + 24) = 1563LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 3));
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
        v25 = *(DXGPROCESS **)(v6 + 40);
        *(_QWORD *)&v33 = 0LL;
        HostProcess = DXGPROCESS::GetHostProcess(v25);
        v27 = *(struct VMBCHANNEL__ **)(v8 + 4080);
        *((_QWORD *)&v33 + 1) = HostProcess;
        v28 = *((_DWORD *)this + 7);
        LODWORD(v34) = 7;
        DWORD2(v34) = v28;
        VmBusSendSyncMessage(v27, (struct DXGKVMB_COMMAND_BASE *)&v33, 0x20u, 0LL, 0LL, v31);
        *((_DWORD *)this + 7) = 0;
      }
    }
    else
    {
      v9 = (char *)this + 160;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v7 + 712, 0LL);
      *(_QWORD *)(v7 + 720) = KeGetCurrentThread();
      v10 = *((_QWORD *)this + 20);
      if ( v10 )
      {
        if ( *(char **)(v10 + 8) != v9 || (v29 = (char **)*((_QWORD *)this + 21), *v29 != v9) )
          __fastfail(3u);
        *v29 = (char *)v10;
        *(_QWORD *)(v10 + 8) = v29;
        --*(_DWORD *)(v7 + 704);
      }
      *(_QWORD *)(v7 + 720) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 712, 0LL);
      KeLeaveCriticalRegion();
      for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 46); i != (DXGCONTEXT *)((char *)this + 368) && i; i = *(DXGHWQUEUE **)i )
        DXGHWQUEUE::DestroyCoreState(i, a2);
      if ( *((_QWORD *)this + 29) || *((_QWORD *)this + 30) )
      {
        if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 3)) )
        {
          v13 = 0;
          v14 = (DXGADAPTER **)((char *)a2 + 8);
        }
        else
        {
          v13 = 1;
          if ( *((_BYTE *)a2 + 80) )
            COREACCESS::Release((struct _KTHREAD ***)a2 + 5);
          v14 = (DXGADAPTER **)((char *)a2 + 8);
          COREACCESS::Release((struct _KTHREAD ***)a2 + 1);
        }
        v15 = *((_QWORD *)this + 29);
        v32[0] = 9LL;
        v32[1] = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 296LL))(
            v15,
            v32);
        v16 = *((_QWORD *)this + 30);
        if ( v16 )
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 296LL))(
            v16,
            v32);
        if ( v13 )
        {
          COREACCESS::AcquireShared(v14);
          if ( *((_BYTE *)a2 + 80) )
            COREACCESS::AcquireShared((DXGADAPTER **)a2 + 5);
        }
        if ( *((DXGCONTEXT **)this + 37) != (DXGCONTEXT *)((char *)this + 296)
          || (v17 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 648LL) != *((_QWORD *)this + 2) + 648LL) )
        {
          v17 = 1;
        }
        v18 = *((_QWORD *)this + 29);
        if ( v18 && v17 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 520LL)
                                                              + 8LL)
                                                  + 312LL))(
            v18,
            0LL);
        v19 = *((_QWORD *)this + 30);
        if ( v19 && v17 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 520LL)
                                                              + 8LL)
                                                  + 312LL))(
            v19,
            0LL);
      }
      v20 = *((_QWORD *)this + 39);
      if ( v20 )
      {
        if ( !*((_QWORD *)this + 7) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v30 + 24) = 1663LL;
          WdLogEvent5_WdAssertion(v30);
          v20 = *((_QWORD *)this + 39);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                    + 8LL)
                                        + 512LL))(v20);
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 544LL)
                                                           + 8LL)
                                               + 496LL))(
          *((_QWORD *)this + 39),
          (char *)this + 344);
        *((_QWORD *)this + 39) = 0LL;
      }
      v21 = *((_QWORD *)this + 40);
      if ( v21 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 544LL)
                                                            + 8LL)
                                                + 496LL))(
          v21,
          0LL);
        *((_QWORD *)this + 40) = 0LL;
      }
      if ( *((_QWORD *)this + 28) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 448LL))();
        *((_QWORD *)this + 28) = 0LL;
      }
      if ( *((_QWORD *)this + 29) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 240LL))();
        *((_QWORD *)this + 29) = 0LL;
      }
      if ( *((_QWORD *)this + 33) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 264LL))();
        *((_QWORD *)this + 33) = 0LL;
      }
      if ( *((_QWORD *)this + 32) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 248LL))();
        *((_QWORD *)this + 32) = 0LL;
      }
      if ( *((_QWORD *)this + 30) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 240LL))();
        *((_QWORD *)this + 30) = 0LL;
      }
      if ( *((_QWORD *)this + 31) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 1000LL))();
        *((_QWORD *)this + 31) = 0LL;
      }
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
      {
        v22 = (void *)*((_QWORD *)this + 23);
        if ( v22 )
        {
          ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v22, v11);
          *((_QWORD *)this + 23) = 0LL;
        }
      }
      if ( bTracingEnabled )
      {
        v23 = *((_OWORD *)this + 13);
        v33 = *((_OWORD *)this + 12);
        v34 = v23;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            DWORD1(v33),
            &EventDestroyContext,
            v33,
            *((_QWORD *)this + 2),
            *((_DWORD *)this + 88),
            *((_DWORD *)this + 89),
            (_DWORD)v33,
            DWORD1(v33),
            DWORD2(v33),
            HIDWORD(v33),
            (_DWORD)v34,
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
