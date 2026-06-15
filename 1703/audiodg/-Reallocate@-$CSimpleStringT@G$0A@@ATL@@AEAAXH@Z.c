/*
 * XREFs of ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140039374
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F1C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x140039558 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Reallocate(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = a2;
  v4 = *a1 - 24;
  v5 = *(_QWORD *)v4;
  if ( *(_DWORD *)(v4 + 12) >= (int)v2 || (int)v2 <= 0 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v5);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v4, v2, 2LL);
  if ( !v6 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v7);
  result = v6 + 24;
  *a1 = result;
  return result;
}
