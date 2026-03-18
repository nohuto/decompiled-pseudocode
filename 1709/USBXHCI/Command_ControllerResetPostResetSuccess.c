/*
 * XREFs of Command_ControllerResetPostResetSuccess @ 0x1C000C8A8
 * Callers:
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 * Callees:
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall Command_ControllerResetPostResetSuccess(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v9; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v10; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v10 = &v9;
  v9 = &v9;
  DynamicLock_Acquire(v2);
  v3 = a1 + 96;
  *(_DWORD *)(a1 + 36) = 1;
  while ( *(_QWORD *)v3 != v3 )
  {
    v4 = *(_QWORD **)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    v6 = v10;
    if ( *v10 != &v9 )
      __fastfail(3u);
    v4[1] = v10;
    *v4 = &v9;
    *v6 = v4;
    v10 = (_QWORD **)v4;
  }
  while ( v9 != &v9 )
  {
    if ( (_QWORD **)v9[1] != &v9 || (v7 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    v9 = (_QWORD *)*v9;
    *(_QWORD *)(v7 + 8) = &v9;
    Command_InternalSendCommand(a1);
  }
  return DynamicLock_Release(*(_QWORD *)(a1 + 112));
}
