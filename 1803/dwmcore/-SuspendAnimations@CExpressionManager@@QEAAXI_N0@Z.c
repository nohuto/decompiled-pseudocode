/*
 * XREFs of ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18017EFE4
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x180149FD4 (-Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 * Callees:
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x180023D98 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800CD160 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CExpressionManager::SuspendAnimations(__int64 **this, int a2, __int64 a3, char a4)
{
  unsigned int v5; // ecx
  __int64 v6; // rsi
  unsigned int v7; // r14d
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // r13d
  __int64 *v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 **v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // edi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // rax
  _QWORD v30[2]; // [rsp+30h] [rbp-10h] BYREF
  const void *retaddr; // [rsp+78h] [rbp+38h]
  int v32; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+58h]

  v32 = a2;
  if ( a4 )
  {
    if ( (_BYTE)a3 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        this + 51,
        (__int64)v30,
        a3,
        &v32);
      return;
    }
    goto LABEL_26;
  }
  if ( !(_BYTE)a3 )
  {
LABEL_26:
    v14 = *((_DWORD *)this + 82);
    if ( !v14 )
      goto LABEL_56;
    v15 = v33;
    v16 = (__int64 *)(this + 38);
    v17 = 0;
    v18 = 0LL;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + *v16);
      v30[0] = v19;
      if ( v19 )
      {
        if ( *(_DWORD *)(v19 + 168) == a2 )
          break;
      }
LABEL_41:
      ++v17;
      v18 += 8LL;
      if ( v17 >= v14 )
      {
        v25 = 0LL;
        v26 = v14 - 1;
        if ( v14 != 1 )
        {
          do
          {
            v27 = *v16;
            while ( 1 )
            {
              v28 = *(_QWORD *)(v27 + 8 * v25);
              if ( !v28 || (unsigned int)v25 >= (unsigned int)v26 )
                break;
              v25 = (unsigned int)(v25 + 1);
            }
            while ( 1 )
            {
              v29 = *(_QWORD *)(v27 + 8 * v26);
              if ( v29 || (unsigned int)v25 >= (unsigned int)v26 )
                break;
              v26 = (unsigned int)(v26 - 1);
            }
            if ( !v28 )
            {
              if ( v29 )
              {
                *(_QWORD *)(v27 + 8 * v25) = v29;
                *(_QWORD *)(*v16 + 8 * v26) = 0LL;
              }
            }
          }
          while ( (unsigned int)v25 < (unsigned int)v26 );
        }
        *((_DWORD *)this + 82) = v26;
        DynArrayImpl<1>::ShrinkToSize((__int64)v16, 8u);
        goto LABEL_56;
      }
    }
    v20 = &this[4 * *((unsigned int *)this + 43)];
    v21 = *((unsigned int *)v20 + 50);
    v22 = v21 + 1;
    if ( (int)v21 + 1 >= (unsigned int)v21 )
      v15 = v21 + 1;
    v23 = v22 < (unsigned int)v21 ? 0x80070216 : 0;
    if ( v22 < (unsigned int)v21 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xB5u);
    }
    else
    {
      if ( v15 <= *((_DWORD *)v20 + 49) )
      {
        v20[22][v21] = v30[0];
        *((_DWORD *)v20 + 50) = v15;
LABEL_39:
        if ( v23 < 0 )
          ModuleFailFastForHRESULT(v23, retaddr);
        *(_QWORD *)(v18 + *v16) = 0LL;
        goto LABEL_41;
      }
      v24 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v20 + 22), 8u, (__int64)v20, v30);
      v23 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
    }
    a2 = v32;
    goto LABEL_39;
  }
  v5 = *((_DWORD *)this + 43);
  v6 = 0LL;
  if ( LODWORD(this[4 * v5 + 25]) )
  {
    v7 = v33;
    do
    {
      v8 = (_DWORD *)this[4 * v5 + 22][v6];
      v30[0] = v8;
      if ( v8 && v8[42] == a2 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 54LL)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v30[0] + 48LL))(v30[0], 84LL)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v30[0] + 48LL))(v30[0], 99LL) )
        {
          v9 = this + 38;
          v10 = *((unsigned int *)this + 82);
          v11 = v10 + 1;
          if ( (int)v10 + 1 >= (unsigned int)v10 )
            v7 = v10 + 1;
          v12 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
          if ( v11 < (unsigned int)v10 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
          }
          else if ( v7 > *((_DWORD *)this + 81) )
          {
            v13 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(this + 38), 8u, (__int64)v9, v30);
            v12 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*v9 + 8 * v10) = v30[0];
            *((_DWORD *)this + 82) = v7;
          }
          if ( v12 < 0 )
            ModuleFailFastForHRESULT(v12, retaddr);
          this[4 * *((unsigned int *)this + 43) + 22][v6] = 0LL;
        }
        a2 = v32;
      }
      v6 = (unsigned int)(v6 + 1);
      v5 = *((_DWORD *)this + 43);
    }
    while ( (unsigned int)v6 < LODWORD(this[4 * v5 + 25]) );
  }
LABEL_56:
  *((_BYTE *)this + 424) |= 8u;
}
