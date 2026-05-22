/*
 * XREFs of ??_ECShellEdgyNotifier@@UEAAPEAXI@Z @ 0x180029FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1CShellEdgyNotifier@@UEAA@XZ @ 0x18002BB40 (--1CShellEdgyNotifier@@UEAA@XZ.c)
 */

CShellEdgyNotifier *__fastcall CShellEdgyNotifier::`vector deleting destructor'(CShellEdgyNotifier *this, char a2)
{
  CShellEdgyNotifier::~CShellEdgyNotifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
