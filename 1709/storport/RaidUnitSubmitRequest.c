/*
 * XREFs of RaidUnitSubmitRequest @ 0x1C001B394
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C001B454 (IsUntaggedRequest.c)
 */

__int64 __fastcall RaidUnitSubmitRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int8 v6; // al
  unsigned int v7; // edi
  unsigned int v8; // esi
  int v9; // r9d

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v4 + 8);
  *(_BYTE *)(v4 + 3) |= 1u;
  *(_BYTE *)(v5 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  v6 = *(_BYTE *)(v5 + 2);
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    v7 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 12);
    v8 = v6;
  }
  if ( (qword_1C0056210 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (unsigned int)IsUntaggedRequest(v7, v8) )
    v9 |= 1u;
  RaidStartIoPacket(a1, a2, v9);
  return 259LL;
}
