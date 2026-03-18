/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C00293D8
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0029320 (OSNotifyCreateProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     RtlStringCchPrintfA @ 0x1C000E0C0 (RtlStringCchPrintfA.c)
 *     ACPIBuildDeviceExtension @ 0x1C001AB98 (ACPIBuildDeviceExtension.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  const char *v12; // rsi
  const char *v13; // rax
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdx
  const char *v17; // rcx
  __int64 v18; // rax
  const char *v19; // rdx
  const char *v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax

  if ( !Src )
    return 3221225524LL;
  result = ACPIBuildDeviceExtension(a1, a2, a3);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a3;
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x1000300000uLL);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
      *(_QWORD *)(v7 + 560) = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src, (unsigned __int16)AcpiProcessorString);
        v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x53706341u);
        *(_QWORD *)(v7 + 184) = v9;
        if ( v9 )
        {
          strcpy(v9, "ACPI\\Processor");
          v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
          *(_QWORD *)(v7 + 568) = v10;
          if ( !v10 )
            return 3221225626LL;
          RtlStringCchPrintfA(v10, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 8LL));
          _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x8001E00000000000uLL);
          v11 = *(_QWORD *)(v7 + 8);
          v12 = (const char *)&unk_1C0067B08;
          v13 = (const char *)&unk_1C0067B08;
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v12 = *(const char **)(v7 + 560);
            if ( (v11 & 0x400000000000LL) != 0 )
              v13 = *(const char **)(v7 + 568);
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x37u,
            (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
            v6,
            v7,
            v12,
            v13);
          return v6;
        }
        v18 = *(_QWORD *)(v7 + 8);
        v15 = (const char *)&unk_1C0067B08;
        v19 = (const char *)&unk_1C0067B08;
        v20 = (const char *)&unk_1C0067B08;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v19 = *(const char **)(v7 + 560);
          if ( (v18 & 0x400000000000LL) != 0 )
            v20 = *(const char **)(v7 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x35u,
          (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
          15,
          v7,
          v19,
          v20);
      }
      else
      {
        v14 = *(_QWORD *)(v7 + 8);
        v15 = (const char *)&unk_1C0067B08;
        v16 = (const char *)&unk_1C0067B08;
        v17 = (const char *)&unk_1C0067B08;
        if ( (v14 & 0x200000000000LL) != 0 )
        {
          v16 = 0LL;
          if ( (v14 & 0x400000000000LL) != 0 )
            v17 = *(const char **)(v7 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x34u,
          (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
          AcpiProcessorString,
          v7,
          v16,
          v17);
      }
      v21 = *(_QWORD *)(v7 + 8);
      v22 = (const char *)&unk_1C0067B08;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v15 = *(const char **)(v7 + 560);
        if ( (v21 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(v7 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x36u,
        (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
        154,
        v7,
        v15,
        v22);
      if ( *(_QWORD *)(v7 + 568) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFEBFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 568), 0);
        *(_QWORD *)(v7 + 568) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 560) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 560), 0);
        *(_QWORD *)(v7 + 560) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 184) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0x7FFFFFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 184), 0);
        *(_QWORD *)(v7 + 184) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x2000000000000uLL);
      return (unsigned int)-1073741670;
    }
  }
  return result;
}
