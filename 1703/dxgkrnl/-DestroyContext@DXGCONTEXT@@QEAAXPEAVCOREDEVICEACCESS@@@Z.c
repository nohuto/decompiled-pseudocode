/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BB470
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C116C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00069D0 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqqqqqqqppp @ 0x1C0025E5C (Template_pqqqqqqqqppp.c)
 *     ?VmBusSendDestroyContext@DXGADAPTER@@QEAAXII@Z @ 0x1C002FE70 (-VmBusSendDestroyContext@DXGADAPTER@@QEAAXII@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00CD3D4 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  DXGADAPTER *v11; // rbp
  char *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // di
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // rdx
  char **v25; // rcx
  __int64 v26; // rax
  int HostProcess; // eax
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // [rsp+80h] [rbp-38h] BYREF
  __int128 v31; // [rsp+90h] [rbp-28h]

  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 104));
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v26 + 24) = 1333LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 364) )
  {
    v9 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 364) = 1;
    v10 = *(_QWORD *)(v9 + 16);
    v11 = *(DXGADAPTER **)(v10 + 16);
    if ( *((_BYTE *)v11 + 186) )
    {
      if ( *((_DWORD *)this + 7) )
      {
        HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v9 + 40));
        DXGADAPTER::VmBusSendDestroyContext(v11, HostProcess, *((_DWORD *)this + 7));
        *((_DWORD *)this + 7) = 0;
      }
    }
    else
    {
      v12 = (char *)this + 160;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10 + 600, 0LL);
      *(_QWORD *)(v10 + 608) = KeGetCurrentThread();
      v13 = *((_QWORD *)this + 20);
      if ( v13 )
      {
        v25 = (char **)*((_QWORD *)this + 21);
        if ( *(char **)(v13 + 8) != v12 || *v25 != v12 )
          __fastfail(3u);
        *v25 = (char *)v13;
        *(_QWORD *)(v13 + 8) = v25;
        --*(_DWORD *)(v10 + 592);
      }
      *(_QWORD *)(v10 + 608) = 0LL;
      ExReleasePushLockExclusiveEx(v10 + 600, 0LL);
      KeLeaveCriticalRegion();
      v17 = *((_QWORD *)this + 31);
      if ( v17 )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 984LL))();
        *((_QWORD *)this + 31) = 0LL;
      }
      if ( *((_QWORD *)this + 29) || *((_QWORD *)this + 30) )
      {
        if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
        {
          v18 = 0;
        }
        else
        {
          v18 = 1;
          if ( *((_BYTE *)a2 + 80) )
            COREACCESS::Release((COREACCESS *)(a2 + 5));
          COREACCESS::Release((COREACCESS *)(a2 + 1));
        }
        v19 = *((_QWORD *)this + 29);
        v30 = 9uLL;
        if ( v19 )
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 408LL)
                                                                  + 8LL)
                                                      + 240LL))(
            v19,
            &v30);
        v20 = *((_QWORD *)this + 30);
        if ( v20 )
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 408LL)
                                                                  + 8LL)
                                                      + 240LL))(
            v20,
            &v30);
        if ( v18 )
        {
          COREACCESS::AcquireShared((COREACCESS *)(a2 + 1));
          if ( *((_BYTE *)a2 + 80) )
            COREACCESS::AcquireShared((COREACCESS *)(a2 + 5));
        }
        if ( *((DXGCONTEXT **)this + 35) != (DXGCONTEXT *)((char *)this + 280)
          || (v21 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 632LL) != *((_QWORD *)this + 2) + 632LL) )
        {
          v21 = 1;
        }
        v22 = *((_QWORD *)this + 29);
        if ( v22 && v21 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 408LL)
                                                              + 8LL)
                                                  + 248LL))(
            v22,
            0LL);
        v17 = *((_QWORD *)this + 30);
        if ( v17 && v21 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 408LL)
                                                              + 8LL)
                                                  + 248LL))(
            v17,
            0LL);
      }
      if ( *((_QWORD *)this + 37) )
      {
        if ( !*((_QWORD *)this + 7) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v17, v14, v15, v16);
          *(_QWORD *)(v28 + 24) = 1430LL;
          WdLogEvent5_WdAssertion(v28);
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL)
                                       + 512LL))(*((_QWORD *)this + 37));
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 432LL)
                                                           + 8LL)
                                               + 496LL))(
          *((_QWORD *)this + 37),
          (char *)this + 328);
        *((_QWORD *)this + 37) = 0LL;
      }
      v23 = *((_QWORD *)this + 38);
      if ( v23 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 432LL)
                                                            + 8LL)
                                                + 496LL))(
          v23,
          0LL);
        *((_QWORD *)this + 38) = 0LL;
      }
      if ( *((_QWORD *)this + 28) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 448LL))();
        *((_QWORD *)this + 28) = 0LL;
      }
      if ( *((_QWORD *)this + 29) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 224LL))();
        *((_QWORD *)this + 29) = 0LL;
      }
      if ( *((_QWORD *)this + 30) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 224LL))();
        *((_QWORD *)this + 30) = 0LL;
      }
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
      {
        v24 = (void *)*((_QWORD *)this + 23);
        if ( v24 )
        {
          ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v24);
          *((_QWORD *)this + 23) = 0LL;
        }
      }
      if ( bTracingEnabled )
      {
        v29 = *((_OWORD *)this + 13);
        v30 = *((_OWORD *)this + 12);
        v31 = v29;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          Template_pqqqqqqqqppp(
            DWORD1(v30),
            &EventDestroyContext,
            v30,
            *((_QWORD *)this + 2),
            *((_DWORD *)this + 84),
            *((_DWORD *)this + 85),
            (_DWORD)v30,
            DWORD1(v30),
            DWORD2(v30),
            HIDWORD(v30),
            (_DWORD)v31,
            0,
            this,
            0LL,
            0LL);
      }
      if ( !*((_BYTE *)this + 365) )
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          this,
          0,
          *((_DWORD *)this + 84));
    }
  }
}
