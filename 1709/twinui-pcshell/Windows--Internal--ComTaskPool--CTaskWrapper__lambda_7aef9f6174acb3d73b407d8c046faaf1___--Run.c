/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___::Run @ 0x180034630
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0dddd @ 0x180034C0C (McTemplateU0dddd.c)
 *     McTemplateU0q @ 0x180034D08 (McTemplateU0q.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___::Run(
        _DWORD *a1)
{
  _DWORD *v1; // rbx
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  _DWORD *v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    v6 = 0;
    McTemplateU0dddd((_DWORD)a1, (unsigned int)&ImmersiveShell_AppManager_ModeChange_Start, a1[6], 0, a1[7], v6, -2LL);
  }
  for ( i = 0; i < v1[8]; ++i )
  {
    v7 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, _DWORD **))(**((_QWORD **)v1 + 2) + 32LL))(
           *((_QWORD *)v1 + 2),
           i,
           &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84,
           &v7) >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q(v3, &ImmersiveShell_AppManager_ModeChanged_Start, i);
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, (unsigned int)v1[7]);
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q(v4, &ImmersiveShell_AppManager_ModeChanged_Stop, i);
    }
    a1 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    }
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    LODWORD(v5) = 0;
    McTemplateU0dddd((_DWORD)a1, (unsigned int)&ImmersiveShell_AppManager_ModeChange_Stop, v1[6], 0, v1[7], v5);
  }
}
