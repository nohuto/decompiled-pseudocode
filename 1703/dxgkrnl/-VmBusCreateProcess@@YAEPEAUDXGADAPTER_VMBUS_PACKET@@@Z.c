/*
 * XREFs of ?VmBusCreateProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C800
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0020860 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct DXGPROCESS *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rax
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  struct DXGPROCESS *v17; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  v1 = *((_QWORD *)a1 + 7);
  v2 = *((_QWORD *)a1 + 9);
  v17 = 0LL;
  v4 = 0;
  KeStackAttachProcess(*(PRKPROCESS *)(v1 + 48), &ApcState);
  v5 = DXGPROCESS::CreateDxgProcess(&v17, 1u, *(struct DXGPROCESS **)(v2 + 16));
  v8 = v5;
  if ( v5 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v14 + 24) = v8;
    WdLogEvent5_WdError(v14);
  }
  else
  {
    v9 = v17;
    v4 = DXGPROCESS::AllocHandleSafe(v1, (__int64)v17, 0xCu);
    if ( !v4 )
    {
      v12 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v12 + 24) = 6279LL;
      WdLogEvent5_WdError(v12);
      DXGPROCESS::DestroyDxgProcess(v9);
    }
    *((_DWORD *)v9 + 97) = v4;
    *((_OWORD *)v9 + 23) = *(_OWORD *)(v2 + 24);
    *((_BYTE *)v9 + 383) = 0;
    v13 = *(_BYTE *)(v2 + 41);
    if ( (v13 & 2) != 0 )
    {
      *((_BYTE *)v9 + 274) = 1;
    }
    else if ( (v13 & 1) != 0 )
    {
      *((_BYTE *)v9 + 272) = 1;
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v8 < 0 )
    return 0;
  v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  LODWORD(v17) = v4;
  VmBusCompletePacket(v15, &v17, 4u);
  return 1;
}
