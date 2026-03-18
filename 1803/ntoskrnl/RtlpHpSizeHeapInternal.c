/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x140295F94
 * Callers:
 *     RtlpHpExtrasGet @ 0x140294918 (RtlpHpExtrasGet.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x140295EF0 (RtlpHpSizeHeap.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x140297D48 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegSizeInternal @ 0x140299294 (RtlpHpSegSizeInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14029D380 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x14029E67C (RtlpHpLargeAllocSize.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 HeapManager; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  char *v13; // rdi
  __int64 v14; // rax
  int v15; // r9d
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v5 = a3;
  if ( (_WORD)a2 )
  {
    v11 = 0;
  }
  else
  {
    v16 = *a1;
    HeapManager = RtlpHpEnvGetHeapManager(&v16, a2, a3, a4);
    v10 = RtlCSparseBitmapBitmaskRead(
            HeapManager + 8,
            2 * ((unsigned __int64)(v9 - *(_QWORD *)(HeapManager + 72)) >> 20));
    if ( !v10 )
      return RtlpHpLargeAllocSize(a1, a2, v5, a4);
    v11 = v10 - 1;
  }
  if ( v11 == 2 )
    return RtlpHpLargeAllocSize(a1, a2, v5, a4);
  v13 = (char *)a1 + 120 * v11;
  v14 = RtlpHpSegDescriptorValidate(v13 + 112, a2);
  if ( v14 )
    return RtlpHpSegSizeInternal((int)v13 + 112, v14, a2, v15, a4);
  else
    return -1LL;
}
