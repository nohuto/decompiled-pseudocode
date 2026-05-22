/*
 * XREFs of ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B2220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000A498 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 *     ??$_Insert@AEAU?$pair@$$CBK_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBK_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@1@@Z @ 0x18000A98C (--$_Insert@AEAU-$pair@$$CBK_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Buynode@AEAKUPointerCache@DragNDropProcessor@@@?$_List_buy@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x1800659EC (--$_Buynode@AEAKUPointerCache@DragNDropProcessor@@@-$_List_buy@U-$pair@$$CBKUPointerCache@DragND.c)
 *     ?DragInProgressLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B174C (-DragInProgressLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 *     ?DragEndedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B18BC (-DragEndedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z.c)
 *     ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x1800B2D08 (--$emplace@AEAKH@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragNDropProcessorLegacy::OnInput(
        DragNDropProcessorLegacy *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  struct InputInfo *v4; // rsi
  DragNDropProcessorLegacy *v5; // r12
  __int64 v6; // rax
  char *v7; // r15
  __int64 v8; // r13
  unsigned int v9; // r14d
  __int64 v10; // rcx
  struct tagPOINT v11; // rsi
  struct InputInfo *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r14
  struct tagPOINT v18; // r12
  unsigned int v19; // esi
  __int64 v20; // rcx
  unsigned __int64 i; // rdx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  _QWORD **v27; // rdx
  _QWORD **v28; // r10
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx
  _QWORD *v35; // r8
  __int64 v36; // rcx
  unsigned __int64 j; // rdx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  _QWORD **v43; // rdx
  _QWORD **v44; // r10
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  _QWORD *v48; // rcx
  _QWORD *v49; // rcx
  _QWORD *v50; // rbx
  _QWORD *v51; // r8
  int v53; // [rsp+28h] [rbp-E0h]
  int v54; // [rsp+28h] [rbp-E0h]
  unsigned int v55[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct tagPOINT v56; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  struct tagPOINT v58; // [rsp+80h] [rbp-88h] BYREF
  char v59[8]; // [rsp+88h] [rbp-80h] BYREF
  int v60; // [rsp+90h] [rbp-78h]
  HMONITOR v61; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v62; // [rsp+A0h] [rbp-68h] BYREF
  char *v63; // [rsp+A8h] [rbp-60h]
  __int128 v64; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-48h]
  __int64 *v66; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-30h] BYREF
  char v69[16]; // [rsp+E0h] [rbp-28h] BYREF
  char v70[88]; // [rsp+F0h] [rbp-18h] BYREF
  struct InputContext *v73; // [rsp+168h] [rbp+60h]

  v73 = a3;
  v65 = -2LL;
  v4 = a2;
  v5 = this;
  v6 = 0LL;
  v60 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v7 = (char *)this + 80;
    v63 = (char *)this + 80;
    while ( 1 )
    {
      v8 = 32 * v6;
      v9 = *((_DWORD *)v4 + 8 * v6 + 14);
      v55[1] = v9;
      v55[0] = v9;
      v58.x = *((_DWORD *)v4 + 8 * v6 + 16);
      v58.y = *((_DWORD *)v4 + 8 * v6 + 17);
      v61 = 0LL;
      v10 = *((_QWORD *)a3 + 1);
      if ( v10 )
        (*(void (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v10 + 24LL))(v10, &v61);
      v11 = v58;
      v12 = a2;
      if ( (*((_BYTE *)a2 + v8 + 60) & 2) != 0 )
        break;
      if ( *std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
              v7,
              &v66,
              v55) != *((__int64 **)v5 + 11) )
      {
        v20 = 0xCBF29CE484222325uLL;
        for ( i = 0LL; i < 4; ++i )
          v20 = 0x100000001B3LL * (*((unsigned __int8 *)v55 + i) ^ (unsigned __int64)v20);
        v11 = v58;
        v22 = v20 & *((_QWORD *)v7 + 6);
        v23 = 2 * v22;
        v24 = *((_QWORD *)v7 + 3);
        v25 = *(_QWORD **)(v24 + 16 * v22);
        v26 = 2 * v22;
        v27 = (_QWORD **)*((_QWORD *)v7 + 1);
        v28 = (_QWORD **)v25;
        while ( 1 )
        {
          if ( v28 == v27 )
            v29 = (_QWORD *)*((_QWORD *)v7 + 1);
          else
            v29 = **(_QWORD ***)(v24 + 8 * v26 + 8);
          if ( v25 == v29 )
            goto LABEL_32;
          if ( *((_DWORD *)v25 + 4) == v9 )
            break;
          v25 = (_QWORD *)*v25;
        }
        v30 = v25;
        v31 = v25;
        while ( 1 )
        {
          v32 = v28 == v27 ? (_QWORD *)*((_QWORD *)v7 + 1) : **(_QWORD ***)(v24 + 8 * v23 + 8);
          if ( v25 == v32 || v9 != *((_DWORD *)v25 + 4) )
            break;
          v25 = (_QWORD *)*v25;
        }
        if ( v30 == v25 )
        {
LABEL_32:
          v31 = (_QWORD *)*((_QWORD *)v7 + 1);
          v25 = v31;
        }
        v57 = (unsigned __int64)v31;
        v33 = *v27;
        if ( v31 == *v27 && v25 == v27 )
        {
          *v27 = v27;
          *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL) = *((_QWORD *)v7 + 1);
          *((_QWORD *)v7 + 2) = 0LL;
          if ( v33 != *((_QWORD **)v7 + 1) )
          {
            do
            {
              v34 = (_QWORD *)*v33;
              operator delete(v33);
              v33 = v34;
            }
            while ( v34 != *((_QWORD **)v7 + 1) );
          }
          std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
            v7,
            8LL);
        }
        else
        {
          while ( v31 != v25 )
          {
            v35 = v31;
            v31 = (_QWORD *)*v31;
            std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
              v7,
              &v67,
              v35);
          }
        }
        goto LABEL_8;
      }
LABEL_9:
      v17 = (_QWORD *)((char *)v5 + 144);
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (_QWORD *)v5 + 18,
        &v62,
        v55);
      if ( v62 != *((__int64 **)v5 + 19) )
      {
        v18 = (struct tagPOINT)v62[3];
        if ( v18 )
        {
          v56 = v11;
          v57 = 0LL;
          *(_QWORD *)v59 = 0LL;
          DragNDropProcessorLegacy::HitTest(this, v11, v61, &v56, &v57, (unsigned __int64 *)v59);
          v19 = v55[1];
          if ( (*((_BYTE *)v12 + v8 + 60) & 2) != 0 )
          {
            InputETW::DragNDrop::DragInProgressLegacy(v55[1], &v58, &v56, v57, *(_QWORD *)v59);
            v57 = (unsigned __int64)v56;
            *(struct tagPOINT *)v59 = v58;
            v56 = v18;
            LOWORD(v53) = 1;
            if ( (int)CoreUICallSend(*((_QWORD *)this + 8), &v56, 1LL, 1LL, v53, &unk_1801000F6, v19) < 0 )
            {
              (*(void (__fastcall **)(_QWORD, struct tagPOINT))(**((_QWORD **)this + 4) + 144LL))(
                *((_QWORD *)this + 4),
                v18);
              v55[1] = 0;
              std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,int>(
                v17,
                v70,
                v55,
                &v55[1]);
              v19 = v55[0];
            }
          }
          else
          {
            InputETW::DragNDrop::DragEndedLegacy(v55[1], &v58, &v56, v57, *(_QWORD *)v59);
            v57 = (unsigned __int64)v56;
            *(struct tagPOINT *)v59 = v58;
            v56 = v18;
            LOWORD(v54) = 2;
            CoreUICallSend(*((_QWORD *)this + 8), &v56, 1LL, 1LL, v54, &unk_1801000F6, v19);
            (*(void (__fastcall **)(_QWORD, struct tagPOINT))(**((_QWORD **)this + 4) + 144LL))(
              *((_QWORD *)this + 4),
              v18);
          }
        }
        else
        {
          v19 = v55[1];
        }
        if ( (*((_BYTE *)a2 + v8 + 60) & 2) == 0 )
        {
          v36 = 0xCBF29CE484222325uLL;
          for ( j = 0LL; j < 4; ++j )
            v36 = 0x100000001B3LL * (*((unsigned __int8 *)v55 + j) ^ (unsigned __int64)v36);
          v7 = v63;
          v38 = v36 & v17[6];
          v39 = 2 * v38;
          v40 = v17[3];
          v41 = *(_QWORD **)(v40 + 16 * v38);
          v42 = 2 * v38;
          v43 = (_QWORD **)v17[1];
          v44 = (_QWORD **)v41;
          while ( 1 )
          {
            if ( v44 == v43 )
              v45 = (_QWORD *)v17[1];
            else
              v45 = **(_QWORD ***)(v40 + 8 * v42 + 8);
            if ( v41 == v45 )
              goto LABEL_60;
            if ( *((_DWORD *)v41 + 4) == v19 )
              break;
            v41 = (_QWORD *)*v41;
          }
          v46 = v41;
          v47 = v41;
          while ( 1 )
          {
            v48 = v44 == v43 ? (_QWORD *)v17[1] : **(_QWORD ***)(v40 + 8 * v39 + 8);
            if ( v41 == v48 || v19 != *((_DWORD *)v41 + 4) )
              break;
            v41 = (_QWORD *)*v41;
          }
          if ( v46 == v41 )
          {
LABEL_60:
            v47 = (_QWORD *)v17[1];
            v41 = v47;
          }
          v57 = (unsigned __int64)v47;
          v49 = *v43;
          if ( v47 == *v43 && v41 == v43 )
          {
            *v43 = v43;
            *(_QWORD *)(v17[1] + 8LL) = v17[1];
            v17[2] = 0LL;
            if ( v49 != (_QWORD *)v17[1] )
            {
              do
              {
                v50 = (_QWORD *)*v49;
                operator delete(v49);
                v49 = v50;
              }
              while ( v50 != (_QWORD *)v17[1] );
            }
            std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
              v17,
              8LL);
          }
          else
          {
            while ( v47 != v41 )
            {
              v51 = v47;
              v47 = (_QWORD *)*v47;
              std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
                v17,
                &v68,
                v51);
            }
          }
        }
        v5 = this;
      }
      v6 = (unsigned int)(v60 + 1);
      v60 = v6;
      v4 = a2;
      if ( (unsigned int)v6 >= *((_DWORD *)a2 + 12) )
        goto LABEL_72;
      a3 = v73;
    }
    *(struct tagPOINT *)&v64 = v58;
    *((_QWORD *)&v64 + 1) = v61;
    v13 = (_QWORD *)**((_QWORD **)v7 + 1);
    v14 = (_QWORD *)v13[1];
    v15 = std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>::_Buynode<unsigned long &,DragNDropProcessor::PointerCache>(
            v10,
            v13,
            v14,
            v55,
            &v64);
    v16 = *((_QWORD *)v7 + 2);
    if ( v16 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)v7 + 2) = v16 + 1;
    v13[1] = v15;
    *v14 = v15;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Insert<std::pair<unsigned long const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned __int64>>>>>(
      (float *)v7,
      (__int64)v69,
      (unsigned int *)(**((_QWORD **)v7 + 1) + 16LL),
      **((__int64 ***)v7 + 1));
    v55[1] = v55[0];
LABEL_8:
    v12 = a2;
    goto LABEL_9;
  }
LABEL_72:
  *(_DWORD *)a4 = 4;
  return 0LL;
}
