/*
 * XREFs of ACPIDockIrpEject @ 0x1C0072DC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIInternalClearFlags @ 0x1C0029B08 (ACPIInternalClearFlags.c)
 */

__int64 __fastcall ACPIDockIrpEject(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  __int64 *v4; // r14
  __int64 v5; // rbp
  const char *v6; // rax
  const char *v7; // r8
  unsigned __int16 v8; // r9
  int v9; // eax
  int v10; // ebx
  __int64 *v11; // r15
  __int64 v12; // rcx
  char v14; // [rsp+90h] [rbp+18h] BYREF
  char v15; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = (__int64 *)(DeviceExtension + 8);
  ACPIInternalClearFlags((void *)(DeviceExtension + 8), 0x400000000LL);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v5 )
  {
    v6 = byte_1C005B1F0;
    v7 = byte_1C005B1F0;
    if ( (*v4 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(DeviceExtension + 560);
      if ( (*v4 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(DeviceExtension + 568);
    }
    v8 = 10;
LABEL_22:
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      v8,
      (__int64)&WPP_50eabee20425321afd4a00b193ea6a48_Traceguids,
      (char)a2,
      DeviceExtension,
      v6,
      v7);
    v10 = -1073741823;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(DeviceExtension + 192) != 4
    || (KdDisableDebugger(), *(_DWORD *)(DeviceExtension + 200) == 1)
    || (v9 = ACPIGet(v5, 0x4B43445Fu, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v14, 0LL),
        *(_DWORD *)(DeviceExtension + 200) = 1,
        v10 = v9,
        v9 >= 0) )
  {
    v11 = AMLIGetNamedChild(*(_QWORD **)(v5 + 712), 810173791);
    if ( v11 )
    {
      v10 = ACPIGet(v5, 0x304A455Fu, 277872640, 1LL, 4, 0LL, 0LL, 0LL, 0LL);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v11);
    }
    else
    {
      v10 = -1073741772;
    }
    if ( *(_DWORD *)(DeviceExtension + 192) == 4 )
      KdEnableDebugger();
    ACPIInternalClearFlags(v4, 0x400000000LL);
    if ( v10 >= 0 )
    {
      v10 = ACPIGet(DeviceExtension, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v15, 0LL);
      if ( v10 >= 0 )
      {
        v12 = *v4;
        if ( (*v4 & 2) == 0 )
        {
          v6 = byte_1C005B1F0;
          v7 = byte_1C005B1F0;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v6 = *(const char **)(DeviceExtension + 560);
            if ( (v12 & 0x400000000000LL) != 0 )
              v7 = *(const char **)(DeviceExtension + 568);
          }
          v8 = 11;
          goto LABEL_22;
        }
      }
    }
  }
  else
  {
    KdEnableDebugger();
  }
LABEL_23:
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
