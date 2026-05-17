/*
 * XREFs of sub_18010DE7C @ 0x18010DE7C
 * Callers:
 *     sub_180109490 @ 0x180109490 (sub_180109490.c)
 * Callees:
 *     sub_180003048 @ 0x180003048 (sub_180003048.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 *     sub_18010E10C @ 0x18010E10C (sub_18010E10C.c)
 */

__int64 __fastcall sub_18010DE7C(_WORD *Src)
{
  __int64 Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  BOOL v8; // eax
  char *v9; // rax
  __int64 result; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-38h] BYREF

  Heap = 0LL;
  if ( !Src )
  {
    RtlSetLastWin32Error(0x57u);
LABEL_13:
    if ( Heap )
      sub_18010E10C(Heap);
    return 0LL;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 64LL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
    *(_QWORD *)(Heap + 8) = v3;
    if ( v3 )
    {
      v4 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 80LL);
      *(_QWORD *)(Heap + 16) = v4;
      if ( v4 )
      {
        v5 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1024LL);
        *(_QWORD *)(Heap + 24) = v5;
        if ( v5 )
        {
          v7 = *(_QWORD *)(Heap + 8);
          *(_DWORD *)Heap = 6;
          *(_DWORD *)(v7 + 8) = 0;
          *(_DWORD *)(v7 + 20) = 0;
          *(_DWORD *)(v7 + 24) = 0;
          *(_QWORD *)v7 = 0x4C554343534552LL;
          *(_DWORD *)(v7 + 12) = 10;
          *(_DWORD *)(v7 + 16) = 512;
          v8 = (unsigned int)sub_18010D1BC((int)Src, v6, (__int64)v11) || NtCurrentTeb()->LastErrorValue != 2;
          *(_DWORD *)(Heap + 32) = v8;
          v9 = sub_180003048(Src);
          *(_QWORD *)(Heap + 40) = v9;
          if ( v9 )
          {
            *(_QWORD *)(Heap + 56) = 0LL;
            result = Heap;
            *(_DWORD *)(Heap + 48) = 0;
            return result;
          }
        }
      }
    }
    goto LABEL_13;
  }
  return 0LL;
}
