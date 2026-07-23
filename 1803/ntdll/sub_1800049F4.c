/*
 * XREFs of sub_1800049F4 @ 0x1800049F4
 * Callers:
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     sub_18000499C @ 0x18000499C (sub_18000499C.c)
 *     sub_180106ED0 @ 0x180106ED0 (sub_180106ED0.c)
 *     sub_180107460 @ 0x180107460 (sub_180107460.c)
 * Callees:
 *     sub_180004B90 @ 0x180004B90 (sub_180004B90.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180106D70 @ 0x180106D70 (sub_180106D70.c)
 */

__int64 __fastcall sub_1800049F4(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return sub_180004B90(&DestinationString);
  }
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = qword_18015A420;
  v6 = v4 & 0xFFFF7FFF;
  v8 = v4 & 0xFFFF7FFF;
  if ( !qword_18015A420 )
    return 4201LL;
  if ( v6 < 0x40 )
  {
LABEL_8:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 16LL * v6 + 8));
    if ( (*(_BYTE *)(qword_18015A420 + 16LL * v6) & 1) == 0 )
    {
      *a2 = *(_QWORD *)(qword_18015A420 + 16LL * v6);
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v6 + 8));
    return 4201LL;
  }
  result = sub_180106D70(v4, &v8);
  if ( !(_DWORD)result )
  {
    v6 = v8;
    v5 = qword_18015A420;
    goto LABEL_8;
  }
  return result;
}
