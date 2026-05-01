/*
 * XREFs of _lambda_7aef9f6174acb3d73b407d8c046faaf1_::operator() @ 0x18011724C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___::Run @ 0x180117F70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0q @ 0x1800610F8 (McTemplateU0q.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dddd @ 0x180118C78 (McTemplateU0dddd.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall lambda_7aef9f6174acb3d73b407d8c046faaf1_::operator()(__int64 *a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  result = &retaddr;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    v8 = 0;
    result = (_UNKNOWN **)McTemplateU0dddd(
                            (_DWORD)a1,
                            (unsigned int)&ImmersiveShell_AppManager_ModeChange_Start,
                            *((_DWORD *)a1 + 2),
                            0,
                            *((_DWORD *)a1 + 3),
                            v8,
                            -2LL);
  }
  for ( i = 0; i < *((_DWORD *)a1 + 4); ++i )
  {
    v10 = 0LL;
    v4 = *a1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL))(
           v4,
           i,
           &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84,
           &v10) >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q(v5, &ImmersiveShell_AppManager_ModeChanged_Start, i);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, *((unsigned int *)a1 + 3));
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q(v6, &ImmersiveShell_AppManager_ModeChanged_Stop, i);
    }
    result = (_UNKNOWN **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    LODWORD(v7) = 0;
    return (_UNKNOWN **)McTemplateU0dddd(
                          (_DWORD)a1,
                          (unsigned int)&ImmersiveShell_AppManager_ModeChange_Stop,
                          *((_DWORD *)a1 + 2),
                          0,
                          *((_DWORD *)a1 + 3),
                          v7);
  }
  return result;
}
