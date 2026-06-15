/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000EAF0
 * Callers:
 *     ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140004DC0 (-GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000E210 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015384 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14001B9A0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  CProcessNode *v5; // rcx
  __int64 (__fastcall *v6)(CProcessNode *, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  int v8; // ebx
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  __int64 cbSize; // rbx
  const struct tWAVEFORMATEX *v12; // rsi
  struct tWAVEFORMATEX *v13; // rax
  struct tWAVEFORMATEX *v14; // rdi
  void (*Release)(void); // rax
  struct IAudioMediaType *v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  if ( *((_DWORD *)this + 52) )
  {
    v5 = *(CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*((_QWORD *)this + 14) + 16LL);
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(CProcessNode *, struct IAudioMediaType **))(*(_QWORD *)v5 + 8LL);
      if ( v6 == CProcessNode::GetLeftFormat )
        LeftFormat = CProcessNode::GetLeftFormat(v5, &v17);
      else
        LeftFormat = v6(v5, &v17);
      v8 = LeftFormat;
      if ( LeftFormat >= 0 )
      {
        GetAudioFormat = (__int64 (*)(void))v17->lpVtbl->GetAudioFormat;
        if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
          AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v17);
        else
          AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
        cbSize = AudioFormat->cbSize;
        v12 = AudioFormat;
        v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
        v14 = v13;
        if ( v13 )
        {
          memcpy_0(v13, v12, cbSize + 18);
          v8 = 0;
        }
        else
        {
          v8 = -2147024882;
        }
        *a2 = v14;
      }
    }
    else
    {
      v8 = -2005139430;
    }
  }
  else
  {
    v8 = -2005139437;
  }
  LeaveCriticalSection(v2);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        55LL,
        &WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetDevicePipeFormat", 0x4B5u, v8);
  }
  if ( v17 )
  {
    Release = (void (*)(void))v17->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v17);
    else
      Release();
  }
  return (unsigned int)v8;
}
