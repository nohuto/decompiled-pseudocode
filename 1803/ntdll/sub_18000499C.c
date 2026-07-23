/*
 * XREFs of sub_18000499C @ 0x18000499C
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004A40 (EtwProcessPrivateLoggerRequest.c)
 *     sub_180106ED0 @ 0x180106ED0 (sub_180106ED0.c)
 *     sub_180107460 @ 0x180107460 (sub_180107460.c)
 * Callees:
 *     sub_1800049F4 @ 0x1800049F4 (sub_1800049F4.c)
 *     sub_180005F40 @ 0x180005F40 (sub_180005F40.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall sub_18000499C(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  result = sub_1800049F4(a4, v11);
  if ( !(_DWORD)result )
  {
    *a2 = 0;
    *a3 = 176;
    if ( a1 >= 0xB0 )
    {
      v9 = v11[0];
      if ( (unsigned int)*(unsigned __int16 *)(v11[0] + 154LL) + 176 < a1 )
      {
        *(_QWORD *)(a4 + 152) = a4 + 176;
        *(_WORD *)(a4 + 146) = *(_WORD *)(v9 + 154);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 144), (PCUNICODE_STRING)(v9 + 152));
        *a3 += *(unsigned __int16 *)(v9 + 154);
      }
      sub_180005F40(a4, v9, 0LL);
      v10 = *(unsigned __int16 *)(a4 + 146) + 176;
      if ( v10 + *(unsigned __int16 *)(v9 + 170) < a1 )
      {
        *(_QWORD *)(a4 + 136) = a4 + v10;
        *(_WORD *)(a4 + 130) = *(_WORD *)(v9 + 170);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 128), (PCUNICODE_STRING)(v9 + 168));
        *a3 += *(unsigned __int16 *)(v9 + 170);
      }
      *a2 = *a3;
      if ( *a3 < *(_DWORD *)a4 )
        *(_DWORD *)a4 = *a3;
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return 0LL;
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *(unsigned int *)(v11[0] + 20LL) + 8));
      return 234LL;
    }
  }
  return result;
}
