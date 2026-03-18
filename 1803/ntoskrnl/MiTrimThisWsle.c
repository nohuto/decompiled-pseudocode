/*
 * XREFs of MiTrimThisWsle @ 0x14012ABC0
 * Callers:
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiTrimPteWorker @ 0x14025A4D0 (MiTrimPteWorker.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4, char a5, _DWORD *a6)
{
  unsigned __int64 v7; // r11
  int v9; // r10d
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int8 v12; // cl
  unsigned int v13; // r8d
  unsigned int v14; // r10d
  char v15; // al
  unsigned __int8 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  char v20; // r8^7
  __int64 v21; // rdx

  v7 = a2;
  if ( a6 )
    *a6 = 0;
  v9 = *a4;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8 * ((v10 >> 3) & 0x1FF));
        v20 = HIBYTE(*(_QWORD *)v10);
        if ( (v19 & 0x20) == 0 )
          v20 = HIBYTE(v11);
        HIBYTE(v11) = v20;
        if ( (v19 & 0x42) != 0 )
          HIBYTE(v11) = v20;
      }
    }
    v12 = HIBYTE(v11) & 0xF;
  }
  else
  {
    v12 = (*(_BYTE *)(48
                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x58000000000LL) >> 1) & 7;
  }
  v13 = v12;
  if ( (v9 & 0x60) != 0 )
  {
    if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_11;
    if ( (v9 & 0x20) == 0
      || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
      || (v21 = *(_QWORD *)(a3 + 8), v21 < 0) && !MiLocateCloneAddress(a1 - 1280, v21 | 0x8000000000000000uLL) )
    {
      if ( (v9 & 0x40) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0 )
        goto LABEL_11;
    }
  }
  else
  {
    v14 = v9 & 0xF;
    if ( v14 )
    {
      v15 = *(_BYTE *)(a3 + 35);
      if ( (v15 & 8) != 0 || (v15 & 7u) >= 5 )
      {
        if ( v12 < v14 )
          goto LABEL_11;
        if ( (a5 & 1) != 0 )
        {
          if ( *((_QWORD *)a4 + 30) && v7 <= 0x7FFFFFFEFFFFLL && a6 )
          {
            *a6 = 1;
            return 0LL;
          }
LABEL_11:
          if ( (a5 & 1) == 0 || v7 <= 0x7FFFFFFEFFFFLL && (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 584) && a6 )
          {
            if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a3 + 32) != 1
              || v13 >= 6
              || (unsigned int)MiGetPfnPriority(a3) >= 5 )
            {
              return 0LL;
            }
            v17 = 6;
          }
          else
          {
            if ( v13 - 1 > 5 )
              return 0LL;
            v17 = 0;
          }
          MiSetVaAge(a1, v7, v17);
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
