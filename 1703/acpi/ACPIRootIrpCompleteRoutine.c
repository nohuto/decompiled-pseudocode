/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x1C0001820
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR a1, __int64 a2, struct _KEVENT *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  const char *v8; // r11
  const char *v9; // rbx
  unsigned int v10; // ecx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = DeviceExtension;
  if ( DeviceExtension )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = (const char *)&unk_1C0066CD0;
    v9 = (const char *)&unk_1C0066CD0;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 568);
    }
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
    if ( v10 >= 0x1A )
      v10 = 26;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xBu,
      (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
      a2,
      ACPIDispatchPnpTableNames[v10],
      *(_DWORD *)(a2 + 48),
      v6,
      v8,
      v9);
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
