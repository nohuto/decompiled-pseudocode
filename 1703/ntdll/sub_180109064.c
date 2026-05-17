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

unsigned __int64 __fastcall sub_180109064(__int64 a1, int a2, int a3)
{
  int v5; // eax
  _WORD *v6; // rdi
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-248h] BYREF
  int v17; // [rsp+34h] [rbp-244h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-240h] BYREF
  _WORD v19[264]; // [rsp+40h] [rbp-238h] BYREF

  v16 = 0;
  memset(v19, 0, 0x208uLL);
  v5 = sub_18005DC70(v19);
  v6 = v19;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(v5 - 1) > 0x102 )
    v6 = 0LL;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 8u, 48LL);
  v9 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    return 0LL;
  }
  *(_QWORD *)(Heap + 8) = 0LL;
  sub_180109220(&v17, v18);
  v11 = sub_18005DB48(v17, v10, a2, a3, 1, &v16);
  *(_QWORD *)(v9 + 16) = v11;
  if ( !v11 || !*(_DWORD *)(*(_QWORD *)(v11 + 24) + 68LL) )
  {
LABEL_11:
    if ( *(_QWORD *)(v9 + 16) )
      sub_180109904();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(v9 + 16) + 64LL) = sub_1800033F0();
  v12 = RtlAllocateHeap(
          (__int64)NtCurrentPeb()->ProcessHeap,
          8u,
          8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 24LL) + 52LL));
  *(_QWORD *)(v9 + 24) = v12;
  if ( !v12 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    goto LABEL_11;
  }
  if ( v6 )
    v14 = sub_180003048(v6);
  else
    v14 = 0LL;
  *(_DWORD *)v9 |= 0x80u;
  *(_QWORD *)(v9 + 32) = v14;
  v15 = v16 & 7;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_DWORD *)(v9 + 4) |= v15;
  return v9;
}
