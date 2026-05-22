/*
 * XREFs of ?CreateTimeProvider@SpatialInteractionController@SpatialInteractionDevices@@CAJPEAPEAUIHapticsTimerProvider@2@@Z @ 0x1800C6C48
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x1800C685C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@?A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteractionDevices@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractionDevices@@@Z @ 0x1800C75C0 (--$MakeAndInitialize@VSimpleTimeProvider@-A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteraction.c)
 */

__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::CreateTimeProvider(
        struct SpatialInteractionDevices::IHapticsTimerProvider **a1)
{
  unsigned int v1; // eax
  int v3; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = Microsoft::WRL::Details::MakeAndInitialize<`anonymous namespace'::SimpleTimeProvider,SpatialInteractionDevices::IHapticsTimerProvider,>(a1);
  v3 = wil::verify_hresult<long>(v1);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5DB,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
