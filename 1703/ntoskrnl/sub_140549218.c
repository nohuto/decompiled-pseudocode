/*
 * XREFs of sub_140549218 @ 0x140549218
 * Callers:
 *     WbInPlaceEncryptionUnloadModule @ 0x140451400 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1404514C4 (WbHeapExecutionUnloadModule.c)
 *     WbRemoveWarbirdProcess @ 0x1404987CC (WbRemoveWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14054801C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     sub_14053B960 @ 0x14053B960 (sub_14053B960.c)
 */

__int64 __fastcall sub_140549218(__int64 a1, __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  int v5; // ebx
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 != -1 )
    goto LABEL_4;
  v5 = sub_14053B960(a1, a2, a3, a5, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
LABEL_4:
    memmove(
      (void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(v6 * *(_DWORD *)a1)),
      (const void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)a1 * (v6 + 1))),
      (unsigned int)(*(_DWORD *)a1 * (*(_DWORD *)(a1 + 4) - v6 - 1)));
    --*(_DWORD *)(a1 + 4);
  }
  return (unsigned int)v5;
}
