/*
 * XREFs of ?SetChosenLayoutType@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x180030060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x180098274 (-SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@.c)
 */

__int64 __fastcall ContentManagement::ContentManagementService::SetChosenLayoutType(
        ContentManagement::ContentManagementService *this,
        CreativeFramework::TargetedContentLayoutHelpers::Settings *a2,
        HSTRING a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CreativeFramework::TargetedContentLayoutHelpers::Settings::SetChosenLayoutType(a2, a3, a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x239,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
