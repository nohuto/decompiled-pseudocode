/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x1C000BF54
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C002E99C (OSNotifyCreatePowerResource.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(volatile signed __int32 *a1, _QWORD *a2)
{
  int v4; // esi
  int v5; // edx
  char *PoolWithTag; // rbx
  unsigned __int8 *v8; // r14
  char v9; // al
  __int64 v10; // rax

  v4 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x44706341u);
  if ( PoolWithTag )
  {
    v8 = *(unsigned __int8 **)(*(_QWORD *)a1 + 96LL);
    memset(PoolWithTag, 0, 0x90uLL);
    v9 = gdwfAMLI;
    *((_QWORD *)PoolWithTag + 2) = 4LL;
    *((_QWORD *)PoolWithTag + 4) = a1;
    dword_1C00677B8 = 0;
    pszDest = 0;
    if ( (v9 & 4) != 0 )
      _InterlockedIncrement(a1 + 2);
    PoolWithTag[40] = v8[1];
    *((_DWORD *)PoolWithTag + 16) = 3;
    if ( *v8 < 6u )
      v4 = SystemPowerStateTranslation[*v8];
    *((_DWORD *)PoolWithTag + 11) = v4;
    *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
    *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
    v10 = *(_QWORD *)a1;
    *a2 = PoolWithTag;
    *(_QWORD *)(v10 + 104) = PoolWithTag;
    return 259LL;
  }
  else
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      25,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      144);
    return 3221225626LL;
  }
}
