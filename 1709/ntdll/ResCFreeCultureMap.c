/*
 * XREFs of ResCFreeCultureMap @ 0x180111554
 * Callers:
 *     ResCCloseRuntimeView @ 0x18010BA90 (ResCCloseRuntimeView.c)
 *     ResCCreateCultureMap @ 0x1801112C4 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1801116E4 (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x180111780 (ResCReloadCultureMap.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCFreeCultureMap(unsigned __int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  __int64 v6; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      v5 = *(_QWORD *)(a1 + 24);
      if ( v5 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        ResUnmapViewOfFile(v6);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return 1LL;
}
