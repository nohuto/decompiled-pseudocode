/*
 * XREFs of PopEtProcessSnapshotFind @ 0x1406D2FD4
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1406D30EC (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEtProcessSnapshotFind(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  unsigned int v3; // esi
  __int64 v4; // r11
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0LL;
  v3 = *(_DWORD *)(v1 + 68);
  v4 = *(_QWORD *)a1 & (-1LL << (*(_BYTE *)(v1 + 68) & 0x1F));
  if ( v3 < 0x20 )
    goto LABEL_11;
  v5 = *(_QWORD *)(v1 + 72)
     + 8LL
     * ((37
       * (BYTE6(v4)
        + 37
        * (BYTE5(v4)
         + 37
         * (BYTE4(v4) + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
       + HIBYTE(v4)) & ((v3 >> 5) - 1));
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( (v5 & 1) != 0 )
      break;
    if ( v4 == ((-1LL << (*(_BYTE *)(v1 + 68) & 0x1F)) & *(_QWORD *)(v5 + 8)) )
      goto LABEL_7;
  }
  v5 = 0LL;
LABEL_7:
  if ( v5 )
    return v5;
LABEL_11:
  if ( (*(_DWORD *)(v1 + 548) & 1) == 0
    && *(_DWORD *)(a1 + 16) != 1
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1832LL) + 380LL) > 1u )
  {
    ++*(_DWORD *)(v1 + 520);
  }
  return v2;
}
