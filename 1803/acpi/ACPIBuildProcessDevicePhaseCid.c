/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C000CC90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIConvertStringDelimitation @ 0x1C003F4B0 (ACPIConvertStringDelimitation.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  const char *v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  const char *v9; // rdx
  int v10; // ebp
  __int64 v11; // rsi
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // rdx
  __int64 v16; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  if ( v1 )
  {
    v4 = AcpiInternalDeviceFlagTable;
    v5 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v6 = 0LL;
      while ( !strstr((const char *)v1, v4) )
      {
        v6 = ++v5;
        v4 = (&AcpiInternalDeviceFlagTable)[4 * v5];
        if ( !v4 )
          goto LABEL_8;
      }
      v7 = 4 * v6;
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v7 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v3 + 952), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v7 + 2]);
    }
  }
LABEL_8:
  v8 = *(_QWORD *)(v3 + 8);
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(v3 + 560) )
    {
      v9 = AcpiInternalDeviceFlagTable;
      v10 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v11 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 560), v9) )
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), ~(__int64)(&AcpiInternalDeviceFlagTable)[v11 + 3]);
          v11 = 4LL * (unsigned int)++v10;
          v9 = (&AcpiInternalDeviceFlagTable)[v11];
        }
        while ( v9 );
        v8 = *(_QWORD *)(v3 + 8);
      }
    }
  }
  if ( (v8 & 0x2000000) != 0 )
    v1 &= (unsigned __int128)-(__int128)(unsigned __int64)_InterlockedCompareExchange64(
                                                            (volatile signed __int64 *)(v3 + 200),
                                                            v1,
                                                            0LL) >> 64;
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0);
  *(_DWORD *)(a1 + 32) = 10;
  v12 = &unk_1C005B1F0;
  v13 = *(_QWORD *)(v3 + 8);
  v14 = &unk_1C005B1F0;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v12 = *(void **)(v3 + 560);
    if ( (v13 & 0x400000000000LL) != 0 )
      v14 = *(void **)(v3 + 568);
  }
  v16 = (__int64)v14;
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v14,
    6,
    34,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v3,
    (__int64)v12,
    v16);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
