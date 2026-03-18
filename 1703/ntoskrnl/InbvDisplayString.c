/*
 * XREFs of InbvDisplayString @ 0x140155990
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_14036B898 )
    return 0;
  if ( qword_14036B8A0 )
    qword_14036B8A0(&v3);
  if ( qword_14036E468 && (v2 = *(__int64 (**)(void))(qword_14036E468 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
