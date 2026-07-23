/*
 * XREFs of sub_180108F48 @ 0x180108F48
 * Callers:
 *     LdrFlushAlternateResourceModules @ 0x18008E170 (LdrFlushAlternateResourceModules.c)
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 *     sub_180109C90 @ 0x180109C90 (sub_180109C90.c)
 *     sub_18010E10C @ 0x18010E10C (sub_18010E10C.c)
 */

_BOOL8 __fastcall sub_180108F48(PVOID BaseAddress)
{
  __int64 v1; // rbp
  int v3; // edi
  void *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  void *v8; // rcx
  _QWORD *v9; // rcx
  BOOL v10; // edi
  __int64 v11; // rsi
  void *v12; // rcx

  v1 = 0LL;
  v3 = 1;
  if ( !BaseAddress )
    return 0LL;
  v5 = (void *)*((_QWORD *)BaseAddress + 1);
  if ( v5 )
  {
    v6 = sub_18010E10C(v5);
    *((_QWORD *)BaseAddress + 1) = 0LL;
    v3 = v6;
  }
  v7 = *((_QWORD *)BaseAddress + 2);
  if ( v7 )
  {
    v8 = *(void **)(v7 + 64);
    if ( v8 )
    {
      sub_180109B30(v8);
      *(_QWORD *)(*((_QWORD *)BaseAddress + 2) + 64LL) = 0LL;
    }
    v9 = (_QWORD *)*((_QWORD *)BaseAddress + 2);
    v1 = *(unsigned int *)(v9[3] + 68LL);
    v10 = (unsigned int)sub_180109904(v9) && v3;
    *((_QWORD *)BaseAddress + 2) = 0LL;
  }
  else
  {
    v10 = 0;
  }
  if ( *((_QWORD *)BaseAddress + 3) )
  {
    if ( (_DWORD)v1 )
    {
      v11 = 0LL;
      do
      {
        v12 = *(void **)(v11 + *((_QWORD *)BaseAddress + 3));
        if ( v12 )
        {
          v10 = (unsigned int)sub_180109C90(v12) && v10;
          *(_QWORD *)(v11 + *((_QWORD *)BaseAddress + 3)) = 0LL;
        }
        v11 += 8LL;
        --v1;
      }
      while ( v1 );
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)BaseAddress + 3));
    *((_QWORD *)BaseAddress + 3) = 0LL;
  }
  else
  {
    v10 = 0;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v10;
}
