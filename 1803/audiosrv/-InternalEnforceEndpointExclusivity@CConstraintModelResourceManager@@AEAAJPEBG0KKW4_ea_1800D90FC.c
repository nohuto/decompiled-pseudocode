/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800D90FC
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800D9000 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800D90FC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800D90FC.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18004417C (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ??$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800D7FD0 (--$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800D8E14 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800D90FC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800D90FC.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800DA724 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x1800DAB44 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180114460 (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
        __int64 a1,
        char *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  int v10; // ebx
  const struct ExclusiveEndpointInfo *v11; // rdi
  CAudioSessionManager *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 i; // rsi
  char *v23; // rsi
  struct ExclusiveEndpointInfo *v25; // rdx
  __int64 v26; // rdi
  unsigned int v27; // [rsp+40h] [rbp-C0h]
  unsigned int v28; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  unsigned int v34; // [rsp+64h] [rbp-9Ch]
  int v35; // [rsp+68h] [rbp-98h]
  const struct ExclusiveEndpointInfo *v36; // [rsp+70h] [rbp-90h]
  unsigned __int64 v37; // [rsp+78h] [rbp-88h]
  const struct ExclusiveEndpointInfo *v38; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v39; // [rsp+88h] [rbp-78h]
  _QWORD *v40; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A8h] [rbp-58h]
  _QWORD *v44; // [rsp+B0h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp-48h] BYREF
  char v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  char v48[402]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v49[261]; // [rsp+262h] [rbp+162h] BYREF
  unsigned int v50; // [rsp+46Ch] [rbp+36Ch]
  int v51; // [rsp+470h] [rbp+370h]
  int v52; // [rsp+474h] [rbp+374h]

  v47 = -2LL;
  v34 = a4;
  v39 = a3;
  v10 = 0;
  v50 = a4;
  v51 = 0;
  v52 = -1;
  if ( a2 )
    StringCchCopyW(v48, 201LL, a2);
  else
    memset_0(v48, 0, sizeof(v48));
  StringCchCopyW((char *)v49, 261LL, (char *)a3);
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v11 = 0LL;
  v28 = -1;
  v38 = 0LL;
  v27 = 0;
  v33 = 0;
  if ( a8 <= 0x14 )
  {
    v12 = WPP_GLOBAL_Control;
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_917ef38764913c31df93337219a3aa90_Traceguids,
        a8);
      v12 = WPP_GLOBAL_Control;
    }
    v10 = -2005139389;
  }
  v35 = a5 == 1;
  if ( v10 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
                             &v40,
                             *(_QWORD *)(v13 + 208)) )
      ATL::AtlThrowImpl(-2147024882);
    v14 = *(_QWORD *)(v13 + 208);
    if ( v14 )
    {
      v15 = v40;
      v16 = *(_QWORD *)(v13 + 200) - (_QWORD)v40;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + v16);
        ++v15;
        --v14;
      }
      while ( v14 );
    }
    v10 = 0;
    if ( !v41 )
      goto LABEL_39;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
    v19 = 0LL;
    v37 = 0LL;
    if ( !v41 )
      goto LABEL_31;
    v20 = 0LL;
    do
    {
      if ( (_DWORD)v20 )
        goto LABEL_28;
      v21 = (_QWORD *)v40[v19];
      v44 = v21;
      v11 = 0LL;
      v36 = 0LL;
      v28 = -1;
      for ( i = 0LL; i < v44[1]; v21 = v44 )
      {
        v11 = *(const struct ExclusiveEndpointInfo **)(*v21 + 8 * i);
        if ( ExclusiveEndpointInfo::CompareTo<ExclusiveEndpointInfo>((__int64)v48, (unsigned __int64)v11, v17, v18) )
        {
          v20 = 1LL;
          v27 = 1;
          v38 = v11;
        }
        else
        {
          v31 = 0;
          v32 = -1;
          CConstraintModelResourceManager::GetEndpointStatus((struct _RTL_CRITICAL_SECTION *)a1, v11, v35, &v31, &v32);
          v20 = v27;
          if ( v31 )
          {
            v36 = v11;
            v28 = v32;
            goto LABEL_25;
          }
        }
        v11 = v36;
LABEL_25:
        ++i;
      }
      v19 = v37 + 1;
      v37 = v19;
    }
    while ( v19 < v41 );
    if ( (_DWORD)v20 )
    {
LABEL_28:
      if ( v11 && (v28 & 0xFFFFFFFE) < (a5 & 0xFFFFFFFE) )
      {
        v10 = -2005139389;
        goto LABEL_31;
      }
      if ( v11 && !a7 )
      {
        v25 = v11;
        v26 = a1;
        v10 = CConstraintModelResourceManager::RevokeEndpointResources((CConstraintModelResourceManager *)a1, v25);
        v33 = 1;
        if ( v10 < 0 )
          goto LABEL_31;
LABEL_52:
        if ( v38 && !a7 && a5 == 1 )
        {
          v23 = a2;
          CConstraintModelResourceManager::UpdateResourceEndpoint(v26, v20, a2, v39, v34, a6);
          goto LABEL_32;
        }
LABEL_31:
        v23 = a2;
LABEL_32:
        if ( v46 )
          LeaveCriticalSection(lpCriticalSection);
        if ( v33 && v10 >= 0 )
        {
          if ( a8 )
            Sleep(0x32u);
          v10 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
                  a1,
                  v23,
                  v39,
                  v34,
                  a5,
                  a6,
                  0,
                  a8 + 1);
        }
LABEL_39:
        v12 = WPP_GLOBAL_Control;
        goto LABEL_40;
      }
    }
    v26 = a1;
    goto LABEL_52;
  }
LABEL_40:
  if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v12 + 7) & 0x100) != 0
    && *((_BYTE *)v12 + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)v12 + 2), 0x1Cu, (__int64)&WPP_917ef38764913c31df93337219a3aa90_Traceguids, v10);
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v40);
  return (unsigned int)v10;
}
