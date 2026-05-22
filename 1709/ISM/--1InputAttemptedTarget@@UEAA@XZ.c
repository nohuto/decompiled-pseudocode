/*
 * XREFs of ??1InputAttemptedTarget@@UEAA@XZ @ 0x180081E54
 * Callers:
 *     ??_GInputAttemptedTarget@@UEAAPEAXI@Z @ 0x180081E20 (--_GInputAttemptedTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x18000A6A8 (-erase@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTarget::~InputAttemptedTarget(InputAttemptedTarget *this)
{
  _QWORD *v2; // rbp
  int v3; // r8d
  __int64 v4; // rcx
  unsigned __int64 i; // rdx
  __int64 v6; // r11
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD **v9; // rax
  _QWORD **v10; // r10
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // r8
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19[6]; // [rsp+28h] [rbp-30h] BYREF
  int v20; // [rsp+60h] [rbp+8h]
  _QWORD *v21; // [rsp+68h] [rbp+10h]
  _QWORD *v22; // [rsp+70h] [rbp+18h]
  _QWORD **v23; // [rsp+78h] [rbp+20h]

  *(_QWORD *)this = &InputAttemptedTarget::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 8);
  v3 = *((_DWORD *)this + 20);
  v20 = v3;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)&v20 + i) ^ (unsigned __int64)v4);
  v6 = 2 * (v4 & v2[6]);
  v7 = v2[3];
  v8 = *(_QWORD **)(v7 + 16 * (v4 & v2[6]));
  v9 = (_QWORD **)v2[1];
  v10 = (_QWORD **)v8;
  while ( 1 )
  {
    if ( v10 == v9 )
      v11 = (_QWORD *)v2[1];
    else
      v11 = **(_QWORD ***)(v7 + 8 * v6 + 8);
    if ( v8 == v11 )
      goto LABEL_18;
    if ( *((_DWORD *)v8 + 4) == v3 )
      break;
    v8 = (_QWORD *)*v8;
  }
  v12 = v8;
  while ( 1 )
  {
    v13 = v10 == v9 ? (_QWORD *)v2[1] : **(_QWORD ***)(v7 + 8 * v6 + 8);
    if ( v8 == v13 || v3 != *((_DWORD *)v8 + 4) )
      break;
    v8 = (_QWORD *)*v8;
  }
  if ( v12 == v8 )
  {
LABEL_18:
    v8 = (_QWORD *)v2[1];
    v21 = v8;
    v12 = v9;
  }
  v22 = v12;
  v14 = *v9;
  v22 = v14;
  if ( v12 == v14 && (v23 = v9, v8 == v9) )
  {
    *v9 = v9;
    *(_QWORD *)(v2[1] + 8LL) = v2[1];
    v2[2] = 0LL;
    if ( v14 != (_QWORD *)v2[1] )
    {
      do
      {
        v15 = (_QWORD *)*v14;
        operator delete(v14);
        v14 = v15;
      }
      while ( v15 != (_QWORD *)v2[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      v2,
      8LL);
  }
  else
  {
    while ( v12 != v8 )
    {
      v16 = v12;
      v12 = (_QWORD *)*v12;
      std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::erase(
        v2,
        v19,
        v16);
    }
  }
  v17 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  *(_QWORD *)this = &InputTarget::`vftable';
  v18 = *((_QWORD *)this + 1);
  if ( v18 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
}
