/*
 * XREFs of ?RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18016B9C8
 * Callers:
 *     ?_OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18016C960 (-_OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_b4e7b8f516fbf6b27e467880778c2719___ @ 0x18016D800 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_b4e7b8f516fbf6b27e467880778c2719___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::RelaunchSIPWithDelay(HSTRING *this)
{
  PCWSTR StringRawBuffer; // rdi
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  IUnknown *v7; // rbx
  DWORD CurrentThreadId; // eax
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 hasEmbedNull; // [rsp+60h] [rbp+10h] BYREF
  __int64 v17; // [rsp+68h] [rbp+18h] BYREF

  v17 = 0LL;
  WindowsStringHasEmbeddedNull(this[45], (BOOL *)&hasEmbedNull);
  if ( !(_DWORD)hasEmbedNull )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[45], 0LL);
    v3 = CMarshaledInterface::Marshal(
           &v17,
           &GUID_bc5ec145_0464_42ff_aeda_cf0c82a89156,
           (struct IUnknown *)((unsigned __int64)(this + 14) & -(__int64)(this != 0LL)),
           1);
    v4 = retaddr;
    if ( v3 >= 0 )
    {
      v14[0] = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v14[1] = StringRawBuffer;
      v7 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_b4e7b8f516fbf6b27e467880778c2719___(
                           &hasEmbedNull,
                           v14);
      CurrentThreadId = GetCurrentThreadId();
      v9 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0x7D0u, v7, 0LL);
      v10 = hasEmbedNull;
      if ( hasEmbedNull )
      {
        hasEmbedNull = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v14[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
      v4 = retaddr;
      if ( v9 >= 0 )
        goto LABEL_13;
      v5 = (unsigned int)v9;
      v6 = 441LL;
    }
    else
    {
      v5 = (unsigned int)v3;
      v6 = 419LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v5);
LABEL_13:
    v11 = 0;
    goto LABEL_15;
  }
  v11 = -2147024809;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1A1,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)0x80070057LL);
LABEL_15:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v11;
}
