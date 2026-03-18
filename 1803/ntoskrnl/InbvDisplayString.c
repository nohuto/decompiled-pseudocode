/*
 * XREFs of InbvDisplayString @ 0x140171F30
 * Callers:
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_1403CAD30 )
    return 0;
  if ( qword_1403CAD38 )
    qword_1403CAD38(&v3);
  if ( qword_1403CDD28 && (v2 = *(__int64 (**)(void))(qword_1403CDD28 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
