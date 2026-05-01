/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewBackedViewHostItem@@V1@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewBackedViewHostItem@@AEAPEAUIApplicationView@@@Z @ 0x1801AB364
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B31DC (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0ApplicationViewBackedViewHostItem@@QEAA@XZ @ 0x1801AC518 (--0ApplicationViewBackedViewHostItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x1801BC480 (-RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewBackedViewHostItem,ApplicationViewBackedViewHostItem,IApplicationView * &>(
        volatile signed __int64 **a1,
        struct IApplicationView **a2)
{
  ApplicationViewBackedViewHostItem *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rbx
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  volatile signed __int64 *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (ApplicationViewBackedViewHostItem *)operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)ApplicationViewBackedViewHostItem::ApplicationViewBackedViewHostItem(v4);
    v11 = v6;
    v12 = 0LL;
    v5 = ApplicationViewBackedViewHostItem::RuntimeClassInitialize((ApplicationViewBackedViewHostItem *)v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v8 = *((_QWORD *)v6 + 12);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v6 + 12, v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
      }
LABEL_11:
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
