/*
 * XREFs of sub_18003888C @ 0x18003888C
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 *     sub_18004C728 @ 0x18004C728 (sub_18004C728.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_18003888C(unsigned __int16 *a1, unsigned __int16 *a2, char a3, _QWORD *a4, int a5)
{
  _QWORD **v8; // rsi
  char v10; // r9
  _QWORD *i; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rax

  v8 = (_QWORD **)((char *)&unk_18015AFA0 + 16 * (a5 & 0x1F));
  v10 = 0;
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v13 = i - 14;
    if ( a5 == *((_DWORD *)i + 38) && ((a3 & 8) == 0 || (v13[13] & 1) != 0) )
    {
      if ( a2 )
      {
        v10 = RtlEqualUnicodeString(a2, (unsigned __int16 *)v13 + 36, 1);
      }
      else
      {
        if ( (v13[13] & 0x10000000) == 0 && RtlEqualUnicodeString(a1, (unsigned __int16 *)v13 + 44, 1) )
        {
          v10 = 1;
LABEL_11:
          v14 = v13[19];
          if ( *(_DWORD *)(v14 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v14 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)v13 + 69);
          *a4 = v13;
          return v10 == 0 ? 0xC0000135 : 0;
        }
        v10 = 0;
      }
      if ( v10 )
        goto LABEL_11;
    }
  }
  return v10 == 0 ? 0xC0000135 : 0;
}
