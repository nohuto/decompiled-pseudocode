/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x1C00330B0
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0032CFC (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0032CFC (AcpiConvertMethodArgumentsToObjData.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0033F14 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C003447C (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_DD @ 0x1C003803C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rbp
  __int64 v7; // r8
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r10
  unsigned __int16 *v10; // rcx
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // dx
  __int64 v13; // r11
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

  *a2 = 0;
  *a3 = 0LL;
  if ( a1 && (unsigned __int16)(a1[1] - 1) > 6u && (unsigned __int16)(*a1 - 3) <= 1u )
  {
    v5 = 0;
    *a3 = 0LL;
    v6 = a1 + 2;
    v7 = (unsigned __int16)a1[1];
    v8 = 0LL;
    v9 = (unsigned __int64)a1 + v7 + 4;
    v10 = v6;
    if ( (unsigned __int64)v6 >= v9 )
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
        v19 = AcpiConvertMethodArgumentsToObjData(v6, v8, v5, (__int64)*a3 + 8);
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
          (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
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
        if ( v12 > (unsigned __int16)v7 )
          break;
        v13 = v12;
        v14 = v12;
        if ( v12 < 4u )
          v14 = 4LL;
        if ( (unsigned __int64)v10 + v14 + 4 > v9 )
          break;
        ++v5;
        v15 = v12;
        if ( v12 < 4u )
          v15 = 4LL;
        v8 += v15 + 4;
        if ( v12 < 4u )
          v13 = 4LL;
        v10 = (unsigned __int16 *)((char *)v10 + v13 + 4);
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_15;
      }
      v20 = v11;
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        21,
        27,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        v11,
        v10[1],
        v7);
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
