/*
 * XREFs of ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z @ 0x140034EC8
 * Callers:
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x140035C84 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::AtlCallTermFunc(struct ATL::_ATL_MODULE70 *a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  if ( !a1 )
  {
    RaiseException(0xC0000005, 1u, 0, 0LL);
    __debugbreak();
  }
  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v2 )
  {
    do
    {
      ((void (__fastcall *)(_QWORD))*v2)(v2[1]);
      v3 = (_QWORD *)v2[2];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
