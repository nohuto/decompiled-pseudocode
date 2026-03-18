/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1801C4C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::Lock(CBitmap *this, const struct WICRect *a2, unsigned int a3, struct IWICBitmapLock **a4)
{
  unsigned int v8; // ebx
  signed int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IWICBitmapLock **); // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 80) & -(__int64)(this != (CBitmap *)40));
  EnterCriticalSection(v13);
  if ( a2 )
  {
    if ( a4 )
    {
      v9 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, struct IWICBitmapLock **)))(*((_QWORD *)this - 2) + 24LL))(
             (char *)this - 16,
             a2,
             a3,
             &v12);
      v8 = v9;
      if ( v9 < 0 )
      {
        v11 = 290;
      }
      else
      {
        v9 = (**v12)(v12, &IID_IWICBitmapLock, a4);
        v8 = v9;
        if ( v9 >= 0 )
          goto LABEL_10;
        v11 = 292;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v11);
      goto LABEL_10;
    }
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Eu);
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Du);
  }
LABEL_10:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v12);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
