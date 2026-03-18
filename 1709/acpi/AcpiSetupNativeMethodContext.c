/*
 * XREFs of AcpiSetupNativeMethodContext @ 0x1C0054BB8
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C0054640 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0053FA4 (AcpiConvertObjDataToMethodArguments.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0055400 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C0055550 (WPP_RECORDER_SF_sqqD.c)
 *     AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C0059710 (AcpiGetNativeMethodHandleFromAcpiObject.c)
 */

__int64 __fastcall AcpiSetupNativeMethodContext(__int64 a1, _QWORD *a2)
{
  PVOID v3; // rsi
  __int64 v4; // rcx
  PVOID PoolWithTag; // rbp
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r14
  int NativeMethodHandleFromAcpiObject; // eax
  int v11; // edx
  SIZE_T v12; // rsi
  int v13; // edx
  int v14; // edx
  SIZE_T v15; // rax
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  SIZE_T v18; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  PoolWithTag = 0LL;
  v7 = -1073741823;
  v8 = AMLIGetParent(v4);
  v9 = v8;
  if ( v8 )
  {
    NativeMethodHandleFromAcpiObject = AcpiGetNativeMethodHandleFromAcpiObject(v8, &v18);
    v7 = NativeMethodHandleFromAcpiObject;
    if ( NativeMethodHandleFromAcpiObject >= 0 )
    {
      memset(a2, 0, 0x48uLL);
      v12 = v18;
      *a2 = *(_QWORD *)(a1 + 32);
      a2[1] = v12;
      v7 = AcpiConvertObjDataToMethodArguments(*(_DWORD *)(a1 + 44), *(_QWORD *)(a1 + 48), &P, &v18);
      if ( v7 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 40) )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x4E706341u);
          if ( !PoolWithTag )
          {
            v7 = -1073741670;
            WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v14, 21, 20);
            v3 = P;
            goto LABEL_13;
          }
        }
        v15 = v18;
        v3 = P;
        a2[4] = P;
        a2[3] = v15;
        *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
        if ( PoolWithTag )
        {
          a2[7] = PoolWithTag;
          *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 40);
          a2[6] = 64LL;
        }
        v7 = 0;
      }
      else
      {
        WPP_RECORDER_SF_sqqD(WPP_GLOBAL_Control->DeviceExtension, v13, 19, 19);
        v3 = P;
      }
    }
    else
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        19,
        18,
        (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
        v9,
        NativeMethodHandleFromAcpiObject);
    }
    if ( v7 >= 0 )
    {
LABEL_17:
      AMLIDereferenceHandleEx(v9);
      return (unsigned int)v7;
    }
LABEL_13:
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4E706341u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4E706341u);
    goto LABEL_17;
  }
  return (unsigned int)v7;
}
