/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x1405E7FB4
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rsi
  __int64 *v7; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx

  v3 = 0;
  if ( a3 )
    return (unsigned int)-1073741727;
  if ( !a1 || a2 < 0x18 )
    return (unsigned int)-1073741820;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&ExpFirmwareTableResource, 1u);
  v6 = (_QWORD *)(ExpFirmwareTableProviderListHead - 24);
  v7 = (__int64 *)ExpFirmwareTableProviderListHead;
  if ( &ExpFirmwareTableProviderListHead == (__int64 *)ExpFirmwareTableProviderListHead )
  {
LABEL_7:
    if ( *(_BYTE *)(a1 + 4) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x54465241u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_DWORD *)PoolWithTag = *(_DWORD *)a1;
        PoolWithTag[1] = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(a1 + 16);
        v11 = v9 + 3;
        v9[2] = v10;
        v9[4] = v9 + 3;
        v9[3] = v9 + 3;
        ObfReferenceObject((PVOID)v9[2]);
        v12 = (_QWORD *)qword_14035E618;
        if ( *(__int64 **)qword_14035E618 != &ExpFirmwareTableProviderListHead )
          __fastfail(3u);
        *v11 = &ExpFirmwareTableProviderListHead;
        v11[1] = v12;
        *v12 = v11;
        qword_14035E618 = (__int64)v11;
      }
      else
      {
        v3 = -1073741670;
      }
      goto LABEL_11;
    }
    goto LABEL_23;
  }
  while ( *(_DWORD *)v6 != *(_DWORD *)a1 )
  {
    v6 = (_QWORD *)(*v7 - 24);
    v7 = (__int64 *)*v7;
    if ( &ExpFirmwareTableProviderListHead == v7 )
      goto LABEL_7;
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    if ( v6[2] == *(_QWORD *)(a1 + 16) )
    {
      v14 = v6[3];
      if ( *(_QWORD **)(v14 + 8) != v6 + 3 || (v15 = (_QWORD *)v6[4], (_QWORD *)*v15 != v6 + 3) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      ObfDereferenceObject((PVOID)v6[2]);
      ExFreePoolWithTag(v6, 0x54465241u);
      goto LABEL_11;
    }
LABEL_23:
    v3 = -1073741811;
    goto LABEL_11;
  }
  v3 = 0x40000000;
LABEL_11:
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
