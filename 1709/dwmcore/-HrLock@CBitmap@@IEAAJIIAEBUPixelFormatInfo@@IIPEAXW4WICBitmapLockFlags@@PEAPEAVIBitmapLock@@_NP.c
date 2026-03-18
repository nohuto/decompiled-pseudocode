/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18008CC68
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18000A970 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800870B0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801AC840 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18000B1F0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18000B264 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x180086B3C (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800BDE48 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800BDE70 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v16; // ebx
  CBitmapLock *v17; // rax
  CBitmapLock *v18; // rdi
  signed int v19; // eax
  bool v21; // zf
  int v22; // eax
  DWORD v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v16 = -2147024809;
      v24 = 690;
      v23 = -2147024809;
      goto LABEL_28;
    }
    v14 = (volatile signed __int32 *)((char *)this + 196);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 196));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v24 = 686;
LABEL_17:
    v23 = v15;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, v24);
    return v16;
  }
  v14 = (volatile signed __int32 *)((char *)this + 196);
  v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 196));
  v16 = v15;
  if ( v15 < 0 )
  {
    v24 = 682;
    goto LABEL_17;
  }
LABEL_4:
  v17 = (CBitmapLock *)CBitmapLock::operator new();
  if ( v17 )
    v18 = CBitmapLock::CBitmapLock(v17);
  else
    v18 = 0LL;
  if ( v18 )
  {
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v18 + 8LL))(v18);
    v19 = CBitmapLock::HrInit(
            v18,
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
    v16 = v19;
    if ( v19 >= 0 )
    {
      if ( (a8 & 2) != 0 )
      {
        v21 = (*((_DWORD *)this + 28))++ == -1;
        v22 = *((_DWORD *)this + 28);
        if ( v21 )
          v22 = 1;
        *((_DWORD *)this + 28) = v22;
      }
      *a9 = (CBitmapLock *)((char *)v18 + 16);
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x2C4u);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2B8u);
  }
  if ( (a8 & 2) != 0 )
  {
    *v14 = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement(v14);
  }
  if ( v18 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v18 + 16LL))(v18);
  return v16;
}
