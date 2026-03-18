/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C001EBB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     ACPIConvertStringDelimitation @ 0x1C00203BC (ACPIConvertStringDelimitation.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // esi
  char **v5; // rax
  int v6; // r14d
  char **v7; // rax
  __int64 v8; // rsi
  const char *v9; // rax
  __int64 v10; // rcx
  const char *v11; // rdx
  signed __int32 v12; // edx
  __int64 v14; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  if ( v1 )
  {
    v4 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v5 = &AcpiInternalDeviceFlagTable;
      while ( !strstr((const char *)v1, *v5) )
      {
        v5 = &(&AcpiInternalDeviceFlagTable)[4 * ++v4];
        if ( !*v5 )
          goto LABEL_6;
      }
      v14 = 4LL * v4;
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v14 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v3 + 952), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v14 + 2]);
    }
  }
LABEL_6:
  if ( (*(_QWORD *)(v3 + 8) & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(v3 + 560) )
    {
      v6 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v7 = &AcpiInternalDeviceFlagTable;
        v8 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 560), *v7) )
            _InterlockedAnd64(
              (volatile signed __int64 *)(v3 + 8),
              ~(unsigned __int64)(&AcpiInternalDeviceFlagTable)[v8 + 3]);
          v8 = 4LL * (unsigned int)++v6;
          v7 = &(&AcpiInternalDeviceFlagTable)[v8];
        }
        while ( (&AcpiInternalDeviceFlagTable)[v8] );
      }
    }
  }
  if ( (*(_DWORD *)(v3 + 8) & 0x2000000) != 0 )
    v1 &= (unsigned __int128)-(__int128)(unsigned __int64)_InterlockedCompareExchange64(
                                                            (volatile signed __int64 *)(v3 + 200),
                                                            v1,
                                                            0LL) >> 64;
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0);
  *(_DWORD *)(a1 + 32) = 10;
  v9 = (const char *)&unk_1C0066CD0;
  v10 = *(_QWORD *)(v3 + 8);
  v11 = (const char *)&unk_1C0066CD0;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v9 = *(const char **)(v3 + 560);
    if ( (v10 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(v3 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x22u,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    0,
    v3,
    v9,
    v11);
  v12 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v12);
  return 0LL;
}
