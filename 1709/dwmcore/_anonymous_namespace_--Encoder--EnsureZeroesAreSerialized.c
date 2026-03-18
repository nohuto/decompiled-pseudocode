/*
 * XREFs of _anonymous_namespace_::Encoder::EnsureZeroesAreSerialized @ 0x180006DD4
 * Callers:
 *     _anonymous_namespace_::Encoder::AppendToBlock @ 0x180006EF0 (_anonymous_namespace_--Encoder--AppendToBlock.c)
 *     _anonymous_namespace_::Encoder::_Encoder @ 0x180007330 (_anonymous_namespace_--Encoder--_Encoder.c)
 * Callees:
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800075A0 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::EnsureZeroesAreSerialized(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = 0;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 8);
      v4 = *(_QWORD *)(a1 + 16);
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 16);
      if ( v2 != 2 )
      {
        LOBYTE(a2) = *(_BYTE *)(a1 + 10);
        std::string::push_back(v4, a2);
        return anonymous_namespace_::Encoder::AppendValue(a1, v2);
      }
      LOBYTE(a2) = *(_BYTE *)(a1 + 9);
    }
    return std::string::push_back(v4, a2);
  }
  return result;
}
