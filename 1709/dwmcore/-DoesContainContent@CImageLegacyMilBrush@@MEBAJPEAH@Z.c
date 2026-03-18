/*
 * XREFs of ?DoesContainContent@CImageLegacyMilBrush@@MEBAJPEAH@Z @ 0x18007CB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrush::DoesContainContent(CImageLegacyMilBrush *this, int *a2)
{
  __int64 v3; // rcx

  *a2 = 0;
  v3 = *((_QWORD *)this + 66);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 88LL))(v3 + 8) )
    *a2 = 1;
  return 0LL;
}
