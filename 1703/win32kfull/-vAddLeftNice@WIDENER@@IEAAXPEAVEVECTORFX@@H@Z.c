/*
 * XREFs of ?vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1C02AA8F8
 * Callers:
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02AA4E4 (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDENER::vAddLeftNice(WIDENER *this, struct EVECTORFX *a2, int a3)
{
  vAddNice((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692), a2, a3 == 0);
}
