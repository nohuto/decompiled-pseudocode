/*
 * XREFs of RaidZeroUnit @ 0x1C0017468
 * Callers:
 *     RaidCreateUnit @ 0x1C0016ED0 (RaidCreateUnit.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 *     RaCreateTagList @ 0x1C005D8B8 (RaCreateTagList.c)
 */

__int64 __fastcall RaidZeroUnit(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  memset(a1, 0, 0xA80uLL);
  *a1 = 1;
  RaCreateTagList(a1 + 64);
  *((_QWORD *)a1 + 24) = 0LL;
  *((_BYTE *)a1 + 204) = 0;
  a1[48] = v2;
  a1[22] = RaidNullAddress;
  result = 134684677LL;
  a1[256] = 134684677;
  a1[276] = 134684677;
  a1[296] = 134684677;
  a1[316] = 134684677;
  a1[336] = 134684677;
  *(_QWORD *)(a1 + 49) = v2;
  a1[250] = 10;
  return result;
}
