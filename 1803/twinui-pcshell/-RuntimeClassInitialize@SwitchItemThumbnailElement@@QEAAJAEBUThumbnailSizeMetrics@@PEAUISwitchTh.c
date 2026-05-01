/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x18029D72C
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x180287DF4 (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z @ 0x180296C58 (-RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z.c)
 *     ObservableProperty_HWND_______ptr64_::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___ @ 0x18029CE3C (ObservableProperty_HWND_______ptr64_--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x18029D530 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::RuntimeClassInitialize(
        SwitchItemThumbnailElement *this,
        const struct ThumbnailSizeMetrics *a2,
        struct ISwitchThumbnailFactory *a3,
        struct ISwitchItem *a4)
{
  const struct ThumbnailSizeMetrics *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // r8
  int v19; // eax
  int v20[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v7 = CShrinkButtonElement::RuntimeClassInitialize(this, *((double *)a2 + 15), a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = 2LL;
    v11 = (_OWORD *)((char *)this + 296);
    do
    {
      *v11 = *(_OWORD *)v5;
      v11[1] = *((_OWORD *)v5 + 1);
      v11[2] = *((_OWORD *)v5 + 2);
      v11[3] = *((_OWORD *)v5 + 3);
      v11[4] = *((_OWORD *)v5 + 4);
      v11[5] = *((_OWORD *)v5 + 5);
      v11[6] = *((_OWORD *)v5 + 6);
      v11 += 8;
      v12 = *((_OWORD *)v5 + 7);
      v5 = (const struct ThumbnailSizeMetrics *)((char *)v5 + 128);
      *(v11 - 1) = v12;
      --v10;
    }
    while ( v10 );
    *v11 = *(_OWORD *)v5;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v5 + 2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 72, (__int64)a4);
    v13 = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize((__int64 *)this + 75, (__int64)this);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *(_QWORD *)v20 = *((_QWORD *)this + 75);
      v15 = *(_QWORD *)v20;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v20);
      v16 = *((_QWORD *)this + 72);
      v22 = v15;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v22);
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
      v19 = ObservableProperty_HWND_______ptr64_::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___(
              v17,
              &v22,
              v18);
      v14 = v19;
      if ( v19 >= 0 )
      {
        v14 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
          (const char *)(unsigned int)v19);
        (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)this + 80LL))(this);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
        (const char *)(unsigned int)v13);
    }
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
