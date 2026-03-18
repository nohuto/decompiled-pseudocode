/*
 * XREFs of FsRtlpDoBoost @ 0x140127320
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x140127258 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 */

void __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, void *a5)
{
  bool v5; // bl
  unsigned __int8 v9; // cl
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned __int8 v12; // cl

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1744) & 0xE00u) < 0x400 )
    v5 = (*a4 & 0x20) == 0;
  v9 = *(_BYTE *)(a2 + 195);
  v10 = v9;
  if ( v9 >= 0xFu )
    v10 = 15;
  v11 = (unsigned __int8)*a3;
  if ( v11 <= v10 )
  {
    LOBYTE(v11) = v9;
    if ( v9 >= 0xFu )
      LOBYTE(v11) = 15;
  }
  *a3 = v11;
  v12 = *(_BYTE *)(a1 + 195);
  if ( v5 || (unsigned __int8)v11 > v12 )
  {
    if ( (unsigned __int8)v11 > v12 )
      KeSetPriorityBoost(a1, (unsigned __int8)v11, (__int64)a3);
    if ( v5 )
    {
      PsBoostThreadIoEx(a1, 0, 1, a5);
      *(_DWORD *)a4 |= 0x20u;
      IoBoostThreadIoPriority((KSPIN_LOCK *)a1, (*(_DWORD *)(a2 + 1744) >> 9) & 7, 0);
    }
  }
}
