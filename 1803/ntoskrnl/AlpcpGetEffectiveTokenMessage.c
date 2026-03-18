/*
 * XREFs of AlpcpGetEffectiveTokenMessage @ 0x14055E150
 * Callers:
 *     AlpcpQuerySidMessage @ 0x14055E040 (AlpcpQuerySidMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407473F4 (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     SeCreateClientSecurityEx @ 0x1404C92A0 (SeCreateClientSecurityEx.c)
 */

__int64 __fastcall AlpcpGetEffectiveTokenMessage(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rax

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return 3221227267LL;
  v7 = *(_QWORD *)(a2 + 136);
  if ( v7 )
  {
    if ( *(int *)(v7 + 36) >= 1 )
    {
      v8 = *(_QWORD *)(v7 + 48);
LABEL_5:
      *a3 = v8;
      *a5 = 0;
      return 0LL;
    }
    return 3221225506LL;
  }
  v10 = *(_DWORD *)(a1 + 416);
  v11 = *(_QWORD *)(a2 + 24);
  if ( (v10 & 6) != 2 )
    return 3221225506LL;
  if ( !v11 )
    return 3221225506LL;
  v12 = *(_DWORD *)(v11 + 416);
  if ( (v12 & 6) != 4 )
    return 3221225506LL;
  if ( (v12 & 0x400) == 0 )
  {
    v8 = *(_QWORD *)(v11 + 80);
    if ( v8 )
      goto LABEL_5;
    return 3221225506LL;
  }
  v13 = *(_QWORD *)(a2 + 32);
  if ( !v13 )
    return 3221225506LL;
  result = SeCreateClientSecurityEx(v13, (int)v11 + 260, 0, a4);
  if ( (int)result >= 0 )
  {
    *a3 = *(_QWORD *)(a4 + 16);
    *a5 = 1;
    return 0LL;
  }
  return result;
}
