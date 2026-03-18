/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0002AD0 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0002B8C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0003164 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C001D808 (-AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C007ABD4 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0084CB0 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C0091A90 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C009AB40 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009C23C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00AFDC0 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00C08F4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00FB500 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191FB0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C011D8D8 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r8d

  if ( a3 > 31 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 144LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3 <= 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v10 + 24) = 145LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v12 = a1[2];
  if ( (unsigned int)v12 >= a1[4] )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 163LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(unsigned int *)(*(_QWORD *)a1 + 16 * v12 + 8);
  if ( (v14 & 0x1F) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 164LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *(_QWORD *)a1;
  v17 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v18 = 2LL * a1[3];
  a1[2] = v17;
  a1[3] = *(_DWORD *)(v16 + 8 * v18);
  if ( v17 >= a1[4] )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v19 + 24) = 171LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a1[3] >= a1[4] )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v20 + 24) = 172LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v12) = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)a1
                                                                                                 + 16 * v12
                                                                                                 + 8)) & 0x1F;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^ (a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  --a1[5];
  return (((v21 >> 5 << 24) | v12 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) >> 7) & 0x3F;
}
