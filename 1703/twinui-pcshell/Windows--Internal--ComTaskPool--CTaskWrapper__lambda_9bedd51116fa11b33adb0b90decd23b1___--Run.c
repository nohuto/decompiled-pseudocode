/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bedd51116fa11b33adb0b90decd23b1___::Run @ 0x180032F10
 * Callers:
 *     <none>
 * Callees:
 *     Template_qq @ 0x180033690 (Template_qq.c)
 *     Template_q @ 0x1800336FC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bedd51116fa11b33adb0b90decd23b1___::Run(
        __int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int i; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  result = *(_QWORD *)(a1 + 16);
  v2 = *(unsigned int **)(result + 8);
  v3 = *((_QWORD *)v2 + 1);
  if ( v3 )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v8);
    if ( (int)result >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        result = Template_qq(v4, &ImmersiveShell_AppManager_ZbandChange_Start, v2[1], *v2);
      for ( i = 0; i < v8; ++i )
      {
        v9 = 0LL;
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)v2 + 1) + 32LL))(
                   *((_QWORD *)v2 + 1),
                   i,
                   &GUID_0c40987c_7026_499e_adad_c164c0ffee84,
                   &v9);
        if ( (int)result >= 0 )
        {
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            Template_q(v6, &ImmersiveShell_AppManager_ZbandChanged_Start, i);
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, v2[1], *v2);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            result = Template_qq(v7, &ImmersiveShell_AppManager_ZbandChanged_Stop, i, (unsigned int)result);
        }
        v4 = v9;
        if ( v9 )
        {
          v9 = 0LL;
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        return Template_qq(v4, &ImmersiveShell_AppManager_ZbandChange_Stop, v2[1], *v2);
    }
  }
  return result;
}
