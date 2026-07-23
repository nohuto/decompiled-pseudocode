/*
 * XREFs of sub_180106ED0 @ 0x180106ED0
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004A40 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     sub_180003FA8 @ 0x180003FA8 (sub_180003FA8.c)
 *     sub_18000499C @ 0x18000499C (sub_18000499C.c)
 *     sub_1800049F4 @ 0x1800049F4 (sub_1800049F4.c)
 *     sub_180005150 @ 0x180005150 (sub_180005150.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 */

__int64 __fastcall sub_180106ED0(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  result = sub_1800049F4(a4, &v11);
  if ( !(_DWORD)result )
  {
    v9 = v11;
    if ( (*(_DWORD *)(v11 + 324) & 0x400) != 0 )
    {
      if ( !*(_WORD *)(a4 + 128) )
      {
        v10 = 2;
LABEL_11:
        _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *(unsigned int *)(v9 + 20) + 8));
        return v10;
      }
      v10 = sub_180005150(a4, *(_DWORD *)(a4 + 96), (_UNICODE_STRING *)(v11 + 168));
      if ( v10 )
        goto LABEL_11;
      v10 = sub_180106B9C(v9);
      RtlFreeUnicodeString((PUNICODE_STRING)(v9 + 168));
    }
    else
    {
      v10 = sub_180003FA8(v11, 2);
    }
    sub_18000499C(a1, a2, a3, a4);
    goto LABEL_11;
  }
  return result;
}
