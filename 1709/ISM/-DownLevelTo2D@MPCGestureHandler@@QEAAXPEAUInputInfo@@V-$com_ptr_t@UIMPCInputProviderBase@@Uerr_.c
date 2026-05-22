/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800621D4
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x180061684 (-MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x180061760 (-MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z @ 0x18006183C (-MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z @ 0x180061918 (-MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18006466C (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C0B00 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800C0B60 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C0BC0 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C0E28 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C167C (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C197C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C22D8 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C2390 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCGestureHandler::DownLevelTo2D(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // r13d
  int HighPart; // ebx
  unsigned int v8; // esi
  int v9; // eax
  int v10; // r11d
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  ManipulationInjector *v13; // rcx
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  __int64 v17; // rbx
  char v18; // r15
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rax
  float v22; // xmm2_4
  _DWORD *v23; // rcx
  ISMTracing *v24; // rcx
  _DWORD *v25; // rcx
  ISMTracing *v26; // rcx
  LARGE_INTEGER Frequency; // [rsp+80h] [rbp+40h] BYREF
  struct tagPOINT v28; // [rsp+88h] [rbp+48h] BYREF
  _QWORD *v29; // [rsp+90h] [rbp+50h]

  v29 = a3;
  if ( *(_DWORD *)(a2 + 1312) == *(_DWORD *)(a1 + 936)
    && ((*(_DWORD *)(a1 + 176) & 0xFFFFFF7F) != 0 || *(_BYTE *)(a2 + 1088))
    && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 152LL))(*a3)
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 160LL))(*a3)) )
  {
    MPCSpatialGestureRecognizerHandler::FeedRecognizer(
      *(MPCSpatialGestureRecognizerHandler **)(a1 + 928),
      (struct InputInfo *)a2);
    Frequency.QuadPart = 0LL;
    v6 = (int)*(float *)(a2 + 1288);
    Frequency.LowPart = v6;
    HighPart = (int)*(float *)(a2 + 1292);
    Frequency.HighPart = HighPart;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v9 = *(_DWORD *)(a1 + 176);
    if ( (v9 & 0xFFFFFF7F) == 0 )
      *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 1296);
    switch ( *(_DWORD *)(a2 + 1272) )
    {
      case 1:
        if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8) )
        {
          ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 88), (struct tagPOINT *)&Frequency, v8);
          *(_BYTE *)(a1 + 996) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8);
          v25 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
          if ( v25 )
          {
            if ( *v25 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCGestureHandler_InjectPress_(v26, v6, Frequency.HighPart, v8, *(_DWORD *)(a2 + 672));
            }
          }
        }
        break;
      case 2:
        if ( *(_DWORD *)(a1 + 136) == 1 && v9 == 64 )
        {
          v28 = *(struct tagPOINT *)(a1 + 232);
          ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 88), &v28, v8);
          *(_BYTE *)(a1 + 996) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8);
          HighPart = Frequency.HighPart;
        }
        if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8)
          && *(_DWORD *)(a1 + 176) == 1 )
        {
          QueryPerformanceFrequency(&Frequency);
          v21 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 968);
          v22 = (float)(int)v21;
          if ( v21 < 0 )
            v22 = v22 + 1.8446744e19;
          *(float *)(a1 + 980) = *(float *)(a1 + 976) / (float)(v22 / (float)(int)Frequency.LowPart);
        }
        ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 88), v8);
        v23 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v23 && *v23 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCGestureHandler_InjectRelease_(v24, v6, HighPart, v8, *(_DWORD *)(a2 + 672));
        }
        break;
      case 3:
        if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8) )
        {
          ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 88), (struct tagPOINT *)&Frequency, v8);
          *(_BYTE *)(a1 + 996) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8);
          ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 88), v20);
        }
        break;
      case 4:
        v17 = a1 + 88;
        if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8)
          && !*(_BYTE *)(a2 + 1316) )
        {
          v18 = 1;
          if ( *(_BYTE *)(a1 + 102) )
          {
            if ( *(_BYTE *)(a1 + 101) )
              DbgPrint("Hover pt: %d,%d\n", v6, Frequency.HighPart);
            if ( (*(_DWORD *)(a1 + 176) & 0xFFFFFF7F) == 0 )
            {
              if ( *(_DWORD *)(a1 + 176) == 128 )
              {
                if ( *(_DWORD *)(a1 + 800) == v8 )
                {
                  ManipulationInjector::UpdateContact(
                    (ManipulationInjector *)(a1 + 88),
                    (struct tagPOINT)Frequency,
                    1,
                    v8);
                  ManipulationInjector::InjectAndScrub((ManipulationInjector *)(a1 + 88));
                }
              }
              else
              {
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ManipulationInjector::StartManipulation)(
                  a1 + 88,
                  128LL,
                  (LARGE_INTEGER)Frequency.QuadPart,
                  v8);
              }
            }
          }
          v19 = 0LL;
          if ( *(_DWORD *)(a1 + 136) )
          {
            while ( *(_DWORD *)(v17 + 4 * v19 + 712) != v8 || *(_DWORD *)(152LL * (unsigned int)v19 + v17 + 124) != 2 )
            {
              v19 = (unsigned int)(v19 + 1);
              if ( (unsigned int)v19 >= *(_DWORD *)(a1 + 136) )
                goto LABEL_51;
            }
          }
          else
          {
LABEL_51:
            v18 = 0;
          }
          *(_BYTE *)(a1 + 996) = v18;
        }
        break;
      case 5:
        if ( *(_DWORD *)(a2 + 804) )
        {
          v13 = (ManipulationInjector *)(a1 + 88);
          if ( v9 == 1 )
          {
            if ( ManipulationInjector::IsInContactForDeviceId(v13, v8) )
            {
              *(_DWORD *)(a1 + 984) = *(_DWORD *)(a2 + 1276);
              *(_DWORD *)(a1 + 988) = *(_DWORD *)(a2 + 1280);
            }
          }
          else
          {
            ManipulationInjector::StartPan(v13, (struct tagPOINT *)&Frequency, v8);
            if ( *(_DWORD *)(a1 + 176) == 1 )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
              ManipulationInjector::InjectPan(
                (ManipulationInjector *)(a1 + 88),
                *(float *)(a2 + 1276),
                *(float *)(a2 + 1280),
                v14);
              *(_BYTE *)(a1 + 996) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8);
            }
            v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
            if ( v15 && *v15 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCGestureHandler_StartScroll_(v16, v6, HighPart, v8, *(_DWORD *)(a2 + 672));
            }
          }
        }
        if ( *(_BYTE *)(a1 + 996) )
        {
          *(_QWORD *)(a1 + 968) = *(_QWORD *)(a2 + 16);
          *(_DWORD *)(a1 + 976) = 0;
          *(_DWORD *)(a1 + 980) = 0;
        }
        break;
      case 6:
        if ( *(_DWORD *)(a2 + 804) )
        {
          if ( (v9 & 0xFFFFFF7F) == 0 || *(_DWORD *)(a1 + 136) == 1 && v9 == 64 )
          {
            ManipulationInjector::StartZoom((ManipulationInjector *)(a1 + 88), (struct tagPOINT *)&Frequency, 1, v8);
            *(_BYTE *)(a1 + 996) = (*(_DWORD *)(a1 + 176) & 0xFFFFFF7F) != 0;
            v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
            if ( v11 && *v11 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCGestureHandler_StartZoom_(v12, v6, HighPart, v8, *(_DWORD *)(a2 + 672));
            }
          }
          else if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8)
                 && ((v10 - 16) & 0xFFFFFFEF) == 0 )
          {
            *(_DWORD *)(a1 + 992) = *(_DWORD *)(a2 + 1284);
          }
        }
        break;
      case 7:
        ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 88), (struct tagPOINT *)&Frequency, v8);
        *(_BYTE *)(a1 + 996) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 88), v8);
        break;
    }
  }
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
}
