/*
 * XREFs of CHidInput_CreateInstance @ 0x1C0006920
 * Callers:
 *     <none>
 * Callees:
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0019714 (--0CHidInput@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

CHidInput *CHidInput_CreateInstance()
{
  CHidInput *result; // rax

  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  result = (CHidInput *)Win32AllocPool(1016LL, 1885947971LL);
  if ( result )
    result = CHidInput::CHidInput(result);
  if ( result )
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = result;
  return result;
}
