/*
 * XREFs of ParseNestedContext @ 0x1C0055C40
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AsyncCallBack @ 0x1C004EA84 (AsyncCallBack.c)
 */

__int64 __fastcall ParseNestedContext(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v3 = a3;
  if ( !a3 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    if ( v6 )
      v3 = DupObjData(gpheapGlobal, v6, a2 + 48);
  }
  AsyncCallBack((_QWORD *)a1, v3);
  FreeDataBuffs(a2 + 48, 1u);
  *(_DWORD *)(a1 + 64) &= ~0x100u;
  *(_DWORD *)(a1 + 64) |= *(_DWORD *)(a2 + 112) & 0x100;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 120);
  DereferenceObjectEx(*(_QWORD *)(a2 + 32));
  v7 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  DereferenceObjectEx(v7);
  *(_QWORD *)(a2 + 40) = 0LL;
  v8 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v8 + 8);
  HeapFree(v8);
  return 0x8000LL;
}
