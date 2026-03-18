/*
 * XREFs of FreeTPFrame @ 0x1C01A686C
 * Callers:
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     CleanupTPFrameList @ 0x1C01A6320 (CleanupTPFrameList.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     FreePointerRawDataList @ 0x1C01A6828 (FreePointerRawDataList.c)
 */

__int64 __fastcall FreeTPFrame(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 **v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8

  v4 = *a1;
  if ( *(__int64 **)(v4 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
    __fastfail(3u);
  *v5 = (__int64 *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = a1[11];
  if ( v6 )
    Win32FreePool(v6, a2, a3);
  v7 = a1[12];
  if ( v7 )
    Win32FreePool(v7, a2, a3);
  HMAssignmentUnlock(a1 + 13);
  FreePointerRawDataList(a1[10], v8, v9);
  return Win32FreePool(a1, v10, v11);
}
