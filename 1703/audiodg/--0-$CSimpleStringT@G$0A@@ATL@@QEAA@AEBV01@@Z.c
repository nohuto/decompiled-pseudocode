/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@AEBV01@@Z @ 0x14003186C
 * Callers:
 *     ?InternalSetAtIndex@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140031778 (-InternalSetAtIndex@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x14001BB60 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     _invalid_parameter_noinfo @ 0x14001DBE8 (_invalid_parameter_noinfo.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x140039558 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

_QWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(_QWORD *a1, const void **a2)
{
  const void *v2; // rsi
  __int64 v4; // rbx
  __int64 (*v5)(void); // rax
  struct ATL::IAtlStringMgr *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rcx
  int v12; // eax
  size_t v13; // r8

  v2 = *a2;
  v4 = (__int64)*a2 - 24;
  v5 = *(__int64 (**)(void))(**(_QWORD **)v4 + 32LL);
  if ( (char *)v5 == (char *)ATL::CAtlStringMgr::Clone )
    v6 = ATL::CAtlStringMgr::Clone(*(ATL::CAtlStringMgr **)v4);
  else
    v6 = (struct ATL::IAtlStringMgr *)v5();
  if ( *(int *)(v4 + 16) >= 0 && v6 == *(struct ATL::IAtlStringMgr **)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
  }
  else
  {
    v7 = (_DWORD *)(v4 + 8);
    v8 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v6)(
           v6,
           *(unsigned int *)(v4 + 8),
           2LL);
    v4 = v8;
    if ( !v8 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    v11 = (void *)(v8 + 24);
    *(_DWORD *)(v8 + 8) = *v7;
    v12 = *v7 + 1;
    if ( 2LL * v12 )
    {
      if ( v4 != -24 )
      {
        v13 = 2LL * v12;
        if ( v2 )
        {
          memcpy_0(v11, v2, v13);
          goto LABEL_15;
        }
        memset(v11, 0, v13);
      }
      *(_DWORD *)_o__errno(v11, v9, v10) = 22;
      invalid_parameter_noinfo();
    }
  }
LABEL_15:
  *a1 = v4 + 24;
  return a1;
}
