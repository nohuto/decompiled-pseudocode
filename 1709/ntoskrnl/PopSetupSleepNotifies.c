/*
 * XREFs of PopSetupSleepNotifies @ 0x140437698
 * Callers:
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 * Callees:
 *     PopMoveList @ 0x140437300 (PopMoveList.c)
 */

__int64 __fastcall PopSetupSleepNotifies(__int64 a1)
{
  int i; // r11d
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  __int64 result; // rax

  for ( i = 4; i >= 0; i = v7 - 1 )
  {
    v3 = a1 + 72 + 72LL * i;
    PopMoveList(v3, (_QWORD **)(a1 + 88 + 72LL * i));
    PopMoveList(v3, (_QWORD **)(a1 + 120 + 8 * v4));
    PopMoveList(v3, (_QWORD **)(a1 + 104 + 8 * v5));
    v8 = *(_QWORD **)(v6 - 16);
    while ( v8 != (_QWORD *)v3 )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
      *((_DWORD *)v9 + 25) = *((_DWORD *)v9 + 24);
      v10 = *((_DWORD *)v9 + 22);
      *((_DWORD *)v9 + 23) = v10;
      if ( !v10 )
      {
        v11 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v12 = (_QWORD *)v9[1], (_QWORD *)*v12 != v9) )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = *(_QWORD **)(v6 + 8);
        if ( *v13 != v6 )
          __fastfail(3u);
        *v9 = v6;
        v9[1] = v13;
        *v13 = v9;
        *(_QWORD *)(v6 + 8) = v9;
      }
    }
    result = *(unsigned int *)(v6 - 24);
    *(_DWORD *)(v6 - 20) = result;
  }
  return result;
}
