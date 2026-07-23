/*
 * XREFs of sub_180109064 @ 0x180109064
 * Callers:
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
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
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 */

_DWORD *__fastcall sub_180109064(__int64 a1, int a2, int a3)
{
  int v5; // eax
  _WORD *v6; // rdi
  PVOID ProcessHeap; // rcx
  _DWORD *Heap; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  PVOID v12; // rax
  void *v13; // rcx
  char *v15; // rax
  int v16; // eax
  int v17; // [rsp+30h] [rbp-248h] BYREF
  int v18; // [rsp+34h] [rbp-244h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-240h] BYREF
  _WORD v20[264]; // [rsp+40h] [rbp-238h] BYREF

  v17 = 0;
  memset(v20, 0, 0x208uLL);
  v5 = sub_18005DC70(v20);
  v6 = v20;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(v5 - 1) > 0x102 )
    v6 = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 8u, 0x30uLL);
  v9 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    return 0LL;
  }
  *((_QWORD *)Heap + 1) = 0LL;
  sub_180109220(&v18, v19);
  v11 = sub_18005DB48(v18, v10, a2, a3, 1u, &v17);
  *((_QWORD *)v9 + 2) = v11;
  if ( !v11 || !*(_DWORD *)(v11[3] + 68LL) )
  {
LABEL_11:
    v13 = (void *)*((_QWORD *)v9 + 2);
    if ( v13 )
      sub_180109904(v13);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return 0LL;
  }
  *(_QWORD *)(*((_QWORD *)v9 + 2) + 64LL) = sub_1800033F0();
  v12 = RtlAllocateHeap(
          NtCurrentPeb()->ProcessHeap,
          8u,
          8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 24LL) + 52LL));
  *((_QWORD *)v9 + 3) = v12;
  if ( !v12 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    goto LABEL_11;
  }
  if ( v6 )
    v15 = sub_180003048(v6);
  else
    v15 = 0LL;
  *v9 |= 0x80u;
  *((_QWORD *)v9 + 4) = v15;
  v16 = v17 & 7;
  *((_QWORD *)v9 + 5) = 0LL;
  v9[1] |= v16;
  return v9;
}
