/*
 * XREFs of ACPIDockIrpQueryID @ 0x1C00736B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C00016F0 (WPP_RECORDER_SF_qsdLqss.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0008ED0 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIInitMultiString @ 0x1C007D26C (ACPIInitMultiString.c)
 *     ACPIInitUnicodeString @ 0x1C007D67C (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIDockIrpQueryID(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 CurrentStackLocation; // rcx
  const char *v5; // r14
  _QWORD *v6; // rbx
  char v7; // di
  unsigned __int8 v8; // dl
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  __int64 v14; // rdx
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rax
  const char *v21; // r14
  const char *v22; // rcx
  __int64 v24; // rcx
  char *IrpText; // rax
  const char *v26; // r8
  __int64 v27; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v29; // [rsp+B8h] [rbp+48h]
  char v30; // [rsp+C0h] [rbp+50h]
  wchar_t *v31; // [rsp+C8h] [rbp+58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v5 = byte_1C005B1F0;
  v6 = (_QWORD *)DeviceExtension;
  v7 = 0;
  v8 = *(_BYTE *)(CurrentStackLocation + 1);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = *(_DWORD *)(CurrentStackLocation + 8);
  v29 = v8;
  v30 = v9;
  if ( !v9 )
    goto LABEL_25;
  v10 = v9 - 1;
  if ( !v10 )
  {
    v18 = ACPIInitMultiString(&DestinationString, "ACPI\\DockDevice", v6[71], "ACPI\\DockDevice", 0LL);
    if ( v18 >= 0 )
    {
      DestinationString.Buffer[((unsigned __int64)DestinationString.MaximumLength >> 1) - 1] = 0;
      v27 = -1LL;
      do
        ++v27;
      while ( DestinationString.Buffer[v27] );
      DestinationString.Buffer[(unsigned int)v27] = 38;
    }
LABEL_26:
    if ( v18 >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)DestinationString.Buffer;
      goto LABEL_17;
    }
LABEL_16:
    a2->IoStatus.Information = 0LL;
LABEL_17:
    a2->IoStatus.Status = v18;
    IofCompleteRequest(a2, 0);
    if ( v6 )
    {
      v7 = (char)v6;
      if ( (v6[1] & 0x200000000000LL) != 0 )
        v5 = (const char *)v6[70];
    }
    IrpText = ACPIDebugGetIrpText(v24, v29);
    WPP_RECORDER_SF_qsdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      (__int64)v26,
      0x16u,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      IrpText,
      v30,
      v18,
      v7,
      v5,
      v26);
    return (unsigned int)v18;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v18 = -1073741637;
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_25:
    v18 = ACPIInitUnicodeString(&DestinationString);
    goto LABEL_26;
  }
  if ( v12 != 1 )
  {
    v13 = ACPIDebugGetIrpText(CurrentStackLocation, v8);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      (__int64)v15,
      0x15u,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      v13,
      v30,
      v16,
      v17,
      v15);
    v18 = -1073741637;
    goto LABEL_26;
  }
  v19 = v6[23];
  if ( v19 )
  {
    v18 = ACPIGet(v19, 0x4449555Fu, 532502, 0LL, 0, 0LL, 0LL, (__int64)&v31, 0LL);
    if ( v18 >= 0 )
      DestinationString.Buffer = v31;
    goto LABEL_26;
  }
  v20 = v6[1];
  v21 = byte_1C005B1F0;
  v22 = byte_1C005B1F0;
  if ( (v20 & 0x200000000000LL) != 0 )
  {
    v21 = (const char *)v6[70];
    if ( (v20 & 0x400000000000LL) != 0 )
      v22 = (const char *)v6[71];
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x12u,
    0x14u,
    (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
    (char)a2,
    (char)v6,
    v21,
    v22);
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 3221225473LL;
}
