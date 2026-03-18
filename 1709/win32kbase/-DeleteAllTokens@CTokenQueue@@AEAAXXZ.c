/*
 * XREFs of ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0037ADC
 * Callers:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C00355D4 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0035F20 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003648C (--1CTokenManager@@AEAA@XZ.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0151F30 (NtSetCompositionSurfaceAnalogExclusive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenQueue::DeleteAllTokens(CTokenQueue *this)
{
  CTokenQueue **v1; // rax
  CTokenQueue ***v3; // rcx
  CTokenQueue **v4; // rbx

  v1 = (CTokenQueue **)*((_QWORD *)this + 1);
  if ( *v1 != this || (v3 = (CTokenQueue ***)v1[1], *v3 != v1) )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)this + 1) = v3;
    *v3 = (CTokenQueue **)this;
    if ( v1 == (CTokenQueue **)this )
      break;
    v4 = v1 - 1;
    (*((void (__fastcall **)(CTokenQueue **))*(v1 - 1) + 7))(v1 - 1);
    (*(void (__fastcall **)(CTokenQueue **, __int64))*v4)(v4, 1LL);
    v1 = (CTokenQueue **)*((_QWORD *)this + 1);
    if ( *v1 == this )
    {
      v3 = (CTokenQueue ***)v1[1];
      if ( *v3 == v1 )
        continue;
    }
    __fastfail(3u);
  }
}
