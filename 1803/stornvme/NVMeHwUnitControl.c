/*
 * XREFs of NVMeHwUnitControl @ 0x1C0001F00
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0005284 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000C688 (NVMeGetRichDeviceDescription.c)
 */

_BOOL8 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax

  if ( !a2 )
  {
    v16 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( v16 > 1 )
    {
      *(_BYTE *)(a3 + 5) = 1;
      v16 = *(_DWORD *)a3;
    }
    if ( v16 > 2 )
    {
      *(_BYTE *)(a3 + 6) = 1;
      v16 = *(_DWORD *)a3;
    }
    if ( v16 > 3 )
    {
      *(_BYTE *)(a3 + 7) = 1;
      v16 = *(_DWORD *)a3;
    }
    if ( v16 > 9 )
    {
      *(_BYTE *)(a3 + 13) = 1;
      v16 = *(_DWORD *)a3;
    }
    if ( v16 > 0xA )
    {
      *(_BYTE *)(a3 + 14) = 1;
      v16 = *(_DWORD *)a3;
    }
    if ( v16 > 0xB )
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
    v15 = *(unsigned __int8 *)(a3 + 10);
    return (unsigned int)v15 >= *(_DWORD *)(a1 + 156) || !*(_QWORD *)(a1 + 8 * v15 + 1224);
  }
  v6 = v5 - 1;
  if ( !v6 )
    return 0;
  v7 = v6 - 6;
  if ( !v7 )
  {
    v14 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1224);
    if ( v14 )
      *(_DWORD *)(v14 + 20) |= 4u;
    return 0;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *(unsigned __int8 *)(a3 + 10);
    v11 = *(_QWORD *)(a1 + 8 * v10 + 1224);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 20) |= 4u;
      LOBYTE(v10) = *(_BYTE *)(a3 + 10);
    }
    v12 = 0;
    v13 = (unsigned __int8)v10;
    while ( v12 < *(unsigned __int16 *)(a1 + 240) )
      NVMeCompleteSubmissionQueueRequests(
        a1,
        *(_DWORD *)(a1 + 552) + 136 * v12++,
        *(unsigned __int16 *)(a1 + 238),
        v13,
        0,
        0,
        8);
    NVMeCompleteSubmissionQueueRequests(a1, a1 + 248, *(unsigned __int16 *)(a1 + 236), v13, 0, 1, 8);
    return 0;
  }
  if ( v8 != 1 )
    return 1;
  return NVMeGetRichDeviceDescription(a1, a3) != 0;
}
