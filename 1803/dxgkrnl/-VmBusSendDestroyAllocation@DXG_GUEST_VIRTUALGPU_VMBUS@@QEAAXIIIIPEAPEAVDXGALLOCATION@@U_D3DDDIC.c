/*
 * XREFs of ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0182B40
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF2DC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C016A6CC (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C016A808 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a7)
{
  __int64 v11; // rax
  unsigned int v12; // esi
  char *v13; // rax
  __int64 v14; // rcx
  struct DXGKVMB_COMMAND_BASE *v15; // rbx
  __int64 v16; // rax
  _DWORD *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  struct _MDL *v21; // [rsp+28h] [rbp-20h]

  if ( a5 <= 0x8000 )
  {
    v12 = 48;
    if ( a5 )
      v12 = 4 * a5 + 44;
    v13 = (char *)operator new(v12, 0x4B677844u, 1, (POOL_TYPE)512);
    v15 = (struct DXGKVMB_COMMAND_BASE *)v13;
    if ( v13 )
    {
      *(_QWORD *)v13 = 0LL;
      *((_DWORD *)v13 + 3) = 0;
      *((_DWORD *)v13 + 4) = 5;
      *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v13 + 9) = a7;
      *((_DWORD *)v13 + 6) = a3;
      *((_DWORD *)v13 + 2) = a2;
      *((_DWORD *)v13 + 7) = a4;
      *((_DWORD *)v13 + 8) = a5;
      if ( a5 )
      {
        v18 = v13 + 40;
        v19 = a5;
        do
        {
          v20 = (__int64)*a6++;
          *v18++ = *(_DWORD *)(v20 + 96);
          --v19;
        }
        while ( v19 );
      }
      VmBusSendSyncMessage(*this, v15, v12, 0LL, 0LL, v21);
      operator delete[](v15);
    }
    else
    {
      v16 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v16 + 24) = 5687LL;
      WdLogEvent5_WdLowResource(v16);
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 5679LL;
    WdLogEvent5_WdAssertion(v11);
  }
}
