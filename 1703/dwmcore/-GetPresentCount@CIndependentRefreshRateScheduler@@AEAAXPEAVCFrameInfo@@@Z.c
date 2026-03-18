/*
 * XREFs of ?GetPresentCount@CIndependentRefreshRateScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x18013CD34
 * Callers:
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?GetDesktopLastPresentCount@CComposition@@QEAAJPEAI0@Z @ 0x180131B3C (-GetDesktopLastPresentCount@CComposition@@QEAAJPEAI0@Z.c)
 *     Template_qN16 @ 0x18013BB9C (Template_qN16.c)
 */

void __fastcall CIndependentRefreshRateScheduler::GetPresentCount(
        CIndependentRefreshRateScheduler *this,
        struct CFrameInfo *a2)
{
  CRenderTargetManager **v4; // rcx
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)a2 + 273) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
    v4 = (CRenderTargetManager **)*((_QWORD *)this + 16);
    v5 = (unsigned int *)((char *)a2 + 16);
    v9 = 16;
    CComposition::GetDesktopLastPresentCount(v4, &v9, v5);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qN16(v7, v6, v9, v8, (__int64)v5);
  }
}
