/*
 * XREFs of ??0MPCSharedWorldInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2@Z @ 0x1800AC5CC
 * Callers:
 *     ?Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInputTarget@@@Z @ 0x1800AC810 (-Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInp.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
MPCSharedWorldInputTarget *__fastcall MPCSharedWorldInputTarget::MPCSharedWorldInputTarget(
        MPCSharedWorldInputTarget *this,
        int (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *),
        const struct tagMsgRoutingInfo *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char v9; // bp
  int (__fastcall **v10)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v14[3]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v15[10]; // [rsp+38h] [rbp-50h] BYREF

  v14[1] = -2LL;
  v14[2] = (__int64)this;
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
    ((void (__fastcall *)(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *)))(*a2)[1])(a2);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)a3;
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a3 + 1);
  *((_QWORD *)this + 11) = *((_QWORD *)a3 + 4);
  *((_QWORD *)this + 14) = a4;
  *((_QWORD *)this + 15) = a5;
  *((_BYTE *)this + 96) = 0;
  if ( a2 )
  {
    v14[0] = 0LL;
    v10 = *a2;
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(v14);
    if ( (*v10)((struct IInputTarget *)a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v11) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14[0] + 96LL))(v14[0], v15);
      if ( *((_DWORD *)this + 14) != v15[0] || *((_DWORD *)this + 15) != v15[1] )
        v9 = 0;
      *((_BYTE *)this + 96) = v9;
    }
    v12 = v14[0];
    if ( v14[0] )
    {
      v14[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return this;
}
