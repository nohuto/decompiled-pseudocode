/*
 * XREFs of DpiPdoHandleQueryCapabilities @ 0x1C0121AD0
 * Callers:
 *     <none>
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 */

__int64 __fastcall DpiPdoHandleQueryCapabilities(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // rdx
  int v5; // r11d
  unsigned int v6; // r8d
  int v7; // r8d
  unsigned int v8; // r8d
  int v9; // eax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v5 = 1;
  if ( *(_WORD *)(v4 + 2) == 1 && *(_WORD *)v4 >= 0x40u )
  {
    *(_DWORD *)(v4 + 4) &= 0xFFFFC3FC;
    *(_DWORD *)(v4 + 20) = 1;
    *(_DWORD *)(v4 + 24) = 1;
    *(_QWORD *)(v4 + 28) = 0x400000004LL;
    *(_QWORD *)(v4 + 36) = 0x400000004LL;
    v6 = *(_DWORD *)(v4 + 4) & 0xFFFFBFB7;
    *(_QWORD *)(v4 + 44) = 0LL;
    v7 = v6 | 0x280;
    *(_QWORD *)(v4 + 52) = 0LL;
    *(_DWORD *)(v4 + 4) = v7;
    *(_DWORD *)(v4 + 60) = 0;
    if ( *(_DWORD *)(v3 + 496) != 1 || IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)(v3 + 936) + 4LL)) )
      v8 = v7 & 0xFFFFFFEF;
    else
      v8 = v7 | 0x10;
    *(_DWORD *)(v4 + 4) = v8;
    if ( *(_DWORD *)(v3 + 496) == v5 )
      *(_DWORD *)(v4 + 4) |= 0x100u;
    else
      *(_DWORD *)(v4 + 4) = *(_DWORD *)(v4 + 4) & 0xFFFFFEFF | (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL)
                                                                          + 1104LL) != 2
                                                              ? 0x100
                                                              : 0);
    v9 = *(_DWORD *)(v3 + 500);
    if ( !v9 )
      v9 = *(_DWORD *)(v3 + 504);
    *(_DWORD *)(v4 + 8) = v9;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
