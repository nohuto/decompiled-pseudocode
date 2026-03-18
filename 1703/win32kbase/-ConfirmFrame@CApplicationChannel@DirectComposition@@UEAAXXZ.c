/*
 * XREFs of ?ConfirmFrame@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C0018CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::ConfirmFrame(DirectComposition::CApplicationChannel *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 99);
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 100) = v1;
}
