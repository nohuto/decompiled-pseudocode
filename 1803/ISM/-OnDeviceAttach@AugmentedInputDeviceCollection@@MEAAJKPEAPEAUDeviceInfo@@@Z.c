/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18006CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEAKAEAUAugmentedInputCacheState@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x18006D454 (--$_Buynode@AEAKAEAUAugmentedInputCacheState@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAugmentedInp.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAugmentedInputCacheState@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@@Z @ 0x18006D4A4 (--$_Insert_nohint@AEAU-$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
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
  struct DeviceInfo *v10; // r14
  unsigned int *v11; // r9
  int DeviceId; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 *v15; // r9
  __int16 v16; // r10
  int v17; // ebx
  __int64 *v18; // rdx
  __int64 *v19; // rax
  __int64 *v20; // rcx
  unsigned int v21; // r8d
  void *Block; // rax
  int v23; // r8d
  __int64 *v24; // rdx
  __int64 *v25; // rax
  __int64 *v26; // rcx
  unsigned int v27; // r8d
  __int64 *v28; // r9
  int v29; // ecx
  __int64 result; // rax
  unsigned int v31[4]; // [rsp+38h] [rbp-29h] BYREF
  struct RIMDevice *v32; // [rsp+48h] [rbp-19h] BYREF
  int v33; // [rsp+50h] [rbp-11h] BYREF
  __int16 v34; // [rsp+54h] [rbp-Dh]
  __int16 v35; // [rsp+56h] [rbp-Bh]
  __int16 v36; // [rsp+58h] [rbp-9h]
  __int16 v37; // [rsp+5Ah] [rbp-7h]
  int v38; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v39[8]; // [rsp+70h] [rbp+Fh] BYREF
  __int16 v40; // [rsp+78h] [rbp+17h]
  __int16 v41; // [rsp+7Ah] [rbp+19h]
  __int16 v42; // [rsp+7Ch] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int16 v44; // [rsp+E0h] [rbp+7Fh]

  v4 = 0;
  v44 = 0;
  v5 = 0;
  v8 = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( v8 < 0 )
  {
    v9 = 97LL;
    goto LABEL_41;
  }
  v10 = *a3;
  v32 = 0LL;
  memset_0(v39, 0, 0x28uLL);
  DeviceId = RIMDeviceCollection::FindDeviceId((RIMDeviceCollection *)this, a2, &v32, v11);
  v8 = DeviceId;
  if ( DeviceId < 0 )
  {
    v13 = (unsigned int)DeviceId;
    v14 = 125LL;
    goto LABEL_5;
  }
  v17 = RIMGetDeviceProperties(this[10], *((_QWORD *)v32 + 2), v39);
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    v8 = v17 | 0x10000000;
    if ( v8 >= 0 )
      goto LABEL_6;
    v13 = (unsigned int)v8;
    v14 = 127LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)v13);
LABEL_6:
    v16 = 0;
    goto LABEL_11;
  }
  v16 = v42;
  v8 = 0;
  v4 = v40;
  v5 = v41;
  v44 = v42;
LABEL_11:
  if ( v8 >= 0 )
  {
    v31[0] = a2;
    _InterlockedExchange(
      &MPCInputInfoHelper::m_nextSpectrumId,
      (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
    v18 = this[345];
    v19 = v18;
    v20 = (__int64 *)v18[1];
    if ( *((_BYTE *)v20 + 25) )
      goto LABEL_22;
    do
    {
      v21 = *((_DWORD *)v20 + 7);
      v15 = v20;
      if ( v21 >= a2 )
        v20 = (__int64 *)*v20;
      else
        v20 = (__int64 *)v20[2];
      if ( v21 >= a2 )
        v19 = v15;
    }
    while ( !*((_BYTE *)v20 + 25) );
    if ( v19 == v18 || a2 < *((_DWORD *)v19 + 7) )
LABEL_22:
      v19 = this[345];
    if ( v19 == v18 )
    {
      v33 = MPCInputInfoHelper::m_nextSpectrumId;
      v34 = 0;
      v35 = v4;
      v36 = v5;
      v37 = v16;
      Block = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Buynode<unsigned long &,AugmentedInputCacheState &>(
                        this + 345,
                        v31,
                        &v33,
                        v15);
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Insert_nohint<std::pair<unsigned long const,AugmentedInputCacheState> &,std::_Tree_node<std::pair<unsigned long const,AugmentedInputCacheState>,void *> *>(
        (_DWORD)this + 2760,
        (int)&v38,
        v23,
        (_DWORD)Block + 28,
        Block);
      v24 = this[345];
      v25 = v24;
      v26 = (__int64 *)v24[1];
      if ( *((_BYTE *)v26 + 25) )
        goto LABEL_33;
      do
      {
        v27 = *((_DWORD *)v26 + 7);
        v28 = v26;
        if ( v27 >= a2 )
          v26 = (__int64 *)*v26;
        else
          v26 = (__int64 *)v26[2];
        if ( v27 >= a2 )
          v25 = v28;
      }
      while ( !*((_BYTE *)v26 + 25) );
      if ( v25 == v24 || a2 < *((_DWORD *)v25 + 7) )
LABEL_33:
        v25 = this[345];
      if ( v25 == v24 )
        v29 = 0;
      else
        v29 = *((_DWORD *)v25 + 8);
      if ( v25 != v24 )
      {
        *((_WORD *)v10 + 32) = v44;
        result = 0LL;
        *((_DWORD *)v10 + 14) = v29;
        *((_WORD *)v10 + 30) = v4;
        *((_WORD *)v10 + 31) = v5;
        *((_WORD *)v10 + 33) = 0;
        return result;
      }
      v8 = -2147467259;
      v9 = 103LL;
    }
    else
    {
      v8 = -2147467259;
      v9 = 102LL;
    }
  }
  else
  {
    v9 = 101LL;
  }
LABEL_41:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
