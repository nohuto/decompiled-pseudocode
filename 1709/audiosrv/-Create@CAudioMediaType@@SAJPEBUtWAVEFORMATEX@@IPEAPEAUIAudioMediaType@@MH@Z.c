/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18001F0C4 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180022BF0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18008222C (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180084ED8 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x1800B019C (_lambda_759c10d6a679fdab43c4d5c1468c56ec_--operator().c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x1800DAC90 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 * Callees:
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x18005A730 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800E02D4 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4,
        int a5)
{
  HANDLE ProcessHeap; // rax
  float *v9; // rax
  float *v10; // rbx
  WORD wFormatTag; // r11
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  WORD nSamplesPerSec_high; // ax
  WORD nChannels; // cx
  int valid; // r8d
  WORD wBitsPerSample; // dx
  int nBlockAlign; // r9d
  DWORD v19; // ecx
  DWORD nAvgBytesPerSec; // r9d
  unsigned int cbSize; // eax
  HANDLE v22; // rax
  int v23; // eax
  unsigned int v24; // ebp
  HANDLE v25; // rax
  void *v26; // rax
  __int16 *v27; // rdx
  __int16 v28; // cx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // edi

  if ( a3 )
  {
    *a3 = 0LL;
    ProcessHeap = GetProcessHeap();
    v9 = (float *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
    v10 = v9;
    if ( !v9 )
    {
      v31 = -2147024882;
      goto LABEL_55;
    }
    *((_QWORD *)v9 + 1) = 0LL;
    *(_QWORD *)v9 = &CAudioMediaType::`vftable';
    *((_QWORD *)v9 + 2) = 0LL;
    v9[6] = 0.0;
    if ( !a1 )
    {
LABEL_41:
      v10[6] = a4;
      v31 = 0;
      *a3 = 0LL;
      *a3 = (struct IAudioMediaType *)v10;
      (*(void (__fastcall **)(float *, _QWORD))(*(_QWORD *)v10 + 8LL))(
        v10,
        *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
      return v31;
    }
    if ( a5 )
    {
LABEL_24:
      cbSize = a1->cbSize;
      if ( cbSize + 18 < cbSize )
      {
        v31 = -2147024362;
        goto LABEL_51;
      }
      if ( cbSize + 18 <= a2 )
      {
        v22 = GetProcessHeap();
        HeapFree(v22, 0, 0LL);
        *((_QWORD *)v10 + 2) = 0LL;
        v23 = 18;
        if ( a1->wFormatTag != 1 )
          v23 = a1->cbSize + 18;
        v24 = v23;
        v25 = GetProcessHeap();
        v26 = HeapAlloc(v25, 0, v24);
        *((_QWORD *)v10 + 2) = v26;
        if ( v26 )
        {
          memcpy_0(v26, a1, v24);
          if ( a1->wFormatTag == 1 )
            *(_WORD *)(*((_QWORD *)v10 + 2) + 16LL) = 0;
          v27 = (__int16 *)*((_QWORD *)v10 + 2);
          v28 = *v27;
          if ( *v27 )
          {
            if ( ((v28 - 1) & 0xFFFD) == 0 )
              goto LABEL_40;
            if ( v28 != -2 )
              goto LABEL_45;
            v29 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v27 + 3);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v27 + 3) )
              v29 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v27 + 4);
            if ( !v29 )
              goto LABEL_40;
            v30 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v27 + 3);
            if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v27 + 3) )
              v30 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v27 + 4);
            if ( v30 )
LABEL_45:
              *((_DWORD *)v10 + 3) = 1;
            else
LABEL_40:
              v10[3] = 0.0;
          }
          goto LABEL_41;
        }
        v31 = -2147024882;
        goto LABEL_51;
      }
LABEL_50:
      v31 = -2147024809;
LABEL_51:
      CAudioMediaType::`vector deleting destructor'((CAudioMediaType *)v10, 1u);
LABEL_55:
      *a3 = 0LL;
      return v31;
    }
    wFormatTag = a1->wFormatTag;
    if ( a1->wFormatTag == 0xFFFE )
    {
      if ( a1->cbSize < 0x16u )
        goto LABEL_47;
      v12 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
          - *(_QWORD *)&a1[1].nAvgBytesPerSec;
      if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
      {
        v13 = *(unsigned int *)&a1[1].cbSize;
        v12 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v13;
        if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v13 )
          v12 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
              - (unsigned __int64)a1[2].nChannels;
      }
      if ( v12 )
LABEL_47:
        nSamplesPerSec_high = 0;
      else
        nSamplesPerSec_high = HIWORD(a1[1].nSamplesPerSec);
    }
    else
    {
      nSamplesPerSec_high = a1->wFormatTag;
    }
    if ( nSamplesPerSec_high == 1 )
    {
      valid = IsValidPcmWfx(a1);
    }
    else
    {
      if ( nSamplesPerSec_high != 3 )
      {
        valid = 1;
LABEL_20:
        if ( wFormatTag == 0xFFFE )
        {
          valid = 0;
          if ( a1->cbSize >= 0x16u )
            valid = a1[1].wFormatTag <= a1->wBitsPerSample;
        }
        if ( !valid )
          goto LABEL_50;
        goto LABEL_24;
      }
      nChannels = a1->nChannels;
      valid = 0;
      if ( nChannels )
      {
        wBitsPerSample = a1->wBitsPerSample;
        if ( ((wBitsPerSample - 32) & 0xFFDF) == 0 )
        {
          nBlockAlign = a1->nBlockAlign;
          if ( nBlockAlign == nChannels * wBitsPerSample / 8 )
          {
            v19 = nBlockAlign * a1->nSamplesPerSec;
            valid = 1;
            nAvgBytesPerSec = a1->nAvgBytesPerSec;
            if ( nAvgBytesPerSec > v19 / 0x14 + v19 || nAvgBytesPerSec < v19 - v19 / 0x14 )
              valid = 0;
          }
        }
      }
    }
    if ( !valid )
      goto LABEL_50;
    goto LABEL_20;
  }
  return 2147942487LL;
}
