/*
 * XREFs of ?FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z @ 0x1801560E4
 * Callers:
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18015610C (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z @ 0x180156158 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLightStack::FindLight(CLightStack *this, const struct CCompositionLight *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8

  v2 = *((_DWORD *)this + 6);
  v3 = 0LL;
  if ( !v2 )
    return 0;
  while ( *(const struct CCompositionLight **)(*(_QWORD *)this + 8 * v3) != a2 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0;
  }
  return 1;
}
