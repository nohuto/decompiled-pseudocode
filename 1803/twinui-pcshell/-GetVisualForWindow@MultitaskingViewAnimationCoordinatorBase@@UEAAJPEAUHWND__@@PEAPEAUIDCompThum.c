/*
 * XREFs of ?GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x180298A80
 * Callers:
 *     ?GetVisualForWindow@MultitaskingViewDismissalAnimationCoordinator@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1802845E0 (-GetVisualForWindow@MultitaskingViewDismissalAnimationCoordinator@@UEAAJPEAUHWND__@@PEAPEAUIDCom.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z @ 0x1802979D4 (--4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1802995F4 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinato.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::GetVisualForWindow(
        MultitaskingViewAnimationCoordinatorBase *this,
        HWND a2,
        struct IDCompThumbnail **a3)
{
  __int64 v4; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  *a3 = 0LL;
  v4 = *((_QWORD *)this + 10);
  *(_OWORD *)v9 = 0LL;
  v6 = v4 == 0 ? 0x8002802B : 0;
  if ( v4 )
  {
    v7 = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
           v4,
           *((unsigned int *)this + 17),
           &v11);
    v6 = *(_DWORD *)v7 != 1 ? 0x8002802B : 0;
    if ( *(_DWORD *)v7 == 1 )
      MultitaskingViewAnimationCoordinatorBase::ThumbnailData::operator=(v9, (__int64 *)(v7 + 16));
  }
  if ( (v6 & 0x80000000) == 0 )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9[1]);
    v6 = 0;
    *a3 = (struct IDCompThumbnail *)v9[1];
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return v6;
}
