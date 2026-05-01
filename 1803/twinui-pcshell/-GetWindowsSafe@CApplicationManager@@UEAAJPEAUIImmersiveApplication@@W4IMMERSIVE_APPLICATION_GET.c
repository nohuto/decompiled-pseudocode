/*
 * XREFs of ?GetWindowsSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180107D40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetWindowsSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rdi
  int v9; // ebx

  v8 = a5;
  *(_QWORD *)a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
  v9 = (**a2)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &a5);
  if ( v9 >= 0 )
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a5 + 352LL))(a5, a3, a4, v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
  return (unsigned int)v9;
}
