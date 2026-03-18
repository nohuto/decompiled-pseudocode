/*
 * XREFs of ParseLoad @ 0x1C0013100
 * Callers:
 *     <none>
 * Callees:
 *     PushCall @ 0x1C000CB4C (PushCall.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     NewObjOwner @ 0x1C00134CC (NewObjOwner.c)
 *     AMLIApplyNamespaceOverride @ 0x1C001358C (AMLIApplyNamespaceOverride.c)
 *     PushScope @ 0x1C001EA98 (PushScope.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ParseLoad(_QWORD *a1, __int64 a2, int a3)
{
  int v4; // ecx
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // eax

  v4 = *(_DWORD *)(a2 + 16);
  v5 = a3;
  if ( (v4 & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xF) != 2 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0xF) != 3 )
        {
          if ( (*(_DWORD *)(a2 + 16) & 0xF) != 4 )
            return v5;
          goto LABEL_9;
        }
LABEL_7:
        ++*(_DWORD *)(a2 + 16);
        v7 = *(_QWORD *)(a2 + 48);
        if ( (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
        {
          *(_WORD *)(v7 + 2) = 1;
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
        }
        else
        {
          *(_WORD *)(v7 + 2) = 15;
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(a2 + 40);
        }
LABEL_9:
        ++*(_DWORD *)(a2 + 16);
        v8 = a1[52];
        a1[52] = *(_QWORD *)(v8 + 8);
        HeapFree(v8);
        return v5;
      }
      *(_DWORD *)(a2 + 16) = v4 + 1;
      if ( a3 < 0 )
        *(_DWORD *)(a2 + 16) = (v4 + 1) | 0x10000;
      else
        AMLIApplyNamespaceOverride();
      v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))ghLoadTable)(18LL, 2LL, a1);
      if ( v5 != 259 )
        goto LABEL_7;
      return 32772;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v4 + 1;
    v5 = NewObjOwner(gpheapGlobal, a2 + 40);
    if ( v5 )
    {
      v10 = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_DWORD *)(a2 + 16) = (v10 | 0x10000) + 2;
      return v5;
    }
    v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))ghLoadTable)(18LL, 1LL, a1);
    if ( v5 == 259 )
      return 32772;
  }
  ++*(_DWORD *)(a2 + 16);
  if ( !a1[12] )
    v5 = PushCall(a1, 0LL, (__int64)(a1 + 16));
  if ( !v5 )
  {
    qword_1C00796D0 = *(_QWORD *)(a2 + 56) + 36LL;
    qword_1C00796D8 = *(_QWORD *)(a2 + 56) + *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4LL);
    return (unsigned int)PushScope(
                           (_DWORD)a1,
                           (unsigned int)*(_QWORD *)(a2 + 56) + 36,
                           (unsigned int)*(_QWORD *)(a2 + 56) + *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL),
                           a1[15],
                           *(_QWORD *)(a2 + 32),
                           *(_QWORD *)(a2 + 40),
                           gpheapGlobal,
                           (__int64)(a1 + 16));
  }
  return v5;
}
