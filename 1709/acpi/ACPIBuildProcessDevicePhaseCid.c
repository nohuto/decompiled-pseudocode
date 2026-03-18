/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C0013EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIConvertStringDelimitation @ 0x1C0015220 (ACPIConvertStringDelimitation.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rsi
  char **v6; // rax
  int v7; // ebp
  char **v8; // rax
  __int64 v9; // rsi
  const char *v10; // rax
  __int64 v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // rsi

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  if ( v1 )
  {
    v4 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v5 = 0LL;
      v6 = &AcpiInternalDeviceFlagTable;
      while ( !strstr((const char *)v1, *v6) )
      {
        v6 = &(&AcpiInternalDeviceFlagTable)[4 * ++v4];
        v5 = v4;
        if ( !*v6 )
          goto LABEL_6;
      }
      v15 = 4 * v5;
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v15 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v3 + 952), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v15 + 2]);
    }
  }
LABEL_6:
  if ( (*(_QWORD *)(v3 + 8) & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(v3 + 560) )
    {
      v7 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v8 = &AcpiInternalDeviceFlagTable;
        v9 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 560), *v8) )
            _InterlockedAnd64(
              (volatile signed __int64 *)(v3 + 8),
              ~(unsigned __int64)(&AcpiInternalDeviceFlagTable)[v9 + 3]);
          v9 = 4LL * (unsigned int)++v7;
          v8 = &(&AcpiInternalDeviceFlagTable)[v9];
        }
        while ( (&AcpiInternalDeviceFlagTable)[v9] );
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
  v10 = (const char *)&unk_1C0067B08;
  v11 = *(_QWORD *)(v3 + 8);
  v12 = (const char *)&unk_1C0067B08;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(v3 + 560);
    if ( (v11 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(v3 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x22u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    0,
    v3,
    v10,
    v12);
  v13 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v13);
  return 0LL;
}
