/*
 * XREFs of CHidInput_CreateInstance @ 0x1C006DE50
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C004EE9C (--0CHidInput@@IEAA@XZ.c)
 */

CHidInput *CHidInput_CreateInstance()
{
  CHidInput *result; // rax

  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  result = (CHidInput *)Win32AllocPool(696LL, 0x70694843u);
  if ( result )
    result = CHidInput::CHidInput(result);
  if ( result )
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = result;
  return result;
}
