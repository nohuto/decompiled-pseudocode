/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800FEB34
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800FDDD0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSpatialProperties::SetDesiredFormat(
        CSpatialProperties *this,
        struct IMMDevice *a2,
        struct IPolicyConfig *a3,
        unsigned __int16 *a4,
        const struct WAVEFORMATEXTENSIBLE *a5)
{
  signed int v7; // ebx
  int nChannels; // ecx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 (__fastcall *v13)(struct IPolicyConfig *, unsigned __int16 *, __int128 *, _QWORD); // rax
  __int64 v14; // xmm0_8
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  DWORD nSamplesPerSec; // [rsp+3Ch] [rbp-C4h] BYREF
  int wBitsPerSample; // [rsp+40h] [rbp-C0h] BYREF
  int wValidBitsPerSample; // [rsp+44h] [rbp-BCh] BYREF
  DWORD dwChannelMask; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  DWORD *p_nSamplesPerSec; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  GUID *p_wBitsPerSample; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  WORD *p_wValidBitsPerSample; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  DWORD *p_dwChannelMask; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  GUID *p_SubFormat; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  WORD *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  union $48F34F6E58318E719B3C17D5DF8D3416::$BF32DB6F8F7ADBF71F90C18AFCE2FD9C *p_Samples; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  DWORD *p_nAvgBytesPerSec; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]

  v18 = 1;
  v19 = 1;
  v7 = a4 == 0LL ? 0x8007000E : 0;
  if ( a4 )
  {
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, a4);
      nChannels = a5->Format.nChannels;
      v30 = &v20;
      nSamplesPerSec = a5->Format.nSamplesPerSec;
      p_nSamplesPerSec = &nSamplesPerSec;
      wBitsPerSample = a5->Format.wBitsPerSample;
      p_wBitsPerSample = (GUID *)&wBitsPerSample;
      wValidBitsPerSample = a5->Samples.wValidBitsPerSample;
      p_wValidBitsPerSample = (WORD *)&wValidBitsPerSample;
      dwChannelMask = a5->dwChannelMask;
      p_dwChannelMask = &dwChannelMask;
      p_SubFormat = &a5->SubFormat;
      v20 = nChannels;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 16LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801483D7, v9, v10, 9u, &pData);
    }
    v18 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, unsigned __int16 *, const struct WAVEFORMATEXTENSIBLE *, _QWORD))(*(_QWORD *)a3 + 48LL))(
            a3,
            a4,
            a5,
            0LL);
    v7 = v18;
    if ( v18 < 0 && a5->dwChannelMask == 1599 )
    {
      v11 = *(_QWORD *)a3;
      v12 = *(_OWORD *)&a5->Format.cbSize;
      v25 = *(_OWORD *)&a5->Format.wFormatTag;
      v13 = *(__int64 (__fastcall **)(struct IPolicyConfig *, unsigned __int16 *, __int128 *, _QWORD))(v11 + 48);
      v14 = *(_QWORD *)a5->SubFormat.Data4;
      v26 = v12;
      DWORD1(v26) = 255;
      v27 = v14;
      v7 = v13(a3, a4, &v25, 0LL);
      v19 = v7;
    }
  }
  if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, a4);
    v31 = 4LL;
    p_nSamplesPerSec = (DWORD *)&v19;
    v30 = &v18;
    p_wBitsPerSample = &a5->SubFormat;
    p_wValidBitsPerSample = &a5->Format.nChannels;
    p_dwChannelMask = &a5->dwChannelMask;
    p_SubFormat = (GUID *)&a5->Format.nSamplesPerSec;
    v42 = &a5->Format.wBitsPerSample;
    p_Samples = &a5->Samples;
    p_nAvgBytesPerSec = &a5->Format.nAvgBytesPerSec;
    v33 = 4LL;
    v35 = 16LL;
    v37 = 2LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 2LL;
    v45 = 2LL;
    v47 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014846B, v15, v16, 0xCu, &pData);
  }
  return v7 >= 0;
}
