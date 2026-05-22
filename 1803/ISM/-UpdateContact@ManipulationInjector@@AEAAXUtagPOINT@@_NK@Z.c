/*
 * XREFs of ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800AE044
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800AD3EC (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800AD66C (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::UpdateContact(
        ManipulationInjector *this,
        struct tagPOINT a2,
        char a3,
        const char *a4)
{
  unsigned int v4; // r10d
  ManipulationInjector *v6; // r11
  _DWORD *v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v6 = this;
  if ( !*((_DWORD *)this + 12) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x496,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
    __debugbreak();
  }
  v7 = (_DWORD *)((char *)this + 712);
  if ( !a3 || *v7 == (_DWORD)a4 )
  {
    if ( !*((_DWORD *)this + 12) )
    {
LABEL_13:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4B5,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      JUMPOUT(0x1800AE0F8LL);
    }
    while ( *v7 != (_DWORD)a4 )
    {
      ++v4;
      ++v7;
      if ( v4 >= *((_DWORD *)this + 12) )
        goto LABEL_13;
    }
    v8 = 152LL * v4;
    *(struct tagPOINT *)((char *)this + v8 + 144) = a2;
    if ( *(_DWORD *)this == 3 )
    {
      v9 = (_QWORD *)ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v11, *(_QWORD *)&a2);
      *(_QWORD *)((char *)v6 + v8 + 152) = *v9;
    }
    *(_DWORD *)((char *)v6 + v8 + 124) = a3 != 0 ? 2 : 131078;
  }
}
