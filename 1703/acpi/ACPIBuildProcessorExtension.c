/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C0006990
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0006B64 (OSNotifyCreateProcessor.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005198 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C0012FC4 (ACPIBuildDeviceExtension.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  char *v9; // rax
  char *v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  void *v13; // rsi
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rsi
  void *v17; // rdx
  void *v18; // rcx
  int v19; // edx
  __int64 v20; // rax
  void *v21; // rdx
  void *v22; // rcx
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+38h] [rbp-30h]

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
          v12 = *(_QWORD *)(v7 + 8);
          v13 = &unk_1C0066CD0;
          v14 = &unk_1C0066CD0;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v13 = *(void **)(v7 + 560);
            if ( (v12 & 0x400000000000LL) != 0 )
              v14 = *(void **)(v7 + 568);
          }
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            6,
            55,
            (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
            v6,
            v7,
            (__int64)v13,
            (__int64)v14);
          return v6;
        }
        v20 = *(_QWORD *)(v7 + 8);
        v16 = &unk_1C0066CD0;
        v21 = &unk_1C0066CD0;
        v22 = &unk_1C0066CD0;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v21 = *(void **)(v7 + 560);
          if ( (v20 & 0x400000000000LL) != 0 )
            v22 = *(void **)(v7 + 568);
        }
        v26 = (__int64)v21;
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v21,
          6,
          53,
          (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
          15,
          v7,
          v26,
          (__int64)v22);
      }
      else
      {
        v15 = *(_QWORD *)(v7 + 8);
        v16 = &unk_1C0066CD0;
        v17 = &unk_1C0066CD0;
        v18 = &unk_1C0066CD0;
        if ( (v15 & 0x200000000000LL) != 0 )
        {
          v17 = 0LL;
          if ( (v15 & 0x400000000000LL) != 0 )
            v18 = *(void **)(v7 + 568);
        }
        v25 = (__int64)v17;
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v17,
          6,
          52,
          (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
          AcpiProcessorString,
          v7,
          v25,
          (__int64)v18);
      }
      v23 = *(_QWORD *)(v7 + 8);
      v6 = -1073741670;
      v24 = &unk_1C0066CD0;
      if ( (v23 & 0x200000000000LL) != 0 )
      {
        v16 = *(void **)(v7 + 560);
        if ( (v23 & 0x400000000000LL) != 0 )
          v24 = *(void **)(v7 + 568);
      }
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        6,
        54,
        (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
        154,
        v7,
        (__int64)v16,
        (__int64)v24);
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
      return v6;
    }
  }
  return result;
}
