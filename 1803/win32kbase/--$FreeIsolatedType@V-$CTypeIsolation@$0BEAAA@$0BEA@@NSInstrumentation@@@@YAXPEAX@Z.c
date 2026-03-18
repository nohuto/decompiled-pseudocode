/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00651D0
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001C130 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0044B50 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C005E020 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(__int64 a1)
{
  unsigned __int8 *v2; // rcx

  v2 = gpTypeIsolation[4];
  if ( v2 )
    NSInstrumentation::CTypeIsolation<81920,320>::Free(v2, a1);
}
