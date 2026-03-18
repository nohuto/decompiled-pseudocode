/*
 * XREFs of ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D7E34
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077674 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00BE6B4 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(char *P)
{
  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(P + 32));
  NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)P);
  ExFreePoolWithTag(P, 0);
}
