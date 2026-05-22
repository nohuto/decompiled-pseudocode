/*
 * XREFs of ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510
 * Callers:
 *     ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0 (-FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x180079204 (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x18007C3C8 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x1800C367C (-IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ?TelemetryFeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z @ 0x1800C383C (-TelemetryFeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800C3930 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     _lambda_0fddcef448335abe1f4d73902a9dcee8_::operator() @ 0x1800C4800 (_lambda_0fddcef448335abe1f4d73902a9dcee8_--operator().c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x1800C4994 (-EnsureInitializationRetryParameters@SpatialInteractionController@SpatialInteractionDevices@@AEA.c)
 *     ?GetPosesOffsets@SpatialInteractionController@SpatialInteractionDevices@@AEAAJXZ @ 0x1800C679C (-GetPosesOffsets@SpatialInteractionController@SpatialInteractionDevices@@AEAAJXZ.c)
 *     ??1DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ @ 0x1800C6CAC (--1DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAV23@@Z @ 0x1800C6CFC (-EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::EndPrepareParsing(
        SpatialInteractionDevices::SpatialInteractionController *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  int v3; // eax
  bool *v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rdx
  SpatialInteractionDevices::SpatialInteractionController *v7; // rcx
  __int64 v8; // rdi
  int PosesOffsets; // edi
  char v10; // si
  char v11; // r15
  char v12; // r14
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v18; // rcx
  unsigned int v19; // eax
  int v20; // esi
  const wchar_t *StringRawBuffer; // rbx
  _DWORD *v22; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v23; // rcx
  _QWORD v25[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v26; // [rsp+30h] [rbp-40h]
  unsigned int *v27; // [rsp+40h] [rbp-30h]
  __int128 v28; // [rsp+48h] [rbp-28h] BYREF
  unsigned int *v29; // [rsp+58h] [rbp-18h]
  char v30; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  char v32; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+B8h] [rbp+48h] BYREF
  int v34; // [rsp+C0h] [rbp+50h] BYREF
  int v35; // [rsp+C8h] [rbp+58h] BYREF

  v25[1] = -2LL;
  v34 = 0;
  v33 = 0;
  *(_QWORD *)&v26 = this;
  *((_QWORD *)&v26 + 1) = &v34;
  v27 = &v33;
  v28 = v26;
  v29 = &v33;
  v30 = 1;
  v3 = SpatialInteractionDevices::Internal::InitializeValueCaps(this, a2);
  v5 = v3;
  v34 = v3;
  if ( v3 < 0 )
  {
    v6 = 293LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_48;
  }
  *((_DWORD *)this + 90) = *((_DWORD *)this + 70);
  v3 = SpatialInteractionDevices::SupportsAnalogTrigger(
         this,
         (SpatialInteractionDevices::SpatialInteractionController *)((char *)this + 768),
         v4);
  v5 = v3;
  v34 = v3;
  if ( v3 < 0 )
  {
    v6 = 299LL;
    goto LABEL_5;
  }
  if ( *((_BYTE *)this + 768) )
    *((_DWORD *)this + 90) |= 8u;
  v8 = *((_QWORD *)this + 105);
  if ( v8 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 105),
      1);
    CoCreateGuid((GUID *)v8);
    *(_QWORD *)(v8 + 24) = GetTickCount64();
    *(_WORD *)(v8 + 16) = *((_WORD *)this + 45);
    *(_WORD *)(v8 + 18) = *((_WORD *)this + 44);
    *(_WORD *)(v8 + 20) = *((_WORD *)this + 46);
  }
  SpatialInteractionDevices::SpatialInteractionController::EnsureInitializationRetryParameters(v7);
  PosesOffsets = 0;
  v10 = 1;
  v11 = 1;
  v12 = 1;
  while ( 1 )
  {
    v19 = ++v33;
    if ( v33 > SpatialInteractionDevices::SpatialInteractionController::s_InitializationAttemptsCount
      || !v10 && !v11 && !v12 )
    {
      break;
    }
    if ( *((_BYTE *)this + 1088) )
    {
      v19 = v33;
      break;
    }
    if ( v33 > 1 )
      Sleep(SpatialInteractionDevices::SpatialInteractionController::s_InitializationWaitBeforeRetryMilliseconds);
    v25[0] = 0LL;
    PosesOffsets = SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::EnsureDevice(
                     (SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *)v25,
                     this);
    if ( PosesOffsets >= 0 )
    {
      if ( v10 )
      {
        PosesOffsets = 0;
        *((_BYTE *)this + 409) = 0;
        v13 = *((_QWORD *)this + 106);
        if ( v13 )
        {
          v32 = 0;
          PosesOffsets = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 72LL))(v13, &v32);
          if ( PosesOffsets < 0 )
          {
            v14 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
            if ( v14 && *v14 )
            {
              SpatialInteractionDevices::SpatialInteractionTrace::Instance();
              SpatialInteractionDevices::SpatialInteractionTrace::IgnoredError_(
                v15,
                PosesOffsets,
                *((_DWORD *)this + 86),
                L"ContinuousBuzz");
            }
          }
          else
          {
            *((_BYTE *)this + 409) = v32 != 0;
          }
        }
        if ( PosesOffsets < 0 )
          goto LABEL_39;
        v10 = 0;
      }
      if ( !v11 )
        goto LABEL_36;
      PosesOffsets = 0;
      *((_DWORD *)this + 196) = 0;
      v16 = *((_QWORD *)this + 106);
      if ( v16 )
      {
        PosesOffsets = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 120LL))(v16, &v35);
        if ( PosesOffsets < 0 )
        {
          v17 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
          if ( v17 && *v17 )
          {
            SpatialInteractionDevices::SpatialInteractionTrace::Instance();
            SpatialInteractionDevices::SpatialInteractionTrace::IgnoredError_(
              v18,
              PosesOffsets,
              *((_DWORD *)this + 86),
              L"Handedness");
          }
        }
        else
        {
          *((_DWORD *)this + 196) = v35;
        }
      }
      if ( PosesOffsets >= 0 )
      {
        v11 = 0;
        *((_BYTE *)this + 410) = *((_BYTE *)this + 784);
LABEL_36:
        if ( v12 )
        {
          PosesOffsets = SpatialInteractionDevices::SpatialInteractionController::GetPosesOffsets(this);
          if ( PosesOffsets >= 0 )
            v12 = 0;
        }
      }
    }
LABEL_39:
    SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::~DeviceHandleScope((SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *)v25);
  }
  if ( v19 > 1 )
  {
    v20 = v19 - 1;
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 99), 0LL);
    v22 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v22 )
    {
      if ( *v22 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::TelemetryFeaturesRead_(
          v23,
          StringRawBuffer,
          PosesOffsets,
          v20);
      }
    }
  }
  v5 = 0;
LABEL_48:
  v30 = 0;
  lambda_0fddcef448335abe1f4d73902a9dcee8_::operator()(&v28);
  return v5;
}
