/*
 * XREFs of ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180117368
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801137F0 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ @ 0x180114F40 (-EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180117028 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18011BBE0 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredPositionToWindow(__int64 a1, unsigned int a2)
{
  int v4; // esi
  int cy; // ebp
  UINT uFlags; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 240) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) )
      a2 &= ~2u;
    v4 = *(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176);
    cy = *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 180);
    uFlags = (2 * ((a2 & 1) == 0) + 82964) | 1;
    if ( (~(a2 >> 1) & 1) == 0 )
      uFlags = 2 * ((a2 & 1) == 0) + 82964;
    if ( SetWindowPos(*(HWND *)(a1 + 240), 0LL, *(_DWORD *)(a1 + 176), *(_DWORD *)(a1 + 180), v4, cy, uFlags) )
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 328), v4, cy);
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x8A6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        v7);
  }
}
