/*
 * XREFs of ExpInitSystemPhase1 @ 0x1408A0198
 * Callers:
 *     ExInitSystem @ 0x14089E868 (ExInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     RtlGetProductInfo @ 0x140170840 (RtlGetProductInfo.c)
 *     ExInitializeProcessor @ 0x140171408 (ExInitializeProcessor.c)
 *     ExpSaInitialize @ 0x1401833F8 (ExpSaInitialize.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x1406201F0 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExRegisterHost @ 0x1406423DC (ExRegisterHost.c)
 *     ExpInitializeSvm @ 0x14089EB90 (ExpInitializeSvm.c)
 *     ExpKeyedEventInitialization @ 0x14089EE78 (ExpKeyedEventInitialization.c)
 *     ExpTimerInitialization @ 0x1408A0088 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x1408A0824 (ExpWin32Initialization.c)
 *     ExpAeThresholdInitialization @ 0x1408BA930 (ExpAeThresholdInitialization.c)
 *     ExpWorkerInitialization @ 0x1408C095C (ExpWorkerInitialization.c)
 *     ExpInitializeCallbacks @ 0x1408C40AC (ExpInitializeCallbacks.c)
 *     ExpWorkerFactoryInitialization @ 0x1408C7E8C (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x1408C8B68 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x1408C8F84 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x1408C9738 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1408C97D0 (ExpEventInitialization.c)
 */

char ExpInitSystemPhase1()
{
  ULONG MaximumProcessorCount; // eax
  unsigned int v1; // ebx
  bool i; // di
  bool v3; // bl
  bool v4; // di
  bool v5; // bl
  char v6; // di
  char v7; // bl
  char v8; // di
  char v9; // al
  char v10; // si
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rbx
  char v13; // al
  char v14; // bl
  char v15; // di
  int v16; // eax
  __int64 v17; // rdx
  char v19[8]; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+38h] [rbp-38h]
  int v21; // [rsp+40h] [rbp-30h] BYREF
  __int16 v22; // [rsp+44h] [rbp-2Ch]
  int v23; // [rsp+48h] [rbp-28h]
  __int64 v24; // [rsp+50h] [rbp-20h]
  void (__fastcall *v25)(int); // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  ULONG ReturnedProductType; // [rsp+90h] [rbp+20h] BYREF

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  ExpHostListLock = 0LL;
  ExpSpinCount = MaximumProcessorCount > 1 ? 0x400 : 0;
  qword_140861300 = (__int64)&ExpHostList;
  ExpHostList = (__int64)&ExpHostList;
  ExpKeyManipLock = 0LL;
  ExpPlatformBinaryLock = 0LL;
  v1 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v1 < (unsigned int)KeNumberProcessors_0; ++v1 )
    ExInitializeProcessor(KiProcessorBlock[v1], 0);
  v3 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v4 = (unsigned __int8)ExpMutantInitialization() != 0 && v3;
  v5 = (unsigned __int8)ExpAeThresholdInitialization() != 0 && v4;
  v6 = (unsigned __int8)ExpInitializeCallbacks() != 0 && v5;
  v7 = (unsigned __int8)ExpSemaphoreInitialization() != 0 ? v6 : 0;
  v8 = ExpTimerInitialization() ? v7 : 0;
  v9 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  v10 = v9 != 0 ? v8 : 0;
  if ( ExpKeyedEventInitialization() < 0 )
    v10 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x20666E57u);
  ExpWnfDispatcher = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_DWORD *)v12 = 3148040;
    v12[3] = ExpWnfWorkItemRoutine;
    v13 = 1;
    v12[4] = 0LL;
    v12[1] = 0LL;
  }
  else
  {
    v13 = 0;
  }
  v14 = (unsigned __int8)ExpWin32Initialization() != 0 ? (v13 != 0 ? v10 : 0) : 0;
  if ( (int)ExpWorkerFactoryInitialization() < 0 )
    v14 = 0;
  v15 = ExpSaInitialize() != 0 ? v14 : 0;
  v16 = ExpMicrocodeInitialization(1LL);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741637 )
    v15 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v19)
    && MEMORY[0xFFFFF78000000264] != v20
    && (MEMORY[0xFFFFF78000000264] != 2 || v20 != 3) )
  {
    MEMORY[0xFFFFF78000000264] = v20;
  }
  v21 = 65537;
  v22 = 5;
  v23 = 1;
  v25 = ExpPcwHostCallback;
  v24 = 0LL;
  v26 = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v17, (unsigned __int16 *)&v21) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeSvm();
  return v15;
}
