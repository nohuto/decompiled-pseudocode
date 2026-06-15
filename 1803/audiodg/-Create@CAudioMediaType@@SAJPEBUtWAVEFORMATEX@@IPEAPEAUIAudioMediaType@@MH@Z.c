/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140010370
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001C78 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001D84 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140006B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140010660 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140010960 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x1400133C0 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003DE30 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003E694 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 * Callees:
 *     ??0CAudioMediaType@@IEAA@XZ @ 0x14000CE64 (--0CAudioMediaType@@IEAA@XZ.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x14001A9C0 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001B998 (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x14002E930 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4,
        int a5)
{
  CAudioMediaType *v8; // rax
  CAudioMediaType *v9; // rdi
  WORD wFormatTag; // r11
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  WORD nSamplesPerSec_high; // ax
  WORD nChannels; // cx
  int valid; // r8d
  WORD wBitsPerSample; // dx
  int nBlockAlign; // r9d
  DWORD v18; // ecx
  DWORD nAvgBytesPerSec; // r9d
  unsigned int cbSize; // eax
  unsigned int v21; // eax
  unsigned int v22; // esi
  void *v23; // rax
  __int16 *v24; // rcx
  __int16 v25; // dx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 (__fastcall *v29)(CAudioMediaType *); // rax

  if ( a3 )
  {
    *a3 = 0LL;
    v8 = (CAudioMediaType *)operator new(0x20uLL);
    if ( v8 )
    {
      v9 = CAudioMediaType::CAudioMediaType(v8);
      if ( v9 )
      {
        if ( !a1 )
        {
LABEL_42:
          *((float *)v9 + 6) = a4;
          v28 = 0;
          *a3 = 0LL;
          *a3 = (struct IAudioMediaType *)v9;
          v29 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v9 + 8LL);
          if ( v29 == CAudioMediaType::AddRef )
            _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
          else
            ((void (__fastcall *)(CAudioMediaType *, _QWORD))v29)(
              v9,
              *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
          return v28;
        }
        if ( a5 )
        {
LABEL_25:
          cbSize = a1->cbSize;
          if ( cbSize + 18 < cbSize )
          {
            v28 = -2147024362;
          }
          else
          {
            if ( cbSize + 18 <= a2 )
            {
              operator delete(*((void **)v9 + 2));
              *((_QWORD *)v9 + 2) = 0LL;
              v21 = 18;
              if ( a1->wFormatTag != 1 )
                v21 = a1->cbSize + 18;
              v22 = v21;
              v23 = operator new[](v21);
              *((_QWORD *)v9 + 2) = v23;
              if ( v23 )
              {
                memcpy_0(v23, a1, v22);
                if ( a1->wFormatTag == 1 )
                  *(_WORD *)(*((_QWORD *)v9 + 2) + 16LL) = 0;
                v24 = (__int16 *)*((_QWORD *)v9 + 2);
                v25 = *v24;
                if ( *v24 )
                {
                  if ( ((v25 - 1) & 0xFFFD) == 0 )
                    goto LABEL_41;
                  if ( v25 != -2 )
                    goto LABEL_47;
                  v26 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v24 + 3);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v24 + 3) )
                    v26 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v24 + 4);
                  if ( !v26 )
                    goto LABEL_41;
                  v27 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v24 + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v24 + 3) )
                    v27 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v24 + 4);
                  if ( v27 )
LABEL_47:
                    *((_DWORD *)v9 + 3) = 1;
                  else
LABEL_41:
                    *((_DWORD *)v9 + 3) = 0;
                }
                goto LABEL_42;
              }
              goto LABEL_57;
            }
            v28 = -2147024809;
          }
LABEL_58:
          if ( v9 )
            CAudioMediaType::`vector deleting destructor'(v9, 1u);
          *a3 = 0LL;
          return v28;
        }
        wFormatTag = a1->wFormatTag;
        if ( a1->wFormatTag == 0xFFFE )
        {
          if ( a1->cbSize < 0x16u )
            goto LABEL_49;
          v11 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
              - *(_QWORD *)&a1[1].nAvgBytesPerSec;
          if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
          {
            v12 = *(unsigned int *)&a1[1].cbSize;
            v11 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v12;
            if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v12 )
              v11 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
                  - (unsigned __int64)a1[2].nChannels;
          }
          if ( v11 )
LABEL_49:
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
LABEL_21:
            if ( wFormatTag == 0xFFFE )
            {
              valid = 0;
              if ( a1->cbSize >= 0x16u )
                valid = a1[1].wFormatTag <= a1->wBitsPerSample;
            }
            if ( valid )
              goto LABEL_25;
LABEL_52:
            v28 = -2147024809;
            goto LABEL_58;
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
                v18 = nBlockAlign * a1->nSamplesPerSec;
                valid = 1;
                nAvgBytesPerSec = a1->nAvgBytesPerSec;
                if ( nAvgBytesPerSec > v18 / 0x14 + v18 || nAvgBytesPerSec < v18 - v18 / 0x14 )
                  valid = 0;
              }
            }
          }
        }
        if ( !valid )
          goto LABEL_52;
        goto LABEL_21;
      }
    }
    else
    {
      v9 = 0LL;
    }
LABEL_57:
    v28 = -2147024882;
    goto LABEL_58;
  }
  return 2147942487LL;
}
