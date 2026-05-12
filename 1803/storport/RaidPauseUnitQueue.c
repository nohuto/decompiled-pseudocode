/*
 * XREFs of RaidPauseUnitQueue @ 0x1C00039F8
 * Callers:
 *     StorPortPauseDevice @ 0x1C0003880 (StorPortPauseDevice.c)
 *     StorPortCompleteRequest @ 0x1C0030010 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUp @ 0x1C0034AD0 (RaUnitRequestPowerUp.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseUnitQueue(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 428));
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_BYTE *)(v2 + 56);
  else
    v3 = -1;
  result = qword_1C0056210;
  if ( (qword_1C0056210 & 0x200) != 0 )
    return DbgLogRequest(
             *(_QWORD *)(a1 + 24),
             4,
             (_DWORD)retaddr,
             (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88)) | (((unsigned __int8)*(_DWORD *)(a1 + 88) | (v3 << 8)) << 8)) << 8),
             *(int *)(a1 + 428),
             0LL,
             0LL);
  return result;
}
