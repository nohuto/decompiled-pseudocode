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

unsigned __int64 sub_18005D9D8()
{
  int v0; // eax
  _WORD *v1; // rdi
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v4; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rax
  char *v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  _DWORD v12[4]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v13[528]; // [rsp+40h] [rbp-228h] BYREF

  v12[0] = 0;
  memset(v13, 0, 0x208uLL);
  v0 = sub_18005DC70(v13);
  v1 = v13;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(v0 - 1) > 0x102 )
    v1 = 0LL;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 8u, 48LL);
  v5 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    return 0LL;
  }
  *(_QWORD *)(Heap + 8) = 0LL;
  v6 = sub_18005DB48(-1, v4, 0, 0, 0, (__int64)v12);
  *(_QWORD *)(v5 + 16) = v6;
  if ( !v6 )
  {
LABEL_5:
    if ( *(_QWORD *)(v5 + 16) )
      sub_180109904();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v6 + 24) + 68LL) )
  {
    v11 = 536937730;
LABEL_18:
    RtlSetLastWin32Error(v11);
    goto LABEL_5;
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL) = sub_1800033F0();
  v8 = RtlAllocateHeap(
         (__int64)NtCurrentPeb()->ProcessHeap,
         8u,
         8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL) + 52LL));
  *(_QWORD *)(v5 + 24) = v8;
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
  *(_DWORD *)v5 |= 0x80u;
  *(_QWORD *)(v5 + 32) = v9;
  v10 = v12[0] & 7;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_DWORD *)(v5 + 4) |= v10;
  return v5;
}
