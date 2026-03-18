/*
 * XREFs of ?NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x14024966C
 * Callers:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402494FC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 * Callees:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1400383D4 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x14003C49C (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall NP_CONTEXT::NpiLeafPageIn(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2, union _NP_LEAF_PTR *a3)
{
  _QWORD *v6; // rdi

  v6 = NP_CONTEXT::NpNodeAllocate(a2, (__int64)a2, 3);
  if ( v6 )
  {
    if ( (*((int (__fastcall **)(struct NP_CONTEXT::NP_CTX *, _QWORD *, _QWORD))a1 + 3))(a2, v6, *(_QWORD *)a3) >= 0 )
    {
      ++*((_DWORD *)a1 + 21);
      --*((_DWORD *)a1 + 11);
      ++*((_DWORD *)a1 + 12);
      *(_QWORD *)(((unsigned __int64)v6 + 11) & 0xFFFFFFFFFFFFFFF8uLL) = *(_QWORD *)a3;
      *(_QWORD *)a3 = v6;
      *(_DWORD *)a3 |= 1u;
      v6 = 0LL;
    }
    else
    {
      ++*((_DWORD *)a1 + 23);
    }
    if ( v6 )
      NP_CONTEXT::NpNodeFree(a2, v6, 1);
  }
  else
  {
    ++*((_DWORD *)a1 + 23);
  }
}
