/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0
 * Callers:
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C000EF70 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200 (ACPIBuildProcessThermalZoneCheckType.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0001AA8 (WPP_RECORDER_SF_s.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(ULONG_PTR a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int *v7; // r14
  unsigned int v8; // r15d
  SIZE_T v9; // rsi
  __int64 v10; // r12
  unsigned int *v11; // rdi
  int v12; // eax
  int v13; // edx
  _OWORD *PoolWithTag; // rax
  _OWORD *v15; // rsi
  size_t v16; // r8
  __int64 v17; // r15
  const void **v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  volatile signed __int32 *v23; // [rsp+78h] [rbp+10h]

  v3 = 0;
  *a3 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v7 = *(unsigned int **)(a2 + 32);
    v8 = 0;
    v9 = *(unsigned int *)(a2 + 24) + 40LL;
    v10 = *v7;
    if ( (_DWORD)v10 )
    {
      v11 = v7 + 8;
      do
      {
        v12 = AMLIGetNameSpaceObject(*((void **)v11 + 1));
        if ( v12 < 0 )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            21,
            11,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            v12);
          KeBugCheckEx(0xA5u, 0x18uLL, a1, *((_QWORD *)v11 + 1), 0LL);
        }
        if ( !v23 || *(_WORD *)(*(_QWORD *)v23 + 66LL) != 6 )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            21,
            12,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            *((_QWORD *)v11 + 1));
          KeBugCheckEx(0xA5u, 0x19uLL, a1, *((_QWORD *)v11 + 1), 0LL);
        }
        AMLIDereferenceHandleEx(v23);
        ++v8;
        v9 += *v11;
        v23 = 0LL;
        v11 += 10;
      }
      while ( v8 < (unsigned int)v10 );
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x4F706341u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_OWORD *)a2;
      PoolWithTag[1] = *(_OWORD *)(a2 + 16);
      v16 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(a2 + 32), v16);
      v17 = *(unsigned int *)(a2 + 24) + 40LL;
      if ( (_DWORD)v10 )
      {
        v18 = (const void **)(v7 + 8);
        v19 = *((_QWORD *)v15 + 4) - (_QWORD)v7;
        v20 = v10;
        do
        {
          *(const void **)((char *)v18 + v19 + 8) = (char *)v15 + v17;
          memmove((char *)v15 + v17, v18[1], *(unsigned int *)v18);
          v21 = *(unsigned int *)((char *)v18 + v19);
          v18 += 5;
          v17 += v21;
          --v20;
        }
        while ( v20 );
      }
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v15;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
