/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000DA10
 * Callers:
 *     ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140012000 (-GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003800 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000CD30 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000D2E0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  CProcessNode *v5; // rcx
  __int64 (__fastcall *v6)(CProcessNode *, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  int v8; // ebx
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v10; // rax
  __int64 cbSize; // rbx
  const struct tWAVEFORMATEX *v12; // rsi
  struct tWAVEFORMATEX *v13; // rax
  struct tWAVEFORMATEX *v14; // rdi
  void (*Release)(void); // rax
  struct IAudioMediaType *v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( *((_DWORD *)this + 60) )
  {
    v5 = *(CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*((_QWORD *)this + 18) + 16LL));
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
        GetAudioFormat = v17->lpVtbl->GetAudioFormat;
        v10 = (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat
            ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v17)
            : (const struct tWAVEFORMATEX *)((__int64 (*)(void))GetAudioFormat)();
        cbSize = v10->cbSize;
        v12 = v10;
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
        if ( v8 >= 0 )
          goto LABEL_11;
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
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      39LL,
      &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetDevicePipeFormat", 0x49Au, v8);
LABEL_11:
  if ( v2 )
    LeaveCriticalSection(v2);
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
