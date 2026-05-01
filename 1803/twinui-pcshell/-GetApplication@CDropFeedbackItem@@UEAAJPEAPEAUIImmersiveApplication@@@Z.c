/*
 * XREFs of ?GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802F5FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x1803055C4 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

int __fastcall CDropFeedbackItem::GetApplication(
        CDropFeedbackItem *this,
        struct IImmersiveApplication **a2,
        struct IImmersiveApplication **a3)
{
  int result; // eax
  ApplicationViewHelpers *v4; // rcx

  *a2 = 0LL;
  result = -2147023728;
  v4 = (ApplicationViewHelpers *)*((_QWORD *)this + 5);
  if ( v4 )
    return ApplicationViewHelpers::GetApplicationFromView(v4, (struct IApplicationView *)a2, a3);
  return result;
}
