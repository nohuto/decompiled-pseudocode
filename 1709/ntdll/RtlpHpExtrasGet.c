/*
 * XREFs of RtlpHpExtrasGet @ 0x180049278
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlpHpGetUserInfo @ 0x1800779A0 (RtlpHpGetUserInfo.c)
 *     RtlSetUserValueHeap @ 0x180077A10 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF5E0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x18004662C (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180048670 (RtlpHpSegDescriptorValidate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v4; // rbx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v17; // rax
  int v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( (_WORD)a2 )
  {
    v9 = 0;
  }
  else
  {
    v17 = RtlCSparseBitmapBitmaskRead(a1, 2 * (a2 >> 20));
    if ( !v17 )
      goto LABEL_17;
    v9 = v17 - 1;
  }
  if ( v9 == 2 )
  {
LABEL_17:
    v13 = RtlpHpLargeAllocSize(a1, a2, a3, &v18);
    goto LABEL_6;
  }
  v10 = 104LL * v9 + a1;
  v11 = RtlpHpSegDescriptorValidate(v10 + 112, a2);
  if ( !v11 )
    return -1LL;
  v13 = RtlpHpSegSizeInternal(v10 + 112, v11, a2, v12, &v18);
LABEL_6:
  if ( v13 == -1LL )
    return -1LL;
  if ( a4 )
    *a4 = v13;
  if ( v18 )
  {
    v14 = a2 + v13;
    v15 = v14 + 16;
    if ( (a3 & 0x10000000) == 0 )
      v15 = v14;
    return (v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  return v4;
}
