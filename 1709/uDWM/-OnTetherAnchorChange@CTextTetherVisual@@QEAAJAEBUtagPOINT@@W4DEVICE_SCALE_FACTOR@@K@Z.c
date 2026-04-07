/*
 * XREFs of ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x180085480
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180082A50 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextTetherVisual::OnTetherAnchorChange(
        CTextTetherVisual *this,
        const struct tagPOINT *a2,
        int a3,
        int a4)
{
  enum DEVICE_SCALE_FACTOR v4; // eax

  *(struct tagPOINT *)((char *)this + 308) = *a2;
  *((_DWORD *)this + 80) = a4;
  if ( a3 >= 180 )
    a3 = 180;
  v4 = SCALE_100_PERCENT;
  if ( a3 > 100 )
    v4 = a3;
  *((_DWORD *)this + 79) = v4;
  return CTextTetherVisual::UpdateInstructions(this);
}
