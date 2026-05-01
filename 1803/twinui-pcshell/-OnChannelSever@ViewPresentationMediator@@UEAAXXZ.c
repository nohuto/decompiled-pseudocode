/*
 * XREFs of ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x1801F6500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewPresentationMediator::OnChannelSever(ViewPresentationMediator *this)
{
  ViewPresentationMediator::EnableShellWindowManagementBehavior(
    (ViewPresentationMediator *)((char *)this - 24),
    *((_DWORD *)this + 44),
    *((_DWORD *)this + 45));
}
