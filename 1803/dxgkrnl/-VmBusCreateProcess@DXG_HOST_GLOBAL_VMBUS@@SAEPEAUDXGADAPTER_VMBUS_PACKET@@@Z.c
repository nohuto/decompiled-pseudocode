/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E080
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00164D0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D344 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C01B7D84 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // r14d
  unsigned __int8 v6; // al
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  DXGPROCESSVM *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // al
  DXGFASTMUTEX *v21; // rbx
  __int64 v22; // rax
  struct VMBPACKETCOMPLETION__ *v23; // rcx
  int v25; // [rsp+20h] [rbp-68h] BYREF
  DXGPROCESSVM *v26; // [rsp+28h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v4 = v2;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *(_BYTE *)(v2 + 554);
  v5 = 0;
  v26 = 0LL;
  if ( (v3 & 3) == 3
    || (v6 = v3 | ((unsigned __int8)v3 >> 1), LOBYTE(v3) = (unsigned __int8)v3 >> 2, ((unsigned __int8)v3 & v6 & 1) != 0) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v11 + 24) = 4069LL;
    goto LABEL_21;
  }
  v7 = *((_QWORD *)a1 + 7);
  v8 = (unsigned int)_InterlockedIncrement(*(volatile signed __int32 **)(v7 + 456));
  if ( (unsigned int)v8 > 0xFFFF )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 5190LL;
    WdLogEvent5_WdError(v9);
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 4077LL;
LABEL_21:
    WdLogEvent5_WdAssertion(v11);
    return 0;
  }
  KeStackAttachProcess(*(PRKPROCESS *)(v7 + 56), &ApcState);
  v12 = DXGPROCESS::CreateDxgProcess(&v26, (struct DXGPROCESS *)v7, *(struct DXGPROCESS **)(v4 + 24), 0LL);
  v14 = v12;
  if ( v12 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v22 + 24) = v14;
    WdLogEvent5_WdError(v22);
    goto LABEL_18;
  }
  v15 = v26;
  v16 = DXGPROCESS::AllocHandleSafe(v7, (__int64)v26, 0xCu);
  v5 = v16;
  if ( v16 )
  {
    *((_DWORD *)v15 + 125) = v16;
    DXGPROCESSVM::SetVmProcessName(v15, (unsigned __int16 *)(v4 + 32));
    v20 = *(_BYTE *)(v4 + 554);
    if ( (v20 & 2) != 0 )
    {
      *((_BYTE *)v15 + 322) = 1;
    }
    else if ( (v20 & 1) != 0 )
    {
      *((_BYTE *)v15 + 320) = 1;
    }
    else if ( (v20 & 4) != 0 )
    {
      *((_BYTE *)v15 + 323) |= 1u;
    }
    v21 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v19) + 208);
    DXGFASTMUTEX::Acquire(v21);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v7);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v21);
LABEL_18:
    KeUnstackDetachProcess(&ApcState);
    if ( (int)v14 >= 0 )
    {
      v23 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
      v25 = v5;
      VmBusCompletePacket(v23, &v25, 4u);
      return 1;
    }
    goto LABEL_9;
  }
  v18 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v18 + 24) = 4091LL;
  WdLogEvent5_WdError(v18);
  DXGPROCESS::DestroyDxgProcess(v15);
LABEL_9:
  _InterlockedDecrement(*(volatile signed __int32 **)(v7 + 456));
  return 0;
}
