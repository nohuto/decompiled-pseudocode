/*
 * XREFs of _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x18007CE18
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     std::_Remove_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800A4A20 (std--_Remove_if_unchecked_Microsoft--WRL--WeakRef_____ptr64__lambda_6721409c6d8d6be39a12e154768b.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007B1A4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

char __fastcall lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(__int64 a1, _QWORD *a2)
{
  char v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v4) < 0 || !v4 )
    v2 = 1;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v4);
  return v2;
}
