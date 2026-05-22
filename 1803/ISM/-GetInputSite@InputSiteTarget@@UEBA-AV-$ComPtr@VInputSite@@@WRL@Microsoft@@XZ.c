/*
 * XREFs of ?GetInputSite@InputSiteTarget@@UEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x1800839E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall InputSiteTarget::GetInputSite(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
