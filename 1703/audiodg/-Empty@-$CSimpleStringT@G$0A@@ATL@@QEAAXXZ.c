/*
 * XREFs of ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x140039110
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140031954 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F48 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140030430 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Empty(__int64 *a1)
{
  ATL::CStringData *v2; // rcx
  __int64 v3; // rdi

  v2 = (ATL::CStringData *)(*a1 - 24);
  v3 = *(_QWORD *)v2;
  if ( *((_DWORD *)v2 + 2) )
  {
    if ( *((int *)v2 + 4) >= 0 )
    {
      ATL::CStringData::Release(v2);
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, 0);
    }
  }
}
