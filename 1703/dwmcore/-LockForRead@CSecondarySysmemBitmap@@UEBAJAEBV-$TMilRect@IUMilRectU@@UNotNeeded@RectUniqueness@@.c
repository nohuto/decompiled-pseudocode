/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180024A50
 * Callers:
 *     <none>
 * Callees:
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1800253EC (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18007E620 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18007E694 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x1800C5A74 (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, __int128 *a2, _QWORD *a3)
{
  CBitmapLock *v6; // rdi
  unsigned int PixelFormatSize; // r15d
  int v8; // eax
  int v9; // r15d
  int v10; // edx
  __int64 v11; // r15
  unsigned __int64 v12; // rcx
  CBitmapLock *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int128 v18; // [rsp+60h] [rbp-28h] BYREF

  v18 = *a2;
  v6 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(a1 - 80, &v18)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD6u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 28));
    v8 = *((_DWORD *)a2 + 1) * *(_DWORD *)(a1 + 24);
    v9 = *(_DWORD *)a2 * (PixelFormatSize >> 3);
    LODWORD(v18) = v10;
    v11 = (unsigned int)(v8 + v9);
    *(_QWORD *)((char *)&v18 + 4) = *(_QWORD *)(a1 + 32);
    v13 = (CBitmapLock *)CBitmapLock::operator new(v12);
    if ( v13 )
      v6 = CBitmapLock::CBitmapLock(v13);
    if ( !v6 )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE5u);
      return v16;
    }
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 8LL))(v6);
    v14 = (a1 + 8) & -(__int64)(a1 != 96);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = CBitmapLock::HrInit(
            v6,
            (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(a1 != 96)),
            *((_DWORD *)a2 + 2) - *(_DWORD *)a2,
            *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1),
            (const struct PixelFormatInfo *)&v18,
            *(_DWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 48) - (int)v11,
            (void *)(v11 + *(_QWORD *)(a1 + 40)),
            WICBitmapLockRead,
            0,
            (struct IUnknown *)((a1 + 8) & -(__int64)(a1 != 96)));
    v16 = v15;
    if ( v15 >= 0 )
    {
      *a3 = (char *)v6 + 16;
      return v16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFAu);
  }
  if ( v6 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v16;
}
