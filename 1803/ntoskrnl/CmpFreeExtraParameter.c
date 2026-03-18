/*
 * XREFs of CmpFreeExtraParameter @ 0x1406EEEF8
 * Callers:
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     VrpPostOpenOrCreate @ 0x14070AD00 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x14070C188 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *); // rax

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *))a1[4];
  if ( v1 )
    v1(a1 + 2, a1 + 6);
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
