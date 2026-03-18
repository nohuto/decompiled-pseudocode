/*
 * XREFs of BmlUnPinAllPathsPartialModalityFromSource @ 0x1C01DF4FC
 * Callers:
 *     BmlUnPinSourceMode @ 0x1C01DF7DC (BmlUnPinSourceMode.c)
 * Callees:
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C01DF5A4 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlUnPinAllPathsPartialModalityFromSource(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // rax

  v3 = 0;
  if ( !*a1 )
    return 0LL;
  v6 = 104LL * a3;
  while ( 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&a1[104 * v3 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&a1[v6 + 16] + 24LL) )
    {
      v9 = BmlUnPinPartialPathModalityOnPath(a1, a2, v3);
      if ( v9 < 0 )
        break;
    }
    if ( ++v3 >= (unsigned __int8)*a1 )
      return 0LL;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v10, v11);
  v13[5] = v3;
  v13[3] = a1;
  v13[4] = a2;
  WdLogEvent5_WdWarning(v13);
  return (unsigned int)v9;
}
