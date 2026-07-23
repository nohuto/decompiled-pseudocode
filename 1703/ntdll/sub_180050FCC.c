/*
 * XREFs of sub_180050FCC @ 0x180050FCC
 * Callers:
 *     sub_180050C68 @ 0x180050C68 (sub_180050C68.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180051B90 (EtwProcessPrivateLoggerRequest.c)
 *     sub_180104D80 @ 0x180104D80 (sub_180104D80.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 *     sub_180051100 @ 0x180051100 (sub_180051100.c)
 *     sub_180052BC4 @ 0x180052BC4 (sub_180052BC4.c)
 */

__int64 __fastcall sub_180050FCC(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  result = sub_180051100(a4, v11);
  if ( !(_DWORD)result )
  {
    *a2 = 0;
    *a3 = 176;
    if ( a1 < 0xB0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v11[0] + 20LL) + 8));
      return 234LL;
    }
    else
    {
      v9 = v11[0];
      if ( (unsigned int)*(unsigned __int16 *)(v11[0] + 154LL) + 176 < a1 )
      {
        *(_QWORD *)(a4 + 152) = a4 + 176;
        *(_WORD *)(a4 + 146) = *(_WORD *)(v9 + 154);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 144), (PCUNICODE_STRING)(v9 + 152));
        *a3 += *(unsigned __int16 *)(v9 + 154);
      }
      sub_180052BC4(a4, v9, 0LL);
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
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return 0LL;
    }
  }
  return result;
}
