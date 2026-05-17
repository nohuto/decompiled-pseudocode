/*
 * XREFs of sub_180050C68 @ 0x180050C68
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180051B90 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_180050DC4 @ 0x180050DC4 (sub_180050DC4.c)
 *     sub_180050FCC @ 0x180050FCC (sub_180050FCC.c)
 *     sub_180051100 @ 0x180051100 (sub_180051100.c)
 *     sub_180053D68 @ 0x180053D68 (sub_180053D68.c)
 *     sub_18010492C @ 0x18010492C (sub_18010492C.c)
 */

__int64 __fastcall sub_180050C68(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 176;
  v11 = 0LL;
  if ( a1 < 0xB0 )
    return 234LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  result = sub_180051100(a4, &v11);
  if ( !(_DWORD)result )
  {
    v9 = v11;
    if ( (*(_DWORD *)(v11 + 324) & 0x400) != 0 )
    {
      if ( !*(_WORD *)(a4 + 128) )
      {
        v10 = 2;
        goto LABEL_6;
      }
      v10 = sub_180053D68(a4, *(unsigned int *)(a4 + 96), v11 + 168);
      if ( v10 )
        goto LABEL_6;
      v10 = sub_18010492C(v9);
      RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 168));
    }
    else
    {
      v10 = sub_180050DC4(v11, 2LL);
    }
    sub_180050FCC(a1, a2, a3, a4);
LABEL_6:
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v9 + 20) + 8));
    return v10;
  }
  return result;
}
