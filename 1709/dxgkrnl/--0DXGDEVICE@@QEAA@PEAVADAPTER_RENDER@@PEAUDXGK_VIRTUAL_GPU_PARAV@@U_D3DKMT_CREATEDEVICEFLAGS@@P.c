/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C009BEC4
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00830DC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E80 (-InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::DXGDEVICE(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rax
  DXGK_VIRTUAL_GPU_PARAV *v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 128) = 56;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 152) = -1;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 176) = 41;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 200) = 55;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 224) = -1;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 248) = 57;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 272) = 58;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 296) = -1;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 320) = -1;
  *(_DWORD *)(a1 + 328) = a6;
  *(_QWORD *)(a1 + 332) = 0LL;
  *(_DWORD *)(a1 + 340) = a4;
  *(_QWORD *)(a1 + 352) = a1 + 344;
  *(_QWORD *)(a1 + 344) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  *(_QWORD *)(a1 + 400) = a1 + 392;
  *(_QWORD *)(a1 + 392) = a1 + 392;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_DWORD *)(a1 + 624) = -1;
  *(_QWORD *)(a1 + 1672) = a7;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_DWORD *)(a1 + 1688) = 0x1000000;
  *(_WORD *)(a1 + 1693) = 0;
  *(_BYTE *)(a1 + 1695) = 0;
  *(_DWORD *)(a1 + 1696) = 0;
  *(_QWORD *)(a1 + 1704) = 0LL;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_QWORD *)(a1 + 1720) = 1LL;
  *(_DWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1736) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  memset((void *)(a1 + 464), 0, 0x80uLL);
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  memset((void *)(a1 + 648), 0, 0x80uLL);
  memset((void *)(a1 + 776), 0, 0x240uLL);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  memset((void *)(a1 + 1352), 0, 0x140uLL);
  *(_QWORD *)(a1 + 640) = a1 + 632;
  *(_QWORD *)(a1 + 632) = a1 + 632;
  if ( !*(_QWORD *)(a1 + 1672) )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v16 = *(_QWORD *)(a1 + 1672);
    if ( *(_QWORD *)(v9 + 2304) )
      v16 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 1672) = v16;
  }
  v10 = *(_QWORD *)(a1 + 1672);
  if ( v10 )
  {
    if ( !*(_QWORD *)(v10 + 2304) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v17 + 24) = 610LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 1672)) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v18 + 24) = 611LL;
      WdLogEvent5_WdAssertion(v18);
    }
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1672) + 24LL));
    *(_DWORD *)(a1 + 1680) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1672) + 2304LL) + 80LL);
  }
  if ( !a5 || (v12 = 1, !*(_BYTE *)(a5 + 306)) )
    v12 = 0;
  *(_BYTE *)(a1 + 1692) = v12;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2260LL) )
  {
    v13 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 1695) = 1;
    *(_BYTE *)(v13 + 272) = 1;
  }
  v14 = *(DXGK_VIRTUAL_GPU_PARAV **)(a1 + 80);
  if ( v14 )
    DXGK_VIRTUAL_GPU_PARAV::InsertDxgDevice(v14, (struct _LIST_ENTRY *)(a1 + 88));
  return a1;
}
