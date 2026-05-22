/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$_Buynode@AEAKAEAUAugmentedInputCacheState@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x18008C654 (--$_Buynode@AEAKAEAUAugmentedInputCacheState@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAugmentedInp.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAugmentedInputCacheState@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@@Z @ 0x18008C6B0 (--$_Insert_nohint@AEAU-$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C9F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceAttach(
        __int64 **this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  __int16 v4; // r12
  __int16 v5; // r13
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // r9
  int DeviceId; // eax
  __int16 v12; // r8
  int v13; // ebx
  __int64 *v14; // rax
  __int64 *v15; // rdx
  __int64 *v16; // rcx
  void *Block; // rax
  int v18; // r8d
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rdx
  unsigned int v23; // [rsp+38h] [rbp-29h] BYREF
  struct RIMDevice *v24; // [rsp+40h] [rbp-21h] BYREF
  int v25; // [rsp+48h] [rbp-19h] BYREF
  __int16 v26; // [rsp+4Ch] [rbp-15h]
  __int16 v27; // [rsp+4Eh] [rbp-13h]
  __int16 v28; // [rsp+50h] [rbp-11h]
  __int16 v29; // [rsp+52h] [rbp-Fh]
  int v30; // [rsp+58h] [rbp-9h] BYREF
  _WORD v31[24]; // [rsp+68h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  unsigned __int16 v33; // [rsp+E0h] [rbp+7Fh]

  v4 = 0;
  v33 = 0;
  v5 = 0;
  v8 = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( v8 < 0 )
  {
    v9 = 97LL;
    goto LABEL_34;
  }
  v24 = 0LL;
  memset(v31, 0, 0x28uLL);
  DeviceId = RIMDeviceCollection::FindDeviceId((RIMDeviceCollection *)this, a2, &v24, v10);
  v8 = DeviceId;
  if ( DeviceId < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
LABEL_5:
    v12 = 0;
    goto LABEL_10;
  }
  v13 = RIMGetDeviceProperties(this[10], *((_QWORD *)v24 + 2), v31);
  if ( (v13 & 0xC0000000) == 0xC0000000 )
  {
    v8 = v13 | 0x10000000;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
        (const char *)(unsigned int)v8);
    goto LABEL_5;
  }
  v12 = v31[12];
  v8 = 0;
  v4 = v31[10];
  v5 = v31[11];
  v33 = v31[12];
LABEL_10:
  if ( v8 >= 0 )
  {
    v23 = a2;
    _InterlockedExchange(
      &MPCInputInfoHelper::m_nextSpectrumId,
      (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
    v14 = this[345];
    v15 = v14;
    v16 = (__int64 *)v14[1];
    while ( !*((_BYTE *)v16 + 25) )
    {
      if ( *((_DWORD *)v16 + 7) >= a2 )
      {
        v15 = v16;
        v16 = (__int64 *)*v16;
      }
      else
      {
        v16 = (__int64 *)v16[2];
      }
    }
    if ( v15 == v14 || a2 < *((_DWORD *)v15 + 7) )
      v15 = this[345];
    if ( v15 == v14 )
    {
      v29 = v12;
      v25 = MPCInputInfoHelper::m_nextSpectrumId;
      v26 = 0;
      v27 = v4;
      v28 = v5;
      Block = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Buynode<unsigned long &,AugmentedInputCacheState &>(
                        this + 345,
                        &v23,
                        &v25);
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Insert_nohint<std::pair<unsigned long const,AugmentedInputCacheState> &,std::_Tree_node<std::pair<unsigned long const,AugmentedInputCacheState>,void *> *>(
        (_DWORD)this + 2760,
        (int)&v30,
        v18,
        (_DWORD)Block + 28,
        Block);
      v19 = this[345];
      v20 = v19;
      v21 = (__int64 *)v19[1];
      while ( !*((_BYTE *)v21 + 25) )
      {
        if ( *((_DWORD *)v21 + 7) >= a2 )
        {
          v20 = v21;
          v21 = (__int64 *)*v21;
        }
        else
        {
          v21 = (__int64 *)v21[2];
        }
      }
      if ( v20 == v19 || a2 < *((_DWORD *)v20 + 7) )
        v20 = this[345];
      if ( v20 != v19 )
      {
        *((_DWORD *)*a3 + 15) = *((_DWORD *)v20 + 8);
        *((_WORD *)*a3 + 32) = v4;
        *((_WORD *)*a3 + 33) = v5;
        *((_DWORD *)*a3 + 17) = v33;
        return 0LL;
      }
      v9 = 101LL;
    }
    else
    {
      v9 = 100LL;
    }
    v8 = -2147467259;
  }
  else
  {
    v9 = 99LL;
  }
LABEL_34:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
