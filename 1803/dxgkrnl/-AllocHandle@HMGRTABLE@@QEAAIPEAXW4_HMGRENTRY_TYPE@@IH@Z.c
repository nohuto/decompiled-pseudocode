/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00163C8 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00164D0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00169F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0023E50 (-AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0097A7C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00BCF2C (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00BE814 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00EEF60 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00F0990 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00F50F8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00FDD94 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017DC90 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C01E4B70 (-AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00F84AC (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r8d

  if ( a3 > 31 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 150LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3 <= 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v10 + 24) = 151LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v12 = a1[2];
  if ( (unsigned int)v12 >= a1[4] )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 169LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) & 0x1F) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 170LL;
    WdLogEvent5_WdAssertion(v15);
    v14 = *(_QWORD *)a1;
  }
  v16 = *(unsigned int *)(v14 + 16LL * a1[2]);
  v17 = 2LL * a1[3];
  a1[2] = v16;
  v18 = *(_DWORD *)(v14 + 8 * v17);
  v19 = a1[4];
  a1[3] = v18;
  if ( (unsigned int)v16 >= v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v20 + 24) = 177LL;
    WdLogEvent5_WdAssertion(v20);
    v18 = a1[3];
    v19 = a1[4];
  }
  if ( v18 >= v19 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v21 + 24) = 178LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v12) = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)a1
                                                                                                 + 16 * v12
                                                                                                 + 8)) & 0x1F;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^ (a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  --a1[5];
  return (((v22 >> 5 << 24) | v12 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) >> 7) & 0x3F;
}
