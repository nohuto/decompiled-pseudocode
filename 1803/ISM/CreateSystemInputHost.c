/*
 * XREFs of CreateSystemInputHost @ 0x180003DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180003EC8 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateSystemInputHost(void *a1, __int64 a2)
{
  const char *v4; // r9
  int v5; // ebx
  struct OneCoreUAPInputHost *v6; // rcx
  OneCoreUAPInputHost *v7; // rax
  OneCoreUAPInputHost *v8; // rcx
  OneCoreUAPInputHost *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  if ( !a2 )
    return (unsigned int)-2147024809;
  v6 = OneCoreUAPInputHost::s_pInputHost;
  if ( OneCoreUAPInputHost::s_pInputHost )
    return (unsigned int)(**(__int64 (__fastcall ***)(struct OneCoreUAPInputHost *, GUID *, __int64))v6)(
                           v6,
                           &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
                           a2);
  if ( ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v4);
    JUMPOUT(0x180003EC5LL);
  }
  ISMTestMode::s_instance = (struct ISMTestMode *)operator new(1uLL);
  *(_BYTE *)ISMTestMode::s_instance = 0;
  v7 = (OneCoreUAPInputHost *)malloc(0x60uLL);
  v9 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x60uLL);
    v7 = OneCoreUAPInputHost::OneCoreUAPInputHost(v9);
  }
  OneCoreUAPInputHost::s_pInputHost = v7;
  if ( !v7 )
  {
    v5 = -2147024882;
    goto LABEL_11;
  }
  v5 = OneCoreUAPInputHost::Initialize(v8, a1);
  if ( v5 >= 0 )
  {
    v6 = OneCoreUAPInputHost::s_pInputHost;
    return (unsigned int)(**(__int64 (__fastcall ***)(struct OneCoreUAPInputHost *, GUID *, __int64))v6)(
                           v6,
                           &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
                           a2);
  }
  v7 = OneCoreUAPInputHost::s_pInputHost;
LABEL_11:
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 2) + 24LL))((__int64)v7 + 16, 1LL);
  return (unsigned int)v5;
}
