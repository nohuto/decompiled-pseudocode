/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000BB78
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000DD10 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::FindConverter(
        CPipeInstance *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        int *a4,
        struct _GUID *a5)
{
  int v8; // ebx
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v10; // eax
  int v11; // ecx
  struct _UNCOMPRESSEDAUDIOFORMAT v13; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-60h] BYREF
  int v15; // [rsp+58h] [rbp-50h]
  float v16; // [rsp+64h] [rbp-44h]

  *a4 = 1;
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))a3->lpVtbl->GetUncompressedAudioFormat)(a3, v14);
  if ( v8 < 0 )
    goto LABEL_16;
  GetUncompressedAudioFormat = a2->lpVtbl->GetUncompressedAudioFormat;
  v10 = (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat
      ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)a2, &v13)
      : ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))GetUncompressedAudioFormat)(
          a2,
          &v13);
  v8 = v10;
  if ( v10 < 0 )
    goto LABEL_16;
  if ( v16 != v13.fFramesPerSecond || (v11 = *((_DWORD *)this + 33), (v11 & 8) != 0) )
  {
    if ( (*((_BYTE *)this + 132) & 2) != 0 )
    {
      *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
      if ( (*((_BYTE *)this + 132) & 8) != 0 )
        *a4 = 0;
      *((_DWORD *)this + 33) &= 0xFFFFFFF5;
LABEL_10:
      if ( v8 >= 0 )
        return (unsigned int)v8;
      goto LABEL_16;
    }
LABEL_25:
    v8 = -2005139408;
    goto LABEL_10;
  }
  if ( v15 != v13.dwSamplesPerFrame )
  {
    if ( (v11 & 4) != 0 )
    {
      *a5 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *((_DWORD *)this + 33) &= ~4u;
      goto LABEL_10;
    }
    goto LABEL_25;
  }
  if ( (v11 & 1) != 0 )
  {
    *a5 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
    goto LABEL_10;
  }
  v8 = -2005139408;
LABEL_16:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::FindConverter", 0x84Au, v8);
  return (unsigned int)v8;
}
