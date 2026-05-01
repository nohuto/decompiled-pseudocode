/*
 * XREFs of ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEAE@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEAE@Z @ 0x1801BB160
 * Callers:
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1801BBFB0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x1801B5BE0 (--0PresentationReadyChangedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801B6828 (-Attach@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationReadyC.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7A28 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,unsigned char &>(
        _QWORD *a1,
        _BYTE *a2)
{
  unsigned int v2; // ebx
  PresentationReadyChangedEventArgs *v5; // rax
  PresentationReadyChangedEventArgs *v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  PresentationReadyChangedEventArgs *v12; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (PresentationReadyChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  if ( v5 )
  {
    v6 = PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(v5);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::Attach(&v11, (__int64)v6);
    v7 = v11;
    *(_BYTE *)(v11 + 72) = *a2 != 0;
    v8 = *(_QWORD *)(v7 + 64);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v8 + 16),
      (volatile int *)((unsigned __int64)v8 >> 63));
LABEL_9:
    *a1 = v11;
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
