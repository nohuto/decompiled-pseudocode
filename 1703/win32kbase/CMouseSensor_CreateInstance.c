/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C006F920
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C004FDD4 (--0CBaseInput@@IEAA@K@Z.c)
 */

CBaseInput *CMouseSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(656LL, 0x70694843u);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 1);
    *((_QWORD *)v1 + 80) = 0LL;
    *((_QWORD *)v1 + 81) = 0LL;
    *(_QWORD *)v1 = &CMouseSensor::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (PKDPC)v1;
  return v1;
}
