/*
 * XREFs of ?SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x18008AE84
 * Callers:
 *     ?SetChosenLayoutType@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18002CE70 (-SetChosenLayoutType@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x18008AD60 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetChosenLayoutType(
        CreativeFramework::TargetedContentLayoutHelpers::Settings *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType(
      this,
      (const WCHAR *)&stru_180134080,
      a2,
      a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x44,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolve"
                                    "r\\layoutresolver.cpp",
                           v4);
  }
  return result;
}
