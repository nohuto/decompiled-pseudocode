/*
 * XREFs of ?GetDefaultAudioEndpoint@PhoneCallAudio@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180036E40
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x180036970 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PhoneCallAudio::GetDefaultAudioEndpoint(struct IUnknown *a1, int a2, int a3, _QWORD *a4)
{
  __int64 v6; // r12
  int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  struct IUnknownVtbl *lpVtbl; // rcx
  int v12; // eax
  struct IUnknown *v13; // rcx
  int v14; // eax
  struct IUnknown *v15; // rcx
  LPVOID v16; // rax
  void *v17; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  struct IUnknown *v19; // [rsp+28h] [rbp-28h] BYREF
  struct IUnknown *v20[3]; // [rsp+30h] [rbp-20h] BYREF
  char v21; // [rsp+48h] [rbp-8h]
  int v22; // [rsp+80h] [rbp+30h] BYREF

  v20[1] = (struct IUnknown *)-2LL;
  v6 = a2;
  v8 = -2147023728;
  v9 = (struct _RTL_CRITICAL_SECTION *)&a1[15];
  v20[2] = a1 + 15;
  EnterCriticalSection((LPCRITICAL_SECTION)&a1[15]);
  v21 = 1;
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    lpVtbl = a1[v6 + 20].lpVtbl;
    if ( lpVtbl )
    {
      v20[0] = 0LL;
      v22 = 0;
      v19 = 0LL;
      pv = 0LL;
      v12 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IUnknown **))lpVtbl->QueryInterface + 3))(
              lpVtbl,
              v20);
      if ( v12 < 0 )
      {
        v8 = v12;
        CoTaskMemFree(pv);
        pv = 0LL;
        v13 = v20[0];
        if ( !v20[0] )
          goto LABEL_4;
LABEL_8:
        ((void (__fastcall *)(struct IUnknown *))v20[0]->lpVtbl->Release)(v13);
        goto LABEL_4;
      }
      v14 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v20[0]->lpVtbl[2].QueryInterface)(v20[0], &v22);
      if ( v14 < 0 )
      {
        v8 = v14;
        CoTaskMemFree(pv);
        pv = 0LL;
        v13 = v20[0];
        if ( !v20[0] )
          goto LABEL_4;
        goto LABEL_8;
      }
      if ( v22 == 1 )
      {
        v15 = v19;
        if ( v19 != v20[0] )
        {
          ATL::AtlComQIPtrAssign(&v19, v20[0], &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
          v15 = v19;
        }
        v8 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))v15->lpVtbl[2].AddRef)(v15, &pv);
        if ( v8 < 0 )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
          if ( v19 )
            ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
          if ( !v20[0] )
            goto LABEL_4;
          goto LABEL_25;
        }
        v16 = pv;
        v17 = 0LL;
        pv = 0LL;
        *a4 = v16;
        v8 = 0;
      }
      else
      {
        v17 = pv;
      }
      CoTaskMemFree(v17);
      pv = 0LL;
      if ( v19 )
        ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
      if ( !v20[0] )
        goto LABEL_4;
LABEL_25:
      ((void (__fastcall *)(struct IUnknown *))v20[0]->lpVtbl->Release)(v20[0]);
    }
  }
LABEL_4:
  LeaveCriticalSection(v9);
  return (unsigned int)v8;
}
