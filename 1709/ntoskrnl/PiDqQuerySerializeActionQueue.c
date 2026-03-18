/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x14052DBC8
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x14054D9E8 (PiDqIrpQueryGetResult.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14052DF28 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataCreate @ 0x14052DF68 (PiDqActionDataCreate.c)
 *     PiDqActionDataFree @ 0x14052E114 (PiDqActionDataFree.c)
 *     PiDqQueryGetObjectManager @ 0x14054D04C (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 */

__int64 __fastcall PiDqQuerySerializeActionQueue(__int64 a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // r12
  int v10; // ebx
  struct _ERESOURCE *ObjectManager; // rax
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v13; // rax
  __int64 **v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  struct _KTHREAD *v18; // rax
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+44h] [rbp-44h]
  PVOID P; // [rsp+48h] [rbp-40h]
  int v24; // [rsp+50h] [rbp-38h]
  __int16 v25; // [rsp+54h] [rbp-34h]
  PVOID v26; // [rsp+98h] [rbp+10h] BYREF
  int *v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v7 = 0;
  v19 = 0LL;
  v26 = 0LL;
  v20 = a2;
  v21 = a3;
  v22 = 16;
  P = 0LL;
  v24 = 0;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = a1 + 64;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  v10 = *(_DWORD *)(a1 + 216);
  ExReleasePushLockEx(v9, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (v10 & 0x20) == 0 )
  {
    ObjectManager = (struct _ERESOURCE *)PiDqQueryGetObjectManager(a1);
    v7 = PiDqObjectManagerEnumerateAndRegisterQuery(ObjectManager);
  }
  if ( v7 < 0 )
  {
LABEL_31:
    *a4 = 0;
    *a5 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v20, PiDqSerializationAlloc, &PiDqSerializationWrite, &v19);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v19, &v20, 0LL, 0LL, 0LL, *(_DWORD *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a4 = v22;
        *a5 = 0;
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v9, 0LL);
        v26 = *(PVOID *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        ExReleasePushLockEx(v9, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        do
        {
          if ( v26 )
          {
            NdrMesTypeEncode3(v19, "TP 3\a", &off_1402B6168, &off_1403543E0, 1, &v26);
            if ( HIBYTE(v25) )
            {
              v7 = -1073741819;
              goto LABEL_31;
            }
            if ( (_BYTE)v25 )
            {
              v18 = KeGetCurrentThread();
              --v18->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
              *(_QWORD *)(a1 + 184) = v26;
              v26 = 0LL;
              ExReleasePushLockEx(a1 + 64, 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              *a5 = v24 + 16;
              break;
            }
            *a4 = v22;
            PiDqActionDataFree(v26);
            v26 = 0LL;
          }
          v13 = KeGetCurrentThread();
          --v13->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
          v14 = (__int64 **)(a1 + 192);
          if ( *v14 == (__int64 *)v14 )
          {
            ExReleasePushLockEx(a1 + 64, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            break;
          }
          v15 = *v14;
          v16 = **v14;
          if ( (__int64 **)(*v14)[1] != v14 || *(__int64 **)(v16 + 8) != v15 )
            __fastfail(3u);
          *v14 = (__int64 *)v16;
          *(_QWORD *)(v16 + 8) = v14;
          --*(_DWORD *)(a1 + 208);
          ExReleasePushLockEx(a1 + 64, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v7 = PiDqActionDataCreate(*(_QWORD *)(a1 + 24), a1 + 32, v15, &v26);
          PiDqQueryActionQueueEntryFree(v15);
          if ( v7 == -1073741772 )
            v7 = 0;
        }
        while ( v7 >= 0 );
      }
    }
    if ( v7 < 0 )
      goto LABEL_31;
  }
  if ( v26 )
    PiDqActionDataFree(v26);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v19 )
    MesHandleFree();
  return (unsigned int)v7;
}
