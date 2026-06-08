/*
 * XREFs of PepNotifyReportCStates @ 0x1C0023834
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C001E370 (AcpiCStateNotifyWorker.c)
 *     InitPepIdleStates @ 0x1C0022A08 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     PepTranslateCstState @ 0x1C00239AC (PepTranslateCstState.c)
 */

__int64 __fastcall PepNotifyReportCStates(__int64 a1)
{
  int *v1; // rax
  char v3; // si
  unsigned int v4; // edx
  SIZE_T v5; // r14
  char *PoolWithTag; // rax
  char *v7; // rbx
  unsigned int v8; // ebx
  unsigned int *v9; // rdx
  unsigned int i; // r10d
  int v11; // r10d
  PVOID v12; // rsi
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h]
  _QWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+50h] [rbp-10h]

  v1 = *(int **)(a1 + 496);
  v3 = *((_BYTE *)v1 + 16);
  v4 = *v1;
  if ( v3 != 1 )
    ++v4;
  P = 0LL;
  v15 = v4;
  v5 = 24LL * v4;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    P = v7;
    if ( v3 != 1 )
    {
      v18 = 0;
      v17[1] = 0x100000000LL;
      v17[0] = 127LL;
      PepTranslateCstState(v17, v7);
      v7 += 24;
    }
    v9 = *(unsigned int **)(a1 + 496);
    for ( i = 0; i < *v9; i = v11 + 1 )
    {
      PepTranslateCstState(&v9[4 * i + 1 + i], v7);
      v9 = *(unsigned int **)(a1 + 496);
      v7 += 24;
    }
    v12 = P;
    v13 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 15LL, &v15);
    v8 = v13;
    if ( v13 < 0 )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x23u,
        (__int64)&WPP_b760b6f0545f3d05f6b30f6b447f552a_Traceguids,
        v13,
        v15);
      v8 = 0;
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
