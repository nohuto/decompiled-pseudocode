/*
 * XREFs of ACPIDeviceIrpWaitWakeRequest @ 0x1C000F7D8
 * Callers:
 *     ACPIWakeWaitIrp @ 0x1C000F560 (ACPIWakeWaitIrp.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0002A38 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C00052E8 (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceIrpWaitWakeRequest(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  char v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rdi
  const char *v8; // rcx
  const char *v9; // r8
  __int64 v10; // rax
  int v11; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = 0;
  v6 = DeviceExtension;
  v7 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v8 = (const char *)&unk_1C0067B08;
  v9 = (const char *)&unk_1C0067B08;
  if ( DeviceExtension )
  {
    v5 = DeviceExtension;
    v4 = 0x200000000000LL;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 560);
      v4 = 0x400000000000LL;
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 568);
    }
  }
  if ( (unsigned int)v7 >= 7 )
  {
    LOBYTE(v11) = -1;
  }
  else
  {
    v4 = (__int64)AcpiSystemStateTranslation;
    v11 = AcpiSystemStateTranslation[v7];
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v4,
    0x11u,
    0x22u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a2,
    v11,
    v5,
    v8,
    v9);
  return ACPIDeviceInitializePowerRequest(v6, v7, (_SLIST_ENTRY *)&ACPIDeviceIrpCompleteRequest, a2, 0, 2, 2u);
}
