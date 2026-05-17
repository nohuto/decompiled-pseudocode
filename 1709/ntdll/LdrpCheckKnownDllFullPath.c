/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x1800744EC
 * Callers:
 *     LdrpLoadKnownDll @ 0x180035B64 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 */

char __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  char result; // al
  unsigned __int64 v4; // r9
  _WORD *v5; // rax
  _WORD *v6; // rax
  __int16 v7; // cx
  __int16 v8; // ax
  unsigned __int16 v9[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  result = 0;
  if ( LdrpKnownDllPath )
  {
    v4 = *a1 + *((_QWORD *)a1 + 1) - 2LL;
    *(_QWORD *)(a2 + 8) = v4;
    if ( v4 > *((_QWORD *)a1 + 1) )
    {
      while ( 1 )
      {
        v5 = *(_WORD **)(a2 + 8);
        if ( *v5 == 92 || *v5 == 47 )
          break;
        v6 = v5 - 1;
        *(_QWORD *)(a2 + 8) = v6;
        if ( (unsigned __int64)v6 <= *((_QWORD *)a1 + 1) )
          goto LABEL_8;
      }
      *(_QWORD *)(a2 + 8) = v5 + 1;
    }
LABEL_8:
    v7 = *(_WORD *)(a2 + 8) - a1[4];
    v8 = *a1 - v7;
    v9[1] = *(_WORD *)(a2 + 8) - a1[4];
    *(_WORD *)a2 = v8;
    *(_WORD *)(a2 + 2) = a1[1] - v7;
    v10 = *((_QWORD *)a1 + 1);
    v9[0] = v7 - 2;
    return RtlEqualUnicodeString(v9, (unsigned __int16 *)&LdrpKnownDllPath, 1);
  }
  return result;
}
