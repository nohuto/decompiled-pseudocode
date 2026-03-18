/*
 * XREFs of ?SetLogicalCursorPos@CMouseProcessor@@AEAAXUtagPOINT@@K@Z @ 0x1C00142FC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::SetLogicalCursorPos(CMouseProcessor *this, struct tagPOINT a2, unsigned int a3)
{
  __int16 v3; // r8

  v3 = (a3 >> 8) & 0x1FF;
  if ( v3 )
  {
    *((struct tagPOINT *)gpsi + 619) = a2;
    *((_WORD *)gpsi + 2480) = v3;
  }
  else
  {
    *((_DWORD *)gpsi + 1238) = 0;
    *((_DWORD *)gpsi + 1239) = 0;
    *((_WORD *)gpsi + 2480) = 0;
  }
}
