/*
 * XREFs of ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x18003B124
 * Callers:
 *     ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18003AA10 (-CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x18003B6D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CRotationManagerSync::_CheckForInitialSuppression(CRotationManagerSync *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  int v4; // esi
  CRotationManagerSync *v5; // [rsp+38h] [rbp-20h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+48h] [rbp-10h]

  v2 = (char *)OpenMutexW(0x100000u, 0, L"ShellRMSM");
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *((_BYTE *)this + 136) = 1;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 8LL))(this);
    v5 = this;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 8LL))(this);
    hObject = v2;
    v2 = 0LL;
    v7 = 0;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___(v3, &v5);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v5 )
      (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 < 0 )
      *((_BYTE *)this + 136) = 0;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
}
