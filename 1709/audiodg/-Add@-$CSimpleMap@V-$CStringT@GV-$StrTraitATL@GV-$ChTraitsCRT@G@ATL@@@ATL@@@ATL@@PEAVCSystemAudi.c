/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x14001A960
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14001A604 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x14001ABD0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     _invalid_parameter_noinfo @ 0x14001D964 (_invalid_parameter_noinfo.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x140038C5C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
        __int64 a1,
        const void **a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  char *v7; // rdx
  int v8; // ecx
  __int64 v9; // rbp
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  char *v12; // rbx
  ATL::CAtlStringMgr *v13; // rcx
  __int64 (*v14)(void); // rax
  struct ATL::IAtlStringMgr *v15; // rax
  char *v16; // rdx
  _DWORD *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rcx
  size_t v22; // r8

  v5 = (void *)_o__recalloc(Block, (int)qword_14008A290 + 1, 8LL);
  if ( !v5 )
    return 0LL;
  Block = v5;
  v6 = (char *)_o__recalloc(qword_14008A288, (int)qword_14008A290 + 1, 8LL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  qword_14008A288 = v6;
  v8 = qword_14008A290;
  v9 = (int)qword_14008A290;
  v10 = (char *)Block + 8 * (int)qword_14008A290;
  if ( v10 )
  {
    v11 = *a2;
    v12 = (char *)(v11 - 3);
    v13 = (ATL::CAtlStringMgr *)*(v11 - 3);
    v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 32LL);
    if ( (char *)v14 == (char *)ATL::CAtlStringMgr::Clone )
      v15 = ATL::CAtlStringMgr::Clone(v13);
    else
      v15 = (struct ATL::IAtlStringMgr *)v14();
    if ( *((int *)v12 + 4) >= 0 && v15 == *(struct ATL::IAtlStringMgr **)v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
LABEL_9:
      *v10 = v12 + 24;
      v8 = qword_14008A290;
      v7 = (char *)qword_14008A288;
      goto LABEL_10;
    }
    v18 = v12 + 8;
    v19 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v15)(
            v15,
            *((unsigned int *)v12 + 2),
            2LL);
    v12 = (char *)v19;
    if ( !v19 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v19 + 8) = *v18;
    v21 = (void *)(v19 + 24);
    v22 = 2LL * (*v18 + 1);
    if ( !v22 )
      goto LABEL_9;
    if ( v19 != -24 )
    {
      if ( v11 )
      {
        memcpy_0(v21, v11, v22);
        goto LABEL_9;
      }
      memset(v21, 0, v22);
    }
    *(_DWORD *)_o__errno(v21, v20, v22) = 22;
    invalid_parameter_noinfo();
    goto LABEL_9;
  }
LABEL_10:
  v16 = &v7[8 * v9];
  if ( v16 )
  {
    *(_QWORD *)v16 = *a3;
    v8 = qword_14008A290;
  }
  LODWORD(qword_14008A290) = v8 + 1;
  return 1LL;
}
