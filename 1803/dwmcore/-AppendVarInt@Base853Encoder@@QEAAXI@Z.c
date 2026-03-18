/*
 * XREFs of ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800D30DC
 * Callers:
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x1800D1B0C (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x1800D26EC (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800D282C (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800D28B0 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800D3084 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800D30DC (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 * Callees:
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800D3084 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800D30DC (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800D3354 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800D3454 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_ @ 0x1800D3484 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 */

void __fastcall Base853Encoder::AppendVarInt(Base853Encoder *this, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  char v8; // bp
  unsigned int v9; // r8d
  __int64 v10; // rdx
  int v11; // eax
  char v12; // si
  char v13; // di
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rdx
  bool v16; // cf
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // [rsp+38h] [rbp+10h]

  v2 = a2;
  if ( (_DWORD)a2 != (a2 & 0x7F) )
  {
    do
    {
      Base853Encoder::EnsureZeroesAreSerialized(this, a2);
      a2 = *((unsigned int *)this + 3);
      *((_DWORD *)this + 2) |= ((unsigned __int8)v2 | 0x80) << (8 * (3 - a2));
      *((_DWORD *)this + 3) = a2 + 1;
      if ( (_DWORD)a2 == 3 )
        Base853Encoder::EncodeBlock(this);
      v2 >>= 7;
    }
    while ( v2 != (v2 & 0x7F) );
  }
  if ( !v2 && !*((_DWORD *)this + 3) )
  {
    ++*((_DWORD *)this + 4);
    return;
  }
  v4 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v23 = *(_QWORD *)this;
      LOBYTE(a2) = 45;
    }
    else
    {
      v23 = *(_QWORD *)this;
      if ( v4 != 2 )
      {
        LOBYTE(a2) = 61;
        std::string::push_back(v23, a2);
        Base853Encoder::AppendVarInt(this, v4);
        goto LABEL_7;
      }
      LOBYTE(a2) = 95;
    }
    std::string::push_back(v23, a2);
  }
LABEL_7:
  v5 = *((_DWORD *)this + 3);
  v6 = *((_DWORD *)this + 2) | ((unsigned __int8)v2 << (8 * (3 - v5++)));
  *((_DWORD *)this + 2) = v6;
  *((_DWORD *)this + 3) = v5;
  if ( v5 == 4 )
  {
    v7 = v6 / 0x55;
    v8 = a0123456789Abcd[v6 % 0x55];
    v9 = v6 / 0x55 / 0x55;
    v24 = a0123456789Abcd[v7 - 85 * v9];
    v10 = v9 / 0x55 / 0x55;
    v11 = 85 * v10;
    LOBYTE(v10) = a0123456789Abcd[v10];
    v12 = a0123456789Abcd[v9 % 0x55];
    v13 = a0123456789Abcd[v9 / 0x55 - v11];
    std::string::push_back(*(_QWORD *)this, v10);
    v14 = *(_QWORD **)this;
    v15 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( v15 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
    {
      std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v14);
    }
    else
    {
      v16 = v14[3] < 0x10uLL;
      v14[2] = v15 + 1;
      if ( !v16 )
        v14 = (_QWORD *)*v14;
      *((_BYTE *)v14 + v15) = v13;
      *((_BYTE *)v14 + v15 + 1) = 0;
    }
    v17 = *(_QWORD **)this;
    v18 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( v18 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
    {
      std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v17);
    }
    else
    {
      v16 = v17[3] < 0x10uLL;
      v17[2] = v18 + 1;
      if ( !v16 )
        v17 = (_QWORD *)*v17;
      *((_BYTE *)v17 + v18) = v12;
      *((_BYTE *)v17 + v18 + 1) = 0;
    }
    v19 = *(_QWORD **)this;
    v20 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( v20 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
    {
      std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v19);
    }
    else
    {
      v16 = v19[3] < 0x10uLL;
      v19[2] = v20 + 1;
      if ( !v16 )
        v19 = (_QWORD *)*v19;
      *((_BYTE *)v19 + v20) = v24;
      *((_BYTE *)v19 + v20 + 1) = 0;
    }
    v21 = *(_QWORD **)this;
    v22 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( v22 >= *(_QWORD *)(*(_QWORD *)this + 24LL) )
    {
      std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v21);
    }
    else
    {
      v16 = v21[3] < 0x10uLL;
      v21[2] = v22 + 1;
      if ( !v16 )
        v21 = (_QWORD *)*v21;
      *((_BYTE *)v21 + v22) = v8;
      *((_BYTE *)v21 + v22 + 1) = 0;
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
