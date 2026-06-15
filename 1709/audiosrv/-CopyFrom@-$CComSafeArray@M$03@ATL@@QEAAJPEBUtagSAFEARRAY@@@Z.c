/*
 * XREFs of ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x1800707EC
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180072FA0 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180070918 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 */

int __fastcall ATL::CComSafeArray<float,4>::CopyFrom(SAFEARRAY **ppsaOut, SAFEARRAY *psa)
{
  HRESULT Vartype; // eax
  VARTYPE v5; // dx
  int v6; // eax
  int result; // eax
  VARTYPE pvt; // [rsp+38h] [rbp+10h] BYREF

  if ( !psa )
    ATL::AtlThrowImpl(-2147024809);
  Vartype = SafeArrayGetVartype(psa, &pvt);
  v5 = pvt;
  if ( Vartype >= 0 && pvt == 13 && (psa->fFeatures & 0x440) == 0x440 )
  {
    v5 = 9;
    pvt = 9;
  }
  if ( Vartype < 0 )
    ATL::AtlThrowImpl(Vartype);
  if ( v5 != 4 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = ATL::CComSafeArray<float,4>::Destroy(ppsaOut);
  if ( v6 < 0 )
    ATL::AtlThrowImpl(v6);
  result = SafeArrayCopy(psa, ppsaOut);
  if ( result < 0 )
    ATL::AtlThrowImpl(result);
  if ( *ppsaOut )
    return SafeArrayLock(*ppsaOut);
  return result;
}
