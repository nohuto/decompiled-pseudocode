/*
 * XREFs of _anonymous_namespace_::GetPoseSubKey @ 0x180074508
 * Callers:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18007809C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

const wchar_t *__fastcall anonymous_namespace_::GetPoseSubKey(char *a1)
{
  char *v2; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(_DWORD)a1 )
    return L"HoldingPose";
  if ( (_DWORD)a1 != 1 )
  {
    LODWORD(v2) = (_DWORD)a1;
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      (void *)0x72,
      (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      "Unknown pose type %d",
      v2);
    __debugbreak();
  }
  return L"PointingPose";
}
