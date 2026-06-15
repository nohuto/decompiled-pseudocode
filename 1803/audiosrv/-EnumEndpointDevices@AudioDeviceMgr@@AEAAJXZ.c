/*
 * XREFs of ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x180055FE8
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005642C (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::EnumEndpointDevices(AudioDeviceMgr *this)
{
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+60h] [rbp+20h] BYREF
  struct IMMDevice *v8; // [rsp+68h] [rbp+28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 6) + 24LL))(
         *((_QWORD *)this + 6),
         2LL,
         9LL,
         &v9);
  if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7), v3 < 0) )
  {
    v2 = v3;
  }
  else
  {
    v4 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = 0LL;
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v9 + 32LL))(v9, v4, &v8);
        if ( v5 < 0 )
          break;
        AudioDeviceMgr::AddEndpointDevice(this, v8, 0LL);
        if ( v8 )
          ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
        if ( ++v4 >= v7 )
          goto LABEL_8;
      }
      v2 = v5;
      if ( v8 )
        ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
    }
  }
LABEL_8:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v2;
}
