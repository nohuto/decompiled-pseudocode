/*
 * XREFs of ??0DWMHardwareCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x18002733C
 * Callers:
 *     ?Create@DWMHardwareCursor@@SAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180027650 (-Create@DWMHardwareCursor@@SAJPEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsof.c)
 * Callees:
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x1800264C4 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputT.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@XZ @ 0x180028CF4 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoCompar.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMHardwareCursor::DWMHardwareCursor(__int64 a1, __int64 a2, _QWORD *a3, int a4, _OWORD *a5)
{
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+40h] [rbp-38h] BYREF

  v12[1] = -2LL;
  v13[0] = *a5;
  v12[0] = *a3;
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
  DWMCursor::DWMCursor(a1 + 8, a2, v12, a4, v13);
  *(_QWORD *)a1 = &DWMHardwareCursor::`vftable';
  *(_QWORD *)(a1 + 8) = &DWMHardwareCursor::`vftable'{for `ICursor3D'};
  *(_QWORD *)(a1 + 16) = &DWMHardwareCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *(_QWORD *)(a1 + 24) = &DWMHardwareCursor::`vftable'{for `RefCountedObject'};
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 400) = std::_Tree_comp_alloc<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Buyheadnode();
  *(_DWORD *)(a1 + 420) = 4;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_WORD *)(a1 + 360) = 1;
  *(_QWORD *)(a1 + 368) = 0x3FF0000000000000LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  v9 = *(volatile signed __int32 **)(a1 + 464);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  *(_BYTE *)(a1 + 392) = 1;
  *(_DWORD *)(a1 + 416) = 32514;
  *(_DWORD *)(a1 + 396) = 1;
  v10 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return a1;
}
