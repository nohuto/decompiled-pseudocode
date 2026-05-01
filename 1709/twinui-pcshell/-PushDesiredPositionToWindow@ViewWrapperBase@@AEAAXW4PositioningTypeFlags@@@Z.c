/*
 * XREFs of ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180141DE8
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18013DA90 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ @ 0x18013F470 (-EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180141AB0 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180145EE0 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredPositionToWindow(__int64 a1, unsigned int a2)
{
  int v4; // esi
  int cy; // ebp
  UINT uFlags; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 264) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) )
      a2 &= ~2u;
    v4 = *(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200);
    cy = *(_DWORD *)(a1 + 212) - *(_DWORD *)(a1 + 204);
    uFlags = (2 * ((a2 & 1) == 0) + 82964) | 1;
    if ( (~(a2 >> 1) & 1) == 0 )
      uFlags = 2 * ((a2 & 1) == 0) + 82964;
    if ( SetWindowPos(*(HWND *)(a1 + 264), 0LL, *(_DWORD *)(a1 + 200), *(_DWORD *)(a1 + 204), v4, cy, uFlags) )
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 352), v4, cy);
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x905,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        v7);
  }
}
