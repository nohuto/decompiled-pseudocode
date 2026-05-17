/*
 * XREFs of sub_18002BF70 @ 0x18002BF70
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_180043094 @ 0x180043094 (sub_180043094.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_18002BF70(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 **a4, int a5)
{
  char v6; // r12
  _QWORD **v8; // rsi
  char v10; // r9
  _QWORD *i; // rdi
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax

  v6 = a3;
  v8 = (_QWORD **)((char *)&unk_18015BFC0 + 16 * (a5 & 0x1F));
  v10 = 0;
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v13 = (volatile signed __int32 *)(i - 14);
    if ( a5 == *((_DWORD *)i + 38) && ((v6 & 8) == 0 || (v13[26] & 1) != 0) )
    {
      if ( a2 )
      {
        LOBYTE(a3) = 1;
        v10 = RtlEqualUnicodeString(a2, v13 + 18, a3);
      }
      else
      {
        if ( (v13[26] & 0x10000000) == 0 )
        {
          LOBYTE(a3) = 1;
          if ( (unsigned __int8)RtlEqualUnicodeString(a1, v13 + 22, a3) )
          {
            v10 = 1;
LABEL_10:
            v14 = *((_QWORD *)v13 + 19);
            if ( *(_DWORD *)(v14 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v14 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement(v13 + 69);
            *a4 = v13;
            return v10 == 0 ? 0xC0000135 : 0;
          }
        }
        v10 = 0;
      }
      if ( v10 )
        goto LABEL_10;
    }
  }
  return v10 == 0 ? 0xC0000135 : 0;
}
