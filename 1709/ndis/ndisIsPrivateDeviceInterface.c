/*
 * XREFs of ndisIsPrivateDeviceInterface @ 0x1C005D68C
 * Callers:
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsPrivateDeviceInterface(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  bool result; // al
  unsigned __int16 v5; // cx
  wchar_t *v6; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL);
  result = 0;
  if ( v3 )
  {
    v5 = *(_WORD *)(v3 + 88);
    if ( v5 )
    {
      if ( v5 <= 2u )
        return 1;
      *(_QWORD *)&String1.Length = 0LL;
      String1.Buffer = 0LL;
      v6 = (wchar_t *)(*(_QWORD *)(v3 + 96) + 2LL);
      *(_QWORD *)&String1.Length = (unsigned __int16)(v5 - 2);
      String1.Buffer = v6;
      *(_DWORD *)&String1.MaximumLength = (unsigned __int16)(*(_WORD *)(v3 + 90) - 2);
      if ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a1 + 3816), 1u) )
        return 1;
    }
  }
  return result;
}
