/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x14050D2A0
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x140523AD4 (PiDqIrpQueryGetResult.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14050D608 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14050D648 (PiDqActionDataFree.c)
 *     PiDqActionDataCreate @ 0x14050D69C (PiDqActionDataCreate.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryGetObjectManager @ 0x140579388 (PiDqQueryGetObjectManager.c)
 */

__int64 __fastcall PiDqQuerySerializeActionQueue(__int64 a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // r15
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _ERESOURCE *ObjectManager; // rax
  struct _KTHREAD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rcx
  struct _KTHREAD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD v27[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+40h] [rbp-48h] BYREF
  int v29; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+50h] [rbp-38h]
  int v32; // [rsp+58h] [rbp-30h]
  __int16 v33; // [rsp+5Ch] [rbp-2Ch]
  PVOID v34; // [rsp+98h] [rbp+10h] BYREF
  int *v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v7 = 0;
  v27[0] = 0LL;
  v34 = 0LL;
  v28 = a2;
  v29 = a3;
  v30 = 16;
  P = 0LL;
  v32 = 0;
  v33 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = a1 + 64;
  v27[1] = a1 + 64;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  v10 = *(_DWORD *)(a1 + 216);
  ExReleasePushLockEx(v9, 0LL, v11, v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (v10 & 0x20) == 0 )
  {
    ObjectManager = (struct _ERESOURCE *)PiDqQueryGetObjectManager(a1);
    v7 = PiDqObjectManagerEnumerateAndRegisterQuery(ObjectManager);
  }
  if ( v7 < 0 )
  {
LABEL_30:
    *a4 = 0;
    *a5 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v28, PiDqSerializationAlloc, &PiDqSerializationWrite, v27);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v27[0], &v28, 0LL, 0LL, 0LL, *(_DWORD *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a4 = v30;
        *a5 = 0;
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v9, 0LL);
        v34 = *(PVOID *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        ExReleasePushLockEx(v9, 0LL, v15, v16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        do
        {
          if ( v34 )
          {
            NdrMesTypeEncode3(v27[0], "TP 3\a", &off_1402EDA90, &off_140396FA0, 1, &v34);
            if ( HIBYTE(v33) )
            {
              v7 = -1073741819;
              goto LABEL_30;
            }
            if ( (_BYTE)v33 )
            {
              v24 = KeGetCurrentThread();
              --v24->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v9, 0LL);
              *(_QWORD *)(a1 + 184) = v34;
              v34 = 0LL;
              ExReleasePushLockEx(v9, 0LL, v25, v26);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              *a5 = v32 + 16;
              break;
            }
            *a4 = v30;
            PiDqActionDataFree(v34);
            v34 = 0LL;
          }
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v9, 0LL);
          v20 = (_QWORD *)(a1 + 192);
          v21 = *(__int64 **)(a1 + 192);
          if ( v21 == (__int64 *)(a1 + 192) )
          {
            ExReleasePushLockEx(v9, 0LL, v18, v19);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            break;
          }
          v22 = *v21;
          if ( (_QWORD *)v21[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
            __fastfail(3u);
          *v20 = v22;
          *(_QWORD *)(v22 + 8) = v20;
          --*(_DWORD *)(a1 + 208);
          ExReleasePushLockEx(v9, 0LL, v18, v19);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v7 = PiDqActionDataCreate(*(_QWORD *)(a1 + 24), a1 + 32, v21, &v34);
          PiDqQueryActionQueueEntryFree(v21);
          if ( v7 == -1073741772 )
            v7 = 0;
        }
        while ( v7 >= 0 );
      }
    }
    if ( v7 < 0 )
      goto LABEL_30;
  }
  if ( v34 )
    PiDqActionDataFree(v34);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v27[0] )
    MesHandleFree();
  return (unsigned int)v7;
}
