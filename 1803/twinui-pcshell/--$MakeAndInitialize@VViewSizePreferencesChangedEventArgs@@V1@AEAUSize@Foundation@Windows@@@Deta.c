/*
 * XREFs of ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewSizePreferencesChangedEventArgs@@AEAUSize@Foundation@Windows@@@Z @ 0x1801B50F4
 * Callers:
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x1801B8CD0 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z.c)
 *     ?RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x1801BC3E0 (-RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0ViewSizePreferencesChangedEventArgs@@QEAA@XZ @ 0x1801B5DB4 (--0ViewSizePreferencesChangedEventArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7A48 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgs,ViewSizePreferencesChangedEventArgs,Windows::Foundation::Size &>(
        ViewSizePreferencesChangedEventArgs **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  ViewSizePreferencesChangedEventArgs *v5; // rax
  ViewSizePreferencesChangedEventArgs *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // xmm0_8
  ViewSizePreferencesChangedEventArgs *v9; // r10
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  ViewSizePreferencesChangedEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF
  ViewSizePreferencesChangedEventArgs *v14; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (ViewSizePreferencesChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  if ( v5 )
  {
    v6 = ViewSizePreferencesChangedEventArgs::ViewSizePreferencesChangedEventArgs(v5);
    v8 = *a2;
    v9 = v6;
    v13 = v6;
    *((_QWORD *)v6 + 8) = v8;
    v10 = *((_QWORD *)v6 + 7);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 7, v10 + 1, v10);
        if ( v11 != v10 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v10 + 16), v7);
LABEL_9:
    *a1 = v9;
    Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
