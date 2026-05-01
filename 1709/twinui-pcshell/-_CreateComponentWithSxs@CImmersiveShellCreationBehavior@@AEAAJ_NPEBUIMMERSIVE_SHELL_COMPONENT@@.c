/*
 * XREFs of ?_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DECBC
 * Callers:
 *     ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800DEE00 (-CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x1800DEFD0 (-CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800DEAA0 (-_EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::_CreateComponentWithSxs(
        LPVOID *this,
        __int64 a2,
        const struct IMMERSIVE_SHELL_COMPONENT *a3,
        const struct _GUID *a4,
        void **a5)
{
  int v8; // eax
  unsigned int v9; // edi
  LPVOID v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a5 = 0LL;
  v8 = CImmersiveShellCreationBehavior::_EnsureComponentCreators(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x225,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
  {
    v11 = this[10];
  }
  else if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    v11 = this[11];
  }
  else if ( (*((_BYTE *)a3 + 8) & 8) != 0 )
  {
    v11 = this[12];
  }
  else
  {
    v11 = this[13];
  }
  if ( v11 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, const struct _GUID *, void **))(*(_QWORD *)v11 + 24LL))(
          v11,
          *(_QWORD *)a3,
          a4,
          a5);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x228,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    return v9;
  }
  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
