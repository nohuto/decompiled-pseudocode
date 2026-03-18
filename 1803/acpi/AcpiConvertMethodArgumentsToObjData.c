/*
 * XREFs of AcpiConvertMethodArgumentsToObjData @ 0x1C0032CFC
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00330B0 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C0033580 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     AcpiCleanupObjDataArguments @ 0x1C0032C78 (AcpiCleanupObjDataArguments.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00330B0 (AcpiConvertPackageArgumentToPackageObj.c)
 *     WPP_RECORDER_SF_DDPP @ 0x1C00341C8 (WPP_RECORDER_SF_DDPP.c)
 *     WPP_RECORDER_SF_DD @ 0x1C003803C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall AcpiConvertMethodArgumentsToObjData(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r13
  unsigned int v5; // r14d
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // edx
  int v14; // ebx
  PVOID PoolWithTag; // rax
  int v16; // edx
  size_t v17; // r8
  void *v18; // rcx
  int v19; // eax
  __int64 v20; // rax

  v4 = 0LL;
  v5 = 0;
  if ( !a3 )
  {
LABEL_19:
    v14 = 0;
LABEL_20:
    if ( v14 < 0 )
      goto LABEL_21;
    return (unsigned int)v14;
  }
  v10 = a4 + 2;
  while ( 1 )
  {
    v11 = a1[1];
    if ( v11 + v4 > a2 )
      break;
    v12 = *a1;
    if ( !*a1 )
    {
      if ( (unsigned int)v11 > 8 )
        goto LABEL_25;
      *(_WORD *)v10 = 1;
      v18 = (void *)(v10 + 14);
      v19 = a1[1];
      *(_QWORD *)(v10 + 14) = 0LL;
      *(_DWORD *)(v10 + 22) = v19;
      v17 = a1[1];
      goto LABEL_15;
    }
    if ( (unsigned int)(v12 - 3) > 1 )
    {
      if ( (_WORD)v12 == 1 )
        *(_WORD *)v10 = 2;
      else
        *(_WORD *)v10 = 3;
      *(_DWORD *)(v10 + 22) = a1[1];
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a1[1], 0x4E706341u);
      *(_QWORD *)(v10 + 30) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v14 = -1073741670;
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          21,
          26,
          (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
          a1[1],
          154);
        goto LABEL_21;
      }
      v17 = *(unsigned int *)(v10 + 22);
      v18 = PoolWithTag;
LABEL_15:
      memmove(v18, a1 + 2, v17);
      goto LABEL_16;
    }
    *(_WORD *)v10 = 4;
    v14 = AcpiConvertPackageArgumentToPackageObj(a1, v10 + 22, v10 + 30, 2LL);
    if ( v14 < 0 )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        21,
        25,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        (char)a1,
        a1[1]);
      goto LABEL_20;
    }
LABEL_16:
    v20 = a1[1];
    v4 += v20;
    if ( (unsigned __int16)v20 < 4u )
      v20 = 4LL;
    ++v5;
    a1 = (unsigned __int16 *)((char *)a1 + v20 + 4);
    v10 += 40LL;
    if ( v5 >= a3 )
      goto LABEL_19;
  }
  WPP_RECORDER_SF_DDPP(WPP_GLOBAL_Control->DeviceExtension, v11, 1, 2);
LABEL_25:
  v14 = -1073741788;
LABEL_21:
  AcpiCleanupObjDataArguments(a4, a3);
  return (unsigned int)v14;
}
