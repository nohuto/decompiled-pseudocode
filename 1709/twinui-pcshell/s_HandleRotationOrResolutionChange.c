/*
 * XREFs of s_HandleRotationOrResolutionChange @ 0x180185F90
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall s_HandleRotationOrResolutionChange(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        char a3)
{
  char v3; // bl
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (a3 & 5) != 0 )
  {
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*a2)[6])(a2, &v9);
    if ( v6 >= 0 )
    {
      if ( v9 && (unsigned int)SHIsSameObject(*(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 64), a2) )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 136LL))(*(_QWORD *)(a1 + 80));
        return 1;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18B,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  return v3;
}
