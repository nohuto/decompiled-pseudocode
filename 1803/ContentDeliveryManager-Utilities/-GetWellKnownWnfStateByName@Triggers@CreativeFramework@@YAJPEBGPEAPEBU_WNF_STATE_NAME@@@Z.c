/*
 * XREFs of ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800767E8
 * Callers:
 *     ?PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z @ 0x180012000 (-PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z.c)
 *     ?GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800579D0 (-GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006979C (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x180076A48 (--1-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??0?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@1@@Z @ 0x180076B2C (--0-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x180076C7C (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180076CB4 (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180076DFC (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::GetWellKnownWnfStateByName(
        LPCWCH lpString1,
        unsigned __int16 *a2,
        const struct _WNF_STATE_NAME **a3)
{
  unsigned int v5; // edi
  RTL_SRWLOCK *v6; // rbx
  DWORD LastError; // ebx
  wchar_t **v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  RTL_SRWLOCK *v13; // rax
  RTL_SRWLOCK *v14; // rbx
  __int64 *v15; // rsi
  RTL_SRWLOCK *v16; // r14
  bool v17; // zf
  RTL_SRWLOCK v18; // rsi
  RTL_SRWLOCK *Ptr; // rbx
  __int64 v20; // rax
  _QWORD v22[2]; // [rsp+38h] [rbp-38h] BYREF
  LPCWCH v23; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  char v25; // [rsp+58h] [rbp-18h] BYREF
  RTL_SRWLOCK *v26; // [rsp+B8h] [rbp+48h] BYREF
  RTL_SRWLOCK *v27; // [rsp+C0h] [rbp+50h]

  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  AcquireSRWLockShared(&stru_18017C120);
  v6 = &stru_18017C120;
  v26 = &stru_18017C120;
  if ( !qword_18017C118 )
  {
    LastError = GetLastError();
    ReleaseSRWLockShared(&stru_18017C120);
    SetLastError(LastError);
    v6 = 0LL;
    v26 = 0LL;
    AcquireSRWLockExclusive(&stru_18017C120);
    v27 = &stru_18017C120;
    if ( qword_18017C118 )
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v22);
      ReleaseSRWLockExclusive(&stru_18017C120);
      goto LABEL_11;
    }
    v8 = off_1800E44B8;
    v9 = 1071LL;
    do
    {
      v10 = (__int64)*(v8 - 1);
      if ( v10 )
      {
        v23 = *v8;
        v24 = v10;
        v11 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
                &qword_18017C110,
                &v23);
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          (unsigned int)&qword_18017C110,
          (unsigned int)&v25,
          v12,
          v11 + 32,
          v11);
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
    ReleaseSRWLockExclusive(&stru_18017C120);
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v22);
  if ( v6 )
    ReleaseSRWLockShared(v6);
LABEL_11:
  v13 = (RTL_SRWLOCK *)v22[0];
  v14 = (RTL_SRWLOCK *)v22[0];
  v15 = *(__int64 **)(v22[0] + 8LL);
  if ( *((_BYTE *)v15 + 25) )
    goto LABEL_19;
  v16 = (RTL_SRWLOCK *)v22[0];
  do
  {
    if ( CompareStringOrdinal((LPCWCH)v15[4], -1, lpString1, -1, 1) == 1 )
    {
      v15 = (__int64 *)v15[2];
    }
    else
    {
      v16 = (RTL_SRWLOCK *)v15;
      v15 = (__int64 *)*v15;
    }
  }
  while ( !*((_BYTE *)v15 + 25) );
  v13 = (RTL_SRWLOCK *)v22[0];
  if ( v16 == (RTL_SRWLOCK *)v22[0]
    || (v17 = CompareStringOrdinal(lpString1, -1, (LPCWCH)v16[4].Ptr, -1, 1) == 1, v13 = (RTL_SRWLOCK *)v22[0], v17) )
  {
LABEL_19:
    v16 = v13;
  }
  if ( v16 == v14 )
  {
    v5 = -2147024809;
  }
  else
  {
    v18.Ptr = v13[1].Ptr;
    Ptr = v13;
    if ( !*((_BYTE *)v18.Ptr + 25) )
    {
      do
      {
        if ( CompareStringOrdinal(*((LPCWCH *)v18.Ptr + 4), -1, lpString1, -1, 1) == 1 )
        {
          v18.Ptr = (PVOID)*((_QWORD *)v18.Ptr + 2);
        }
        else
        {
          Ptr = (RTL_SRWLOCK *)v18.Ptr;
          v18.Ptr = *(PVOID *)v18.Ptr;
        }
      }
      while ( !*((_BYTE *)v18.Ptr + 25) );
      v13 = (RTL_SRWLOCK *)v22[0];
    }
    if ( Ptr == v13 || CompareStringOrdinal(lpString1, -1, (LPCWCH)Ptr[4].Ptr, -1, 1) == 1 )
    {
      v23 = lpString1;
      v24 = 0LL;
      v20 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
              v22,
              &v23);
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (unsigned int)v22,
        (unsigned int)&v26,
        (_DWORD)Ptr,
        v20 + 32,
        v20);
      Ptr = v26;
    }
    *(RTL_SRWLOCK *)a2 = Ptr[5];
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::~_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v22);
  return v5;
}
