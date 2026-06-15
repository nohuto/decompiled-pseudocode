/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB280
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800CA1E8 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x180076D94 (WPP_SF_Sdd.c)
 *     WPP_SF_SDDDDD_guid_ @ 0x1800CD364 (WPP_SF_SDDDDD_guid_.c)
 */

bool __fastcall CSpatialProperties::SetDesiredFormat(
        CSpatialProperties *this,
        struct IMMDevice *a2,
        struct IPolicyConfig *a3,
        unsigned __int16 *a4,
        const struct WAVEFORMATEXTENSIBLE *a5)
{
  signed int v7; // ebx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 (__fastcall *v10)(struct IPolicyConfig *, unsigned __int16 *, __int128 *, _QWORD); // rax
  __int64 v11; // xmm0_8
  const WCHAR *v12; // rdx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  int v25; // [rsp+BCh] [rbp-44h]
  int *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+CCh] [rbp-34h]
  GUID *p_SubFormat; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]
  WORD *p_nChannels; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  DWORD *p_dwChannelMask; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  DWORD *p_nSamplesPerSec; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  int v40; // [rsp+10Ch] [rbp+Ch]
  WORD *p_wBitsPerSample; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+11Ch] [rbp+1Ch]
  union $48F34F6E58318E719B3C17D5DF8D3416::$BF32DB6F8F7ADBF71F90C18AFCE2FD9C *p_Samples; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  DWORD *p_nAvgBytesPerSec; // [rsp+130h] [rbp+30h]
  int v48; // [rsp+138h] [rbp+38h]
  int v49; // [rsp+13Ch] [rbp+3Ch]

  v17 = 1;
  v16 = 1;
  v7 = a4 == 0LL ? 0x8007000E : 0;
  if ( a4 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SDDDDD_guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        23,
        a5->Format.wBitsPerSample,
        (_DWORD)a4 + 34,
        a5->Format.nChannels,
        a5->Format.nSamplesPerSec,
        a5->Format.wBitsPerSample,
        a5->Samples.wValidBitsPerSample,
        a5->dwChannelMask,
        (__int64)&a5->SubFormat);
    }
    v17 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, unsigned __int16 *, const struct WAVEFORMATEXTENSIBLE *, _QWORD))(*(_QWORD *)a3 + 48LL))(
            a3,
            a4,
            a5,
            0LL);
    v7 = v17;
    if ( v17 < 0 && a5->dwChannelMask == 1599 )
    {
      v8 = *(_QWORD *)a3;
      v9 = *(_OWORD *)&a5->Format.cbSize;
      v18 = *(_OWORD *)&a5->Format.wFormatTag;
      v10 = *(__int64 (__fastcall **)(struct IPolicyConfig *, unsigned __int16 *, __int128 *, _QWORD))(v8 + 48);
      v11 = *(_QWORD *)a5->SubFormat.Data4;
      v19 = v9;
      DWORD1(v19) = 255;
      v20 = v11;
      v7 = v10(a3, a4, &v18, 0LL);
      v16 = v7;
    }
  }
  if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v12 = L"n/a";
    if ( a4 )
      v12 = a4;
    TlgCreateWsz(&pDesc, v12);
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v26 = &v16;
    p_SubFormat = &a5->SubFormat;
    p_nChannels = &a5->Format.nChannels;
    p_dwChannelMask = &a5->dwChannelMask;
    p_nSamplesPerSec = &a5->Format.nSamplesPerSec;
    p_wBitsPerSample = &a5->Format.wBitsPerSample;
    p_Samples = &a5->Samples;
    p_nAvgBytesPerSec = &a5->Format.nAvgBytesPerSec;
    v23 = &v17;
    v24 = 4;
    v27 = 4;
    v30 = 16;
    v33 = 2;
    v36 = 4;
    v39 = 4;
    v42 = 2;
    v45 = 2;
    v48 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801115F6, v13, v14, 0xCu, &pData);
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids,
      a4 + 17);
  }
  return v7 >= 0;
}
