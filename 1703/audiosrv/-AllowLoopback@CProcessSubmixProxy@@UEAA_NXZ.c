/*
 * XREFs of ?AllowLoopback@CProcessSubmixProxy@@UEAA_NXZ @ 0x180008670
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessSubmixProxy::AllowLoopback(CProcessSubmixProxy *this)
{
  return *((_BYTE *)this + 104);
}
