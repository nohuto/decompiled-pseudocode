/*
 * XREFs of ?GetProcessId@CProcessSubmixProxy@@UEAAKXZ @ 0x180008680
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::GetProcessId(CProcessSubmixProxy *this)
{
  return *((unsigned int *)this + 25);
}
