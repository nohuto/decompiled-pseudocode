/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18001E090
 * Callers:
 *     VADServerUserSessionChanged @ 0x180025C58 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCVolumeStrip@@V?$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEAVCVolumeStrip@@AEAPEAU__POSITION@@@Z @ 0x180002A68 (-GetNext@-$CAtlList@PEAVCVolumeStrip@@V-$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x180083DB0 (WPP_SF_qS.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x18008847C (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180089A50 (-RemoveAt@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCal.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, unsigned int a2, int a3)
{
  _QWORD *v4; // r14
  _QWORD *v6; // rdi
  CVolumeStrip *v7; // rcx
  __int64 v8; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]
  _QWORD *v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)((char *)this + 56);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (_QWORD *)*v4;
  v11 = (_QWORD *)*v4;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, a2);
  }
  while ( v6 )
  {
    v8 = *ATL::CAtlList<CVolumeStrip *,ATL::CElementTraits<CVolumeStrip *>>::GetNext((__int64)v7, &v11);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14LL,
        &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids,
        *(_QWORD *)(v8 + 224));
    }
    if ( (unsigned int)GetSessionIdFromEndpointId(*(_QWORD *)(v8 + 224)) == a2 && *(_DWORD *)(v8 + 232) != a3 )
    {
      ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAt(v4, v6);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          15,
          (unsigned int)&WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids,
          v8,
          *(_QWORD *)(v8 + 224));
      }
      CVolumeStrip::ProviderFinalRelease((LPUNKNOWN)v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      break;
    }
    v6 = v11;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
