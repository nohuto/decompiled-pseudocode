/*
 * XREFs of ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x180165874
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180164F84 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?Create@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPEAV1@@Z @ 0x180165128 (-Create@-$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPE.c)
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x180165B14 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180165BAC (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1801667DC (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessInitializeSharedDataObjects(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS *a3)
{
  _QWORD *v3; // r14
  _QWORD *v5; // r15
  __int64 v7; // rbp
  signed int v8; // eax
  signed int v9; // esi
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  __int64 v11; // rax
  _QWORD *v12; // r15
  signed int v13; // eax
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v3 = (_QWORD *)((char *)this + 216);
  v5 = (_QWORD *)*((_QWORD *)a3 + 5);
  v7 = *((_QWORD *)a3 + 4);
  if ( *((_QWORD *)this + 27) )
  {
    (**(void (__fastcall ***)(_QWORD, __int64))*v3)(*v3, 1LL);
    *v3 = 0LL;
  }
  v8 = CLocalMrowWriter<SharedBufferDataFlipChain>::Create((__int64)this, v3);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x168u);
  }
  else
  {
    CFlipChain::ReadSharedDataFromDwm(this);
    v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 28);
    if ( v10 )
    {
      (**v10)(v10, 1LL);
      *((_QWORD *)this + 28) = 0LL;
    }
    CFlipChain::ReleaseDeviceResources(this);
    v11 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 28) = v7;
    *v5 = v11;
    ++*(_DWORD *)v5;
    v5[1] = *((_QWORD *)this + 24);
    *((_DWORD *)this + 30) = 0;
    v12 = (_QWORD *)*((_QWORD *)a3 + 6);
    *v12 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v3 + 48LL))(*v3, &v15);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x182u);
    }
    else
    {
      *v12 = v15;
      CFlipChain::CacheSharedHandlesForRect(this, *((_DWORD *)a3 + 3), (RECT *)a3 + 1);
    }
  }
  **((_DWORD **)a3 + 7) = v9;
  CFlipChain::WriteSharedDataToDwm(this);
  return 0LL;
}
