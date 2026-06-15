/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140031954
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140038EC8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F1C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F48 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x14001DBE8 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x140039110 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memmove_s_0 @ 0x1400395F8 (memmove_s_0.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(const void **a1, _BYTE *a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  char *v9; // rcx
  size_t v10; // r8

  v3 = a3;
  if ( !a3 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v7 = (a2 - (_BYTE *)*a1) >> 1;
  v8 = *((unsigned int *)*a1 - 4);
  if ( ((*((_DWORD *)*a1 - 3) - a3) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
  v9 = (char *)*a1;
  if ( v7 > v8 )
  {
    v10 = 2 * v3;
    if ( 2 * v3 )
    {
      if ( v9 )
      {
        memcpy_0(v9, a2, v10);
      }
      else
      {
        *(_DWORD *)_o__errno(0LL, a2, v10) = 22;
        invalid_parameter_noinfo();
      }
    }
  }
  else
  {
    memmove_s_0(v9, 2 * v3, &v9[2 * v7], 2 * v3);
  }
  return ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v3);
}
