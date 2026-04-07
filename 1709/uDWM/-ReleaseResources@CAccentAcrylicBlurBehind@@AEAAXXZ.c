/*
 * XREFs of ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x1800771A0
 * Callers:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800757F0 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x180075704 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::ReleaseResources(CAccentAcrylicBlurBehind *this)
{
  __int64 v2; // rbx
  CBaseObject *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  v5 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
              (_QWORD *)this + 38,
              (__int64)&v5) >= 0 )
  {
    v4 = 0LL;
    v2 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 376LL))(v2, &v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  CloseHandle(*((HANDLE *)this + 43));
  v3 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 35) = 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
}
