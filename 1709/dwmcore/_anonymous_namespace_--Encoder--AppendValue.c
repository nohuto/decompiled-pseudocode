/*
 * XREFs of _anonymous_namespace_::Encoder::AppendValue @ 0x180007020
 * Callers:
 *     _anonymous_namespace_::Encoder::Serialize @ 0x1800059DC (_anonymous_namespace_--Encoder--Serialize.c)
 *     _anonymous_namespace_::Encoder::Serialize_0 @ 0x1800064D8 (_anonymous_namespace_--Encoder--Serialize_0.c)
 *     _anonymous_namespace_::Encoder::Serialize_1 @ 0x180006624 (_anonymous_namespace_--Encoder--Serialize_1.c)
 *     _anonymous_namespace_::Encoder::EnsureZeroesAreSerialized @ 0x180006DD4 (_anonymous_namespace_--Encoder--EnsureZeroesAreSerialized.c)
 *     _anonymous_namespace_::Encoder::AppendIndexSet @ 0x180006F44 (_anonymous_namespace_--Encoder--AppendIndexSet.c)
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 * Callees:
 *     _anonymous_namespace_::Encoder::AppendToBlock @ 0x180006EF0 (_anonymous_namespace_--Encoder--AppendToBlock.c)
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800074C8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800075A0 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::AppendValue(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned int v5; // esi
  int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  int v10; // ecx
  __int64 v11; // r10
  unsigned int v12; // ecx
  int v13; // r9d
  unsigned __int8 v14; // bp
  unsigned int v15; // r9d
  int v16; // ecx
  unsigned __int8 v17; // si
  signed int v18; // r8d
  int v19; // r9d
  unsigned __int8 v20; // bl
  __int64 *v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rcx
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // [rsp+38h] [rbp+10h]

  v2 = a2;
  result = a2 & 0x7F;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      anonymous_namespace_::Encoder::AppendToBlock(a1, (unsigned __int8)v2 | 0x80u);
      v2 >>= 7;
      result = v2 & 0x7F;
    }
    while ( v2 != (_DWORD)result );
  }
  if ( v2 || *(_DWORD *)(a1 + 36) )
  {
    v5 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = 0;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        std::string::push_back(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(a1 + 8));
      }
      else
      {
        v36 = *(_QWORD *)(a1 + 16);
        if ( v5 == 2 )
        {
          std::string::push_back(v36, *(unsigned __int8 *)(a1 + 9));
        }
        else
        {
          std::string::push_back(v36, *(unsigned __int8 *)(a1 + 10));
          anonymous_namespace_::Encoder::AppendValue(a1, v5);
        }
      }
    }
    v6 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 32) |= (unsigned __int8)v2 << (8 * (3 - v6));
    result = (unsigned int)(v6 + 1);
    *(_DWORD *)(a1 + 36) = result;
    if ( v6 == 3 )
    {
      v7 = *(_DWORD *)(a1 + 12);
      v8 = *(_DWORD *)(a1 + 32);
      if ( v7 == 85 )
      {
        v9 = v8 / 0x55;
        v10 = v8 - 85 * ((v8 / 0x55) & 0x3FFFFFF);
      }
      else
      {
        v37 = v8 / v7;
        v10 = v8 % v7;
        v9 = v37;
      }
      v11 = *(_QWORD *)a1;
      v41 = *(_BYTE *)(v10 + *(_QWORD *)a1);
      if ( v7 == 85 )
      {
        v12 = v9 / 0x55;
        v13 = v9 - 85 * ((v9 / 0x55) & 0x3FFFFFF);
      }
      else
      {
        v38 = v9 / v7;
        v13 = v9 % v7;
        v12 = v38;
      }
      v14 = *(_BYTE *)(v13 + v11);
      if ( v7 == 85 )
      {
        v15 = v12 / 0x55;
        v16 = v12 - 85 * ((v12 / 0x55) & 0x3FFFFFF);
      }
      else
      {
        v39 = v12 / v7;
        v16 = v12 % v7;
        v15 = v39;
      }
      v17 = *(_BYTE *)(v16 + v11);
      if ( v7 == 85 )
      {
        v18 = v15 / 0x55;
        v19 = v15 - 85 * ((v15 / 0x55) & 0x3FFFFFF);
      }
      else
      {
        v40 = v15 / v7;
        v19 = v15 % v7;
        v18 = v40;
      }
      v20 = *(_BYTE *)(v19 + v11);
      std::string::push_back(*(_QWORD *)(a1 + 16), *(unsigned __int8 *)(v18 + v11));
      std::string::push_back(*(_QWORD *)(a1 + 16), v20);
      v21 = *(__int64 **)(a1 + 16);
      v22 = v21[3];
      if ( v22 < 0x10 )
        v23 = *(_QWORD *)(a1 + 16);
      else
        v23 = *v21;
      v24 = v21[2] + v23;
      if ( v22 < 0x10 )
        v25 = *(_QWORD *)(a1 + 16);
      else
        v25 = *v21;
      if ( v24 )
        v24 -= v25;
      std::string::insert(v21, v24, v22, v17);
      v26 = *(__int64 **)(a1 + 16);
      v27 = v26[3];
      if ( v27 < 0x10 )
        v28 = *(_QWORD *)(a1 + 16);
      else
        v28 = *v26;
      v29 = v26[2] + v28;
      if ( v27 < 0x10 )
        v30 = *(_QWORD *)(a1 + 16);
      else
        v30 = *v26;
      if ( v29 )
        v29 -= v30;
      std::string::insert(v26, v29, v27, v14);
      v31 = *(__int64 **)(a1 + 16);
      v32 = v31[3];
      if ( v32 < 0x10 )
        v33 = *(_QWORD *)(a1 + 16);
      else
        v33 = *v31;
      v34 = v31[2] + v33;
      if ( v32 < 0x10 )
        v35 = *(_QWORD *)(a1 + 16);
      else
        v35 = *v31;
      if ( v34 )
        v34 -= v35;
      result = std::string::insert(v31, v34, v32, v41);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return result;
}
