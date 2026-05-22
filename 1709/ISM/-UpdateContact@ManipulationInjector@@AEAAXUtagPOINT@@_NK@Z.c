/*
 * XREFs of ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C22D8
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800621D4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C167C (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800C190C (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::UpdateContact(
        ManipulationInjector *this,
        struct tagPOINT a2,
        char a3,
        const char *a4)
{
  __int64 v4; // rax
  char v5; // r11
  ManipulationInjector *v6; // r10
  _DWORD *v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = this;
  if ( !*((_DWORD *)this + 12) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x495,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
    __debugbreak();
  }
  if ( !a3 || *((_DWORD *)this + 178) == (_DWORD)a4 )
  {
    if ( !*((_DWORD *)this + 12) )
    {
LABEL_14:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4B4,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      JUMPOUT(0x1800C238CLL);
    }
    v7 = (_DWORD *)((char *)this + 712);
    while ( *v7 != (_DWORD)a4 )
    {
      v4 = (unsigned int)(v4 + 1);
      ++v7;
      if ( (unsigned int)v4 >= *((_DWORD *)v6 + 12) )
        goto LABEL_14;
    }
    v8 = 152 * v4;
    *((struct tagPOINT *)v6 + 19 * v4 + 18) = a2;
    if ( *(_DWORD *)v6 == 3 )
    {
      v9 = (_QWORD *)ManipulationInjector::DeskToDigiPt(v6, (struct tagPOINT)&v11, *(_QWORD *)&a2);
      *(_QWORD *)((char *)v6 + v8 + 152) = *v9;
    }
    *(_DWORD *)((char *)v6 + v8 + 124) = v5 != 0 ? 2 : 131078;
  }
}
