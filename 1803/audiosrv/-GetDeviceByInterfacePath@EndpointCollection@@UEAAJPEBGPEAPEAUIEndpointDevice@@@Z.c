/*
 * XREFs of ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1801179D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180098760 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_419e19f7_d318_4c05_b705_2f17133c55da@@3U__s_GUID@@.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180116838 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EndpointCollection::GetDeviceByInterfacePath(
        EndpointCollection *this,
        char *a2,
        struct IEndpointDevice **a3)
{
  EndpointCollection *v5; // r8
  EndpointDevice *v6; // rcx
  int v7; // edi
  int v8; // ebx
  unsigned __int16 *v9; // rax
  int v10; // r8d
  int v11; // ecx
  __int64 (__fastcall *v12)(EndpointDevice *); // rax
  void (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  EndpointDevice *v17; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v5 = this;
  v15 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v8 = (*(__int64 (__fastcall **)(EndpointCollection *, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v15);
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v17);
          v8 = (*(__int64 (__fastcall **)(__int64, EndpointDevice **))(*(_QWORD *)v15 + 24LL))(v15, &v17);
          if ( v8 < 0 )
            break;
          v6 = v17;
          if ( !v17 )
            goto LABEL_23;
          v14 = 0LL;
          pv = 0LL;
          v8 = (*(__int64 (__fastcall **)(EndpointDevice *, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v17 + 24LL))(
                 v17,
                 &v14);
          if ( v8 < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
            if ( v14 )
              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
            break;
          }
          ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_419e19f7_d318_4c05_b705_2f17133c55da>(
            v16,
            v14);
          v8 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v16[0] + 96LL))(v16[0], &pv);
          if ( v8 >= 0 )
          {
            v9 = (unsigned __int16 *)pv;
            do
            {
              v10 = *(unsigned __int16 *)((char *)v9 + a2 - (_BYTE *)pv);
              v11 = *v9 - v10;
              if ( v11 )
                break;
              ++v9;
            }
            while ( v10 );
            if ( !v11 )
            {
              v7 = 1;
              ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v17, a3);
            }
          }
          if ( v16[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
          CoTaskMemFree(pv);
          pv = 0LL;
          if ( v14 )
            ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
          v6 = v17;
          if ( !v17 )
          {
            if ( v7 )
              goto LABEL_27;
LABEL_23:
            v8 = -2147023728;
            goto LABEL_27;
          }
          if ( v7 )
            goto LABEL_27;
        }
      }
      v6 = v17;
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
LABEL_27:
  if ( v6 )
  {
    v12 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v6 + 16LL);
    if ( v12 == EndpointDevice::Release )
      EndpointDevice::Release(v6);
    else
      ((void (__fastcall *)(EndpointDevice *, __int64 (__fastcall *)(EndpointDevice *), EndpointCollection *))v12)(
        v6,
        EndpointDevice::Release,
        v5);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64, char *, EndpointCollection *))(*(_QWORD *)v15 + 16LL))(v15, a2, v5);
  return (unsigned int)v8;
}
