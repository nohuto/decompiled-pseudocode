/*
 * XREFs of FreeTPFrame @ 0x1C01992F8
 * Callers:
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     CleanupTPFrameList @ 0x1C019A6F0 (CleanupTPFrameList.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     FreePointerRawDataList @ 0x1C019ABBC (FreePointerRawDataList.c)
 */

__int64 __fastcall FreeTPFrame(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *a1;
  v3 = (__int64 **)a1[1];
  if ( *(__int64 **)(v2 + 8) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = a1[11];
  if ( v4 )
    Win32FreePool(v4);
  v5 = a1[12];
  if ( v5 )
    Win32FreePool(v5);
  HMAssignmentUnlock(a1 + 13);
  FreePointerRawDataList(a1[10]);
  return Win32FreePool(a1);
}
