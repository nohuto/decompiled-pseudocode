/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C
 * Callers:
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001CFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0043BE0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_s @ 0x1C000325C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     ACPIWriteEventLogEntry @ 0x1C004CE6C (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(ULONG_PTR a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 *v6; // rax
  unsigned int *v7; // r14
  unsigned int v8; // r15d
  SIZE_T v9; // rsi
  __int64 v10; // r12
  _OWORD *PoolWithTag; // rax
  _OWORD *v12; // rsi
  size_t v13; // r8
  __int64 v14; // r15
  unsigned int *v16; // rdi
  int v17; // eax
  int v18; // edx
  const void **v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v6 = (__int64 *)a1;
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v7 = *(unsigned int **)(a2 + 32);
    v8 = 0;
    v9 = *(unsigned int *)(a2 + 24) + 40LL;
    v10 = *v7;
    if ( (_DWORD)v10 )
    {
      v16 = v7 + 8;
      do
      {
        v17 = AMLIGetNameSpaceObject(*((_BYTE **)v16 + 1), v6, &v24, 0);
        if ( v17 < 0 )
        {
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            21,
            11,
            (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
            v17);
          KeBugCheckEx(0xA5u, 0x18uLL, a1, *((_QWORD *)v16 + 1), 0LL);
        }
        if ( !v24 || *(_WORD *)(*(_QWORD *)v24 + 66LL) != 6 )
        {
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            21,
            12,
            (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
            *((_QWORD *)v16 + 1));
          KeBugCheckEx(0xA5u, 0x19uLL, a1, *((_QWORD *)v16 + 1), 0LL);
        }
        AMLIDereferenceHandleEx(v24);
        ++v8;
        v9 += *v16;
        v24 = 0LL;
        v6 = (__int64 *)a1;
        v16 += 10;
      }
      while ( v8 < (unsigned int)v10 );
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x4F706341u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_OWORD *)a2;
      PoolWithTag[1] = *(_OWORD *)(a2 + 16);
      v13 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(a2 + 32), v13);
      v14 = *(unsigned int *)(a2 + 24) + 40LL;
      if ( (_DWORD)v10 )
      {
        v19 = (const void **)(v7 + 8);
        v20 = *((_QWORD *)v12 + 4) - (_QWORD)v7;
        v21 = v10;
        do
        {
          *(const void **)((char *)v19 + v20 + 8) = (char *)v12 + v14;
          memmove((char *)v12 + v14, v19[1], *(unsigned int *)v19);
          v22 = *(unsigned int *)((char *)v19 + v20);
          v19 += 5;
          v14 += v22;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v12;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
