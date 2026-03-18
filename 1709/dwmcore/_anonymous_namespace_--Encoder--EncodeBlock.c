/*
 * XREFs of _anonymous_namespace_::Encoder::EncodeBlock @ 0x180006E30
 * Callers:
 *     _anonymous_namespace_::Encoder::AppendToBlock @ 0x180006EF0 (_anonymous_namespace_--Encoder--AppendToBlock.c)
 *     _anonymous_namespace_::Encoder::_Encoder @ 0x180007330 (_anonymous_namespace_--Encoder--_Encoder.c)
 * Callees:
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800075A0 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::EncodeBlock(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v3; // esi
  char v4; // bp
  unsigned int v5; // eax
  char v6; // r14
  __int64 v7; // rdx
  char v8; // r15
  char v9; // bl
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx

  v1 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 36) + 1;
  v4 = *(_BYTE *)((int)(*(_DWORD *)(a1 + 32) % v1) + *(_QWORD *)a1);
  v5 = *(_DWORD *)(a1 + 32) / v1 / v1;
  v6 = *(_BYTE *)((int)(*(_DWORD *)(a1 + 32) / v1 % v1) + *(_QWORD *)a1);
  v7 = v5 / v1 % v1;
  v8 = *(_BYTE *)((int)(v5 % v1) + *(_QWORD *)a1);
  v9 = *(_BYTE *)((int)v7 + *(_QWORD *)a1);
  LOBYTE(v7) = *(_BYTE *)((int)(v5 / v1 / v1) + *(_QWORD *)a1);
  std::string::push_back(*(_QWORD *)(a1 + 16), v7);
  LOBYTE(v10) = v9;
  result = std::string::push_back(*(_QWORD *)(a1 + 16), v10);
  if ( v3 > 2 )
  {
    LOBYTE(v12) = v8;
    result = std::string::push_back(*(_QWORD *)(a1 + 16), v12);
    if ( v3 > 3 )
    {
      LOBYTE(v13) = v6;
      result = std::string::push_back(*(_QWORD *)(a1 + 16), v13);
      if ( v3 > 4 )
      {
        LOBYTE(v14) = v4;
        return std::string::push_back(*(_QWORD *)(a1 + 16), v14);
      }
    }
  }
  return result;
}
