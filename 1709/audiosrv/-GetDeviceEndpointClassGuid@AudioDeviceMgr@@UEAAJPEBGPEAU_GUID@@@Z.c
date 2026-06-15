/*
 * XREFs of ?GetDeviceEndpointClassGuid@AudioDeviceMgr@@UEAAJPEBGPEAU_GUID@@@Z @ 0x1800E7300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::GetDeviceEndpointClassGuid(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        struct _GUID *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  if ( !a2 )
  {
    v6 = -2147024809;
    goto LABEL_10;
  }
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(AudioDeviceMgr *, const unsigned __int16 *, __int64 *, _QWORD))(*(_QWORD *)this + 80LL))(
         this,
         a2,
         &v10,
         0LL);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, &v9);
    v5 = v9;
    if ( v6 < 0 )
      goto LABEL_10;
    v7 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v9 + 32LL))(v9, a3);
    v6 = 0;
    if ( v7 < 0 )
      v6 = v7;
  }
  v5 = v9;
LABEL_10:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v6;
}
