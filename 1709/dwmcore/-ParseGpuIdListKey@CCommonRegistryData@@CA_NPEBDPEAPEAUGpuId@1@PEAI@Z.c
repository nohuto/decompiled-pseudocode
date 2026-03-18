/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800BD8A0
 * Callers:
 *     ?DetectShaderLinkingBugAffectedDriver@CD3DDeviceLevel1@@AEAAXXZ @ 0x180020C90 (-DetectShaderLinkingBugAffectedDriver@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800BD80C (-IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180068504 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        LPCSTR lpValue,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char v3; // bl
  bool v7; // zf
  SIZE_T v8; // r8
  char *pvData; // r14
  char *v10; // rax
  unsigned int v11; // edi
  DWORD v12; // r15d
  unsigned int v13; // eax
  __int16 v14; // si
  __int16 v15; // ax
  char v16; // dl
  __int16 v17; // ax
  unsigned int v18; // eax
  signed int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  signed int v24; // eax
  int v25; // [rsp+40h] [rbp-30h] BYREF
  __int16 v26; // [rsp+44h] [rbp-2Ch]
  char *EndPtr; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]
  DWORD v30; // [rsp+68h] [rbp-8h]
  DWORD pcbData; // [rsp+B8h] [rbp+48h] BYREF

  v3 = 0;
  if ( RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, 0LL, &pcbData) )
    return 0;
  v7 = pcbData++ == -1;
  v8 = pcbData;
  if ( v7 )
    v8 = 1LL;
  pvData = (char *)HeapAlloc(WPF::g_processHeap, 0, v8);
  if ( pvData
    && !RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, pvData, &pcbData) )
  {
    v10 = pvData;
    v29 = 0LL;
    EndPtr = pvData;
    v11 = 0;
    v30 = 0;
    v28 = 0LL;
    if ( *pvData )
    {
      v12 = pcbData;
      while ( 1 )
      {
        v13 = strtoul(v10, &EndPtr, 16);
        v14 = v13;
        if ( v13 - 1 > 0xFFFE || *EndPtr != 58 )
          break;
        v15 = strtoul(EndPtr + 1, &EndPtr, 16);
        v16 = 0;
        if ( *EndPtr == 42 )
        {
          v15 *= 16;
          v16 = 1;
          ++EndPtr;
        }
        HIWORD(v25) = v15;
        v17 = -16;
        LOWORD(v25) = v14;
        if ( !v16 )
          v17 = -1;
        v26 = v17;
        v18 = v11 + 1;
        if ( v11 + 1 >= v11 )
          v12 = v11 + 1;
        v19 = v18 < v11 ? 0x80070216 : 0;
        if ( v18 < v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0xB5u);
        }
        else if ( v12 > HIDWORD(v29) )
        {
          v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v28, 6u, 1, &v25);
          v19 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0xC0u);
          v11 = v30;
        }
        else
        {
          v20 = v28;
          v21 = v11;
          v11 = v12;
          v30 = v12;
          v22 = 3 * v21;
          *(_DWORD *)(v28 + 2 * v22) = v25;
          *(_WORD *)(v20 + 2 * v22 + 4) = v26;
        }
        if ( v19 < 0 )
          break;
        v10 = EndPtr;
        if ( !*EndPtr )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      *a3 = v11;
      DynArrayImpl<0>::DetachData((__int64)&v28, 6u, a2);
      v3 = 1;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v28);
  }
  WPF::ProcessHeapImpl::Free(pvData);
  return v3;
}
