/*
 * XREFs of ?VmBusSendDestroyAllocation@DXGADAPTER@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C002FD6C
 * Callers:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::VmBusSendDestroyAllocation(
        struct VMBCHANNEL__ **this,
        unsigned int a2,
        UINT a3,
        UINT a4,
        UINT a5,
        struct DXGALLOCATION **a6,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a7)
{
  unsigned int v11; // eax
  unsigned int v12; // r15d
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS *v13; // rax
  __int64 v14; // rcx
  struct DXGKVMB_COMMAND *v15; // rbx
  __int64 v16; // rax
  UINT *v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  struct _MDL *v21; // [rsp+28h] [rbp-20h]

  if ( a5 )
    v11 = 4 * a5 - 4;
  else
    v11 = 0;
  v12 = v11 + 40;
  v13 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)operator new(v11 + 40, a2, 1, (enum _POOL_TYPE)512);
  v15 = (struct DXGKVMB_COMMAND *)v13;
  if ( v13 )
  {
    v13[2].Value = 7;
    v13[7].0 = a7.0;
    v13[4].Value = a3;
    v13[3].Value = a2;
    v13[5].Value = a4;
    v13[6].Value = a5;
    if ( a5 )
    {
      v18 = (UINT *)&v13[8];
      v19 = a5;
      do
      {
        v20 = (__int64)*a6++;
        *v18++ = *(_DWORD *)(v20 + 96);
        --v19;
      }
      while ( v19 );
    }
    VmBusSendSyncMessage(this[484], v15, v12, 0LL, 0LL, v21);
    operator delete[](v15);
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v16 + 24) = 3341LL;
    WdLogEvent5_WdLowResource(v16);
  }
}
