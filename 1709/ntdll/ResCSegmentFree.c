/*
 * XREFs of ResCSegmentFree @ 0x18010C978
 * Callers:
 *     ResCCloseRuntimeView @ 0x18010BA90 (ResCCloseRuntimeView.c)
 *     ResCRuntimeUnmapSegment @ 0x18010C0C4 (ResCRuntimeUnmapSegment.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCSegmentFree(_QWORD *a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v4; // r8
  bool v5; // zf
  void *ProcessHeap; // rcx

  if ( !a1 )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = a1[4];
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    v5 = (*(_BYTE *)a1 & 4) == 0;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v5 )
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, v4);
      v4 = a1[5];
      if ( !v4 )
        goto LABEL_17;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v4);
    goto LABEL_17;
  }
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v2 = 50;
    goto LABEL_3;
  }
  ResUnmapViewOfFile(a1[4]);
  if ( a1[1] )
    ResCloseHandle();
  if ( a1[2] )
    ResCloseHandle();
LABEL_17:
  memset(a1, 0, 0x30uLL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  return 1LL;
}
