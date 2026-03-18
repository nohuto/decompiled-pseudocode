/*
 * XREFs of ?IsOfType@CPlaneCaptureRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801472C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CPlaneCaptureRenderTarget::IsOfType(__int64 a1, int a2)
{
  char v3; // al
  char v4; // cl

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 56) + 48LL))(a1 + 56);
  v4 = 0;
  if ( v3 || a2 == 37 )
    return 1;
  return v4;
}
