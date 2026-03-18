/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C006DEA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C004FDD4 (--0CBaseInput@@IEAA@K@Z.c)
 */

CBaseInput *CKeyboardSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(648LL, 0x70694843u);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 2);
    *((_QWORD *)v1 + 80) = 0LL;
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
