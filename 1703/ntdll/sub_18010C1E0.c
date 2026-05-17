/*
 * XREFs of sub_18010C1E0 @ 0x18010C1E0
 * Callers:
 *     sub_18010E294 @ 0x18010E294 (sub_18010E294.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 *     sub_18010D3AC @ 0x18010D3AC (sub_18010D3AC.c)
 *     sub_18010D57C @ 0x18010D57C (sub_18010D57C.c)
 *     sub_18010DFF0 @ 0x18010DFF0 (sub_18010DFF0.c)
 */

__int64 __fastcall sub_18010C1E0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 Heap; // rax
  unsigned int v7; // esi
  __int64 v8; // rsi
  int v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+64h] [rbp+1Ch]

  v10 = a2;
  v2 = 0LL;
  v3 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( !a1 )
  {
    v5 = 87;
    goto LABEL_12;
  }
  v4 = sub_18010C428(a1, 0x80000000LL, 1LL);
  v2 = v4;
  if ( v4 == -1 || !(unsigned int)sub_18010D3AC(v4, &v11) )
    goto LABEL_13;
  if ( v12 )
    goto LABEL_5;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  v3 = Heap;
  if ( !Heap )
    goto LABEL_13;
  v7 = v11;
  v10 = 0;
  if ( !(unsigned int)sub_18010D57C(v2, Heap, v11, &v10) )
    goto LABEL_13;
  if ( v10 != v7 )
  {
LABEL_5:
    v5 = 536937216;
LABEL_12:
    RtlSetLastWin32Error(v5);
    goto LABEL_13;
  }
  v8 = sub_18010DFF0(v3, v7, 0LL);
  if ( v8 )
  {
    sub_18010C390(v2);
    return v8;
  }
LABEL_13:
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_18010C390(v2);
  if ( v3 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  return 0LL;
}
