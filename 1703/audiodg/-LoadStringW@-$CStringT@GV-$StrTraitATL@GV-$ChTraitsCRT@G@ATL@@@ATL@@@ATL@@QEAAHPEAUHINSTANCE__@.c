/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1400392BC
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140038EC8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F1C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F48 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _o_wmemcpy_s_0 @ 0x14001DC44 (_o_wmemcpy_s_0.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140039030 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x140039568 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        const void **a1,
        HMODULE a2,
        unsigned int a3)
{
  HRSRC Resource; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *StringResourceImage; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *v8; // rdi
  rsize_t v9; // rbx
  errno_t v10; // eax

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  StringResourceImage = ATL::_AtlGetStringResourceImage(a2, Resource, a3);
  v8 = StringResourceImage;
  if ( !StringResourceImage )
    return 0LL;
  v9 = *(unsigned __int16 *)StringResourceImage;
  if ( (((*((_DWORD *)*a1 - 3) - v9) | (1 - *((_DWORD *)*a1 - 2))) & 0x80000000) != 0LL )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v9);
  v10 = o_wmemcpy_s_0((wchar_t *)*a1, v9, (const wchar_t *)v8 + 1, *(unsigned __int16 *)v8);
  ATL::AtlCrtErrorCheck(v10);
  ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v9);
  return 1LL;
}
