/*
 * XREFs of NtUserGetProp @ 0x1C00D42E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetProp(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax
  bool v10; // zf
  __int64 v11; // rbx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  if ( v4
    && (v6 = *(_QWORD *)(v4 + 184)) != 0
    && a2
    && (v5 = *(unsigned int *)(v6 + 4), v9 = (__int64 *)(v6 + 8), (_DWORD)v5) )
  {
    while ( *((_WORD *)v9 + 4) != a2 || (*((_BYTE *)v9 + 10) & 1) != 0 )
    {
      v9 += 2;
      v10 = (_DWORD)v5 == 1;
      v5 = (unsigned int)(v5 - 1);
      if ( v10 )
        goto LABEL_7;
    }
    v11 = *v9;
  }
  else
  {
LABEL_7:
    v11 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v11;
}
