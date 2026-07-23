/*
 * XREFs of sub_180094C58 @ 0x180094C58
 * Callers:
 *     sub_18010D87C @ 0x18010D87C (sub_18010D87C.c)
 *     sub_18010DD48 @ 0x18010DD48 (sub_18010DD48.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18010B820 @ 0x18010B820 (sub_18010B820.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 *     sub_18010DDF0 @ 0x18010DDF0 (sub_18010DDF0.c)
 */

__int64 __fastcall sub_180094C58(__int64 a1, __int64 a2, int a3, wchar_t *a4)
{
  int v4; // edi
  const wchar_t *v7; // r15
  const wchar_t *v8; // r12
  int v9; // ebx
  PVOID Heap; // rax
  void *v12; // r13
  PVOID v13; // rax

  v4 = a2 & 0xFF00;
  v7 = 0LL;
  v8 = 0LL;
  v9 = -2147467259;
  if ( !a4 )
    return 0LL;
  if ( a3 < 0 )
    return sub_18010D960(a1, a2, a4);
  if ( (unsigned __int8)a2 != 1 )
  {
    switch ( (unsigned __int8)a2 )
    {
      case 4u:
        if ( ((v4 - 256) & 0xFFFFFBFF) != 0 && v4 != 512 && v4 != 768 && v4 != 1024 )
          goto LABEL_50;
        break;
      case 5u:
        v7 = L"Segment";
        v8 = L"Segment";
        goto LABEL_50;
      case 6u:
        v7 = L"Segment";
        goto LABEL_50;
      case 0xBu:
        if ( v4 != 256 )
          goto LABEL_51;
        break;
      default:
        if ( (unsigned __int8)a2 != 14 || ((v4 - 256) & 0xFFFFFBFF) != 0 && v4 != 512 )
          goto LABEL_50;
        break;
    }
    goto LABEL_5;
  }
  if ( ((v4 - 256) & 0xFFFFFBFF) == 0 )
  {
LABEL_5:
    v9 = sub_18010B820(a4);
    goto LABEL_6;
  }
  if ( v4 == 768 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    v12 = Heap;
    if ( Heap )
    {
      if ( !(unsigned int)sub_18010DDF0(a1, Heap) )
      {
LABEL_17:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
        return 0LL;
      }
LABEL_19:
      v9 = sub_18010B820(a4);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
LABEL_6:
      if ( v9 >= 0 )
      {
LABEL_7:
        a4[259] = 0;
        return v9 >= 0;
      }
LABEL_50:
      if ( v4 == 256 )
      {
        if ( !v7 )
          goto LABEL_7;
        goto LABEL_9;
      }
LABEL_51:
      switch ( v4 )
      {
        case 512:
          if ( !v8 )
            goto LABEL_7;
          break;
        case 768:
          if ( !v8 )
            goto LABEL_7;
          break;
        case 1024:
          if ( !v8 )
            goto LABEL_7;
          break;
        default:
          if ( v4 != 1280 || !v7 )
            goto LABEL_7;
          break;
      }
LABEL_9:
      v9 = sub_18010B820(a4);
      goto LABEL_7;
    }
  }
  else
  {
    if ( v4 != 1024 )
      goto LABEL_50;
    v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    v12 = v13;
    if ( v13 )
    {
      if ( !(unsigned int)sub_18010DDF0(a1, v13) )
        goto LABEL_17;
      goto LABEL_19;
    }
  }
  return 0LL;
}
