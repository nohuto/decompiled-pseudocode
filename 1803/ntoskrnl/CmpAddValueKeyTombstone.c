/*
 * XREFs of CmpAddValueKeyTombstone @ 0x1406F2834
 * Callers:
 *     CmpSetValueKeyTombstone @ 0x1406F31B8 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCopyName @ 0x1405157EC (CmpCopyName.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpNameSize @ 0x140560BD4 (CmpNameSize.c)
 */

__int64 __fastcall CmpAddValueKeyTombstone(ULONG_PTR a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r11d
  unsigned int Cell; // esi
  size_t v8; // r8
  _WORD *v9; // rbx
  unsigned __int16 v10; // ax
  void *v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0xFFFFFFFFLL;
  v4 = (unsigned __int16)CmpNameSize(a2) + 20;
  Cell = HvAllocateCell(a1, v4, v5, (__int64)&v11, (__int64)&v12);
  if ( Cell == -1 )
    return 0xFFFFFFFFLL;
  v8 = v4;
  v9 = v11;
  memset(v11, 0, v8);
  *v9 = 27510;
  v9[8] = 2;
  *((_DWORD *)v9 + 1) = 0;
  *((_DWORD *)v9 + 2) = -1;
  *((_DWORD *)v9 + 3) = 0;
  v10 = CmpCopyName((_BYTE *)v9 + 20, (const void **)a2);
  v9[1] = v10;
  if ( v10 < *a2 )
    v9[8] |= 1u;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v12);
  return Cell;
}
