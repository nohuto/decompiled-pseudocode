/*
 * XREFs of ACPIDeviceIrpDeviceFilterRequest @ 0x1C001B050
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0008814 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0029B28 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceFilterRequest(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD))
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  char v8; // r8
  int v9; // r14d
  int v10; // r15d
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // edi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = (_QWORD *)DeviceExtension;
  v8 = 0;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)&unk_1C005B1F0;
  v12 = (const char *)&unk_1C005B1F0;
  if ( DeviceExtension )
  {
    v8 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)v7[70];
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = (const char *)v7[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v12,
    0xAu,
    0x1Eu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a2,
    v9 - 1,
    v8,
    v11,
    v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 >= 0 )
  {
    if ( v9 == 1 || (v7[119] & 0x1000000000LL) == 0 )
    {
      return ACPIDeviceInitializePowerRequest(
               (__int64)v7,
               v9,
               a3,
               a2,
               v10,
               0,
               8 * (unsigned int)((unsigned int)(v10 - 4) <= 2));
    }
    else
    {
      if ( a3 )
        a3((__int64)v7, a2, (unsigned int)v14);
      return 3221225494LL;
    }
  }
  else
  {
    ACPIInternalDecrementIrpReferenceCount(v7);
    return (unsigned int)v14;
  }
}
