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

__int64 __fastcall sub_18010C1E0(const WCHAR *a1)
{
  char *v1; // rbx
  void *v2; // rdi
  __int64 v3; // rax
  LONG v4; // ecx
  PVOID Heap; // rax
  int v6; // esi
  __int64 v7; // rsi
  SIZE_T Size; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  Size = 0LL;
  if ( !a1 )
  {
    v4 = 87;
    goto LABEL_12;
  }
  v3 = sub_18010C428(a1);
  v1 = (char *)v3;
  if ( v3 == -1 || !(unsigned int)sub_18010D3AC(v3, &Size) )
    goto LABEL_13;
  if ( HIDWORD(Size) )
    goto LABEL_5;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
  v2 = Heap;
  if ( !Heap )
    goto LABEL_13;
  v6 = Size;
  if ( !(unsigned int)sub_18010D57C(v1, Heap, Size) )
    goto LABEL_13;
  if ( v6 )
  {
LABEL_5:
    v4 = 536937216;
LABEL_12:
    RtlSetLastWin32Error(v4);
    goto LABEL_13;
  }
  v7 = sub_18010DFF0(v2, 0LL, 0LL);
  if ( v7 )
  {
    sub_18010C390(v1);
    return v7;
  }
LABEL_13:
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_18010C390(v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  return 0LL;
}
