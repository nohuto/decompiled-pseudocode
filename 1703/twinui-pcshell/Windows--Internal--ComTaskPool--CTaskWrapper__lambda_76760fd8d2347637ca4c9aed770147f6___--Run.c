/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76760fd8d2347637ca4c9aed770147f6___::Run @ 0x180032D30
 * Callers:
 *     <none>
 * Callees:
 *     Template_dddd @ 0x18003360C (Template_dddd.c)
 *     Template_q @ 0x1800336FC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76760fd8d2347637ca4c9aed770147f6___::Run(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  _DWORD *v4; // rbx
  unsigned int i; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    Template_dddd((_DWORD)a1, (unsigned int)&ImmersiveShell_AppManager_ModeChange_Start, a1[6], a4, a1[7]);
  for ( i = 0; i < v4[8]; ++i )
  {
    v8 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, _DWORD **))(**((_QWORD **)v4 + 2) + 32LL))(
           *((_QWORD *)v4 + 2),
           i,
           &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84,
           &v8) >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        Template_q(v6, &ImmersiveShell_AppManager_ModeChanged_Start, i);
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, (unsigned int)v4[7]);
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        Template_q(v7, &ImmersiveShell_AppManager_ModeChanged_Stop, i);
    }
    a1 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    }
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    Template_dddd((_DWORD)a1, (unsigned int)&ImmersiveShell_AppManager_ModeChange_Stop, v4[6], a4, v4[7]);
}
