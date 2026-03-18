/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180018560
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1800838C4 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180083CB0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180083D24 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x1800C47E0 (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, __int128 *a2, _QWORD *a3)
{
  CBitmapLock *v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  CBitmapLock *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v13; // eax
  __int128 v14; // [rsp+60h] [rbp-28h] BYREF

  v14 = *a2;
  v6 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(a1 - 80, &v14)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v11 = -2147024809;
    v13 = 206;
  }
  else
  {
    v7 = *((_DWORD *)a2 + 1) * *(_DWORD *)(a1 + 24)
       + *(_DWORD *)a2 * (GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 28)) >> 3);
    v9 = (CBitmapLock *)CBitmapLock::operator new(v8);
    if ( v9 )
      v6 = CBitmapLock::CBitmapLock(v9);
    if ( !v6 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD7u);
      return v11;
    }
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 8LL))(v6);
    v10 = (a1 + 8) & -(__int64)(a1 != 96);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = CBitmapLock::HrInit(
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
    if ( (v11 & 0x80000000) == 0 )
    {
      *a3 = (char *)v6 + 16;
      return v11;
    }
    v13 = 234;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v13);
  if ( v6 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
