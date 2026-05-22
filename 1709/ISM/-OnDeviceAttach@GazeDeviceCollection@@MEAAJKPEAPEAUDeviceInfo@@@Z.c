/*
 * XREFs of ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??_GGazeHidParser@@QEAAPEAXI@Z @ 0x18009B910 (--_GGazeHidParser@@QEAAPEAXI@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x18009BD84 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 *     ?UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z @ 0x18009BFD0 (-UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ??$_Buynode@AEAKAEAPEAVGazeHidParser@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KPEAVGazeHidParser@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@1@AEAKAEAPEAVGazeHidParser@@@Z @ 0x18009C264 (--$_Buynode@AEAKAEAPEAVGazeHidParser@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KPEAVGazeHidParser@@U-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KPEAVGazeHidParser@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKPEAVGazeHidParser@@@1@PEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@1@@Z @ 0x18009C2B0 (--$_Insert_nohint@AEAU-$pair@$$CBKPEAVGazeHidParser@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKPEAVGaz.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C9F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800C806C (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@XZ @ 0x1800C8B00 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::OnDeviceAttach(
        GazeDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceId; // eax
  __int64 v7; // rcx
  unsigned int *v8; // r9
  unsigned int v9; // ebx
  int v10; // r9d
  struct _HIDP_PREPARSED_DATA *v11; // rsi
  struct RIMDevice *v12; // rdi
  int updated; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // r9d
  void *v17; // rax
  int v18; // r8d
  int v20[2]; // [rsp+40h] [rbp-21h] BYREF
  _OWORD v21[4]; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+6Fh] BYREF
  struct RIMDevice *v23; // [rsp+E0h] [rbp+7Fh] BYREF

  v22 = a2;
  v23 = 0LL;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  v9 = DeviceId;
  if ( DeviceId >= 0 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v23, v8);
    v9 = DeviceId;
    if ( DeviceId < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v9;
      v10 = 112;
      goto LABEL_4;
    }
    v11 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)v23 + 6);
    v12 = (struct RIMDevice *)operator new(0x58uLL);
    v23 = v12;
    memset(v21, 0, sizeof(v21));
    *(_OWORD *)v12 = v21[0];
    *((_OWORD *)v12 + 1) = v21[1];
    *((_OWORD *)v12 + 2) = v21[2];
    *((_OWORD *)v12 + 3) = v21[3];
    *((_QWORD *)v12 + 8) = 0LL;
    *(_QWORD *)v20 = (char *)v12 + 72;
    *((_QWORD *)v12 + 9) = 0LL;
    *((_QWORD *)v12 + 10) = 0LL;
    *((_QWORD *)v12 + 9) = std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buyheadnode();
    v23 = v12;
    updated = GazeHidParser::Initialize((PHIDP_CAPS)v12, v11);
    v9 = updated;
    if ( updated >= 0 )
    {
      v17 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,GazeHidParser *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,GazeHidParser *>>,0>>::_Buynode<unsigned long &,GazeHidParser * &>(
                      (char *)this + 2760,
                      &v22,
                      &v23);
      std::_Tree<std::_Tmap_traits<unsigned long,GazeHidParser *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,GazeHidParser *>>,0>>::_Insert_nohint<std::pair<unsigned long const,GazeHidParser *> &,std::_Tree_node<std::pair<unsigned long const,GazeHidParser *>,void *> *>(
        (_DWORD)this + 2760,
        (int)v20,
        v18,
        (_DWORD)v17 + 32,
        v17);
      updated = GazeDeviceCollection::UpdateCalibrationInfo(this, *a3);
      v9 = updated;
      if ( updated >= 0 )
      {
        updated = GazeDeviceCollection::SetTrackingEnabled(this, v22, 1);
        v9 = updated;
        if ( updated >= 0 )
          return v9;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_18;
        v16 = 128;
      }
      else
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_18;
        v16 = 123;
      }
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_18;
      v16 = 119;
    }
    McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, v16, updated);
LABEL_18:
    if ( v23 )
      GazeHidParser::`scalar deleting destructor'(v23, v14);
    return v9;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 107;
LABEL_4:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v10, DeviceId);
  }
  return v9;
}
