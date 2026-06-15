/*
 * XREFs of ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1800E7CA0
 * Callers:
 *     ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1800E7A10 (-Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E6968 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x1800E7A24 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceStateChanged(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        int a3)
{
  unsigned int v5; // ebx
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  struct IEndpointDevice *v9; // rcx
  int v10; // eax
  __int64 *v11; // r8
  __int64 v12; // rax
  struct IEndpointDevice *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  struct IMMDevice *v17; // [rsp+30h] [rbp-30h] BYREF
  BSTR bstrString[2]; // [rsp+38h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+90h] [rbp+30h] BYREF
  struct IEndpointDevice *v22; // [rsp+98h] [rbp+38h] BYREF

  bstrString[1] = (BSTR)-2LL;
  v5 = 0;
  v22 = 0LL;
  bstrString[0] = 0LL;
  v6 = 0;
  v21 = 0;
  if ( a3 != 1 && a3 != 8 )
  {
    v7 = AudioDeviceMgr::ProcessOnDeviceRemoved(this, a2);
    if ( v7 >= 0 )
      goto LABEL_29;
    goto LABEL_26;
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  if ( (*(unsigned int (__fastcall **)(AudioDeviceMgr *, const unsigned __int16 *, struct IEndpointDevice **, _QWORD))(*(_QWORD *)this + 80LL))(
         this,
         a2,
         &v22,
         0LL) == -2147023728 )
  {
    v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 6)
                                                                                          + 40LL))(
           *((_QWORD *)this + 6),
           a2,
           &v17);
    if ( v8 < 0 || (v8 = AudioDeviceMgr::AddEndpointDevice((struct IUnknown **)this, v17, &v22), v8 < 0) )
    {
      v5 = v8;
      if ( v17 )
        ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
      goto LABEL_9;
    }
    v6 = 1;
    if ( v17 )
      ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
  }
  v9 = v22;
  if ( !v22 )
  {
    v10 = (*(__int64 (__fastcall **)(AudioDeviceMgr *, const unsigned __int16 *, struct IEndpointDevice **, _QWORD))(*(_QWORD *)this + 80LL))(
            this,
            a2,
            &v22,
            0LL);
    if ( v10 < 0 )
    {
      v5 = v10;
LABEL_9:
      if ( v20 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_29;
    }
    v9 = v22;
  }
  if ( v20 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = v22;
  }
  v11 = (__int64 *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    v12 = *v11;
    v13 = v9;
    v14 = *((_QWORD *)this + 5);
    if ( v6 )
      (*(void (__fastcall **)(__int64, struct IEndpointDevice *))(v12 + 24))(v14, v13);
    else
      (*(void (__fastcall **)(__int64, struct IEndpointDevice *))(v12 + 40))(v14, v13);
    v9 = v22;
  }
  v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, BSTR *))(*(_QWORD *)v9 + 104LL))(v9, bstrString);
  if ( v7 < 0 )
  {
LABEL_26:
    v5 = v7;
    goto LABEL_29;
  }
  v15 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)v22 + 32LL))(v22, &v21);
  if ( v15 < 0 )
    v5 = v15;
LABEL_29:
  SysFreeString(bstrString[0]);
  if ( v22 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v22 + 16LL))(v22);
  return v5;
}
