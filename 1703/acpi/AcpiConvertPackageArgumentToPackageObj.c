/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x1C0053634
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005328C (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     memset @ 0x1C002CB80 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0045158 (WPP_RECORDER_SF_DD.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005328C (AcpiConvertMethodArgumentsToObjData.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0054264 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00547CC (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  unsigned int v5; // ebx
  unsigned __int16 *v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int16 *v10; // rdx
  unsigned __int16 v11; // cx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  PVOID PoolWithTag; // rax
  int v17; // edx
  int v18; // ebx
  unsigned __int16 v19; // cx
  int v20; // edx
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  char v25; // [rsp+28h] [rbp-20h]

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
      v15 = 40 * v5 + 8;
      *a2 = v15;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x4E706341u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, *a2);
        *(_DWORD *)*a3 = v5;
        v18 = AcpiConvertMethodArgumentsToObjData(v6, v7, v5, (__int64)*a3 + 8);
        if ( v18 >= 0 )
          return (unsigned int)v18;
        WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v21, v22, v23);
      }
      else
      {
        v18 = -1073741670;
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          21,
          28,
          (__int64)&WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
          *a2,
          154);
        *a2 = 0;
      }
    }
    else
    {
      while ( *v10 <= 4u )
      {
        v11 = v10[1];
        if ( v11 > (unsigned __int16)v8 )
          break;
        v12 = 4LL;
        if ( v11 >= 4u )
          v12 = v11;
        if ( (unsigned __int64)v10 + v12 + 4 > v9 )
          break;
        ++v5;
        v13 = 4LL;
        if ( v11 >= 4u )
          v13 = v11;
        v7 += v13 + 4;
        v14 = 4LL;
        if ( v11 >= 4u )
          v14 = v11;
        v10 = (unsigned __int16 *)((char *)v10 + v14 + 4);
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_15;
      }
      v19 = v10[1];
      v20 = *v10;
      v25 = v20;
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        21,
        27,
        (__int64)&WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
        v25,
        v19,
        v8);
      v18 = -1073741788;
    }
  }
  else
  {
    v18 = -1073741811;
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x4E706341u);
    *a2 = 0;
    *a3 = 0LL;
  }
  return (unsigned int)v18;
}
