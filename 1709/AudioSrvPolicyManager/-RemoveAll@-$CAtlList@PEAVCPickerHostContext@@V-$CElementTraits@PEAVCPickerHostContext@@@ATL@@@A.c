/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180007114 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAVCDuckWorkItem@@XZ @ 0x18000A634 (-RemoveHead@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x18000B950 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18000E2D8 (-UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x18000F208 (--1CProcess@@MEAA@XZ.c)
 *     ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x180011200 (--1-$CAtlList@PEAUIAudioAppVolumePolicyChange@@V-$CElementTraits@PEAUIAudioAppVolumePolicyChange.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180011308 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180012690 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180018FD0 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18001AF04 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18001D504 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D6F8 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x180021ED4 (--1CVolumeLimitTrackerImpl@@UEAA@XZ.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180024798 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__ @ 0x180029460 (PickerHostContextManager--_dynamic_atexit_destructor_for__s_PickerHostContextList__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v2;
    *v2 = *(_QWORD *)(a1 + 32);
    v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)(a1 + 32) = v2;
    if ( v3 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      free(v4);
      v4 = v5;
    }
    while ( v5 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
