/*
 * XREFs of ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180071DAC
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180072FA0 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180075A8C (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CComSafeArray<float,4>::GetLowerBound(SAFEARRAY **a1, LONG a2)
{
  SAFEARRAY *v2; // rcx
  HRESULT LBound; // eax
  LONG plLbound; // [rsp+38h] [rbp+10h] BYREF

  plLbound = a2;
  v2 = *a1;
  plLbound = 0;
  LBound = SafeArrayGetLBound(v2, 1u, &plLbound);
  if ( LBound < 0 )
    ATL::AtlThrowImpl(LBound);
  return (unsigned int)plLbound;
}
