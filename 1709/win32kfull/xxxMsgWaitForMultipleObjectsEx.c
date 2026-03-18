/*
 * XREFs of xxxMsgWaitForMultipleObjectsEx @ 0x1C0143E0C
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00862B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A3A98 (xxxRemoveQueueCompletion.c)
 */

__int64 __fastcall xxxMsgWaitForMultipleObjectsEx(__int64 a1, __int64 a2, unsigned int a3, char a4, BOOL a5)
{
  int v5; // r14d
  unsigned int v6; // ebp
  bool v7; // di
  int v8; // r12d
  int v9; // r15d
  __int64 *v10; // rsi
  __int64 v11; // r8
  int v12; // eax
  NTSTATUS v13; // ebx
  ULONG v15; // eax
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+28h] [rbp-80h]
  unsigned int v19; // [rsp+44h] [rbp-64h]
  __int64 v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+B0h] [rbp+8h]

  v22 = a1;
  v5 = 1;
  v6 = a3;
  v7 = a5;
  v8 = a5;
  v9 = a5;
  v21 = gptiCurrent;
  v10 = (__int64 *)gptiCurrent;
  v19 = a1 + 1;
  do
  {
    UserSessionSwitchLeaveCrit(a1, a2);
    if ( v5 )
    {
      if ( v6 == -1 )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = &v20;
        v20 = -10000LL * v6;
      }
      v5 = 0;
      v9 = v8;
      v7 = (a5 & 2) != 0;
    }
    do
    {
      LOBYTE(v18) = v7;
      LOBYTE(v11) = 1;
      LOBYTE(v17) = 1;
      v12 = ObWaitForMultipleObjects(v19, a2, v11, !a5, v17, v18, v10);
      v13 = v12;
    }
    while ( v12 >= 0 && v7 && v12 == 257 );
    EnterCrit(0LL, 1LL);
    v6 = a3;
    v8 = a5;
    if ( v9 )
      break;
    if ( v13 != v22 )
      break;
    if ( !(unsigned int)xxxRemoveQueueCompletion() )
      break;
    a1 = 3LL;
    LOBYTE(a1) = (*(_WORD *)(*(_QWORD *)(v21 + 424) + 6LL) & 8) != 0;
  }
  while ( ((unsigned __int8)a1 & ((a4 & 8) != 0)) == 0 );
  if ( v13 >= 0 )
    return (unsigned int)v13;
  v15 = RtlNtStatusToDosError(v13);
  UserSetLastError(v15, v16);
  return 0xFFFFFFFFLL;
}
