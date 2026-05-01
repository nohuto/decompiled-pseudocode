/*
 * XREFs of ?ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z @ 0x180077290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::ProcessEntepriseIdChanged(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+60h] [rbp+18h]

  v4 = this + 40;
  v14 = this + 40;
  AcquireSRWLockShared(this + 40);
  v5 = 0LL;
  if ( this[42].Ptr )
  {
    while ( 1 )
    {
      v13 = 0LL;
      v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[41].Ptr + v5);
      v7 = (**v6)(v6, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v13);
      v8 = retaddr;
      if ( v7 < 0 )
        break;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, a2);
      v8 = retaddr;
      if ( v7 < 0 )
      {
        v9 = 783LL;
        goto LABEL_6;
      }
LABEL_7:
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( (PVOID)++v5 >= this[42].Ptr )
        goto LABEL_10;
    }
    v9 = 781LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
LABEL_10:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
