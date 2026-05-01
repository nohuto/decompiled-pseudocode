/*
 * XREFs of ?_GetAppViewDataByWindow@CApplicationViewBroker@@AEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1802B3330
 * Callers:
 *     ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1802B3300 (-GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBroker::_GetAppViewDataByWindow(
        CApplicationViewBroker *this,
        HWND a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v8[2]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v9[2]; // [rsp+30h] [rbp-78h] BYREF
  int v10; // [rsp+50h] [rbp-58h]

  v8[1] = -2LL;
  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 1) = 0;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 4) = 0;
  *((_DWORD *)a3 + 6) = 0;
  *((_DWORD *)a3 + 7) = 0;
  *((_DWORD *)a3 + 8) = 3;
  v8[0] = 0LL;
  v5 = *((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  v6 = (*(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, a2, v8);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v8[0] + 216LL))(v8[0], v9);
    if ( v6 >= 0 )
    {
      *(_OWORD *)a3 = v9[0];
      *((_OWORD *)a3 + 1) = v9[1];
      *((_DWORD *)a3 + 8) = v10;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  return (unsigned int)v6;
}
