/*
 * XREFs of ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18000A168
 * Callers:
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x180009468 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180125720 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180044CC0 (-AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_AddDelayedOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  int v4; // ebx
  __int64 (__fastcall *v5)(CApplicationManager *__hidden, struct IAsyncCallback *); // rax
  int v6; // eax
  CApplicationManager *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, CApplicationManager **))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         &v8);
  if ( v4 >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, struct IAsyncCallback *))(*(_QWORD *)v8 + 128LL);
    if ( v5 == CApplicationManager::AddDelayedOperation )
      v6 = CApplicationManager::AddDelayedOperation(v8, a2);
    else
      v6 = v5(v8, a2);
    v4 = v6;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v4;
}
