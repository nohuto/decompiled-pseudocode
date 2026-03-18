/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1C0042A6C
 * Callers:
 *     DpiDispatchPnp @ 0x1C009E980 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rax

  v3 = -1073741637;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v4 + 1) == 7 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = *(_QWORD *)(v6 + 152);
      ObfReferenceObject(*(PVOID *)(v6 + 152));
      v3 = 0;
      *(_QWORD *)(a2 + 56) = v9;
    }
    else
    {
      v3 = -1073741670;
      v10 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v10 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v10);
    }
  }
  else if ( *(_BYTE *)(v4 + 1) != 8 )
  {
    v5 = WdLogNewEntry5_WdError((unsigned int)*(unsigned __int8 *)(v4 + 1) - 7);
    *(_QWORD *)(v5 + 24) = *(unsigned __int8 *)(v4 + 1);
    WdLogEvent5_WdError(v5);
  }
  return v3;
}
