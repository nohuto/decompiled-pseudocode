/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800568D8
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180048AA0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18007DA60 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18019B520 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800471A0 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18007E620 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18007E694 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x1800C5A74 (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800C5C0C (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800C5C30 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  volatile signed __int32 *v14; // r14
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rdi
  __int64 (__fastcall *v20)(CBitmapOfDeviceBitmaps *); // rax
  int v21; // eax
  bool v23; // zf
  int v24; // eax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v17 = -2147024809;
      v26 = 712;
      v25 = -2147024809;
      goto LABEL_31;
    }
    v14 = (volatile signed __int32 *)((char *)this + 196);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 196));
    v17 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v26 = 708;
LABEL_19:
    v25 = v15;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v26);
    return v17;
  }
  v14 = (volatile signed __int32 *)((char *)this + 196);
  v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 196));
  v17 = v15;
  if ( v15 < 0 )
  {
    v26 = 704;
    goto LABEL_19;
  }
LABEL_4:
  v18 = (CBitmapLock *)CBitmapLock::operator new(v16);
  if ( v18 )
    v19 = CBitmapLock::CBitmapLock(v18);
  else
    v19 = 0LL;
  if ( v19 )
  {
    v20 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v19 + 8LL);
    if ( v20 == CHolographicClient::AddRef )
      CHolographicClient::AddRef(v19);
    else
      v20(v19);
    v21 = CBitmapLock::HrInit(
            v19,
            (struct IBitmapUnlock *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a10,
            a11);
    v17 = v21;
    if ( v21 >= 0 )
    {
      if ( (a8 & 2) != 0 )
      {
        v23 = (*((_DWORD *)this + 28))++ == -1;
        v24 = *((_DWORD *)this + 28);
        if ( v23 )
          v24 = 1;
        *((_DWORD *)this + 28) = v24;
      }
      *a9 = (CBitmapLock *)((char *)v19 + 16);
      return v17;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2DAu);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2CEu);
  }
  if ( (a8 & 2) != 0 )
  {
    *v14 = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement(v14);
  }
  if ( v19 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 16LL))(v19);
  return v17;
}
