/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800022C4 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180002A44 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B94C8 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800BA578 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800BC60C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x1800E936C (_lambda_759c10d6a679fdab43c4d5c1468c56ec_--operator().c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x180108B40 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 * Callees:
 *     ?IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180003088 (-IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??0CAudioMediaType@@IEAA@XZ @ 0x180017E60 (--0CAudioMediaType@@IEAA@XZ.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x180096670 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18010D5E4 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4,
        int a5)
{
  HANDLE ProcessHeap; // rax
  CAudioMediaType *v9; // rax
  CAudioMediaType *v10; // rbx
  WORD wFormatTag; // r15
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  WORD nSamplesPerSec_high; // ax
  int valid; // eax
  BOOL v16; // ecx
  unsigned int cbSize; // eax
  int v18; // eax
  unsigned int v19; // ebp
  HANDLE v20; // rax
  void *v21; // rax
  __int16 *v22; // rdx
  __int16 v23; // cx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edi

  if ( a3 )
  {
    *a3 = 0LL;
    ProcessHeap = GetProcessHeap();
    v9 = (CAudioMediaType *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
    if ( v9 )
    {
      v10 = CAudioMediaType::CAudioMediaType(v9);
      if ( v10 )
      {
        if ( !a1 )
        {
LABEL_38:
          *((float *)v10 + 6) = a4;
          v26 = 0;
          *a3 = 0LL;
          *a3 = (struct IAudioMediaType *)v10;
          (*(void (__fastcall **)(CAudioMediaType *, _QWORD))(*(_QWORD *)v10 + 8LL))(
            v10,
            *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
          return v26;
        }
        if ( a5 )
        {
LABEL_21:
          cbSize = a1->cbSize;
          if ( cbSize + 18 < cbSize )
          {
            v26 = -2147024362;
          }
          else
          {
            if ( cbSize + 18 <= a2 )
            {
              operator delete(*((void **)v10 + 2));
              *((_QWORD *)v10 + 2) = 0LL;
              v18 = 18;
              if ( a1->wFormatTag != 1 )
                v18 = a1->cbSize + 18;
              v19 = v18;
              v20 = GetProcessHeap();
              v21 = HeapAlloc(v20, 0, v19);
              *((_QWORD *)v10 + 2) = v21;
              if ( v21 )
              {
                memcpy_0(v21, a1, v19);
                if ( a1->wFormatTag == 1 )
                  *(_WORD *)(*((_QWORD *)v10 + 2) + 16LL) = 0;
                v22 = (__int16 *)*((_QWORD *)v10 + 2);
                v23 = *v22;
                if ( *v22 )
                {
                  if ( ((v23 - 1) & 0xFFFD) == 0 )
                    goto LABEL_37;
                  if ( v23 != -2 )
                    goto LABEL_42;
                  v24 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v22 + 3);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v22 + 3) )
                    v24 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v22 + 4);
                  if ( !v24 )
                    goto LABEL_37;
                  v25 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v22 + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v22 + 3) )
                    v25 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v22 + 4);
                  if ( v25 )
LABEL_42:
                    *((_DWORD *)v10 + 3) = 1;
                  else
LABEL_37:
                    *((_DWORD *)v10 + 3) = 0;
                }
                goto LABEL_38;
              }
              goto LABEL_50;
            }
            v26 = -2147024809;
          }
LABEL_51:
          if ( v10 )
            CAudioMediaType::`vector deleting destructor'(v10, 1u);
          *a3 = 0LL;
          return v26;
        }
        wFormatTag = a1->wFormatTag;
        if ( a1->wFormatTag == 0xFFFE )
        {
          if ( a1->cbSize < 0x16u )
            goto LABEL_44;
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
LABEL_44:
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
            v16 = 1;
LABEL_17:
            if ( wFormatTag == 0xFFFE )
            {
              v16 = 0;
              if ( a1->cbSize >= 0x16u )
                v16 = a1[1].wFormatTag <= a1->wBitsPerSample;
            }
            if ( v16 )
              goto LABEL_21;
LABEL_46:
            v26 = -2147024809;
            goto LABEL_51;
          }
          valid = IsValidFloatWfx(a1);
        }
        v16 = valid;
        if ( !valid )
          goto LABEL_46;
        goto LABEL_17;
      }
    }
    else
    {
      v10 = 0LL;
    }
LABEL_50:
    v26 = -2147024882;
    goto LABEL_51;
  }
  return 2147942487LL;
}
