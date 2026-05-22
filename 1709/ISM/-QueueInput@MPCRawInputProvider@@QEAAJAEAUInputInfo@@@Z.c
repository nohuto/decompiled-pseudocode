/*
 * XREFs of ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180067040
 * Callers:
 *     ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@34567@@Z @ 0x180068310 (-OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PE.c)
 *     ?Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800685C0 (-Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800686D0 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x180066568 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z.c)
 *     ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x1800676AC (--$emplace_back@AEAUInputInfo@@@-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAAXA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::QueueInput(MPCRawInputProvider *this, struct InputInfo *a2)
{
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 && *v4 )
  {
    ISMTracing::Instance();
    ISMTracing::LogMPCRawInputReport_(v5, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2712));
  std::vector<InputInfo>::emplace_back<InputInfo &>((char *)this + 2688, a2);
  if ( this != (MPCRawInputProvider *)-2712LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2712));
  if ( !SetEvent(*((HANDLE *)this + 334)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v6);
    __debugbreak();
  }
  return 0LL;
}
