/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C018FC00
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C0190060 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(
        struct DXGADAPTER *a1,
        struct _D3DKMT_DRT_VMBUS_COMMAND *a2,
        __int64 a3,
        __int64 a4)
{
  PVOID PoolWithTag; // r14
  PVOID v6; // r15
  DXG_VMBUS_CHANNEL_BASE *v7; // rdi
  __int64 v8; // rax
  SIZE_T v10; // rdx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  size_t v15; // r8
  char *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax
  size_t v20; // r8
  char *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+18h] BYREF
  PVOID v25; // [rsp+88h] [rbp+20h]

  PoolWithTag = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  v23 = 0;
  if ( *((_DWORD *)a2 + 3) )
  {
    if ( !a1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v8 + 24) = 7584LL;
LABEL_5:
      WdLogEvent5_WdAssertion(v8);
      return 3221225485LL;
    }
    v7 = (struct DXGADAPTER *)((char *)a1 + 3888);
  }
  else
  {
    v7 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 142);
  }
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 7591LL;
    goto LABEL_5;
  }
  v10 = *((_QWORD *)a2 + 3);
  if ( !v10 )
    goto LABEL_19;
  if ( *((_QWORD *)a2 + 2) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v10, 0x4B677844u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v14 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v14 + 24) = 7606LL;
LABEL_14:
      WdLogEvent5_WdLowResource(v14);
      v12 = -1073741801;
      goto LABEL_40;
    }
    v15 = *((_QWORD *)a2 + 3);
    v16 = (char *)*((_QWORD *)a2 + 2);
    if ( &v16[v15] < v16 || (unsigned __int64)&v16[v15] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithTag, v16, v15);
LABEL_19:
    if ( *((_QWORD *)a2 + 5) )
    {
      if ( *((_QWORD *)a2 + 4) )
      {
        v23 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
        v6 = ExAllocatePoolWithTag((POOL_TYPE)512, v23, 0x4B677844u);
        if ( !v6 )
        {
          v14 = WdLogNewEntry5_WdLowResource(a1);
          *(_QWORD *)(v14 + 24) = 7630LL;
          goto LABEL_14;
        }
      }
    }
    v17 = *((unsigned int *)a2 + 6);
    if ( v6 )
    {
      v12 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v7, PoolWithTag, v17, v6, &v23);
      if ( v12 < 0 || (unsigned __int64)v23 < *((_QWORD *)a2 + 5) )
      {
        v19 = WdLogNewEntry5_WdEvent(a1, v10, v17, a4);
        *(_QWORD *)(v19 + 24) = 7657LL;
        WdLogEvent5_WdEvent(v19);
        v12 = -1073741823;
      }
      if ( v12 < 0 )
        goto LABEL_39;
      v20 = *((_QWORD *)a2 + 5);
      v21 = (char *)*((_QWORD *)a2 + 4);
      if ( (unsigned __int64)&v21[v20] > MmUserProbeAddress || &v21[v20] <= v21 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, v6, v20);
    }
    else
    {
      if ( *((_QWORD *)a2 + 5) )
      {
        v24 = 0;
        v18 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v7, PoolWithTag, v17, 0LL, &v24);
      }
      else
      {
        if ( !*((_BYTE *)v7 + 8) )
        {
          v12 = -1073741811;
          goto LABEL_39;
        }
        v18 = VmbChannelSendSynchronousRequest(*(_QWORD *)v7, PoolWithTag, v17, 0LL, 0, 0LL, 0LL, 0LL);
      }
      v12 = v18;
    }
    if ( v12 >= 0 )
      goto LABEL_40;
LABEL_39:
    v22 = WdLogNewEntry5_WdEvent(a1, v10, v17, a4);
    *(_QWORD *)(v22 + 24) = v12;
    WdLogEvent5_WdEvent(v22);
    goto LABEL_40;
  }
  v11 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v11 + 24) = 7599LL;
  WdLogEvent5_WdAssertion(v11);
  v12 = -1073741811;
LABEL_40:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v12;
}
