/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002AB0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0002B8C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rsi
  struct DXGADAPTER_VMBUS_PACKET *v2; // rbp
  int v3; // r14d
  unsigned __int8 v4; // al
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r15
  struct DXGPROCESS *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // al
  DXGFASTMUTEX *v18; // rbx
  __int64 v19; // rax
  struct VMBPACKETCOMPLETION__ *v20; // rcx
  int v22; // [rsp+20h] [rbp-68h] BYREF
  struct DXGPROCESS *v23; // [rsp+28h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v2 = a1;
  v23 = 0LL;
  v3 = 0;
  LOBYTE(a1) = *(_BYTE *)(v1 + 49);
  if ( ((unsigned __int8)a1 & 3) == 3
    || (v4 = (unsigned __int8)a1 | ((unsigned __int8)a1 >> 1),
        LOBYTE(a1) = (unsigned __int8)a1 >> 2,
        ((unsigned __int8)a1 & v4 & 1) != 0) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 3504LL;
    goto LABEL_20;
  }
  v5 = *((_QWORD *)v2 + 7);
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v5 + 448)) > 0xFFFF )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 862LL;
    WdLogEvent5_WdError(v6);
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3512LL;
LABEL_20:
    WdLogEvent5_WdAssertion(v8);
    return 0;
  }
  KeStackAttachProcess(*(PRKPROCESS *)(v5 + 48), &ApcState);
  LOBYTE(v9) = 1;
  v10 = DXGPROCESS::CreateDxgProcess(&v23, v9, *(struct DXGPROCESS **)(v1 + 24));
  v12 = v10;
  if ( v10 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v19 + 24) = v12;
    WdLogEvent5_WdError(v19);
    goto LABEL_17;
  }
  v13 = v23;
  v14 = DXGPROCESS::AllocHandleSafe(v5, (__int64)v23, 0xCu);
  v3 = v14;
  if ( v14 )
  {
    *((_DWORD *)v13 + 107) = v14;
    *(_OWORD *)((char *)v13 + 408) = *(_OWORD *)(v1 + 32);
    *((_BYTE *)v13 + 423) = 0;
    v17 = *(_BYTE *)(v1 + 49);
    if ( (v17 & 2) != 0 )
    {
      *((_BYTE *)v13 + 306) = 1;
    }
    else if ( (v17 & 1) != 0 )
    {
      *((_BYTE *)v13 + 304) = 1;
    }
    else if ( (v17 & 4) != 0 )
    {
      *((_BYTE *)v13 + 307) |= 1u;
    }
    v18 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v15) + 200);
    DXGFASTMUTEX::Acquire(v18);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v5);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v18);
LABEL_17:
    KeUnstackDetachProcess(&ApcState);
    if ( (int)v12 >= 0 )
    {
      v20 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)v2 + 8);
      v22 = v3;
      VmBusCompletePacket(v20, &v22, 4u);
      return 1;
    }
    goto LABEL_8;
  }
  v16 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v16 + 24) = 3525LL;
  WdLogEvent5_WdError(v16);
  DXGPROCESS::DestroyDxgProcess(v13);
LABEL_8:
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 448));
  return 0;
}
