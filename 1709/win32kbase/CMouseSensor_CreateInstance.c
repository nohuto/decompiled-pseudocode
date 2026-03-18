/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C00064A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C001A794 (--0CBaseInput@@IEAA@K@Z.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

CBaseInput *CMouseSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(976LL, 1885947971LL);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 1u);
    *((_QWORD *)v1 + 120) = 0LL;
    *((_QWORD *)v1 + 121) = 0LL;
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
