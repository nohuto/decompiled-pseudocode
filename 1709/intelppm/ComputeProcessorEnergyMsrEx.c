/*
 * XREFs of ComputeProcessorEnergyMsrEx @ 0x1C0006020
 * Callers:
 *     <none>
 * Callees:
 *     ComputeProcessorEnergyMsr @ 0x1C00013B0 (ComputeProcessorEnergyMsr.c)
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C000723C (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1C00073DC (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsrEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rsi
  unsigned int SystemArgument1; // r9d
  unsigned int v7; // r10d
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 SystemArgument1_low; // r14
  unsigned int v12; // ebx
  unsigned int *p_ActiveThreadCount; // r15
  __int64 v14; // r14
  __int64 DpcData_high; // r12
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  __int64 *v20; // r15
  unsigned int *v21; // r12
  unsigned __int64 *v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rbx
  signed __int64 v26; // r8
  double v27; // xmm1_8
  double v28; // xmm0_8
  double v29; // xmm1_8
  double v30; // xmm3_8
  double v31; // xmm4_8
  double v32; // xmm0_8
  __int64 v33; // rdx
  _LIST_ENTRY *Flink; // xmm3_8
  double v35; // xmm1_8
  int *v36; // rcx
  __int64 v37; // r10
  double *v38; // r9
  __int64 v39; // r13
  int v40; // eax
  unsigned __int64 v41; // rcx
  double v42; // xmm1_8
  unsigned int *v43; // r9
  __int64 v44; // r11
  double *v45; // r10
  signed __int64 v46; // rax
  double v47; // xmm0_8
  __int64 v48; // r9
  double v49; // xmm1_8
  double v50; // xmm1_8
  __int64 *v51; // rcx
  __int64 v52; // r11
  double *v53; // r10
  double v54; // xmm0_8
  double v55; // xmm1_8
  __int64 v56; // rax
  double v57; // xmm0_8
  void **p_Reserved; // rax
  double *v59; // rcx
  double v60; // xmm0_8
  double v61; // xmm0_8
  double *v62; // rax
  __int64 v63; // rdx
  double *v64; // rcx
  double v65; // xmm0_8
  double v66; // xmm0_8
  int v67; // ecx
  double v68; // xmm0_8
  double v69; // xmm0_8
  unsigned __int64 v70; // rax
  unsigned __int64 *result; // rax
  __int64 v75[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v76; // [rsp+68h] [rbp-98h]
  _DWORD v77[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v78[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v79[2]; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-48h]
  __int64 v82; // [rsp+C0h] [rbp-40h]
  _QWORD v83[4]; // [rsp+C8h] [rbp-38h] BYREF
  double v84[4]; // [rsp+E8h] [rbp-18h]
  _BYTE v85[32]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v86[40]; // [rsp+128h] [rbp+28h] BYREF

  v5 = 0LL;
  if ( (WPP_MAIN_CB.DeviceQueue.Type & 0x40) == 0 )
  {
    ComputeProcessorEnergyMsr(0LL, 0LL, 0LL, 0LL, a5);
    v5 = *a5;
    goto LABEL_79;
  }
  SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) > 4 )
    goto LABEL_79;
  v7 = 0;
  if ( !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
  {
LABEL_8:
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      v10 = 0LL;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v12 = *(_DWORD *)((char *)v83 + v10);
        ProcLibTracePackageEnergyCounterUpdate(
          *(unsigned int *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v10 + 4),
          v12);
        *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v10) = *(_DWORD *)((char *)v79 + v10);
        v77[v10 / 4] = v12;
        v10 += 4LL;
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
      v14 = 0LL;
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      do
      {
        v16 = *p_ActiveThreadCount;
        v17 = __readmsr(v16);
        v18 = v17 - *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v14 * 8);
        ProcLibTracePackageEnergyCounterUpdate(v16, v18);
        v78[v14] = v18;
        ++p_ActiveThreadCount;
        *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v14 * 8) = v17;
        ++v14;
        --DpcData_high;
      }
      while ( DpcData_high );
    }
    v76 = 32;
    v80 = 0LL;
    v81 = 0LL;
    v82 = 0LL;
    v75[0] = (__int64)&qword_1C00195E8;
    v75[1] = (__int64)&qword_1C00195E8;
    v75[2] = 0LL;
    ResetEnumerationContext(v75);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v75, v83) )
    {
      v19 = v83[0];
      v20 = &v80;
      v21 = (unsigned int *)&CounterId;
      v79[0] = 3LL;
      v22 = (unsigned __int64 *)(*(_QWORD *)(v83[0] + 344LL) + 24LL);
      do
      {
        v23 = *v22;
        v24 = *(v22 - 1);
        if ( v24 < *v22 )
          v25 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink + v24 - v23 + 1;
        else
          v25 = v24 - v23;
        ProcLibTraceEnergyCounterUpdate(v19, *v21, v25);
        *v20 += v25;
        ++v21;
        *v22 = v24;
        ++v20;
        v22 += 3;
        --v79[0];
      }
      while ( v79[0] );
    }
    v26 = 1000000 * a3 / (qword_1C0019D68 * (unsigned __int64)(unsigned int)dword_1C0019D60);
    if ( !v26 )
      goto LABEL_79;
    v27 = (double)(int)a2;
    if ( a2 < 0 )
      v27 = v27 + 1.844674407370955e19;
    v28 = (double)(int)a3;
    if ( a3 < 0 )
      v28 = v28 + 1.844674407370955e19;
    v29 = v27 / v28;
    if ( !v80 )
      goto LABEL_79;
    v30 = (double)(int)v81;
    if ( v81 < 0 )
      v30 = v30 + 1.844674407370955e19;
    v31 = (double)(int)v80;
    if ( v80 < 0 )
      v31 = v31 + 1.844674407370955e19;
    v84[0] = v30 / v31 * v29;
    if ( !v82 )
      goto LABEL_79;
    v32 = (double)(int)v82;
    if ( v82 < 0 )
      v32 = v32 + 1.844674407370955e19;
    v33 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
    v84[2] = v29;
    v84[1] = v30 / v32 * v29;
    v84[3] = 1.0 - v29;
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
    {
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
      {
        Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
        v35 = (double)(int)v26;
        if ( v26 < 0 )
          v35 = v35 + 1.844674407370955e19;
        v36 = v77;
        v37 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
        v38 = (double *)v85;
        v39 = 4LL;
        do
        {
          v40 = *v36++;
          *v38++ = (double)v40 * 1000000.0 * *(double *)&Flink / v35;
          --v37;
        }
        while ( v37 );
        goto LABEL_52;
      }
    }
    else if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      v41 = ((unsigned __int64)*(unsigned int *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
      v42 = (double)(int)v26;
      if ( v26 < 0 )
        v42 = v42 + 1.844674407370955e19;
      v43 = v77;
      v44 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      v45 = (double *)v85;
      v39 = 4LL;
      do
      {
        v46 = (unsigned __int64)*v43 << v41;
        v47 = (double)(int)v46;
        if ( v46 < 0 )
          v47 = v47 + 1.844674407370955e19;
        ++v43;
        *v45++ = v47 / v42;
        --v44;
      }
      while ( v44 );
      goto LABEL_52;
    }
    v39 = 4LL;
LABEL_52:
    v48 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      v49 = (double)((int)v26 * (int)qword_1C0019D70);
      if ( v26 * qword_1C0019D70 < 0 )
        v49 = v49 + 1.844674407370955e19;
      v50 = v49 / 1000000.0;
      v51 = v78;
      v52 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v53 = (double *)v86;
      do
      {
        v54 = (double)(int)*v51;
        if ( *v51 < 0 )
          v54 = v54 + 1.844674407370955e19;
        ++v51;
        *v53++ = v54 * 100.0 / v50;
        --v52;
      }
      while ( v52 );
    }
    v55 = *(double *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
    v56 = 0LL;
    do
    {
      v57 = *(double *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v56 * 8) * v84[v56];
      ++v56;
      v55 = v55 + v57;
      --v39;
    }
    while ( v39 );
    if ( (_DWORD)v33 )
    {
      p_Reserved = &WPP_MAIN_CB.Reserved;
      v59 = (double *)v85;
      do
      {
        v60 = *v59++;
        v61 = v60 * *(double *)p_Reserved++;
        v55 = v55 + v61;
        --v33;
      }
      while ( v33 );
    }
    if ( (_DWORD)v48 )
    {
      v62 = (double *)&unk_1C0019560;
      v63 = v48;
      v64 = (double *)v86;
      do
      {
        v65 = *v64++;
        v66 = v65 * *v62++;
        v55 = v55 + v66;
        --v63;
      }
      while ( v63 );
    }
    if ( v55 >= 0.0 && v55 <= (double)SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
    {
      if ( v55 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) >> 1) )
        goto LABEL_73;
      v67 = 100;
      if ( a4 <= 0x64 )
        v67 = a4;
      if ( v55 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) * v67 / 0x64u) )
      {
LABEL_73:
        v68 = (double)(int)v26;
        if ( v26 < 0 )
          v68 = v68 + 1.844674407370955e19;
        v69 = v68 * v55;
        v70 = 0LL;
        if ( v69 >= 9.223372036854776e18 )
        {
          v69 = v69 - 9.223372036854776e18;
          if ( v69 < 9.223372036854776e18 )
            v70 = 0x8000000000000000uLL;
        }
        v5 = v70 + (unsigned int)(int)v69;
      }
    }
    goto LABEL_79;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = __readmsr(*(_DWORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v8 + 4));
    *(_DWORD *)((char *)v79 + v8) = v9;
    LODWORD(v9) = v9 - *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v8);
    *(_DWORD *)((char *)v83 + v8) = v9;
    if ( (unsigned int)v9 > 0x7FFFFFFF )
      break;
    ++v7;
    v8 += 4LL;
    if ( v7 >= SystemArgument1 )
      goto LABEL_8;
  }
LABEL_79:
  result = a5;
  *a5 = v5;
  return result;
}
