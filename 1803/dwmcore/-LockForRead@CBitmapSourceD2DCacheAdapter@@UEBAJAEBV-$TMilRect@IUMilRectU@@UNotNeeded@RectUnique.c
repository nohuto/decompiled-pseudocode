/*
 * XREFs of ?LockForRead@CBitmapSourceD2DCacheAdapter@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800B8540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$As@VIBitmapDest@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIBitmapDest@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B8690 (--$As@VIBitmapDest@@@-$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@VIBitm.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSourceD2DCacheAdapter::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r10d
  int v5; // r8d
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v11 = 0LL;
  v12[0] = v5;
  v12[1] = v3;
  v12[2] = v6 - v5;
  v12[3] = a2[3] - v3;
  v7 = Microsoft::WRL::ComPtr<IBitmapSource>::As<IBitmapDest>(a1 + 8, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x48u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v12, 1LL, a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x49u);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return v8;
}
