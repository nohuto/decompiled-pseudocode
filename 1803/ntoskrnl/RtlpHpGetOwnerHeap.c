/*
 * XREFs of RtlpHpGetOwnerHeap @ 0x140294C68
 * Callers:
 *     ExGetHeapFromVA @ 0x1402BD6B4 (ExGetHeapFromVA.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x140296D6C (RtlpHpVaMgrCtxQuery.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14029D380 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

unsigned __int64 __fastcall RtlpHpGetOwnerHeap(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 HeapManager; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+50h] [rbp+8h]
  int v14; // [rsp+54h] [rbp+Ch]

  v4 = 0;
  if ( !(_WORD)a1 )
  {
    v11 = *a2;
    HeapManager = RtlpHpEnvGetHeapManager(&v11, a2, a3, a4);
    v8 = RtlCSparseBitmapBitmaskRead(
           HeapManager + 8,
           2 * ((unsigned __int64)(a1 - *(_QWORD *)(HeapManager + 72)) >> 20));
    if ( !v8 )
    {
LABEL_5:
      v11 = *a2;
      v9 = RtlpHpEnvGetHeapManager(&v11, a2, a3, a4);
      RtlpHpVaMgrCtxQuery(v9 + 80, a1, &v11);
      return v12;
    }
    v4 = v8 - 1;
  }
  if ( v4 == 2 )
    goto LABEL_5;
  v13 = 0x100000;
  v14 = 0x1000000;
  return (a1 & ~((unsigned int)*(&v13 + v4) - 1LL) ^ RtlpHpHeapGlobals ^ *(_QWORD *)((a1 & ~((unsigned int)*(&v13 + v4)
                                                                                           - 1LL))
                                                                                   + 0x10) ^ 0xA2E64EADA2E64EADuLL)
       - 120LL * v4
       - 112;
}
