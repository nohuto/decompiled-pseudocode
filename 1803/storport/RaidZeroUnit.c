/*
 * XREFs of RaidZeroUnit @ 0x1C0015494
 * Callers:
 *     RaidCreateUnit @ 0x1C0014F78 (RaidCreateUnit.c)
 * Callees:
 *     memset @ 0x1C0018140 (memset.c)
 *     RaCreateTagList @ 0x1C005E278 (RaCreateTagList.c)
 */

__int64 __fastcall RaidZeroUnit(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  memset(a1, 0, 0xAC0uLL);
  *a1 = 1;
  RaCreateTagList(a1 + 64);
  *((_QWORD *)a1 + 24) = 0LL;
  *((_BYTE *)a1 + 204) = 0;
  a1[48] = v2;
  a1[22] = RaidNullAddress;
  result = 134684677LL;
  a1[264] = 134684677;
  a1[284] = 134684677;
  a1[304] = 134684677;
  a1[324] = 134684677;
  a1[344] = 134684677;
  *(_QWORD *)(a1 + 49) = v2;
  a1[258] = 10;
  return result;
}
