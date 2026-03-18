/*
 * XREFs of FsRtlpDoBoost @ 0x1400C8BBC
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x1400C8AF4 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 */

void __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  bool v5; // bl
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int8 v12; // al

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1744) & 0xE00u) < 0x400 )
    v5 = (*a4 & 0x20) == 0;
  v9 = *(unsigned __int8 *)(a2 + 195);
  v10 = (unsigned __int8)*a3;
  v11 = 15;
  if ( (unsigned __int8)v9 < 0xFu )
    v11 = v9;
  if ( v10 <= v11 )
  {
    LOBYTE(v10) = 15;
    if ( (unsigned __int8)v9 < 0xFu )
      LOBYTE(v10) = v9;
  }
  *a3 = v10;
  v12 = *(_BYTE *)(a1 + 195);
  if ( v5 || (unsigned __int8)v10 > v12 )
  {
    if ( (unsigned __int8)v10 > v12 )
      KeSetPriorityBoost(a1, (unsigned __int8)v10);
    if ( v5 )
    {
      LOBYTE(a3) = 1;
      PsBoostThreadIoEx(a1, 0LL, a3, a5);
      *(_DWORD *)a4 |= 0x20u;
      IoBoostThreadIoPriority((KSPIN_LOCK *)a1, (*(_DWORD *)(a2 + 1744) >> 9) & 7, 0);
    }
  }
}
