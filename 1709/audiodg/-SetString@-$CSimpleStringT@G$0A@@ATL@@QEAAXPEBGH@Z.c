/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x14001A8B4
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14001A604 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005F644 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A854 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A880 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x14001D964 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14003888C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memmove_s_0 @ 0x140038CFC (memmove_s_0.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(const void **a1, _BYTE *a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rcx
  size_t v9; // r8

  v3 = a3;
  if ( !a3 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty();
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (a2 - (_BYTE *)*a1) >> 1;
  v7 = *((unsigned int *)*a1 - 4);
  if ( ((*((_DWORD *)*a1 - 3) - a3) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
  v8 = (char *)*a1;
  if ( v6 <= v7 )
  {
    memmove_s_0(v8, 2 * v3, &v8[2 * v6], 2 * v3);
  }
  else
  {
    v9 = 2 * v3;
    if ( 2 * v3 )
    {
      if ( v8 )
      {
        memcpy_0(v8, a2, v9);
      }
      else
      {
        *(_DWORD *)_o__errno(0LL, a2, v9) = 22;
        invalid_parameter_noinfo();
      }
    }
  }
  return ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v3);
}
