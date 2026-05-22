/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x1800320A4
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180032060 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000A498 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180019264 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180033268 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180035304 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800AC1B8 (--1ManipulationInjector@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerProcessor::~ControllerProcessor(ControllerProcessor *this)
{
  _WORD *v2; // r14
  unsigned int v3; // ebx
  _WORD *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r8
  int v7; // edi
  int v8; // r14d
  struct ControllerNavigationManager *ControllerNavigationManager; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r8
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  _QWORD **v18; // rdx
  _QWORD **v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rbx
  _QWORD *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD v37[2]; // [rsp+20h] [rbp-68h] BYREF
  _WORD v38[24]; // [rsp+30h] [rbp-58h] BYREF

  v37[1] = -2LL;
  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 6) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 474) != 2 )
    ControllerProcessor::NavigationDisable(this);
  memset_0(v38, 0, sizeof(v38));
  v2 = (_WORD *)((char *)this + 56);
  v3 = 0;
  v4 = (_WORD *)((char *)this + 56);
  v5 = 24LL;
  v6 = 24LL;
  do
  {
    if ( *v4 != *((_WORD *)this + 76) )
      v38[v3++] = *v4;
    v4 += 2;
    --v6;
  }
  while ( v6 );
  LODWORD(v37[0]) = v3;
  v7 = 0;
  if ( v3 )
  {
    while ( (int)ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v38[v7], 0) >= 0 )
    {
      if ( ++v7 >= v3 )
      {
        if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 238) + 96LL))(*((_QWORD *)this + 238)) >= 0 )
          goto LABEL_11;
        break;
      }
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  else
  {
    do
    {
LABEL_11:
      *v2 = *((_WORD *)this + 76);
      v2 += 2;
      --v5;
    }
    while ( v5 );
  }
  v8 = **((_DWORD **)this + 4);
  LODWORD(v37[0]) = v8;
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v10 = (_QWORD *)((char *)ControllerNavigationManager + 64);
  v11 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v11 = 0x100000001B3LL * (*((unsigned __int8 *)v37 + i) ^ (unsigned __int64)v11);
  v13 = v11 & *((_QWORD *)ControllerNavigationManager + 14);
  v14 = 2 * (v11 & v10[6]);
  v15 = v10[3];
  v16 = *(_QWORD **)(v15 + 16 * (v11 & v10[6]));
  v17 = 2 * v13;
  v18 = (_QWORD **)v10[1];
  v19 = *(_QWORD ***)(v15 + 16 * v13);
  while ( 1 )
  {
    if ( v19 == v18 )
      v20 = (_QWORD *)v10[1];
    else
      v20 = **(_QWORD ***)(v15 + 8 * v17 + 8);
    if ( v16 == v20 )
      goto LABEL_32;
    if ( *((_DWORD *)v16 + 4) == v8 )
      break;
    v16 = (_QWORD *)*v16;
  }
  v21 = v16;
  v22 = v16;
  while ( 1 )
  {
    v23 = v19 == v18 ? (_QWORD *)v10[1] : **(_QWORD ***)(v15 + 8 * v14 + 8);
    if ( v16 == v23 || v8 != *((_DWORD *)v16 + 4) )
      break;
    v16 = (_QWORD *)*v16;
  }
  if ( v21 == v16 )
  {
LABEL_32:
    v22 = (_QWORD *)v10[1];
    v16 = v22;
  }
  v37[0] = v22;
  v24 = *v18;
  if ( v22 == *v18 && v16 == v18 )
  {
    *v18 = v18;
    *(_QWORD *)(v10[1] + 8LL) = v10[1];
    v10[2] = 0LL;
    if ( v24 != (_QWORD *)v10[1] )
    {
      do
      {
        v25 = (_QWORD *)*v24;
        operator delete(v24);
        v24 = v25;
      }
      while ( v25 != (_QWORD *)v10[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
      v10,
      8LL);
  }
  else
  {
    while ( v22 != v16 )
    {
      v26 = v22;
      v22 = (_QWORD *)*v22;
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
        v10,
        v37,
        v26);
    }
  }
  v27 = *((_QWORD *)this + 894);
  if ( v27 )
  {
    *((_QWORD *)this + 894) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = *((_QWORD *)this + 893);
  if ( v28 )
  {
    *((_QWORD *)this + 893) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *((_QWORD *)this + 892);
  if ( v29 )
  {
    *((_QWORD *)this + 892) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = *((_QWORD *)this + 891);
  if ( v30 )
  {
    *((_QWORD *)this + 891) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = *((_QWORD *)this + 884);
  if ( v31 )
  {
    *((_QWORD *)this + 884) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = *((_QWORD *)this + 883);
  if ( v32 )
  {
    *((_QWORD *)this + 883) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = *((_QWORD *)this + 861);
  if ( v33 )
  {
    *((_QWORD *)this + 861) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  if ( *((_BYTE *)this + 6880) )
    *((_BYTE *)this + 6880) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 736) + 56LL))(
                                *((_QWORD *)this + 736),
                                (char *)this + 5896) < 0;
  if ( *((_BYTE *)this + 5880) )
    *((_BYTE *)this + 5880) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 611) + 56LL))(
                                *((_QWORD *)this + 611),
                                (char *)this + 4896) < 0;
  if ( *((_BYTE *)this + 4880) )
    *((_BYTE *)this + 4880) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 486) + 56LL))(
                                *((_QWORD *)this + 486),
                                (char *)this + 3896) < 0;
  if ( *((_BYTE *)this + 3880) )
    *((_BYTE *)this + 3880) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 361) + 56LL))(
                                *((_QWORD *)this + 361),
                                (char *)this + 2896) < 0;
  ManipulationInjector::~ManipulationInjector((ControllerProcessor *)((char *)this + 2048));
  v34 = *((_QWORD *)this + 241);
  if ( v34 )
  {
    *((_QWORD *)this + 241) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = *((_QWORD *)this + 239);
  if ( v35 )
  {
    *((_QWORD *)this + 239) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = *((_QWORD *)this + 238);
  if ( v36 )
  {
    *((_QWORD *)this + 238) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
