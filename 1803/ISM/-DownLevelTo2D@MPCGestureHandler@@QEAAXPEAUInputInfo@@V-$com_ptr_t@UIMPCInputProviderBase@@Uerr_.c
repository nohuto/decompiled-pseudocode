/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z @ 0x18005A6F8 (-MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x18005A7D4 (-MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z @ 0x18005A8B0 (-MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x18005A98C (-MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18005B968 (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800AC844 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800AC8A4 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800AC908 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800ACB7C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800AD3EC (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800AD6DC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800AE044 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800AE0FC (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall MPCGestureHandler::DownLevelTo2D(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rdi
  int v11; // ebx
  _DWORD *v12; // rcx
  ISMTracing *v13; // rcx
  ManipulationInjector *v14; // rcx
  unsigned int v15; // eax
  int v16; // edi
  _DWORD *v17; // rcx
  ISMTracing *v18; // rcx
  unsigned int v19; // edx
  char v20; // si
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rax
  float v28; // xmm2_4
  int v29; // eax
  int v30; // ebx
  _DWORD *v31; // rcx
  ISMTracing *v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // esi
  __int64 v35; // rax
  const char *v36; // r9
  int v37; // ebx
  _DWORD *v38; // rcx
  ISMTracing *v39; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 v41; // [rsp+70h] [rbp+28h] BYREF
  struct tagPOINT v42; // [rsp+78h] [rbp+30h] BYREF
  __int64 *v43; // [rsp+80h] [rbp+38h]
  LARGE_INTEGER Frequency; // [rsp+88h] [rbp+40h] BYREF

  v43 = a3;
  if ( *(_DWORD *)(a2 + 1136) != *(_DWORD *)(a1 + 928) && *(_DWORD *)(a2 + 1096) != 2
    || (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 && !*(_BYTE *)(a2 + 912)
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 152LL))(*a3)
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 160LL))(*a3)
    || (MPCHolographicInputManager::GetInstance(), *(_DWORD *)(v6 + 2272) != 1) && !*(_DWORD *)(a1 + 928) )
  {
    v7 = *a3;
    goto LABEL_84;
  }
  MPCSpatialGestureRecognizerHandler::FeedRecognizer(
    *(MPCSpatialGestureRecognizerHandler **)(a1 + 920),
    (struct InputInfo *)a2);
  v42 = 0LL;
  v42.x = (int)*(float *)(a2 + 1112);
  v42.y = (int)*(float *)(a2 + 1116);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 88LL))(*a3);
  v9 = v8;
  LODWORD(v41) = v8;
  v10 = a1 + 80;
  if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 )
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 1120);
  switch ( *(_DWORD *)(a2 + 1096) )
  {
    case 1:
      if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v8) )
      {
        ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), &v42, v33);
        v34 = v41;
        *(_BYTE *)(a1 + 988) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v41);
        MPCHolographicInputManager::GetInstance();
        if ( !*(_BYTE *)(v35 + 2008) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x59,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
            v36);
          JUMPOUT(0x180059898LL);
        }
        (*(void (__fastcall **)(_QWORD, struct tagPOINT))(**(_QWORD **)(v35 + 2024) + 64LL))(
          *(_QWORD *)(v35 + 2024),
          v42);
        v37 = *(_DWORD *)(a1 + 928);
        v38 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v38 && *v38 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCGestureHandler_InjectPress_(v39, v42.x, v42.y, v34, v37);
        }
      }
      goto LABEL_83;
    case 2:
      if ( *(_DWORD *)(a1 + 128) == 1 && *(_DWORD *)(a1 + 168) == 64 )
      {
        Frequency = *(LARGE_INTEGER *)(a1 + 224);
        ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), (struct tagPOINT *)&Frequency, v8);
        *(_BYTE *)(a1 + 988) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v41);
      }
      if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9)
        && *(_DWORD *)(a1 + 168) == 1 )
      {
        QueryPerformanceFrequency(&Frequency);
        v27 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 960);
        v28 = (float)(int)v27;
        if ( v27 < 0 )
          v28 = v28 + 1.8446744e19;
        *(float *)(a1 + 972) = *(float *)(a1 + 968) / (float)(v28 / (float)(int)Frequency.LowPart);
        v26 = v41;
      }
      ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 80), v26);
      if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 )
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 920) + 16LL) + 280LL))(*(_QWORD *)(*(_QWORD *)(a1 + 920) + 16LL));
        if ( v29 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2B1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v29);
          __debugbreak();
        }
      }
      v30 = *(_DWORD *)(a1 + 928);
      v31 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v31 && *v31 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCGestureHandler_InjectRelease_(v32, v42.x, v42.y, v41, v30);
      }
      goto LABEL_83;
    case 3:
      *(_DWORD *)(a2 + 1096) = 1;
      v42 = (struct tagPOINT)&v41;
      v23 = v43;
      v24 = *v43;
      v41 = v24;
      if ( v24 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 8LL))(v24, v8);
      MPCGestureHandler::DownLevelTo2D(a1, a2, &v41);
      *(_DWORD *)(a2 + 1096) = 2;
      v42 = (struct tagPOINT)&v41;
      v25 = *v23;
      v41 = v25;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      MPCGestureHandler::DownLevelTo2D(a1, a2, &v41);
      goto LABEL_83;
  }
  if ( *(_DWORD *)(a2 + 1096) != 4 )
  {
    switch ( *(_DWORD *)(a2 + 1096) )
    {
      case 5:
        if ( *(_DWORD *)(a2 + 628) )
        {
          v14 = (ManipulationInjector *)(a1 + 80);
          if ( *(_DWORD *)(a1 + 168) == 1 )
          {
            if ( ManipulationInjector::IsInContactForDeviceId(v14, v8) )
            {
              *(_DWORD *)(a1 + 976) = *(_DWORD *)(a2 + 1100);
              *(_DWORD *)(a1 + 980) = *(_DWORD *)(a2 + 1104);
            }
          }
          else
          {
            ManipulationInjector::StartPan(v14, &v42, v8);
            if ( *(_DWORD *)(a1 + 168) == 1 )
            {
              v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v43 + 88LL))(*v43);
              ManipulationInjector::InjectPan(
                (ManipulationInjector *)(a1 + 80),
                *(float *)(a2 + 1100),
                *(float *)(a2 + 1104),
                v15);
              *(_BYTE *)(a1 + 988) = ManipulationInjector::IsInContactForDeviceId(
                                       (ManipulationInjector *)(a1 + 80),
                                       v41);
            }
            v16 = *(_DWORD *)(a1 + 928);
            v17 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
            if ( v17 && *v17 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCGestureHandler_StartScroll_(v18, v42.x, v42.y, v41, v16);
            }
          }
        }
        if ( *(_BYTE *)(a1 + 988) )
        {
          *(_QWORD *)(a1 + 960) = *(_QWORD *)(a2 + 16);
          *(_DWORD *)(a1 + 968) = 0;
          *(_DWORD *)(a1 + 972) = 0;
        }
        break;
      case 6:
        if ( *(_DWORD *)(a2 + 628) )
        {
          if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 || *(_DWORD *)(a1 + 128) == 1 && *(_DWORD *)(a1 + 168) == 64 )
          {
            ManipulationInjector::StartZoom((ManipulationInjector *)(a1 + 80), &v42, 1, v8);
            *(_BYTE *)(a1 + 988) = (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) != 0;
            v11 = *(_DWORD *)(a1 + 928);
            v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
            if ( v12 && *v12 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCGestureHandler_StartZoom_(v13, v42.x, v42.y, v41, v11);
            }
          }
          else if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v8)
                 && ((*(_DWORD *)(a1 + 168) - 16) & 0xFFFFFFEF) == 0 )
          {
            *(_DWORD *)(a1 + 984) = *(_DWORD *)(a2 + 1108);
          }
        }
        break;
      case 7:
        ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), &v42, v8);
        *(_BYTE *)(a1 + 988) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v41);
        break;
    }
    goto LABEL_83;
  }
  if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v8) && !*(_BYTE *)(a2 + 1140) )
  {
    if ( *(_BYTE *)(a1 + 94) )
    {
      if ( *(_BYTE *)(a1 + 93) )
      {
        DbgPrint("Hover pt: %d,%d\n", v42.x, v42.y);
        v19 = v41;
      }
      if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 )
      {
        if ( *(_DWORD *)(a1 + 168) == 128 )
        {
          if ( *(_DWORD *)(a1 + 792) == v19 )
          {
            v20 = 1;
            ManipulationInjector::UpdateContact((ManipulationInjector *)(a1 + 80), v42, 1, v19);
            ManipulationInjector::InjectAndScrub((ManipulationInjector *)(a1 + 80));
            goto LABEL_50;
          }
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ManipulationInjector::StartManipulation)(
            a1 + 80,
            128LL,
            v42,
            v19);
        }
      }
    }
    v20 = 1;
LABEL_50:
    v21 = 0LL;
    if ( *(_DWORD *)(a1 + 128) )
    {
      v22 = v41;
      do
      {
        if ( *(_DWORD *)(v10 + 4 * v21 + 712) == v22 )
        {
          if ( *(_DWORD *)(152LL * (unsigned int)v21 + v10 + 124) == 2 )
            goto LABEL_57;
          v22 = v41;
        }
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < *(_DWORD *)(a1 + 128) );
    }
    v20 = 0;
LABEL_57:
    *(_BYTE *)(a1 + 988) = v20;
  }
LABEL_83:
  v7 = *v43;
LABEL_84:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
