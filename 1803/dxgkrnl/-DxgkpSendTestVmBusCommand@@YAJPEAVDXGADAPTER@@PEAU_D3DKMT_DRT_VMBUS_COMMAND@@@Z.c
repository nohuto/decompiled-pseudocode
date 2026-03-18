/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C017AE78
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C017B4A8 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C017B504 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(struct DXGADAPTER *a1, struct _D3DKMT_DRT_VMBUS_COMMAND *a2)
{
  PVOID PoolWithTag; // r14
  PVOID v4; // r15
  DXG_VMBUS_CHANNEL_BASE *v5; // rdi
  __int64 v6; // rax
  SIZE_T v8; // rdx
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  size_t v13; // r8
  char *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  size_t v22; // r8
  char *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+70h] [rbp+18h] BYREF
  PVOID v27; // [rsp+78h] [rbp+20h]

  PoolWithTag = 0LL;
  v27 = 0LL;
  v4 = 0LL;
  v25 = 0;
  if ( *((_DWORD *)a2 + 3) )
  {
    if ( !a1 )
    {
      v6 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v6 + 24) = 8736LL;
LABEL_5:
      WdLogEvent5_WdAssertion(v6);
      return 3221225485LL;
    }
    v5 = (struct DXGADAPTER *)((char *)a1 + 4080);
  }
  else
  {
    v5 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 152);
  }
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 8743LL;
    goto LABEL_5;
  }
  v8 = *((_QWORD *)a2 + 3);
  if ( !v8 )
    goto LABEL_19;
  if ( *((_QWORD *)a2 + 2) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x4B677844u);
    v27 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v12 + 24) = 8758LL;
LABEL_14:
      WdLogEvent5_WdLowResource(v12);
      v10 = -1073741801;
      goto LABEL_38;
    }
    v13 = *((_QWORD *)a2 + 3);
    v14 = (char *)*((_QWORD *)a2 + 2);
    if ( &v14[v13] < v14 || (unsigned __int64)&v14[v13] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(PoolWithTag, v14, v13);
LABEL_19:
    v15 = *((_QWORD *)a2 + 5);
    if ( v15 )
    {
      if ( *((_QWORD *)a2 + 4) )
      {
        v25 = (v15 + 7) & 0xFFFFFFF8;
        v4 = ExAllocatePoolWithTag((POOL_TYPE)512, v25, 0x4B677844u);
        if ( !v4 )
        {
          v12 = WdLogNewEntry5_WdLowResource(v16);
          *(_QWORD *)(v12 + 24) = 8782LL;
          goto LABEL_14;
        }
      }
    }
    v17 = *((_DWORD *)a2 + 6);
    if ( v4 )
    {
      v10 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v5, PoolWithTag, v17, v4, &v25);
      if ( v10 < 0 || (unsigned __int64)v25 < *((_QWORD *)a2 + 5) )
      {
        v21 = WdLogNewEntry5_WdEvent(v20, v19);
        *(_QWORD *)(v21 + 24) = 8809LL;
        WdLogEvent5_WdEvent(v21);
        v10 = -1073741823;
      }
      if ( v10 < 0 )
        goto LABEL_37;
      v22 = *((_QWORD *)a2 + 5);
      v23 = (char *)*((_QWORD *)a2 + 4);
      if ( (unsigned __int64)&v23[v22] > MmUserProbeAddress || &v23[v22] <= v23 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v23, v4, v22);
    }
    else
    {
      if ( *((_QWORD *)a2 + 5) )
      {
        v26 = 0;
        v18 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v5, PoolWithTag, v17, 0LL, &v26);
      }
      else
      {
        v18 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v5, PoolWithTag, v17);
      }
      v10 = v18;
    }
    if ( v10 >= 0 )
      goto LABEL_38;
LABEL_37:
    v24 = WdLogNewEntry5_WdEvent(v20, v19);
    *(_QWORD *)(v24 + 24) = v10;
    WdLogEvent5_WdEvent(v24);
    goto LABEL_38;
  }
  v9 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v9 + 24) = 8751LL;
  WdLogEvent5_WdAssertion(v9);
  v10 = -1073741811;
LABEL_38:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v10;
}
