/*
 * XREFs of ResCSegmentPopulate @ 0x18008E2BC
 * Callers:
 *     ResCSegmentCreateAndPopulate @ 0x18008E23C (ResCSegmentCreateAndPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall ResCSegmentPopulate(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  LONG v8; // ecx
  int v9; // ecx

  v3 = 0;
  if ( a3 - 1 <= 0x105E
    || *(_QWORD *)a2 != 0x47455343534552LL
    || *(_DWORD *)(a2 + 8) != 1
    || (v5 = *(_DWORD *)(a2 + 28), v5 > *(_DWORD *)(a2 + 32)) )
  {
    v8 = 13;
LABEL_16:
    RtlSetLastWin32Error(v8);
    return v3;
  }
  if ( a3 )
  {
    v6 = 4192;
    if ( *(_DWORD *)(a2 + 76) )
    {
      v9 = *(_DWORD *)(a2 + 84);
      if ( v9 )
        v6 = *(_DWORD *)(a2 + 4LL * (unsigned int)(v9 - 1) + 92) + *(_DWORD *)(a2 + 88) + 4192;
    }
    else
    {
      v6 = v5 + 4192;
    }
    if ( a3 < v6 )
    {
      v8 = 24;
      goto LABEL_16;
    }
  }
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a2 + 4192;
  if ( !*(_DWORD *)(a2 + 76) )
    return 1;
  return v3;
}
