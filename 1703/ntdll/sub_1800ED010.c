/*
 * XREFs of sub_1800ED010 @ 0x1800ED010
 * Callers:
 *     sub_1800EC5DC @ 0x1800EC5DC (sub_1800EC5DC.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 * Callees:
 *     sub_1800D6AA4 @ 0x1800D6AA4 (sub_1800D6AA4.c)
 *     sub_1800ED164 @ 0x1800ED164 (sub_1800ED164.c)
 */

__int64 __fastcall sub_1800ED010(__int64 a1, _BYTE *a2, _WORD *a3, _WORD *a4, unsigned int a5)
{
  _WORD *v5; // rax
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _WORD *v11; // rcx
  bool v12; // zf
  _WORD *v13; // [rsp+40h] [rbp-10h] BYREF
  _BYTE *v14; // [rsp+48h] [rbp-8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF

  v5 = a4;
  v7 = a1;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  if ( a3 )
  {
    result = sub_1800D6AA4(a4, a5, a3, &v13, &v15);
    if ( (int)result < 0 )
      return result;
    if ( !v15 )
      return 3221225507LL;
    v5 = v13 + 1;
    v9 = v15 - 1;
  }
  else
  {
    v9 = a5;
  }
  v15 = v9;
  v13 = v5;
  result = sub_1800ED164(v7, (_DWORD)a2, (unsigned int)&v14, (_DWORD)v5, v9, (__int64)&v13, (__int64)&v15);
  if ( (int)result >= 0 )
  {
    if ( v15 )
    {
      v10 = v15 - 1;
      v11 = v13 + 1;
      --v15;
      v12 = (*a2 & 4) == 0;
      ++v13;
      if ( v12 && v14 && (*v14 & 2) != 0 )
      {
        sub_1800ED164(v7, (_DWORD)v14, 0, (_DWORD)v11, v10, (__int64)&v13, (__int64)&v15);
        if ( !v15 )
          return 3221225507LL;
        v11 = v13 + 1;
        v10 = v15 - 1;
      }
      if ( v10 )
      {
        *v11 = 0;
        return 0LL;
      }
    }
    return 3221225507LL;
  }
  return result;
}
