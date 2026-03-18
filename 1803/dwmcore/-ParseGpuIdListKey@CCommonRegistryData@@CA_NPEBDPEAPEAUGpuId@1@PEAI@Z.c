/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800C080C
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800C06DC (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800C0774 (-IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180079770 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        LPCSTR lpValue,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char v6; // di
  bool v7; // zf
  SIZE_T v8; // r8
  _BYTE *pvData; // r14
  unsigned int v10; // esi
  _BYTE *v11; // rax
  DWORD v12; // r15d
  int v13; // eax
  __int16 v14; // bx
  __int16 v15; // ax
  char v16; // dl
  __int16 v17; // ax
  unsigned int v18; // eax
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v24; // eax
  int v25; // [rsp+40h] [rbp-30h] BYREF
  __int16 v26; // [rsp+44h] [rbp-2Ch]
  _BYTE *v27; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+60h] [rbp-10h]
  DWORD v30; // [rsp+64h] [rbp-Ch]
  DWORD v31; // [rsp+68h] [rbp-8h]
  DWORD pcbData; // [rsp+B8h] [rbp+48h] BYREF

  if ( RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, 0LL, &pcbData) )
    return 0;
  v6 = 1;
  v7 = pcbData++ == -1;
  v8 = pcbData;
  if ( v7 )
    v8 = 1LL;
  pvData = HeapAlloc(WPF::g_processHeap, 0, v8);
  if ( !pvData
    || RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, pvData, &pcbData) )
  {
    v6 = 0;
  }
  else
  {
    v29 = 0;
    v10 = 0;
    v30 = 0;
    v11 = pvData;
    v31 = 0;
    v27 = pvData;
    v28 = 0LL;
    if ( *pvData )
    {
      v12 = pcbData;
      while ( 1 )
      {
        v13 = _o_strtoul(v11, &v27, 16LL);
        v14 = v13;
        if ( (unsigned int)(v13 - 1) > 0xFFFE || *v27 != 58 )
          break;
        v15 = _o_strtoul(v27 + 1, &v27, 16LL);
        v16 = 0;
        if ( *v27 == 42 )
        {
          v15 *= 16;
          v16 = 1;
          ++v27;
        }
        HIWORD(v25) = v15;
        v17 = -16;
        LOWORD(v25) = v14;
        if ( !v16 )
          v17 = -1;
        v26 = v17;
        v18 = v10 + 1;
        if ( v10 + 1 >= v10 )
          v12 = v10 + 1;
        v19 = v18 < v10 ? 0x80070216 : 0;
        if ( v18 < v10 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xB5u);
        }
        else if ( v12 > v30 )
        {
          v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v28, 6u, 1, &v25);
          v19 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
          v10 = v31;
        }
        else
        {
          v20 = v28;
          v21 = v10;
          v10 = v12;
          v31 = v12;
          v22 = 3 * v21;
          *(_DWORD *)(v28 + 2 * v22) = v25;
          *(_WORD *)(v20 + 2 * v22 + 4) = v26;
        }
        if ( v19 < 0 )
          break;
        v11 = v27;
        if ( !*v27 )
          goto LABEL_21;
      }
      v6 = 0;
    }
    else
    {
LABEL_21:
      *a3 = v10;
      DynArrayImpl<0>::DetachData((__int64)&v28, 6u, a2);
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v28);
  }
  if ( pvData )
    operator delete(pvData);
  return v6;
}
