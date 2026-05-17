/*
 * XREFs of ResCHitsFree @ 0x18010C818
 * Callers:
 *     ResCCloseRuntimeView @ 0x18010BA90 (ResCCloseRuntimeView.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     _ResCFlushMappedView @ 0x18010F194 (_ResCFlushMappedView.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCHitsFree(_QWORD *a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v4; // r8
  int v5; // eax
  void *ProcessHeap; // rcx

  if ( !a1 )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = a1[3];
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  v5 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( (v5 & 4) != 0 )
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, v4);
      v4 = a1[4];
      if ( !v4 )
        goto LABEL_21;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v4);
    goto LABEL_21;
  }
  if ( (v5 & 4) != 0 )
  {
    v2 = 50;
    goto LABEL_3;
  }
  if ( (v5 & 2) == 0 )
  {
    if ( (v5 & 3) == 3 )
      ResCFlushMappedView(a1[3]);
    else
      RtlSetLastWin32Error(0x32u);
  }
  ResUnmapViewOfFile(a1[3]);
  if ( a1[1] )
    ResCloseHandle();
  if ( a1[2] )
    ResCloseHandle();
LABEL_21:
  memset(a1, 0, 0x28uLL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  return 1LL;
}
