/*
 * XREFs of _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800D28B0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800D282C (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800D3084 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800D30DC (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800D3354 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&___ptr64_ @ 0x1801471F4 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--_ea_1801471F4.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__ @ 0x1801473EC (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 */

void __fastcall anonymous_namespace_::SequenceEncoder::Serialize(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // [rsp+20h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+38h] [rbp-18h]
  int v25; // [rsp+3Ch] [rbp-14h]
  int v26; // [rsp+40h] [rbp-10h]
  __int64 v27; // [rsp+48h] [rbp-8h]
  _QWORD *v28; // [rsp+70h] [rbp+20h] BYREF

  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = a2;
  v6 = *(_DWORD *)a1;
  v23 = a4;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v6);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 4));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 8));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 12));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 16));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 20));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 24));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 28));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 32));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 36));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 40));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 44));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 48));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 52));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 56));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 60));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 64));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 68));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 72));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 76));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 80));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 84));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 88));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 92));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 96));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 100));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 104));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 108));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 112));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 116));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 120));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 124));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 128));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 132));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 136));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 140));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 144));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 148));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 152));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 156));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 160));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 164));
  v7 = *(_QWORD *)(a1 + 168) / 0x3E8uLL / 0x3E8;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v7);
  v8 = *(_QWORD *)(a1 + 176) / 0x3E8uLL / 0x3E8;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v8);
  v9 = *(_QWORD *)(a1 + 184) / 0x3E8uLL / 0x3E8;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v9);
  v10 = *(_QWORD *)(a1 + 192) / 0x3E8uLL / 0x3E8;
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v10);
  v11 = *(_QWORD *)(a1 + 200) / 0x3E8uLL / 0x3E8;
  if ( v11 > 0xFFFFFFFF )
    LODWORD(v11) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v11);
  v12 = *(_QWORD *)(a1 + 208) / 0x3E8uLL / 0x3E8;
  if ( v12 > 0xFFFFFFFF )
    LODWORD(v12) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v12);
  v13 = *(_QWORD *)(a1 + 216) / 0x3E8uLL / 0x3E8;
  if ( v13 > 0xFFFFFFFF )
    LODWORD(v13) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v13);
  v14 = *(_QWORD *)(a1 + 224) / 0x3E8uLL / 0x3E8;
  if ( v14 > 0xFFFFFFFF )
    LODWORD(v14) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v14);
  v15 = *(_QWORD *)(a1 + 232) / 0x3E8uLL / 0x3E8;
  if ( v15 > 0xFFFFFFFF )
    LODWORD(v15) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v15);
  v16 = *(_QWORD *)(a1 + 240) / 0x3E8uLL / 0x3E8;
  if ( v16 > 0xFFFFFFFF )
    LODWORD(v16) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v16);
  v17 = *(_QWORD *)(a1 + 248) / 0x3E8uLL / 0x3E8;
  if ( v17 > 0xFFFFFFFF )
    LODWORD(v17) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v17);
  v18 = *(_QWORD *)(a1 + 256) / 0x3E8uLL / 0x3E8;
  if ( v18 > 0xFFFFFFFF )
    LODWORD(v18) = -1;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, v18);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 264));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 268));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 272));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 276));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 280));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 284));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 288));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 292));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 296));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 300));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 304));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 308));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 312));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 316));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 320));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 324));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 328));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 332));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 336));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 340));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 344));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 348));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 352));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 356));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 360));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 364));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 368));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 372));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 376));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 380));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 384));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 388));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 392));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 396));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 400));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 404));
  anonymous_namespace_::SequenceEncoder::AppendIndexSet((Base853Encoder *)&v23, a1 + 408);
  anonymous_namespace_::SequenceEncoder::AppendIndexSet((Base853Encoder *)&v23, a1 + 424);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(a1 + 456));
  v19 = *(_QWORD **)(a1 + 448);
  v20 = (_QWORD *)*v19;
  v28 = (_QWORD *)*v19;
  while ( v20 != v19 )
  {
    v21 = v20 + 4;
    std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_____ptr64_(a3);
    Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *(_DWORD *)(v22 + 40));
    Base853Encoder::AppendVarInt((Base853Encoder *)&v23, *((_DWORD *)v21 + 2));
    std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__(&v28);
    v20 = v28;
  }
  Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v23);
  if ( v25 )
    Base853Encoder::EncodeBlock((Base853Encoder *)&v23);
}
