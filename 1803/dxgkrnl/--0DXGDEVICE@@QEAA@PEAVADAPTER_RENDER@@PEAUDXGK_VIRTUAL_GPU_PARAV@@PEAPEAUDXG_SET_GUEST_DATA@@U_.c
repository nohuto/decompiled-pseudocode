/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C00F05E4
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00A5C30 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002F42C (-InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::DXGDEVICE(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  char v11; // al
  char v12; // cl
  DXGADAPTER *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGK_VIRTUAL_GPU_PARAV *v16; // rcx
  DXGADAPTER *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a6;
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
  *(_DWORD *)(a1 + 328) = a7;
  *(_DWORD *)(a1 + 352) = a5;
  *(_QWORD *)(a1 + 332) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  *(_QWORD *)(a1 + 400) = a1 + 392;
  *(_QWORD *)(a1 + 392) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 408;
  *(_QWORD *)(a1 + 408) = a1 + 408;
  *(_DWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 632) = 0LL;
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_DWORD *)(a1 + 640) = -1;
  *(_QWORD *)(a1 + 1688) = a8;
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_DWORD *)(a1 + 1704) = 0x1000000;
  *(_BYTE *)(a1 + 1709) ^= (*(_BYTE *)(a1 + 1709) ^ *(_BYTE *)(*(_QWORD *)(a2 + 16) + 185LL)) & 1;
  v11 = *(_BYTE *)(a1 + 1709);
  v12 = v11 ^ (*(_BYTE *)(a6 + 323) >> 2);
  *(_WORD *)(a1 + 1710) = 0;
  *(_DWORD *)(a1 + 1712) = 0;
  *(_QWORD *)(a1 + 1720) = 0LL;
  *(_BYTE *)(a1 + 1709) = v11 ^ v12 & 2;
  *(_QWORD *)(a1 + 1728) = 0LL;
  *(_QWORD *)(a1 + 1736) = 1LL;
  *(_WORD *)(a1 + 1744) = 0;
  *(_BYTE *)(a1 + 1746) = 0;
  *(_QWORD *)(a1 + 1752) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  memset((void *)(a1 + 480), 0, 0x80uLL);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  memset((void *)(a1 + 664), 0, 0x80uLL);
  memset((void *)(a1 + 792), 0, 0x240uLL);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  memset((void *)(a1 + 1368), 0, 0x140uLL);
  if ( (*(_BYTE *)(a1 + 1709) & 1) == 0 && a4 )
  {
    *(_QWORD *)(a1 + 344) = *a4;
    *a4 = 0LL;
  }
  *(_QWORD *)(a1 + 656) = a1 + 648;
  *(_QWORD *)(a1 + 648) = a1 + 648;
  v13 = *(DXGADAPTER **)(a1 + 1688);
  if ( v13 )
    goto LABEL_21;
  v18 = *(DXGADAPTER **)(a2 + 16);
  v13 = 0LL;
  if ( *((_QWORD *)v18 + 307) )
  {
    *(_QWORD *)(a1 + 1688) = v18;
    v13 = v18;
  }
  if ( v13 )
  {
LABEL_21:
    if ( !*((_QWORD *)v13 + 307) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v19 + 24) = 623LL;
      WdLogEvent5_WdAssertion(v19);
      v13 = *(DXGADAPTER **)(a1 + 1688);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v13) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v20 + 24) = 624LL;
      WdLogEvent5_WdAssertion(v20);
    }
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1688) + 24LL));
    *(_DWORD *)(a1 + 1696) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1688) + 2456LL) + 80LL);
  }
  *(_BYTE *)(a1 + 1708) = *(_BYTE *)(a6 + 322) != 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2404LL) )
  {
    v15 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 1711) = 1;
    *(_BYTE *)(v15 + 289) = 1;
  }
  v16 = *(DXGK_VIRTUAL_GPU_PARAV **)(a1 + 80);
  if ( v16 )
    DXGK_VIRTUAL_GPU_PARAV::InsertDxgDevice(v16, (struct _LIST_ENTRY *)(a1 + 88));
  return a1;
}
