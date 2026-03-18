/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x1404B95DC
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x1404B80E4 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x1404B9328 (PiDqIrpQueryCreate.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDqQueryGetObjectManager @ 0x1404B8F70 (PiDqQueryGetObjectManager.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1404B993C (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1404B997C (PiDqActionDataFree.c)
 *     PiDqActionDataCreate @ 0x1404B99CC (PiDqActionDataCreate.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
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
  _QWORD **v14; // rax
  _QWORD **v15; // rbx
  _QWORD *v16; // rcx
  struct _KTHREAD *v18; // rax
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+44h] [rbp-44h]
  PVOID P; // [rsp+48h] [rbp-40h]
  int v24; // [rsp+50h] [rbp-38h]
  __int16 v25; // [rsp+54h] [rbp-34h]
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (v10 & 0x20) == 0 )
  {
    ObjectManager = PiDqQueryGetObjectManager(a1);
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
    v7 = MesEncodeIncrementalHandleCreate(&v20, PiDqSerializationAlloc, PiDqSerializationWrite, &v19);
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
        v26 = *(_QWORD *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        ExReleasePushLockEx(v9, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        do
        {
          if ( v26 )
          {
            NdrMesTypeEncode3(v19, "TP 3\a", &off_140289160, &off_14033C270, 1, &v26);
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
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
          v14 = (_QWORD **)(a1 + 192);
          if ( *v14 == v14 )
          {
            ExReleasePushLockEx(a1 + 64, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            break;
          }
          v15 = (_QWORD **)*v14;
          v16 = (_QWORD *)**v14;
          if ( (_QWORD **)(*v14)[1] != v14 || (_QWORD **)v16[1] != v15 )
            __fastfail(3u);
          *v14 = v16;
          v16[1] = v14;
          --*(_DWORD *)(a1 + 208);
          ExReleasePushLockEx(a1 + 64, 0LL);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
