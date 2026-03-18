/*
 * XREFs of CmpFreeExtraParameter @ 0x14068AACC
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1406A7B04 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *); // rax

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *))a1[4];
  if ( v1 )
    v1(a1 + 2, a1 + 6);
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
