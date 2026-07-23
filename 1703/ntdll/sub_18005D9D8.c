/*
 * XREFs of sub_18005D9D8 @ 0x18005D9D8
 * Callers:
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     sub_180003048 @ 0x180003048 (sub_180003048.c)
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 *     sub_18005DC70 @ 0x18005DC70 (sub_18005DC70.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 */

_DWORD *sub_18005D9D8()
{
  int v0; // eax
  _WORD *v1; // rdi
  PVOID ProcessHeap; // rcx
  _DWORD *Heap; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rax
  void *v6; // rcx
  PVOID v8; // rax
  char *v9; // rax
  int v10; // eax
  LONG v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v13[528]; // [rsp+40h] [rbp-228h] BYREF

  LODWORD(v12) = 0;
  memset(v13, 0, 0x208uLL);
  v0 = sub_18005DC70(v13);
  v1 = v13;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(v0 - 1) > 0x102 )
    v1 = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 8u, 0x30uLL);
  v4 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    return 0LL;
  }
  *((_QWORD *)Heap + 1) = 0LL;
  v5 = sub_18005DB48(-1, 0, (__int64)&v12);
  *((_QWORD *)v4 + 2) = v5;
  if ( !v5 )
  {
LABEL_5:
    v6 = (void *)*((_QWORD *)v4 + 2);
    if ( v6 )
      sub_180109904(v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v5 + 24) + 68LL) )
  {
    v11 = 536937730;
LABEL_18:
    RtlSetLastWin32Error(v11);
    goto LABEL_5;
  }
  *(_QWORD *)(*((_QWORD *)v4 + 2) + 64LL) = sub_1800033F0();
  v8 = RtlAllocateHeap(
         NtCurrentPeb()->ProcessHeap,
         8u,
         8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 24LL) + 52LL));
  *((_QWORD *)v4 + 3) = v8;
  if ( !v8 )
  {
    if ( NtCurrentTeb()->LastErrorValue )
      goto LABEL_5;
    v11 = 14;
    goto LABEL_18;
  }
  if ( v1 )
    v9 = sub_180003048(v1);
  else
    v9 = 0LL;
  *v4 |= 0x80u;
  *((_QWORD *)v4 + 4) = v9;
  v10 = v12 & 7;
  *((_QWORD *)v4 + 5) = 0LL;
  v4[1] |= v10;
  return v4;
}
