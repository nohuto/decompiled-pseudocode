/*
 * XREFs of RiGetEnqueueReason @ 0x1C0009F58
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C0007A90 (RaidInsertDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C0009E90 (RiNormalizeDeviceQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C000A030 (RiPeekDeviceQueue.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, char a3)
{
  int v3; // r10d
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rax
  char v8; // al
  int v10; // eax

  LOBYTE(v3) = 0;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 32) )
    return 1LL;
  v5 = a3 == 0;
  v6 = *(unsigned int *)(a1 + 76);
  if ( !v5 )
  {
    if ( (int)v6 <= *(_DWORD *)(a1 + 4) )
      goto LABEL_4;
    return 1LL;
  }
  if ( (int)v6 >= *(_DWORD *)(a1 + 4) )
    return 1LL;
LABEL_4:
  if ( *(_BYTE *)(a1 + 37) && (*(_BYTE *)(a2 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(a1 + 36) && (*(_BYTE *)(a2 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(a1 + 28) > 0 )
    return 4LL;
  if ( *(_BYTE *)(a1 + 38) )
    return 5LL;
  if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 16) )
    goto LABEL_11;
  v7 = RiPeekDeviceQueue(a1, a2, v6, a2);
  if ( v4 == v7 )
    goto LABEL_11;
  v5 = (*(_BYTE *)(v7 + 22) & 1) == 0;
  v10 = v3;
  if ( !v5 )
    LOBYTE(v10) = (*(_BYTE *)(v4 + 22) & 6) == 0;
  if ( v10 )
    return 6LL;
LABEL_11:
  v8 = *(_BYTE *)(v4 + 22);
  if ( (v8 & 1) != 0 && (int)v6 >= 1 )
    return 7LL;
  if ( *(_BYTE *)(a1 + 39) == (_BYTE)v3 || (v8 & 8) != 0 )
    return (v8 & 0x10) != 0 ? 9 : 0;
  return 8LL;
}
