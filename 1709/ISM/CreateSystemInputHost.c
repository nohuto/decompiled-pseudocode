/*
 * XREFs of CreateSystemInputHost @ 0x180003FD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180004148 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateSystemInputHost(void *a1, __int64 a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  unsigned int v6; // ebx
  struct OneCoreUAPInputHost *v7; // rcx
  OneCoreUAPInputHost *v8; // rax
  OneCoreUAPInputHost *v9; // rcx
  OneCoreUAPInputHost *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  if ( !a2 )
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 129, 87);
    return v6;
  }
  v7 = OneCoreUAPInputHost::s_pInputHost;
  if ( !OneCoreUAPInputHost::s_pInputHost )
  {
    if ( ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x16,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        v5);
      JUMPOUT(0x180004144LL);
    }
    ISMTestMode::s_instance = (struct ISMTestMode *)operator new(1uLL);
    *(_BYTE *)ISMTestMode::s_instance = 0;
    v8 = (OneCoreUAPInputHost *)malloc(0x60uLL);
    v10 = v8;
    if ( v8 )
    {
      memset(v8, 0, 0x60uLL);
      v8 = OneCoreUAPInputHost::OneCoreUAPInputHost(v10);
    }
    OneCoreUAPInputHost::s_pInputHost = v8;
    if ( !v8 )
    {
      v6 = -2147024882;
LABEL_12:
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 2) + 24LL))((__int64)v8 + 16, 1LL);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 150, v6);
      return v6;
    }
    v6 = OneCoreUAPInputHost::Initialize(v9, a1);
    if ( (v6 & 0x80000000) != 0 )
    {
      v8 = OneCoreUAPInputHost::s_pInputHost;
      goto LABEL_12;
    }
    v7 = OneCoreUAPInputHost::s_pInputHost;
  }
  v11 = (**(__int64 (__fastcall ***)(struct OneCoreUAPInputHost *, GUID *, __int64))v7)(
          v7,
          &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
          a2);
  v6 = v11;
  if ( v11 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 155, v11);
  return v6;
}
