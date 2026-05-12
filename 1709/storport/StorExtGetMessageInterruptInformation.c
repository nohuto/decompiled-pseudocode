/*
 * XREFs of StorExtGetMessageInterruptInformation @ 0x1C0033810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall StorExtGetMessageInterruptInformation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int8 *v6; // rdx

  v3 = a2;
  v4 = **(_QWORD **)(a1 - 16);
  if ( !v4 )
    return 0;
  if ( !*(_BYTE *)(v4 + 4449) )
    return 0;
  v6 = *(unsigned __int8 **)(v4 + 4432);
  if ( (unsigned int)v3 >= *((_DWORD *)v6 + 1) )
    return 0;
  *(_DWORD *)a3 = v3;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)&v6[48 * v3 + 32];
  *(_QWORD *)(a3 + 8) = *(_QWORD *)&v6[48 * v3 + 8];
  *(_DWORD *)(a3 + 16) = *(_DWORD *)&v6[48 * v3 + 36];
  *(_DWORD *)(a3 + 20) = *v6;
  *(_DWORD *)(a3 + 24) = *(_DWORD *)&v6[48 * v3 + 44];
  return 1;
}
