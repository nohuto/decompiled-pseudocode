/*
 * XREFs of MiCombineIdenticalPages @ 0x14056185C
 * Callers:
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     MiCombineWorkingSet @ 0x14007369C (MiCombineWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MiCombiningInProgress @ 0x14012CB20 (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 */

__int64 __fastcall MiCombineIdenticalPages(
        __int64 a1,
        void *a2,
        int a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        _QWORD *a6)
{
  PVOID v9; // r15
  char *v10; // r14
  __int64 v11; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v15; // rdi
  unsigned int v16; // eax
  NTSTATUS v18; // eax
  PVOID v19; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  _QWORD *v22; // [rsp+48h] [rbp-B8h]
  _QWORD v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  char *v24; // [rsp+70h] [rbp-90h]
  _QWORD *v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+84h] [rbp-7Ch]
  _QWORD v28[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[4]; // [rsp+F0h] [rbp-10h] BYREF
  $5BC46E0569261879018906DEC3127961 v31; // [rsp+110h] [rbp+10h] BYREF

  v21 = a1;
  v22 = a6;
  memset(v30, 0, sizeof(v30));
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return (unsigned int)-1073741583;
  if ( (a3 & 0x18) == 0x10 )
    return (unsigned int)-1073741637;
  if ( (a3 & 8) == 0 )
    goto LABEL_6;
  if ( (a3 & 2) == 0 )
    return (unsigned int)-1073741637;
  if ( (a3 & 4) != 0 )
    return (unsigned int)-1073741583;
LABEL_6:
  v11 = -1LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a4 )
      v11 = (__int64)a4;
    a4 = (void *)v11;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_1403E3108 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (v18 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v19, 0LL),
        v9 = v19,
        v13 = v18,
        v18 >= 0) )
  {
    if ( a4 )
    {
      v12 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
      v10 = (char *)Object;
      v13 = v12;
      if ( v12 < 0 )
      {
LABEL_21:
        if ( v10 )
        {
          KiUnstackDetachProcess(&v31, 0LL);
          ObfDereferenceObject(v10);
        }
        goto LABEL_23;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v31);
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v21 + 5152;
    if ( (a3 & 1) != 0 )
    {
      v13 = -1073741637;
    }
    else
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v15, v29, 1);
      v25 = 0LL;
      v26 = 0;
      if ( (a3 & 4) != 0 )
      {
        v28[0] = qword_14036CEF8;
        v28[1] = qword_14036CF00;
        v25 = v28;
        v26 = 2;
      }
      v23[0] = v15;
      v23[2] = v29;
      v23[3] = v30;
      v23[1] = v9;
      v27 = a3;
      if ( (a3 & 2) != 0 )
      {
        v24 = v10 + 1280;
        v16 = MiCombineWorkingSet((__int64)v23);
      }
      else
      {
        v24 = 0LL;
        v16 = MiCombineAllPhysicalMemory(v23);
      }
      v13 = v16;
      *v22 = v30[0];
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 376));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 368), v30[1]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 352), v30[2]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 360), v30[3]);
      MiCombiningInProgress((__int64 *)v15, v29, 0);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( v9 )
    ObfDereferenceObject(v9);
  return v13;
}
