/*
 * XREFs of ?PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKK_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@@Z @ 0x180091680
 * Callers:
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180094160 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800946C8 (-SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXPEAUIPerceptionTimestamp@Percept.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180067B88 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?SendDeviceUpdate@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x180093E7C (-SendDeviceUpdate@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spatia.c)
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x1800958BC (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@_JAEBUMatrix4x4@Numerics@Foundation@6@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800C4A3C (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall SpatialInputControllerCollection::PrepareAndSendInputInfo(
        SpatialInputControllerCollection *this,
        struct SpatialInteractionDevices::SpatialInteractionController *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a7)
{
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // edi
  int v13; // eax
  bool v14; // [rsp+60h] [rbp-A0h] BYREF
  bool v15; // [rsp+61h] [rbp-9Fh] BYREF
  bool v16; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v17; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE v18[2848]; // [rsp+68h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+BB8h] [rbp+AB8h]

  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v10 = SpatialInteractionDevices::SpatialInteractionController::Parse(
          a2,
          a3,
          a4,
          a7,
          a6,
          (SpatialInputControllerCollection *)((char *)this + 2956),
          (SpatialInputControllerCollection *)((char *)this + 3020),
          &v16,
          (enum MPCAugmentedInputGestureType *)&v17,
          &v15,
          &v14);
  if ( v10 < 0 )
  {
    v11 = 543LL;
LABEL_15:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v10);
    return;
  }
  if ( v14 )
    SpatialInputControllerCollection::SendDeviceUpdate(this, a2);
  v12 = v17;
  if ( v15 || !a3 || *((_BYTE *)a2 + 800) || v17 != 3 && v17 != 6 )
  {
    memset(v18, 0, sizeof(v18));
    if ( !*((_BYTE *)a2 + 352) )
    {
      v12 = 1;
      *((_BYTE *)a2 + 352) = 1;
    }
    v13 = MPCInputInfoHelper::PopulateAugmentedInput(
            v12,
            a5,
            *((_DWORD *)a2 + 87),
            v16,
            (__int64)a2 + 476,
            (__int64)a2 + 356,
            (__int64)v18);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x250,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x18009183DLL);
    }
    v10 = SpatialInputControllerCollection::QueueInputReport(this, (struct InputInfo *)v18);
    if ( v10 < 0 )
    {
      v11 = 597LL;
      goto LABEL_15;
    }
  }
}
