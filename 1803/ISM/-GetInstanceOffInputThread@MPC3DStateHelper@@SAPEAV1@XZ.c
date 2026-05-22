/*
 * XREFs of ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000771C
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x180005280 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@@YAHXZ @ 0x1800053B0 (-Unregister3DCompositor@@YAHXZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180060794 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPC3DStateHelper *MPC3DStateHelper::GetInstanceOffInputThread(void)
{
  DWORD v0; // eax
  const char *v1; // r9
  struct MPC3DStateHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = WaitForSingleObjectEx(MPC3DStateHelper::s_isInstanceCreatedEvent, 0xFFFFFFFF, 0);
  if ( v0 != 258 && v0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x967,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v1);
    __debugbreak();
  }
  result = MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v1);
    JUMPOUT(0x18000777CLL);
  }
  return result;
}
