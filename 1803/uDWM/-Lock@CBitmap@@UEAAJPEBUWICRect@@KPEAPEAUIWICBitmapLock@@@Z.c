/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1800AA5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800470A4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::Lock(CBitmap *this, const struct WICRect *a2, unsigned int a3, struct IWICBitmapLock **a4)
{
  unsigned __int64 v7; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  v7 = ((unsigned __int64)this + 72) & -(__int64)(this != (CBitmap *)40);
  v14 = v7;
  if ( *(_BYTE *)(v7 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
  if ( !a2 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x10Eu);
    goto LABEL_12;
  }
  if ( !a4 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x10Fu);
    goto LABEL_12;
  }
  v10 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, _QWORD, __int64 *))(*((_QWORD *)this - 2) + 24LL))(
          (char *)this - 16,
          a2,
          a3,
          &v13);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapLock **))v13)(v13, &IID_IWICBitmapLock, a4);
    v9 = v10;
    if ( v10 >= 0 )
      goto LABEL_12;
    v12 = 277;
  }
  else
  {
    v12 = 275;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v12);
LABEL_12:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v14);
  return v9;
}
