/*
 * XREFs of PspSetJobRateControl @ 0x140718160
 * Callers:
 *     PspSetNetRateControl @ 0x14071835C (PspSetNetRateControl.c)
 * Callees:
 *     PspFreeRateControl @ 0x14050A25C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14050A2A8 (PspAllocateRateControl.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspModifyAncestorBits @ 0x140717A5C (PspModifyAncestorBits.c)
 *     PspRemoveRateControl @ 0x140717CFC (PspRemoveRateControl.c)
 */

__int64 __fastcall PspSetJobRateControl(__int64 Object, __int64 a2, char a3)
{
  int v3; // edi
  char **v4; // rsi
  int v5; // eax
  int v6; // r14d
  char **RateControl; // rax
  __int64 v9; // r8
  char *v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-10h]
  char v16; // [rsp+54h] [rbp-Ch]

  v3 = 0;
  v4 = 0LL;
  v5 = *(_DWORD *)(Object + 1304) & 0x4000000;
  v6 = *(_DWORD *)(Object + 1304) & 0x2000000;
  if ( (a3 & 1) != 0 )
  {
    if ( !v5 )
    {
      if ( v6 )
      {
        v3 = -1073741637;
        goto LABEL_15;
      }
      RateControl = (char **)PspAllocateRateControl(0LL);
      v4 = RateControl;
      if ( !RateControl )
      {
        v3 = -1073741801;
        goto LABEL_15;
      }
      *(_QWORD *)(Object + 1296) = RateControl;
      _InterlockedOr((volatile signed __int32 *)(Object + 1304), 0x4000000u);
      PspModifyAncestorBits(Object, 0x2000000u, 1);
    }
    v12 = 0LL;
    v13 = 0LL;
    *(_QWORD *)&v14 = 0LL;
    v15 = 0;
    *((_QWORD *)&v14 + 1) = Object;
    v16 = 1;
    v3 = PspEnumJobsAndProcessesInJobHierarchy(
           (char *)Object,
           (int)PspSetRateControlJobPreCallback,
           0,
           (int)PspSetRateControlProcessCallback,
           (__int64)&v12,
           5);
  }
  else
  {
    if ( !v5 )
    {
      v3 = -1073741811;
      goto LABEL_15;
    }
    PspRemoveRateControl(Object);
  }
  if ( v3 >= 0 )
    return (unsigned int)v3;
  if ( v4 )
    PspFreeRateControl(v4, 0);
LABEL_15:
  *(_QWORD *)(Object + 1296) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(Object + 1304), 0xFBFFFFFF);
  if ( !v6 )
  {
    PspModifyAncestorBits(Object, 0x2000000u, 0);
    v12 &= v9;
    v13 &= v9;
    v15 &= v9;
    v14 = 0LL;
    v16 = v9;
    PspEnumJobsAndProcessesInJobHierarchy(
      v10,
      (int)PspSetRateControlJobPreCallback,
      v9,
      (int)PspSetRateControlProcessCallback,
      (__int64)&v12,
      5);
  }
  return (unsigned int)v3;
}
