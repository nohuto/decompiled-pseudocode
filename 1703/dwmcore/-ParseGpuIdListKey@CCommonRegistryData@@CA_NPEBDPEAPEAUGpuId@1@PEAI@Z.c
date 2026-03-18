/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800C7894
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800C780C (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180070FC0 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        const char *a1,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char v3; // bl
  bool v6; // zf
  SIZE_T v7; // r8
  char *pvData; // r14
  char *v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // r15d
  unsigned int v12; // eax
  __int16 v13; // si
  __int16 v14; // ax
  char v15; // dl
  __int16 v16; // ax
  unsigned int v17; // eax
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v23; // eax
  char *EndPtr; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  unsigned int v27; // [rsp+60h] [rbp-10h]
  const char *pcbData; // [rsp+B0h] [rbp+40h] BYREF
  int v29; // [rsp+C8h] [rbp+58h] BYREF
  __int16 v30; // [rsp+CCh] [rbp+5Ch]

  pcbData = a1;
  v3 = 0;
  if ( RegGetValueA(
         HKEY_LOCAL_MACHINE,
         "Software\\Microsoft\\Windows\\Dwm",
         "ShaderLinkingGPUBlacklist",
         2u,
         0LL,
         0LL,
         (LPDWORD)&pcbData) )
  {
    return 0;
  }
  v6 = (_DWORD)pcbData == -1;
  LODWORD(pcbData) = (_DWORD)pcbData + 1;
  v7 = (unsigned int)pcbData;
  if ( v6 )
    v7 = 1LL;
  pvData = (char *)HeapAlloc(WPF::g_processHeap, 0, v7);
  if ( pvData
    && !RegGetValueA(
          HKEY_LOCAL_MACHINE,
          "Software\\Microsoft\\Windows\\Dwm",
          "ShaderLinkingGPUBlacklist",
          2u,
          0LL,
          pvData,
          (LPDWORD)&pcbData) )
  {
    v9 = pvData;
    v26 = 0LL;
    EndPtr = pvData;
    v10 = 0;
    v27 = 0;
    v25 = 0LL;
    if ( *pvData )
    {
      v11 = (unsigned int)pcbData;
      while ( 1 )
      {
        v12 = strtoul(v9, &EndPtr, 16);
        v13 = v12;
        if ( v12 - 1 > 0xFFFE || *EndPtr != 58 )
          break;
        v14 = strtoul(EndPtr + 1, &EndPtr, 16);
        v15 = 0;
        if ( *EndPtr == 42 )
        {
          v14 *= 16;
          v15 = 1;
          ++EndPtr;
        }
        HIWORD(v29) = v14;
        v16 = -16;
        LOWORD(v29) = v13;
        if ( !v15 )
          v16 = -1;
        v30 = v16;
        v17 = v10 + 1;
        if ( v10 + 1 >= v10 )
          v11 = v10 + 1;
        v18 = v17 < v10 ? 0x80070216 : 0;
        if ( v17 < v10 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xB5u);
        }
        else if ( v11 > HIDWORD(v26) )
        {
          v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v25, 6u, 1, &v29);
          v18 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
          v10 = v27;
        }
        else
        {
          v19 = v25;
          v20 = v10;
          v10 = v11;
          v27 = v11;
          v21 = 3 * v20;
          *(_DWORD *)(v25 + 2 * v21) = v29;
          *(_WORD *)(v19 + 2 * v21 + 4) = v30;
        }
        if ( v18 < 0 )
          break;
        v9 = EndPtr;
        if ( !*EndPtr )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      *a3 = v10;
      DynArrayImpl<0>::DetachData((__int64)&v25, 6u, a2);
      v3 = 1;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v25);
  }
  WPF::ProcessHeapImpl::Free(pvData);
  return v3;
}
