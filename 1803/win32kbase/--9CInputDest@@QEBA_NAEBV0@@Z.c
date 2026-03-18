/*
 * XREFs of ??9CInputDest@@QEBA_NAEBV0@@Z @ 0x1C01098F0
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

bool __fastcall CInputDest::operator!=(unsigned int *a1, __int64 a2)
{
  return CInputDest::operator==(a1, a2) == 0;
}
