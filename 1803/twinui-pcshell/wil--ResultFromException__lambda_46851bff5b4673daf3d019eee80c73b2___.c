/*
 * XREFs of wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180026130
 * Callers:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180025CE0 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180026024 (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800F5564 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x180088554 (_lambda_46851bff5b4673daf3d019eee80c73b2_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_46851bff5b4673daf3d019eee80c73b2_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
