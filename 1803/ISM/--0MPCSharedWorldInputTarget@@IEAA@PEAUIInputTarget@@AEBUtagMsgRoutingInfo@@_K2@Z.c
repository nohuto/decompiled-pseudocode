/*
 * XREFs of ??0MPCSharedWorldInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2@Z @ 0x18008852C
 * Callers:
 *     ?Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInputTarget@@@Z @ 0x180088768 (-Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInp.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
MPCSharedWorldInputTarget *__fastcall MPCSharedWorldInputTarget::MPCSharedWorldInputTarget(
        MPCSharedWorldInputTarget *this,
        struct IInputTarget *a2,
        const struct tagMsgRoutingInfo *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char v9; // si
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v13[10]; // [rsp+38h] [rbp-50h] BYREF

  v12[1] = -2LL;
  v12[2] = this;
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  v9 = 1;
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &MPCSharedWorldInputTarget::`vftable'{for `IMPCInputTarget'};
  *((_QWORD *)this + 1) = &MPCSharedWorldInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &MPCSharedWorldInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &MPCSharedWorldInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)a3;
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a3 + 1);
  *((_QWORD *)this + 11) = *((_QWORD *)a3 + 4);
  *((_QWORD *)this + 14) = a4;
  *((_QWORD *)this + 15) = a5;
  *((_BYTE *)this + 96) = 0;
  if ( a2 )
  {
    v12[0] = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a2)(
           a2,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           v12) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)v12[0] + 72LL))(v12[0], v13);
      if ( *((_DWORD *)this + 14) != v13[0] || *((_DWORD *)this + 15) != v13[1] )
        v9 = 0;
      *((_BYTE *)this + 96) = v9;
    }
    v10 = v12[0];
    if ( v12[0] )
    {
      v12[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return this;
}
