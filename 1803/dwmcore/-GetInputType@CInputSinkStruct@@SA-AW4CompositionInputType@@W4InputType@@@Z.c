/*
 * XREFs of ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18001CE74
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputSinkStruct::GetInputType(int a1)
{
  __int64 result; // rax

  if ( a1 < 2 )
    return 0LL;
  result = 3LL;
  if ( a1 > 3 )
  {
    result = 4LL;
    if ( a1 != 4 )
    {
      if ( a1 <= 6 )
        return 1LL;
      if ( a1 == 7 )
        return 5LL;
      return 0LL;
    }
  }
  return result;
}
