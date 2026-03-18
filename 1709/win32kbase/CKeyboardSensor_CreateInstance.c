/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C00071B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C001A794 (--0CBaseInput@@IEAA@K@Z.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

CBaseInput *CKeyboardSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(968LL, 1885947971LL);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 2u);
    *((_QWORD *)v1 + 120) = 0LL;
    *(_QWORD *)v1 = &CKeyboardSensor::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = v1;
  return v1;
}
