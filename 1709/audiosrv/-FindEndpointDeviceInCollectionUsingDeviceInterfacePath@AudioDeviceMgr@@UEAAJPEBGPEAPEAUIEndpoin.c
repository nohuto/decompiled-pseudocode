/*
 * XREFs of ?FindEndpointDeviceInCollectionUsingDeviceInterfacePath@AudioDeviceMgr@@UEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x1800E7120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x1800E6BF4 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::FindEndpointDeviceInCollectionUsingDeviceInterfacePath(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        struct IEndpointDevice **a3,
        struct IEndpointCollection **a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(AudioDeviceMgr *, _QWORD, __int64 *))(*(_QWORD *)this + 24LL))(this, 0LL, &v11);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, struct IEndpointDevice **))(*(_QWORD *)v11 + 56LL))(
               v11,
               a2,
               a3);
        if ( v8 >= 0 )
          goto LABEL_11;
        v9 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        v8 = (*(__int64 (__fastcall **)(AudioDeviceMgr *, __int64, __int64 *))(*(_QWORD *)this + 24LL))(this, 1LL, &v11);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, struct IEndpointDevice **))(*(_QWORD *)v11 + 56LL))(
                 v11,
                 a2,
                 a3);
          if ( v8 >= 0 )
LABEL_11:
            ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v11, a4);
        }
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v8;
}
