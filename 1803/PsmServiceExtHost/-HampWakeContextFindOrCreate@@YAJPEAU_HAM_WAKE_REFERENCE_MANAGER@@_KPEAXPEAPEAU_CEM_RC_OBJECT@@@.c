/*
 * XREFs of ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180031400
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E2FC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180027880 (CemRcTableFindOrInsertEx.c)
 *     ?HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003152C (-HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800315C0 (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800315E4 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z @ 0x18003160C (-HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z.c)
 *     ?HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180031684 (-HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampWakeContextFindOrCreate(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        unsigned __int64 a2,
        void *a3,
        struct _CEM_RC_OBJECT **a4)
{
  struct _HAM_HOST_WAKE_CONTEXT *Heap; // rdi
  unsigned int v9; // r15d
  int State; // ebx
  PULONG ReturnLength; // [rsp+20h] [rbp-98h]
  ULONG v13; // [rsp+30h] [rbp-88h] BYREF
  struct _CEM_RC_OBJECT *v14; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-70h]
  _BYTE JobInformation[32]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+70h] [rbp-48h]

  Heap = (struct _HAM_HOST_WAKE_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC0uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  NtQueryInformationJobObject(
    a3,
    MaxJobObjectInfoClass|JobObjectBasicLimitInformation|0x10,
    JobInformation,
    0x24u,
    &v13);
  v9 = v18;
  HampWakeContextInitialize(a1, a2, v18, Heap);
  State = HampWakeContextAllocateState(Heap, a3);
  if ( State < 0 )
  {
LABEL_12:
    CemRcObjectDereference(Heap);
    return (unsigned int)State;
  }
  HampWakeManagerAcquireLockShared(a1);
  if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
  {
    State = -1073741077;
LABEL_11:
    HampWakeManagerReleaseLockShared(a1);
    goto LABEL_12;
  }
  v15 = a2;
  v16 = v9;
  CemRcTableFindOrInsertEx(
    (__int64)a1 + 32,
    (__int64)&v15,
    (__int64 (__fastcall *)(__int64, unsigned __int64))HampWakeContextTreeCompareByHostId,
    (unsigned __int64)Heap,
    (__int64)ReturnLength,
    (unsigned __int64 *)&v14);
  if ( v14 != Heap )
  {
    *a4 = v14;
    State = 0;
    goto LABEL_11;
  }
  HampWakeManagerReleaseLockShared(a1);
  State = HampWakeContextStart(Heap);
  if ( State < 0 )
    goto LABEL_12;
  *a4 = Heap;
  return 0;
}
