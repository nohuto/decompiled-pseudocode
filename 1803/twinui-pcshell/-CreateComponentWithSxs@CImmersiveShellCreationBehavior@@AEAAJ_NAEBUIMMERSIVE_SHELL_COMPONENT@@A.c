/*
 * XREFs of ?CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NAEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x18018AC80
 * Callers:
 *     ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18018ABB0 (-CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18018AF30 (-CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018B048 (-EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponentWithSxs(
        void ***this,
        __int64 a2,
        const struct IMMERSIVE_SHELL_COMPONENT *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  void **v12; // rbx
  int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = a5;
  *a5 = 0LL;
  v9 = CImmersiveShellCreationBehavior::EnsureComponentCreators((CImmersiveShellCreationBehavior *)this);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
    {
      v12 = this[9];
    }
    else if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
    {
      v12 = this[10];
    }
    else if ( (*((_BYTE *)a3 + 8) & 8) != 0 )
    {
      v12 = this[11];
    }
    else
    {
      v12 = this[12];
    }
    a5 = v12;
    if ( v12 )
      (*((void (__fastcall **)(void **))*v12 + 1))(v12);
    v13 = (*((__int64 (__fastcall **)(void **, _QWORD, const struct _GUID *, void **))*v12 + 3))(
            v12,
            *(_QWORD *)a3,
            a4,
            v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    if ( v13 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22B,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
