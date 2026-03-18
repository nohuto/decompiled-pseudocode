/*
 * XREFs of ACPIBusAndFilterIrpEject @ 0x1C0075650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0008CB0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIInternalClearFlags @ 0x1C0029B08 (ACPIInternalClearFlags.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpEject(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // bp
  unsigned __int8 v6; // r12
  __int64 DeviceExtension; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  const char *v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // rcx
  char *IrpText; // rax
  const char *v16; // r8
  __int64 v17; // r11
  __int64 v19; // r9
  __int64 v20; // rax
  const char *v21; // rdx
  const char *v22; // rcx
  char v23; // [rsp+98h] [rbp+10h] BYREF

  v5 = a2;
  v6 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = (_QWORD *)DeviceExtension;
  v10 = byte_1C005B1F0;
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    if ( *(_DWORD *)(DeviceExtension + 320) <= 1u )
    {
      ACPIInternalClearFlags((void *)(DeviceExtension + 8), 2048LL);
      ACPIGet((__int64)v9, 0x304A455Fu, 277872640, v19, 4, 0LL, 0LL, 0LL, 0LL);
      v11 = ACPIGet((__int64)v9, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v23, 0LL);
      if ( v11 >= 0 && !a4 )
      {
        v20 = v9[1];
        if ( (v20 & 2) == 0 )
        {
          v21 = byte_1C005B1F0;
          v22 = byte_1C005B1F0;
          if ( (v20 & 0x200000000000LL) != 0 )
          {
            v21 = (const char *)v9[70];
            if ( (v20 & 0x400000000000LL) != 0 )
              v22 = (const char *)v9[71];
          }
          WPP_RECORDER_SF_qqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0xBu,
            (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
            v5,
            (char)v9,
            v21,
            v22);
          v11 = -1073741823;
        }
      }
    }
    else
    {
      v12 = *(_QWORD *)(DeviceExtension + 8);
      v13 = byte_1C005B1F0;
      v14 = byte_1C005B1F0;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v13 = (const char *)v9[70];
        if ( (v12 & 0x400000000000LL) != 0 )
          v14 = (const char *)v9[71];
      }
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xAu,
        (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
        v5,
        (char)v9,
        v13,
        v14);
      v11 = -1073741823;
    }
  }
  else
  {
    v11 = -1073741637;
  }
  if ( (v9[1] & 0x200000000000LL) != 0 )
    v10 = (const char *)v9[70];
  IrpText = ACPIDebugGetIrpText(v8, v6);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xCu,
    v17,
    v5,
    IrpText,
    v11,
    (char)v9,
    v10,
    v16);
  return (unsigned int)v11;
}
