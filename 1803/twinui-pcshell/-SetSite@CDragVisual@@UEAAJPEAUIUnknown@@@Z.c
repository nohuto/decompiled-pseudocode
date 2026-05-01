/*
 * XREFs of ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x1802F2320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1802F11C8 (-IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x1802F3A58 (-_SetWindowRgn@CDragVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CDragVisual::SetSite(CDragVisual *this, IUnknown *punk)
{
  CWinRTApplicationView **v2; // rbp
  char v5; // si
  int *v6; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *ppvOut; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = (CWinRTApplicationView **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || !punk )
  {
    v5 = 0;
    if ( *v2 && !punk )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  }
  else
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v2, (CWinRTApplicationView *)punk);
  if ( v5 )
  {
    ppvOut = 0LL;
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           punk,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &ppvOut) >= 0 )
    {
      v6 = (int *)((char *)this + 192);
      if ( (*(int (__fastcall **)(void *, char *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, (char *)this + 192) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, (char *)this + 208);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            334LL,
            (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)v7);
          *((_OWORD *)this + 13) = *(_OWORD *)v6;
        }
        SetWindowPos(
          *((HWND *)this + 19),
          0LL,
          *v6,
          *((_DWORD *)this + 49),
          *((_DWORD *)this + 50) - *v6,
          *((_DWORD *)this + 51) - *((_DWORD *)this + 49),
          0x14u);
        CDragVisual::_SetWindowRgn(this);
      }
    }
    IUnknown_GetScaleFactor((IUnknown *)ppvOut, (enum DEVICE_SCALE_FACTOR *)this + 71);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  }
  return 0LL;
}
