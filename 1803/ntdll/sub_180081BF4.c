/*
 * XREFs of sub_180081BF4 @ 0x180081BF4
 * Callers:
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 *     sub_180081B88 @ 0x180081B88 (sub_180081B88.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

int __fastcall sub_180081BF4(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int i; // edi
  _QWORD *v4; // rsi
  void *v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a1 )
  {
    v1 = &retaddr;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v1 = *(_UNKNOWN ***)(a1 + 8);
      v4 = v1[i];
      if ( v4 )
      {
        v5 = (void *)v4[3];
        *((_DWORD *)v4 + 2) = 0;
        v4[2] = 0LL;
        if ( v5 )
        {
          ZwClose(v5);
          v4[3] = 0LL;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * i) = 0LL;
        LODWORD(v1) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      LODWORD(v1) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return (int)v1;
}
