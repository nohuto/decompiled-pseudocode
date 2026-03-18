/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180087490
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18000B1F0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18000B264 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x180086B3C (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180088B6C (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, __int128 *a2, _QWORD *a3)
{
  CBitmapLock *v6; // rdi
  __int64 v7; // r12
  CBitmapLock *v8; // rax
  __int64 v9; // rcx
  signed int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+60h] [rbp-28h] BYREF

  v13 = *a2;
  v6 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(a1 - 80, &v13)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xCEu);
  }
  else
  {
    v7 = *((_DWORD *)a2 + 1) * *(_DWORD *)(a1 + 24) + *(_DWORD *)a2 * (GetPixelFormatSize(*(_DWORD *)(a1 + 28)) >> 3);
    v8 = (CBitmapLock *)CBitmapLock::operator new();
    if ( v8 )
      v6 = CBitmapLock::CBitmapLock(v8);
    if ( !v6 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xD7u);
      return v11;
    }
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 8LL))(v6);
    v9 = (a1 + 8) & -(__int64)(a1 != 96);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = CBitmapLock::HrInit(
            v6,
            (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(a1 != 96)),
            *((_DWORD *)a2 + 2) - *(_DWORD *)a2,
            *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1),
            (const struct PixelFormatInfo *)(a1 + 28),
            *(_DWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 48) - (int)v7,
            (void *)(v7 + *(_QWORD *)(a1 + 40)),
            WICBitmapLockRead,
            0,
            (struct IUnknown *)((a1 + 8) & -(__int64)(a1 != 96)));
    v11 = v10;
    if ( v10 >= 0 )
    {
      *a3 = (char *)v6 + 16;
      return v11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xEAu);
  }
  if ( v6 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
