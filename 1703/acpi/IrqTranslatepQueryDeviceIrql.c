/*
 * XREFs of IrqTranslatepQueryDeviceIrql @ 0x1C0085460
 * Callers:
 *     IrqTranslateResources @ 0x1C00866E0 (IrqTranslateResources.c)
 *     IrqTransGetInterruptVector @ 0x1C00A57A0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     IrqArbGetDeviceIrql @ 0x1C00882DC (IrqArbGetDeviceIrql.c)
 */

char __fastcall IrqTranslatepQueryDeviceIrql(unsigned int a1, int a2)
{
  _BYTE v5[16]; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v6[24]; // [rsp+30h] [rbp-78h] BYREF

  memset(v6, 0, 0x58uLL);
  v6[1] = a2;
  if ( a1 >= 0xFFF00000 )
  {
    v6[0] = 3;
  }
  else
  {
    v6[0] = 0;
    v6[14] = a1;
  }
  IrqArbGetDeviceIrql(v6, v5);
  return v5[0];
}
