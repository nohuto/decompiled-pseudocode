/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x1C0054174
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0053D9C (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0044B1C (WPP_RECORDER_SF_DD.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0053D9C (AcpiConvertMethodArgumentsToObjData.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0054DA4 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005530C (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  unsigned int v5; // ebx
  unsigned __int16 *v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int16 *v10; // rdx
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // cx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  PVOID PoolWithTag; // rax
  int v18; // edx
  int v19; // ebx
  int v20; // edx
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  char v25; // [rsp+30h] [rbp-28h]

  *a2 = 0;
  *a3 = 0LL;
  if ( a1 && (unsigned __int16)(a1[1] - 1) > 6u && (unsigned __int16)(*a1 - 3) <= 1u )
  {
    v5 = 0;
    v6 = a1 + 2;
    *a3 = 0LL;
    v7 = 0LL;
    v8 = (unsigned __int16)a1[1];
    v9 = (unsigned __int64)a1 + v8 + 4;
    v10 = a1 + 2;
    if ( (unsigned __int64)(a1 + 2) >= v9 )
    {
LABEL_15:
      v16 = 40 * v5 + 8;
      *a2 = v16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x4E706341u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, *a2);
        *(_DWORD *)*a3 = v5;
        v19 = AcpiConvertMethodArgumentsToObjData(v6, v7, v5, (__int64)*a3 + 8);
        if ( v19 >= 0 )
          return (unsigned int)v19;
        WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v21, v22, v23);
      }
      else
      {
        v19 = -1073741670;
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          21,
          28,
          (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
          *a2,
          154);
        *a2 = 0;
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 > 4u )
          break;
        v12 = v10[1];
        if ( v12 > (unsigned __int16)v8 )
          break;
        v13 = 4LL;
        if ( v12 >= 4u )
          v13 = v12;
        if ( (unsigned __int64)v10 + v13 + 4 > v9 )
          break;
        ++v5;
        v14 = 4LL;
        if ( v12 >= 4u )
          v14 = v12;
        v7 += v14 + 4;
        v15 = 4LL;
        if ( v12 >= 4u )
          v15 = v12;
        v10 = (unsigned __int16 *)((char *)v10 + v15 + 4);
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_15;
      }
      v25 = v10[1];
      v20 = v11;
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        21,
        27,
        (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
        v11,
        v25,
        v8);
      v19 = -1073741788;
    }
  }
  else
  {
    v19 = -1073741811;
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x4E706341u);
    *a2 = 0;
    *a3 = 0LL;
  }
  return (unsigned int)v19;
}
