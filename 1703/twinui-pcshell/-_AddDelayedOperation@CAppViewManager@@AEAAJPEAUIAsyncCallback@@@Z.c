/*
 * XREFs of ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18004113C
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z @ 0x18003EF80 (-WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1800432F0 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_AddDelayedOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))(
         *((_QWORD *)this + 14),
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         &v6);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, struct IAsyncCallback *))(*(_QWORD *)v6 + 120LL))(v6, a2);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)v3;
}
