/*
 * XREFs of xxxUserYield @ 0x1C01C69F4
 * Callers:
 *     NtUserYieldTask @ 0x1C01ED890 (NtUserYieldTask.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxUserYield(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 424); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(a1 + 424) )
    xxxReceiveMessage(a1);
  return 1LL;
}
