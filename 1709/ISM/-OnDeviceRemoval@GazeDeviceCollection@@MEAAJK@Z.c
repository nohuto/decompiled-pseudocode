/*
 * XREFs of ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x18009B9B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 *     ??_GGazeHidParser@@QEAAPEAXI@Z @ 0x18009B910 (--_GGazeHidParser@@QEAAPEAXI@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CE20 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall GazeDeviceCollection::OnDeviceRemoval(GazeDeviceCollection *this, unsigned int a2)
{
  _QWORD *v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // r8
  __int64 *v7; // r9
  GazeHidParser *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_QWORD *)((char *)this + 2760);
  v5 = (__int64 *)*v4;
  v6 = (__int64 *)*v4;
  v7 = *(__int64 **)(*v4 + 8LL);
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_DWORD *)v7 + 8) >= a2 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v6 == v5 || a2 < *((_DWORD *)v6 + 8) )
    v6 = (__int64 *)*v4;
  if ( v6 != v5 )
  {
    v8 = (GazeHidParser *)v6[5];
    std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
      v4,
      &v13,
      v6);
    if ( v8 )
      GazeHidParser::`scalar deleting destructor'(v8);
  }
  v9 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  v11 = v9;
  if ( v9 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 156, v9);
  return v11;
}
