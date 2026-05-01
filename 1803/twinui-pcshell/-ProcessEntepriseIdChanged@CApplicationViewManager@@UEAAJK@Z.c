/*
 * XREFs of ?ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z @ 0x18013C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h]

  v4 = this + 41;
  v13 = this + 41;
  AcquireSRWLockShared(this + 41);
  v5 = 0LL;
  if ( this[43].Ptr )
  {
    while ( 1 )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[42].Ptr + v5);
      v7 = (**v6)(v6, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v12);
      v8 = retaddr;
      if ( v7 < 0 )
        break;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, a2);
      v8 = retaddr;
      if ( v7 < 0 )
      {
        v9 = 802LL;
        goto LABEL_6;
      }
LABEL_7:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( (PVOID)++v5 >= this[43].Ptr )
        goto LABEL_8;
    }
    v9 = 800LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      v8,
      v9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
LABEL_8:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
