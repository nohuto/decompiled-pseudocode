/*
 * XREFs of InbvDisplayString @ 0x140139F20
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140387808 )
    return 0;
  if ( qword_140387810 )
    qword_140387810(&v3);
  if ( qword_140389EF8 && (v2 = *(__int64 (**)(void))(qword_140389EF8 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
