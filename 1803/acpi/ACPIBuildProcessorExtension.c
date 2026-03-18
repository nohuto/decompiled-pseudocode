/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C0010C6C
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C002EA1C (OSNotifyCreateProcessor.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     ACPIBuildDeviceExtension @ 0x1C000A374 (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  __int64 v9; // rax
  void *v10; // rsi
  void *v11; // rdx
  void *v12; // rcx
  unsigned __int16 v13; // r8
  char v14; // r15
  void *DeviceExtension; // r10
  char v16; // al
  char *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  void *v21; // rax
  char *v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  void *v25; // rsi
  void *v26; // rax
  __int64 v27; // [rsp+38h] [rbp-30h]

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
        v14 = 15;
        v17 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x53706341u);
        *(_QWORD *)(v7 + 184) = v17;
        if ( v17 )
        {
          strcpy(v17, "ACPI\\Processor");
          v22 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
          *(_QWORD *)(v7 + 568) = v22;
          if ( !v22 )
            return 3221225626LL;
          RtlStringCchPrintfA(v22, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 8LL));
          _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x8001E00000000000uLL);
          v24 = *(_QWORD *)(v7 + 8);
          v25 = &unk_1C005B1F0;
          v26 = &unk_1C005B1F0;
          if ( (v24 & 0x200000000000LL) != 0 )
          {
            v25 = *(void **)(v7 + 560);
            if ( (v24 & 0x400000000000LL) != 0 )
              v26 = *(void **)(v7 + 568);
          }
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v23,
            6,
            55,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            v6,
            v7,
            (__int64)v25,
            (__int64)v26);
          return v6;
        }
        v18 = *(_QWORD *)(v7 + 8);
        v10 = &unk_1C005B1F0;
        v11 = &unk_1C005B1F0;
        v12 = &unk_1C005B1F0;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v11 = *(void **)(v7 + 560);
          if ( (v18 & 0x400000000000LL) != 0 )
            v12 = *(void **)(v7 + 568);
        }
        v13 = 53;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v16 = 2;
      }
      else
      {
        v9 = *(_QWORD *)(v7 + 8);
        v10 = &unk_1C005B1F0;
        v11 = &unk_1C005B1F0;
        v12 = &unk_1C005B1F0;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v11 = 0LL;
          if ( (v9 & 0x400000000000LL) != 0 )
            v12 = *(void **)(v7 + 568);
        }
        v13 = 52;
        v14 = AcpiProcessorString;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v16 = 4;
      }
      v27 = (__int64)v11;
      LOBYTE(v11) = v16;
      WPP_RECORDER_SF_Dqss(
        (_DWORD)DeviceExtension,
        (_DWORD)v11,
        6,
        v13,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v14,
        v7,
        v27,
        (__int64)v12);
      v20 = *(_QWORD *)(v7 + 8);
      v21 = &unk_1C005B1F0;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v10 = *(void **)(v7 + 560);
        if ( (v20 & 0x400000000000LL) != 0 )
          v21 = *(void **)(v7 + 568);
      }
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        6,
        54,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        154,
        v7,
        (__int64)v10,
        (__int64)v21);
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
