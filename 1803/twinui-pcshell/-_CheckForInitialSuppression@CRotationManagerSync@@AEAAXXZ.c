/*
 * XREFs of ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x18011B944
 * Callers:
 *     ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18011B4A0 (-CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x18011B000 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CRotationManagerSync::_CheckForInitialSuppression(CRotationManagerSync *this)
{
  char *v2; // rdi
  char *v3; // rbx
  __int64 v4; // rcx
  int v5; // r14d
  CRotationManagerSync *v6; // [rsp+38h] [rbp-18h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-10h]
  char v8; // [rsp+48h] [rbp-8h]
  CRotationManagerSync *v9; // [rsp+78h] [rbp+28h] BYREF

  v2 = (char *)OpenMutexW(0x100000u, 0, L"ShellRMSM");
  v3 = 0LL;
  if ( ((unsigned __int64)(v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    *((_BYTE *)this + 128) = 1;
    v9 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    v6 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
    hObject = v2;
    v2 = 0LL;
    v8 = 0;
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___(v4, &v6);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v6 )
      (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 < 0 )
      *((_BYTE *)this + 128) = 0;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 16LL))(this);
  }
  else
  {
    v3 = v2;
  }
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
}
