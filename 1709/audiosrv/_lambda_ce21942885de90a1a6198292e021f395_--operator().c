/*
 * XREFs of _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800311C4
 * Callers:
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x18000EA38 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

char __fastcall lambda_ce21942885de90a1a6198292e021f395_::operator()(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  char v2; // bl
  CProcessSubmixProxy *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (struct IInspectable **)&v4) < 0 || !v4 )
    v2 = 1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v4);
  return v2;
}
