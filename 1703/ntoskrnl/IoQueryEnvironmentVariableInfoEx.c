/*
 * XREFs of IoQueryEnvironmentVariableInfoEx @ 0x14069047C
 * Callers:
 *     NtQueryEnvironmentVariableInfoEx @ 0x14071D8F0 (NtQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x140691258 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoQueryEnvironmentVariableInfoEx(
        unsigned int a1,
        struct _DEVICE_OBJECT **a2,
        __int64 *a3,
        __int64 *a4)
{
  int v8; // ebx
  struct _DEVICE_OBJECT *v9; // rax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+9Ch] [rbp-64h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  __int64 *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  int v25; // [rsp+BCh] [rbp-44h]
  __int64 *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+CCh] [rbp-34h]
  PVOID *p_Object; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]

  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, _QWORD, struct _DEVICE_OBJECT **, __int64 *, __int64 *))(v12 + 24))(
           Object,
           DeviceObject,
           a1,
           a2,
           a3,
           a4);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( stru_14033C9D0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C9D0, 0x400000000000uLL) )
  {
    v9 = *a2;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    DeviceObject = v9;
    v14 = *a3;
    v15 = *a4;
    v17 = &v12;
    p_DeviceObject = &DeviceObject;
    v23 = &v14;
    v26 = &v15;
    p_Object = &Object;
    LODWORD(v12) = a1;
    LODWORD(Object) = v8;
    v18 = 4;
    v21 = 8;
    v24 = 8;
    v27 = 8;
    v30 = 4;
    TlgWrite(&stru_14033C9D0, &unk_1402ABC59, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v8;
}
