/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140002998
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400026AC (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x140002C00 (--0IUnknown@@QEAA@XZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x14001CA2A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1400378FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
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
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  char *v12; // rbx
  IUnknown *v13; // rcx
  __int64 (*AddRef)(void); // rax
  IUnknown *v15; // rax
  char *v16; // rdx
  _DWORD *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rcx
  size_t v22; // r8

  v5 = (void *)_o__recalloc(Block, (int)qword_1400882B0 + 1, 8LL);
  if ( !v5 )
    return 0LL;
  Block = v5;
  v6 = (char *)_o__recalloc(qword_1400882A8, (int)qword_1400882B0 + 1, 8LL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  qword_1400882A8 = v6;
  v8 = qword_1400882B0;
  v9 = (int)qword_1400882B0;
  v10 = (char *)Block + 8 * (int)qword_1400882B0;
  if ( v10 )
  {
    v11 = *a2;
    v12 = (char *)(v11 - 3);
    v13 = (IUnknown *)*(v11 - 3);
    AddRef = (__int64 (*)(void))v13->lpVtbl[1].AddRef;
    if ( (char *)AddRef == (char *)IUnknown::IUnknown )
      v15 = IUnknown::IUnknown(v13);
    else
      v15 = (IUnknown *)AddRef();
    if ( *((int *)v12 + 4) >= 0 && v15 == *(IUnknown **)v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
LABEL_9:
      *v10 = v12 + 24;
      v8 = qword_1400882B0;
      v7 = (char *)qword_1400882A8;
      goto LABEL_10;
    }
    v18 = v12 + 8;
    v19 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64))v15->lpVtbl->QueryInterface)(
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
      memset_0(v21, 0, v22);
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
    v8 = qword_1400882B0;
  }
  LODWORD(qword_1400882B0) = v8 + 1;
  return 1LL;
}
