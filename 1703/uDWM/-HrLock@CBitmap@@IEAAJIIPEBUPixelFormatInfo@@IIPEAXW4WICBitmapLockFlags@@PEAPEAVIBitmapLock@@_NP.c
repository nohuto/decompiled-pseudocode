/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18003FD38
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003EAB0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18003F1E8 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18003F270 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  int v15; // ebp
  signed __int32 v16; // eax
  unsigned int v17; // ebx
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // r14
  int v20; // eax
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-68h]

  v12 = a3;
  v13 = a2;
  if ( (a8 & 2) != 0 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 53, 0x80000000, 0) )
      goto LABEL_8;
    v17 = -2003292403;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292403, 0x5Au);
    v24 = 703;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v24);
    return v17;
  }
  if ( (a8 & 1) == 0 )
  {
    v17 = -2147024809;
    v24 = 711;
    goto LABEL_32;
  }
  v15 = 0;
  while ( 1 )
  {
    v16 = *((_DWORD *)this + 53) & 0x7FFFFFFF;
    if ( v16 + 1 < 0 )
      break;
    if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)this + 53, v16 + 1, v16) )
      goto LABEL_6;
  }
  v15 = -2003292403;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292403, 0x3Bu);
LABEL_6:
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2C3u);
    return v17;
  }
  v12 = a3;
  v13 = a2;
LABEL_8:
  v18 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         160LL);
  if ( v18 )
    v19 = CBitmapLock::CBitmapLock(v18);
  else
    v19 = 0LL;
  if ( v19 )
  {
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = CBitmapLock::HrInit(
            v19,
            (struct IBitmapUnlock *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
            v13,
            v12,
            a4,
            a5,
            a6,
            a7,
            a8,
            a10,
            a11);
    v17 = v20;
    if ( v20 >= 0 )
    {
      if ( (a8 & 2) != 0 )
      {
        v22 = (*((_DWORD *)this + 42))++ == -1;
        v23 = *((_DWORD *)this + 42);
        if ( v22 )
          v23 = 1;
        *((_DWORD *)this + 42) = v23;
      }
      *a9 = (CBitmapLock *)((char *)v19 + 72);
      return v17;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2D9u);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2CDu);
  }
  if ( (a8 & 2) != 0 )
  {
    *((_DWORD *)this + 53) = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 53);
  }
  if ( v19 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 16LL))(v19);
  return v17;
}
