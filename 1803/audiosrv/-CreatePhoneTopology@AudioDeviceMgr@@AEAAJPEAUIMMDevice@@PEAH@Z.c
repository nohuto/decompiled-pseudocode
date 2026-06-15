/*
 * XREFs of ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x180056290
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x180056A1C (-CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::CreatePhoneTopology(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        struct IEndpointCollection *a3)
{
  unsigned int v5; // esi
  struct IUnknown *v6; // rbx
  int v7; // edi
  __int64 v9; // rcx
  struct IUnknown *v10; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  v10 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      PhoneTopology::CreateInstance(a2, (struct IEndpointCollection *)a2, a3, (struct IPhoneTopology **)&v10);
      v6 = v10;
      if ( v10 )
      {
        v9 = *((_QWORD *)this + 10);
        LOBYTE(v7) = v9 == 0;
        if ( v9 )
        {
          *((_QWORD *)this + 10) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( *((struct IUnknown **)this + 10) != v6 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 10, v6);
      }
      *(_DWORD *)a3 = v7;
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return v5;
}
