/*
 * XREFs of NtUserGetMenuIndex @ 0x1C01D9B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetMenuIndex(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // edi

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHmenu(a1);
  v9 = 0;
  v10 = v4;
  if ( !v4 || (v7 = ValidateHmenu(a2)) == 0 )
  {
LABEL_8:
    v11 = v9;
    goto LABEL_9;
  }
  v5 = *(unsigned int *)(v10 + 68);
  v11 = -1;
  if ( (_DWORD)v5 )
  {
    v8 = *(_QWORD *)(v10 + 96);
    do
    {
      v6 = 152LL * v9;
      if ( *(_QWORD *)(v6 + v8 + 16) == v7 )
        goto LABEL_8;
    }
    while ( ++v9 < (unsigned int)v5 );
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v11;
}
