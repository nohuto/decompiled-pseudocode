/*
 * XREFs of ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x18009DFE4 (-GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z.c)
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x18009E0E8 (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x18009E370 (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x18009E6AC (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A1630 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x1800D3E08 (-IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ?FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z @ 0x1800D3FB4 (-FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800D40AC (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x1800D6758 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800D68EC (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 *     ?GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJXZ @ 0x1800D8950 (-GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJX.c)
 *     ?SetErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXII@Z @ 0x1800D917C (-SetErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXII.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EndInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  SpatialInteractionDevices *v3; // r14
  int v4; // eax
  bool *v5; // r8
  int HapticsCutoffTimeInSeconds; // ebx
  __int64 v7; // rdx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 *v10; // r8
  unsigned __int16 *v11; // r9
  char v12; // r13
  char v13; // r12
  char v14; // si
  _DWORD *v15; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v16; // rcx
  int v17; // esi
  const wchar_t *StringRawBuffer; // r14
  _DWORD *v19; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v20; // rcx
  __int128 v22; // [rsp+28h] [rbp-40h]
  __int128 v23; // [rsp+40h] [rbp-28h] BYREF
  unsigned int *v24; // [rsp+50h] [rbp-18h]
  char v25; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  unsigned __int8 v27; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+50h] BYREF
  int v29; // [rsp+C0h] [rbp+58h] BYREF
  int v30; // [rsp+C8h] [rbp+60h] BYREF

  v29 = 0;
  v28 = 0;
  *(_QWORD *)&v22 = this;
  *((_QWORD *)&v22 + 1) = &v29;
  v23 = v22;
  v24 = &v28;
  v25 = 1;
  v3 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 448);
  v4 = SpatialInteractionDevices::Internal::InitializeValueCaps(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 448),
         a2);
  HapticsCutoffTimeInSeconds = v4;
  v29 = v4;
  if ( v4 < 0 )
  {
    v7 = 359LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_44;
  }
  *((_DWORD *)this + 57) = *((_DWORD *)this + 172);
  v4 = SpatialInteractionDevices::SupportsAnalogTrigger(
         v3,
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 768),
         v5);
  HapticsCutoffTimeInSeconds = v4;
  v29 = v4;
  if ( v4 < 0 )
  {
    v7 = 365LL;
    goto LABEL_5;
  }
  if ( *((_BYTE *)this + 768) )
    *((_DWORD *)this + 57) |= 8u;
  v9 = *((_QWORD *)this + 103);
  if ( v9 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 103),
      1);
    CoCreateGuid((GUID *)v9);
    *(_QWORD *)(v9 + 24) = GetTickCount64();
    *(_WORD *)(v9 + 16) = *((_WORD *)v3 + 23);
    *(_WORD *)(v9 + 18) = *((_WORD *)v3 + 22);
    *(_WORD *)(v9 + 20) = *((_WORD *)v3 + 24);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureInitializationRetryParameters(v8);
  HapticsCutoffTimeInSeconds = 0;
  v12 = 1;
  v13 = 1;
  v14 = 1;
  while ( ++v28 <= Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationAttemptsCount
       && (v12 || v13 || v14) )
  {
    if ( *((_BYTE *)this + 100) )
      break;
    if ( v28 > 1 )
      Sleep(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationWaitBeforeRetryMilliseconds);
    if ( v12 )
    {
      HapticsCutoffTimeInSeconds = SpatialInteractionDevices::SupportsContinousBuzz(
                                     v3,
                                     (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 940),
                                     (bool *)this + 936,
                                     v11);
      if ( HapticsCutoffTimeInSeconds >= 0 )
      {
        *((_BYTE *)this + 285) = *((_BYTE *)this + 940);
        v27 = 0;
        HapticsCutoffTimeInSeconds = SpatialInteractionDevices::GetHapticsCutoffTimeInSeconds(
                                       v3,
                                       (struct SpatialInteractionDevices::HID_HANDLE *)&v27,
                                       v10);
        if ( HapticsCutoffTimeInSeconds >= 0 )
        {
          *((_WORD *)this + 469) = 1000 * v27;
          v12 = 0;
          goto LABEL_21;
        }
      }
    }
    else
    {
LABEL_21:
      if ( !v13 )
        goto LABEL_29;
      *((_DWORD *)this + 8) = 0;
      HapticsCutoffTimeInSeconds = SpatialInteractionDevices::GetHandedness(
                                     v3,
                                     (struct SpatialInteractionDevices::HID_HANDLE *)&v30,
                                     (enum SpatialInteractionDevices::Handedness *)v10);
      if ( HapticsCutoffTimeInSeconds < 0 )
      {
        v15 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
        if ( v15 && *v15 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::IgnoredError_(
            v16,
            HapticsCutoffTimeInSeconds,
            *((_DWORD *)this + 2),
            L"Handedness");
        }
      }
      else
      {
        *((_DWORD *)this + 8) = v30;
      }
      if ( HapticsCutoffTimeInSeconds >= 0 )
      {
        v13 = 0;
        *((_BYTE *)this + 286) = *((_BYTE *)this + 32);
LABEL_29:
        if ( v14 )
        {
          HapticsCutoffTimeInSeconds = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::GetPosesOffsets(this);
          if ( HapticsCutoffTimeInSeconds >= 0 )
            v14 = 0;
        }
      }
    }
  }
  if ( v28 > 1 )
  {
    v17 = v28 - 1;
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 3), 0LL);
    v19 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v19 )
    {
      if ( *v19 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::FeaturesRead_(
          v20,
          StringRawBuffer,
          HapticsCutoffTimeInSeconds,
          v17);
      }
    }
  }
  if ( HapticsCutoffTimeInSeconds < 0 )
  {
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetErrorStatus(this, 0x8300000A, 1u);
    goto LABEL_39;
  }
  if ( (*((_DWORD *)this + 57) & 8) != 0 )
  {
    HapticsCutoffTimeInSeconds = v29;
  }
  else
  {
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetErrorStatus(this, 0x8300000A, 2u);
    HapticsCutoffTimeInSeconds = -2147023728;
LABEL_39:
    v29 = HapticsCutoffTimeInSeconds;
  }
LABEL_44:
  v25 = 0;
  lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()(&v23);
  return (unsigned int)HapticsCutoffTimeInSeconds;
}
