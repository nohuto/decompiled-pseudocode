/*
 * XREFs of HUBDSM_InstallingMsOs20RegistryValues @ 0x1C001DE70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C0033174 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0070FC0 (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBDSM_InstallingMsOs20RegistryValues(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r14d
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rax
  NTSTATUS v9; // eax
  ULONG Sizea; // [rsp+28h] [rbp-50h]
  __int64 Size; // [rsp+28h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v14 = *(_QWORD *)(v1 + 2488);
  v3 = v14 + *(unsigned __int16 *)(v14 + 8);
  while ( (unsigned __int8)HUBDESC_GetNextMsOs20Descriptor(v3, &v14) )
  {
    v4 = v14;
    if ( !v14 )
      goto LABEL_8;
    if ( *(_WORD *)(v14 + 2) == 4 )
    {
      v5 = *(unsigned __int16 *)(v14 + 6);
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v14 + 8));
      v6 = HUBREG_WriteValueToDeviceHardwareKey(
             v1,
             (unsigned int)&DestinationString,
             *(unsigned __int16 *)(v4 + 4),
             *(unsigned __int16 *)(v5 + v4 + 8),
             v5 + v4 + 10);
      if ( v6 < 0 )
      {
        Sizea = v6;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
          2u,
          5u,
          0x51u,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
          Sizea);
        goto LABEL_8;
      }
    }
  }
  v2 = 4065;
LABEL_8:
  if ( (*(_DWORD *)(v1 + 2464) & 0x100) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)(v1 + 16));
    v8 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                    WdfDriverGlobals,
                                    v7);
    v9 = IoSetDevicePropertyData(v8, &DEVPKEY_Device_ModelId, 0, 0, 0xDu, 0x10u, (PVOID)(*(_QWORD *)(v1 + 2512) + 4LL));
    if ( v9 < 0 )
    {
      LODWORD(Size) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x52u,
        (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
        Size);
    }
  }
  return v2;
}
