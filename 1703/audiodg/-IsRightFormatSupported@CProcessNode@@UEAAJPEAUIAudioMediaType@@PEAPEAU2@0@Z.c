/*
 * XREFs of ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000DE50
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000DD10 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14001B990 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProcessNode::IsRightFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  CAudioMediaType *v7; // rcx
  __int64 (__fastcall *v8)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *); // rax
  int UncompressedAudioFormat; // eax
  unsigned int v10; // ebx
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v12; // eax
  __int64 v13; // rax
  CAudioMediaType *v14; // rcx
  void (*v15)(void); // rax
  struct _UNCOMPRESSEDAUDIOFORMAT v17; // [rsp+20h] [rbp-88h] BYREF
  struct _UNCOMPRESSEDAUDIOFORMAT v18; // [rsp+48h] [rbp-60h] BYREF

  if ( !a2 )
    return 0LL;
  v7 = (CAudioMediaType *)*((_QWORD *)this + 2);
  v8 = *(__int64 (__fastcall **)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v7 + 48LL);
  if ( v8 == CAudioMediaType::GetUncompressedAudioFormat )
    UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat(v7, &v18);
  else
    UncompressedAudioFormat = ((__int64 (__fastcall *)(CAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *, struct IAudioMediaType **, struct IAudioMediaType *))v8)(
                                v7,
                                &v18,
                                a3,
                                a4);
  v10 = UncompressedAudioFormat;
  if ( UncompressedAudioFormat < 0
    || ((GetUncompressedAudioFormat = a2->lpVtbl->GetUncompressedAudioFormat,
         (char *)GetUncompressedAudioFormat != (char *)CAudioMediaType::GetUncompressedAudioFormat)
      ? (v12 = ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _UNCOMPRESSEDAUDIOFORMAT *))GetUncompressedAudioFormat)(
                 a2,
                 &v17))
      : (v12 = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)a2, &v17)),
        v10 = v12,
        v12 < 0) )
  {
LABEL_26:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids, v10);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::IsRightFormatSupported", 0x10Au, v10);
    return v10;
  }
  v13 = *(_QWORD *)&v17.guidFormatType.Data1 - *(_QWORD *)&v18.guidFormatType.Data1;
  if ( *(_QWORD *)&v17.guidFormatType.Data1 == *(_QWORD *)&v18.guidFormatType.Data1 )
    v13 = *(_QWORD *)v17.guidFormatType.Data4 - *(_QWORD *)v18.guidFormatType.Data4;
  if ( !v13
    && v17.dwSamplesPerFrame == v18.dwSamplesPerFrame
    && v17.dwBytesPerSampleContainer == v18.dwBytesPerSampleContainer
    && v17.dwValidBitsPerSample == v18.dwValidBitsPerSample
    && v17.fFramesPerSecond == v18.fFramesPerSecond )
  {
    return v10;
  }
  if ( !a3 )
  {
    v10 = -2147467261;
    goto LABEL_26;
  }
  *a3 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
  v14 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v14 )
  {
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 8LL);
    if ( (char *)v15 == (char *)CAudioMediaType::AddRef )
      CAudioMediaType::AddRef(v14);
    else
      v15();
  }
  return 1LL;
}
