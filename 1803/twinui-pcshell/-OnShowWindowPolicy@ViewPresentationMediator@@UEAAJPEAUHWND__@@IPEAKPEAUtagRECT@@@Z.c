/*
 * XREFs of ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1801F6810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@QEAA@QEAV1@I@Z @ 0x1801F5C84 (--0Iterator@-$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@AEAAXXZ @ 0x1801F63E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIWindowManagementShowMoveSizeEvents@@@@AEAAXXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewPresentationMediator::OnShowWindowPolicy(
        ViewPresentationMediator *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc)
{
  LPRECT v9; // rsi
  int CallbackArray; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  void *v14; // [rsp+38h] [rbp-48h] BYREF
  int v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17[2]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IObjectArray *v21; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+48h] BYREF

  *a4 = 0;
  v9 = lprc;
  SetRectEmpty(lprc);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v21);
  CallbackArray = CGITRegistrationList::GetCallbackArray((ViewPresentationMediator *)((char *)this + 88), &v21);
  v11 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
      (__int64)&v14,
      (__int64)v21);
    ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::Iterator((__int64)&v16, (__int64)&v14, 0);
    ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::Iterator((__int64)&v18, (__int64)&v14, v15);
    while ( (_DWORD)v16 != v18 || v17[1] != v19[1] )
    {
      v12 = v17[0];
      v22 = v17[0];
      if ( v17[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 8LL))(v17[0]);
      if ( *a4 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        break;
      }
      (*(void (__fastcall **)(__int64, HWND, _QWORD, unsigned int *, LPRECT))(*(_QWORD *)v12 + 24LL))(
        v12,
        a2,
        a3,
        a4,
        v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      LODWORD(v16) = v16 + 1;
      ObjectArrayAdapter<IWindowManagementShowMoveSizeEvents>::Iterator::GetCurrentObject(&v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v14);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v21);
  return v11;
}
