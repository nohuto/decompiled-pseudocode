/*
 * XREFs of NVMeHwUnitControl @ 0x1C0001FB0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0005200 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000C27C (NVMeGetRichDeviceDescription.c)
 */

_BOOL8 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( !a2 )
  {
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( *(_DWORD *)a3 > 1u )
      *(_BYTE *)(a3 + 5) = 1;
    if ( *(_DWORD *)a3 > 2u )
      *(_BYTE *)(a3 + 6) = 1;
    if ( *(_DWORD *)a3 > 3u )
      *(_BYTE *)(a3 + 7) = 1;
    if ( *(_DWORD *)a3 > 9u )
      *(_BYTE *)(a3 + 13) = 1;
    if ( *(_DWORD *)a3 > 0xAu )
      *(_BYTE *)(a3 + 14) = 1;
    if ( *(_DWORD *)a3 > 0xBu )
      *(_BYTE *)(a3 + 15) = 1;
    return 0;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    if ( *(_DWORD *)(a3 + 8) == 2 )
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFBF | (*(_BYTE *)(a3 + 12) != 0 ? 0x40 : 0);
    return 0;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v14 = *(unsigned __int8 *)(a3 + 10);
    return (unsigned int)v14 >= *(_DWORD *)(a1 + 148) || !*(_QWORD *)(a1 + 8 * v14 + 1184);
  }
  v6 = v5 - 1;
  if ( !v6 )
    return 0;
  v7 = v6 - 6;
  if ( !v7 )
  {
    v13 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1184);
    if ( v13 )
      *(_DWORD *)(v13 + 20) |= 4u;
    return 0;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1184);
    if ( v10 )
      *(_DWORD *)(v10 + 20) |= 4u;
    v11 = 0;
    v12 = *(unsigned __int8 *)(a3 + 10);
    while ( v11 < *(unsigned __int16 *)(a1 + 232) )
      NVMeCompleteSubmissionQueueRequests(
        a1,
        *(_DWORD *)(a1 + 544) + 136 * v11++,
        *(unsigned __int16 *)(a1 + 230),
        v12,
        0,
        0,
        8);
    NVMeCompleteSubmissionQueueRequests(a1, a1 + 240, *(unsigned __int16 *)(a1 + 228), v12, 0, 1, 8);
    return 0;
  }
  if ( v8 != 1 )
    return 1;
  return NVMeGetRichDeviceDescription(a1, a3) != 0;
}
