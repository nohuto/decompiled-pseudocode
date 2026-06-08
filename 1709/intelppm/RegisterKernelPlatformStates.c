/*
 * XREFs of RegisterKernelPlatformStates @ 0x1C0030F1C
 * Callers:
 *     RegisterIdleComplete @ 0x1C0022368 (RegisterIdleComplete.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C00016C0 (HviIsAnyHypervisorPresent.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C0028140 (ProcLibTracePlatformIdleStates.c)
 *     ValidatePlatformIdleState @ 0x1C002A738 (ValidatePlatformIdleState.c)
 *     PepQueryName @ 0x1C0032848 (PepQueryName.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // r13d
  int ProcessorNumberFromIndex; // ebx
  unsigned int v4; // r12d
  char *PoolWithTag; // rax
  char *v6; // rdi
  SIZE_T v7; // rbx
  _DWORD *v8; // r14
  unsigned int v9; // ebp
  char *v10; // r15
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdx
  bool IsAnyHypervisorPresent; // al
  void *v17; // rcx
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  PVOID *v21; // r14

  v1 = (unsigned int)dword_1C0019B08;
  v2 = dword_1C00195D4;
  if ( !dword_1C0019B08 )
    return 0;
  v4 = (48 * dword_1C0019B08 + 59) & 0xFFFFFFFC;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4 + 8 * dword_1C00195D4 * dword_1C0019B08, 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x12u,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
    return (unsigned int)-1073741670;
  }
  memset(PoolWithTag, 0, v4 + 8 * v2 * (_DWORD)v1);
  v7 = (unsigned int)(16 * v2 + 40);
  v8 = ExAllocatePoolWithTag(PagedPool, v7, 0x72637250u);
  if ( !v8 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x13u,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
    ProcessorNumberFromIndex = -1073741670;
    goto LABEL_24;
  }
  v9 = 0;
  if ( (_DWORD)v1 )
  {
    v10 = v6 + 64;
    while ( 1 )
    {
      memset(v8, 0, v7);
      *v8 = v9;
      v8[8] = v2;
      v11 = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD))qword_1C0019878)(*(_QWORD *)(a1 + 1088), v8, 0LL);
      ProcessorNumberFromIndex = v11;
      if ( v11 < 0 )
        break;
      ProcessorNumberFromIndex = ValidatePlatformIdleState(v8);
      if ( ProcessorNumberFromIndex < 0 )
        goto LABEL_23;
      PepQueryName(a1, v9, 27LL, v10 + 16);
      *(_DWORD *)v10 = v8[5];
      *((_DWORD *)v10 + 1) = v8[6];
      *(v10 - 3) = *((_BYTE *)v8 + 16);
      if ( *((_QWORD *)v8 + 1) )
      {
        *(v10 - 4) = 1;
        ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                     *(_DWORD *)(*((_QWORD *)v8 + 1) + 56LL),
                                     (PPROCESSOR_NUMBER)v10 - 2);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_23;
      }
      v12 = v8[7];
      v13 = 0LL;
      v14 = v4;
      v4 += 8 * v2;
      *((_DWORD *)v10 + 2) = v12;
      *((_QWORD *)v10 + 4) = &v6[v14];
      if ( v12 )
      {
        do
        {
          v15 = *((_QWORD *)v10 + 4);
          *(_DWORD *)(v15 + 8 * v13) = *(_DWORD *)(*(_QWORD *)&v8[4 * (unsigned int)v13 + 10] + 56LL);
          *(_BYTE *)(v15 + 8 * v13 + 4) = v8[4 * (unsigned int)v13 + 12];
          *(_BYTE *)(v15 + 8 * v13 + 6) = BYTE2(v8[4 * (unsigned int)v13 + 12]);
          *(_BYTE *)(v15 + 8 * v13 + 5) = BYTE1(v8[4 * (unsigned int)v13 + 12]);
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *((_DWORD *)v10 + 2) );
      }
      v7 = (unsigned int)(16 * v2 + 40);
      ++v9;
      v10 += 48;
      if ( v9 >= (unsigned int)v1 )
        goto LABEL_16;
    }
    v18 = 20;
    v19 = 3;
    v20 = 2;
  }
  else
  {
LABEL_16:
    *(_DWORD *)v6 = 52;
    *((_DWORD *)v6 + 1) = dword_1C0019B08;
    *((_DWORD *)v6 + 2) = dword_1C0019B08;
    *((_QWORD *)v6 + 5) = PepQueryPlatformStateResidency;
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
    *((_QWORD *)v6 + 3) = PepIdlePreExecute;
    v17 = PepIdleTest;
    if ( IsAnyHypervisorPresent )
      v17 = PepIdleVmTest;
    *((_QWORD *)v6 + 2) = v17;
    *((_QWORD *)v6 + 4) = PepIdleComplete;
    v11 = ((__int64 (__fastcall *)(char *))qword_1C0019808)(v6);
    ProcessorNumberFromIndex = v11;
    if ( v11 >= 0 )
    {
      Src = v6;
      v6 = 0LL;
      ProcLibTracePlatformIdleStates(0);
      ProcessorNumberFromIndex = 0;
      goto LABEL_23;
    }
    v18 = 21;
    v19 = 2;
    v20 = 3;
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v19,
    v20,
    v18,
    (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
    v11);
LABEL_23:
  ExFreePoolWithTag(v8, 0x72637250u);
LABEL_24:
  if ( v6 )
  {
    if ( (_DWORD)v1 )
    {
      v21 = (PVOID *)(v6 + 88);
      do
      {
        if ( *v21 )
          ExFreePoolWithTag(*v21, 0x72637250u);
        v21 += 6;
        --v1;
      }
      while ( v1 );
    }
    ExFreePoolWithTag(v6, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
