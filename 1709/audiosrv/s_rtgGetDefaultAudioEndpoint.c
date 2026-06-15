/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x180017F40
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180018040 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AC2C8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall s_rtgGetDefaultAudioEndpoint(void *a1, unsigned int a2, int a3, unsigned __int16 **a4, _DWORD *a5)
{
  unsigned __int16 *v5; // rdi
  _DWORD *v9; // r14
  RPC_STATUS v10; // eax
  __int64 v11; // rcx
  signed int MMDeviceFromInterfaceId; // ebx
  HANDLE ProcessHeap; // rax
  struct IUnknown *v15; // rcx
  __int64 v16; // rax
  size_t v18; // rbx
  unsigned __int16 *v19; // rax
  struct IUnknown *v20; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 *v22; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF
  unsigned int Pid; // [rsp+90h] [rbp+40h] BYREF

  v5 = 0LL;
  v22 = 0LL;
  pv = 0LL;
  if ( a3 >= 7 )
  {
    MMDeviceFromInterfaceId = -2147024809;
    goto LABEL_10;
  }
  if ( !a4 || (v9 = a5) == 0LL )
  {
    MMDeviceFromInterfaceId = -2147467261;
    goto LABEL_10;
  }
  *a5 = 0;
  v10 = I_RpcBindingInqLocalClientPID(a1, &Pid);
  MMDeviceFromInterfaceId = v10;
  if ( v10 > 0 )
    MMDeviceFromInterfaceId = (unsigned __int16)v10 | 0x80070000;
  if ( MMDeviceFromInterfaceId < 0 )
    goto LABEL_10;
  if ( (int)CPolicyConfig::GetApplicationDefaultEndpoint(v11, Pid, (unsigned int)a3, a2, &pv) >= 0 )
  {
    v21 = 0LL;
    v20 = 0LL;
    MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(pv, &v21);
    if ( MMDeviceFromInterfaceId >= 0 )
    {
      v15 = v20;
      if ( v20 != v21 )
      {
        ATL::AtlComQIPtrAssign(&v20, v21, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
        v15 = v20;
      }
      if ( !v15 )
      {
        MMDeviceFromInterfaceId = -2147023728;
        CoTaskMemFree(0LL);
        if ( v20 )
          ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
        if ( v21 )
          ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
        goto LABEL_10;
      }
      MMDeviceFromInterfaceId = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int16 **))v15->lpVtbl[2].AddRef)(
                                  v15,
                                  &v22);
      if ( MMDeviceFromInterfaceId >= 0 )
      {
        *v9 = 1;
        CoTaskMemFree(0LL);
        if ( v20 )
          ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
        if ( v21 )
          ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
LABEL_34:
        v16 = -1LL;
        while ( v22[++v16] != 0 )
          ;
        v18 = 2 * v16 + 2;
        v19 = (unsigned __int16 *)MIDL_user_allocate(v18);
        v5 = v19;
        if ( !v19 )
        {
          MMDeviceFromInterfaceId = -2147024882;
          goto LABEL_10;
        }
        MMDeviceFromInterfaceId = StringCbCopyW(v19, v18, v22);
        goto LABEL_39;
      }
      CoTaskMemFree(0LL);
      if ( v20 )
        ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
      if ( v21 )
        ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
    }
    else
    {
      CoTaskMemFree(0LL);
      if ( v21 )
        ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
    }
LABEL_39:
    if ( MMDeviceFromInterfaceId >= 0 )
    {
      *a4 = v5;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( a3 >= 3 )
  {
    MMDeviceFromInterfaceId = -2147023728;
    goto LABEL_10;
  }
  MMDeviceFromInterfaceId = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, unsigned __int16 **))(*(_QWORD *)g_PolicyManager + 152LL))(
                              g_PolicyManager,
                              a2,
                              (unsigned int)a3,
                              &v22);
  if ( MMDeviceFromInterfaceId >= 0 )
    goto LABEL_34;
LABEL_10:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v5);
LABEL_11:
  CoTaskMemFree(pv);
  CoTaskMemFree(v22);
  return (unsigned int)MMDeviceFromInterfaceId;
}
