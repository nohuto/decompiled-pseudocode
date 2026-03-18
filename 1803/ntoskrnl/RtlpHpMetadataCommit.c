/*
 * XREFs of RtlpHpMetadataCommit @ 0x140295C40
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1402953E0 (RtlpHpHeapExtendContext.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x140295D90 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpSegDescriptorValidate @ 0x140297D48 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x140298980 (RtlpHpSegPageRangeCommit.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14029D380 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  int v6; // esi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 *v10; // r9
  _QWORD *v11; // r14
  __int64 HeapManager; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v17 = *a4;
  v6 = a2;
  v7 = 0;
  v11 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v17, a2, a3, a4);
  if ( !(_WORD)a1 )
  {
    v17 = *v10;
    HeapManager = RtlpHpEnvGetHeapManager(&v17, v8, v9, v10);
    v13 = RtlCSparseBitmapBitmaskRead(
            HeapManager + 8,
            2 * ((unsigned __int64)(a1 - *(_QWORD *)(HeapManager + 72)) >> 20));
    v7 = 2;
    if ( v13 )
      v7 = v13 - 1;
  }
  v14 = *v11 + 120LL * v7;
  v15 = RtlpHpSegDescriptorValidate(v14 + 112, a1);
  return RtlpHpSegPageRangeCommit(v14 + 112, v15, (unsigned int)(v6 - a1) >> 12, (unsigned int)(a3 >> 12));
}
