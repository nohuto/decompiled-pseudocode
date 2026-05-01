/*
 * XREFs of ?GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180316130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x1803055C4 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

__int64 __fastcall CAppLayoutOperationItem::GetApp(
        CAppLayoutOperationItem *this,
        struct IImmersiveApplication **a2,
        struct IImmersiveApplication **a3)
{
  __int64 result; // rax
  ApplicationViewHelpers *v4; // rcx

  *a2 = 0LL;
  result = 2147943568LL;
  v4 = (ApplicationViewHelpers *)*((_QWORD *)this + 2);
  if ( v4 )
    return ApplicationViewHelpers::GetApplicationFromView(v4, (struct IApplicationView *)a2, a3);
  return result;
}
