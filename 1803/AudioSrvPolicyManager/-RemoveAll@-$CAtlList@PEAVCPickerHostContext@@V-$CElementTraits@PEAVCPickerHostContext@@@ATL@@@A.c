/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18000BDD4 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAVCDuckWorkItem@@XZ @ 0x18000F318 (-RemoveHead@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x1800107A0 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180012B74 (-GetSmtcProcesses@CApplication@@QEAAJAEAV-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess.c)
 *     ?UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18001342C (-UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x180014BB8 (--1CProcess@@MEAA@XZ.c)
 *     ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x180017490 (--1-$CAtlList@PEAUIAudioAppVolumePolicyChange@@V-$CElementTraits@PEAUIAudioAppVolumePolicyChange.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017594 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18001A8D0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x1800225C0 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180024108 (--1TSSession@@QEAA@XZ.c)
 *     ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x180024ACC (-GetNotificationDataSize@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180024CC4 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180026884 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180026A78 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x18002B6E4 (--1CVolumeLimitTrackerImpl@@UEAA@XZ.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x18002D4AC (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__ @ 0x180038500 (PickerHostContextManager--_dynamic_atexit_destructor_for__s_PickerHostContextList__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  if ( *(_QWORD *)(a1 + 16) )
  {
    do
    {
      v2 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        ATL::AtlThrowImpl(-2147467259);
      *(_QWORD *)a1 = *v2;
      *v2 = *(_QWORD *)(a1 + 32);
      v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) = v2;
      if ( v3 )
      {
        ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
        v4 = *(_QWORD *)(a1 + 16);
      }
    }
    while ( v4 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(_QWORD **)(a1 + 24);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      free(v5);
      v5 = v6;
    }
    while ( v6 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
