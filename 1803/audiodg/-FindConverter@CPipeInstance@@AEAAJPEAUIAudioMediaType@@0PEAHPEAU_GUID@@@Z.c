/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000B448
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000CD40 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  int v13; // eax
  struct _UNCOMPRESSEDAUDIOFORMAT v14; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v15[16]; // [rsp+48h] [rbp-60h] BYREF
  int v16; // [rsp+58h] [rbp-50h]
  float v17; // [rsp+64h] [rbp-44h]

  *a4 = 1;
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))a3->lpVtbl->GetUncompressedAudioFormat)(a3, v15);
  if ( v8 < 0 )
    goto LABEL_16;
  GetUncompressedAudioFormat = a2->lpVtbl->GetUncompressedAudioFormat;
  v10 = (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat
      ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)a2, &v14)
      : ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))GetUncompressedAudioFormat)(
          a2,
          &v14);
  v8 = v10;
  if ( v10 < 0 )
    goto LABEL_16;
  if ( v17 != v14.fFramesPerSecond || (v11 = *((_DWORD *)this + 33), (v11 & 8) != 0) )
  {
    if ( (*((_BYTE *)this + 132) & 2) != 0 )
    {
      *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
      v13 = *((_DWORD *)this + 33);
      if ( (v13 & 8) != 0 )
      {
        *a4 = 0;
        v13 = *((_DWORD *)this + 33);
      }
      *((_DWORD *)this + 33) = v13 & 0xFFFFFFF5;
LABEL_10:
      if ( v8 >= 0 )
        return (unsigned int)v8;
      goto LABEL_16;
    }
LABEL_25:
    v8 = -2005139408;
    goto LABEL_10;
  }
  if ( v16 != v14.dwSamplesPerFrame )
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
      &WPP_0100469152753b0964101f667eb0634c_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::FindConverter", 0x8B4u, v8);
  return (unsigned int)v8;
}
