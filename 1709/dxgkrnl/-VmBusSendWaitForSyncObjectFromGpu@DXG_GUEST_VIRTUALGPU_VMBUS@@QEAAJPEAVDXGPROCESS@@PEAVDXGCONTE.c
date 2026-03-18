/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KI@Z @ 0x1C0199520
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C01BF8A4 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        char *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        char *a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  __int64 v9; // rsi
  __int64 v12; // rdi
  unsigned int v13; // r13d
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rbx
  __int64 v17; // rax
  char *v19; // rdi
  DXGSYNCOBJECT **v20; // r14
  signed __int64 v21; // rdx
  signed __int64 v22; // r8
  signed __int64 v23; // r9
  signed __int64 v24; // r12
  int v25; // r15d
  unsigned int HostHandle; // eax
  struct _MDL *v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE v33[80]; // [rsp+38h] [rbp-50h] BYREF
  struct DXGDEVICESYNCOBJECT **v36; // [rsp+B8h] [rbp+30h]
  const unsigned __int64 *v37; // [rsp+C0h] [rbp+38h]

  v9 = a9;
  if ( a9 - 1 > 0x1FFFF )
  {
    v32 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v32 + 24) = 4408LL;
    WdLogEvent5_WdAssertion(v32);
    return 3221225485LL;
  }
  else
  {
    v12 = 8 * a9 + 40;
    v13 = v12 + 4 * a9;
    v14 = (char *)operator new(v13, 0x4B677844u, 1, (POOL_TYPE)512);
    v16 = v14;
    if ( v14 )
    {
      *(_QWORD *)v14 = 0LL;
      *((_DWORD *)v14 + 2) = 0;
      *((_DWORD *)v14 + 3) = 0;
      v19 = &v14[v12];
      *((_DWORD *)v14 + 4) = 25;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, a2);
      if ( a9 )
      {
        v20 = a5;
        v21 = v16 - (char *)a5;
        v22 = (char *)a6 - (char *)a5;
        v23 = a7 - (char *)a5;
        v24 = a4 - v19;
        v36 = (struct DXGDEVICESYNCOBJECT **)((char *)a6 - (char *)a5);
        v37 = (const unsigned __int64 *)(a7 - (char *)a5);
        do
        {
          v25 = *((_DWORD *)*v20 + 40);
          if ( (unsigned int)(v25 - 5) <= 1 )
          {
            *(_DWORD *)v19 = (*(_DWORD **)((char *)v20 + v22))[11];
            *(DXGSYNCOBJECT **)((char *)v20 + v21 + 40) = *(DXGSYNCOBJECT **)((char *)v20 + v23);
          }
          else
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(*v20, *(_DWORD *)&v19[v24], v22);
            v21 = v16 - (char *)a5;
            v22 = (signed __int64)v36;
            v23 = (signed __int64)v37;
            *(_DWORD *)v19 = HostHandle;
            if ( v25 == 3 )
            {
              *((_QWORD *)v16 + 5) = a8;
              v16[32] = 1;
            }
          }
          v19 += 4;
          ++v20;
          --v9;
        }
        while ( v9 );
        LODWORD(v9) = a9;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
      *((_DWORD *)v16 + 6) = *((_DWORD *)a3 + 7);
      *((_DWORD *)v16 + 2) = DXGPROCESS::GetHostProcess(a2);
      *((_DWORD *)v16 + 7) = v9;
      v28 = VmBusSendSyncMessageStatusReturn(*this, (struct DXGKVMB_COMMAND_BASE *)v16, v13, v27);
      v30 = v28;
      if ( v28 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v31 + 24) = v30;
        WdLogEvent5_WdError(v31);
      }
      ExFreePoolWithTag(v16, 0);
      return (unsigned int)v30;
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v17 + 24) = 4417LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
}
