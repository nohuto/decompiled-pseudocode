/*
 * XREFs of ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x180023B28
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N4@Z @ 0x180012948 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputSinkStruct::GetInputType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  v5 = v3 - 1;
  if ( !v5 )
    return 3LL;
  if ( v5 == 1 )
    return 5LL;
  return 0LL;
}
