/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1C0003778
 * Callers:
 *     DpiDispatchPnp @ 0x1C00A9AE0 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = -1073741637;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v5 + 1) == 7 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = *(_QWORD *)(v6 + 152);
      ObfReferenceObject(*(PVOID *)(v6 + 152));
      v3 = 0;
      *(_QWORD *)(a2 + 56) = v8;
    }
    else
    {
      v3 = -1073741670;
      v11 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v11 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
  else if ( *(_BYTE *)(v5 + 1) != 8 )
  {
    v10 = WdLogNewEntry5_WdError((unsigned int)*(unsigned __int8 *)(v5 + 1) - 7, v4);
    *(_QWORD *)(v10 + 24) = *(unsigned __int8 *)(v5 + 1);
    WdLogEvent5_WdError(v10);
  }
  return v3;
}
