/*
 * XREFs of Command_ControllerResetPostResetSuccess @ 0x1C0003424
 * Callers:
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 * Callees:
 *     Command_InternalSendCommand @ 0x1C0004020 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Command_ControllerResetPostResetSuccess(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *v9; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v10; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v10 = &v9;
  v9 = &v9;
  DynamicLock_Acquire(v2);
  v3 = (_QWORD **)(a1 + 96);
  *(_DWORD *)(a1 + 36) = 1;
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
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
