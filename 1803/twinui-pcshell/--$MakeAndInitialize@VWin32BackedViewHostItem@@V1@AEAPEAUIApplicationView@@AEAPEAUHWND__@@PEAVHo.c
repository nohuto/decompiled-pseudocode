/*
 * XREFs of ??$MakeAndInitialize@VWin32BackedViewHostItem@@V1@AEAPEAUIApplicationView@@AEAPEAUHWND__@@PEAVHolographicPositioner@@@Details@WRL@Microsoft@@YAJPEAPEAVWin32BackedViewHostItem@@AEAPEAUIApplicationView@@AEAPEAUHWND__@@$$QEAPEAVHolographicPositioner@@@Z @ 0x1801AB674
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B31DC (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0Win32BackedViewHostItem@@QEAA@XZ @ 0x1801ACA10 (--0Win32BackedViewHostItem@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEAAXPEAVWin32BackedViewHostItem@@@Z @ 0x1801AD520 (-Attach@-$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEAAXPEAVWin32BackedViewHostItem@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUIServiceProvider@@@Z @ 0x1801B8EF0 (-RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUISer.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Win32BackedViewHostItem,Win32BackedViewHostItem,IApplicationView * &,HWND__ * &,HolographicPositioner *>(
        Win32BackedViewHostItem **a1,
        struct IApplicationView **a2,
        HWND *a3,
        _QWORD *a4)
{
  Win32BackedViewHostItem *v8; // rax
  int v9; // edi
  Win32BackedViewHostItem *v10; // rax
  struct IServiceProvider *v11; // r9
  Win32BackedViewHostItem *v12; // rbx
  volatile int *v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  Win32BackedViewHostItem *v17; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (Win32BackedViewHostItem *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = Win32BackedViewHostItem::Win32BackedViewHostItem(v8);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Win32BackedViewHostItem>::Attach(&v17, v10);
    v11 = (struct IServiceProvider *)((*a4 + 56LL) & -(__int64)(*a4 != 0LL));
    v12 = v17;
    v9 = Win32BackedViewHostItem::RuntimeClassInitialize(v17, *a2, *a3, v11);
    if ( v9 >= 0 )
    {
      if ( v12 )
      {
        v14 = *((_QWORD *)v12 + 12);
        while ( v14 >= 0 )
        {
          if ( (_DWORD)v14 != 0x7FFFFFFF )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 12, v14 + 1, v14);
            if ( v15 != v14 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v14 + 16),
          v13);
LABEL_11:
        v12 = v17;
      }
      *a1 = v12;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
