/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x1802A8380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x180099777 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x18028DECC (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z @ 0x1802A6D98 (-CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z.c)
 */

void __fastcall CVirtualDesktopContainerElement::v_LayoutChildren(CVirtualDesktopContainerElement *this)
{
  LONG v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  LONG left; // r8d
  int v13; // r14d
  __int64 v14; // kr00_8
  LANGID ThreadUILanguage_0; // ax
  int v16; // ebx
  int v17; // eax
  LONG v18; // eax
  int v19; // ecx
  __int64 *v20; // rsi
  __int64 *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-40h] BYREF
  LONG v26; // [rsp+50h] [rbp-30h] BYREF
  LONG top; // [rsp+54h] [rbp-2Ch]
  int v28; // [rsp+58h] [rbp-28h]
  LONG bottom; // [rsp+5Ch] [rbp-24h]
  struct tagRECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 100) )
  {
    v23 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v23);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v25, &v23, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v2 = *((_DWORD *)this + 15);
    v3 = *((_QWORD *)this + 11);
    v26 = *((_DWORD *)this + 14);
    v28 = v26 + 1;
    top = v2;
    bottom = v2 + 1;
    (*(void (__fastcall **)(__int64, LONG *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, &v26, 0LL, 0LL);
    v4 = ***((_QWORD ***)this + 99);
    if ( *((_QWORD *)this + 100) == 1LL )
    {
      (*(void (**)(void))(v4 + 144))();
    }
    else
    {
      (*(void (**)(void))(v4 + 136))();
      (*(void (__fastcall **)(char *, struct tagRECT *))(*((_QWORD *)this + 28) + 32LL))((char *)this + 224, &rc);
      InflateRect(&rc, -*((_DWORD *)this + 99), 0);
      rc.left += *((_DWORD *)this + 78);
      rc.right -= *((_DWORD *)this + 79);
      v5 = *((_DWORD *)this + 65);
      v6 = *((_DWORD *)this + 64);
      rc.top += *((_DWORD *)this + 80);
      v7 = v5 - *((_DWORD *)this + 63);
      v8 = v6 - *((_DWORD *)this + 62);
      v9 = *((_DWORD *)this + 82);
      rc.bottom -= *((_DWORD *)this + 81);
      v10 = MulDiv(v9, v8, v7);
      v11 = *((_DWORD *)this + 83);
      left = rc.left;
      v13 = v11 + v10;
      v14 = *((_DWORD *)this + 200) * (v11 + v10) - v11;
      top = rc.top;
      if ( (int)((rc.right - rc.left) / 2 - v14 / 2 + rc.left) > rc.left )
        left = (rc.right - rc.left) / 2 - v14 / 2 + rc.left;
      v26 = left;
      v28 = left + v10;
      bottom = rc.bottom;
      ThreadUILanguage_0 = GetThreadUILanguage_0();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
      {
        v16 = v26 - *((_DWORD *)this + 99);
        v17 = CVirtualDesktopContainerElement::CalcWidthForDesktopCount(this, *((_DWORD *)this + 200));
        v18 = v16 + v16 + v17 - v28;
        v19 = v18 - v26;
        v26 = v18;
        v28 += v19;
        v13 = -v13;
      }
      v20 = (__int64 *)*((_QWORD *)this + 99);
      v21 = &v20[*((_QWORD *)this + 100)];
      while ( v20 != v21 )
      {
        v23 = *v20;
        v22 = v23;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v23);
        (*(void (__fastcall **)(__int64, LONG *))(*(_QWORD *)v22 + 104LL))(v22, &v26);
        v26 += v13;
        v28 += v13;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        ++v20;
      }
    }
    v24 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>((_QWORD *)this + 10, &v24) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 80LL))(v24);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v25);
  }
}
