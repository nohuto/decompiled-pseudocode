/*
 * XREFs of MiTrimThisWsle @ 0x1400110FC
 * Callers:
 *     MiTrimPteWorker @ 0x140011034 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiTrimThisWsle(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int *a6)
{
  __int64 v8; // rdx
  unsigned int VaAge; // ebp
  char v10; // r10
  __int64 v11; // r11
  unsigned int v12; // r8d
  __int64 v13; // r9
  unsigned int v14; // r10d
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rdx

  if ( a6 )
    *a6 = 0;
  VaAge = (unsigned __int8)MiGetVaAge(a1, a2);
  v12 = 1;
  if ( (v10 & 0x60) != 0 )
  {
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
    {
      v17 = 1024;
      if ( (v10 & 0x20) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) == 0 )
      {
        v18 = *(_QWORD *)(v11 + 8);
        if ( v18 >= 0 || MiLocateCloneAddress(a1 - 1280, v18 | 0x8000000000000000uLL, 1LL, 1024LL) )
          return v12;
      }
      if ( (v10 & 0x40) != 0 && (*(_DWORD *)(v11 + 16) & v17) != 0 )
        return v12;
    }
LABEL_7:
    if ( ((unsigned __int8)v12 & a5) == 0
      || a2 <= 0x7FFFFFFEFFFFLL && (*(_BYTE *)(a1 + 192) & 7) == 0 && *(_QWORD *)(a1 + 584) && a6 )
    {
      if ( (*(_BYTE *)(a1 + 192) & 7) != 0 && *(_WORD *)(v11 + 32) != (_WORD)v12
        || VaAge >= 6
        || (unsigned int)MiGetPfnPriority(v11, v8) >= 5 )
      {
        return 0LL;
      }
      LOBYTE(v16) = 6;
    }
    else
    {
      if ( VaAge - 1 > 5 )
        return 0LL;
      v16 = 0LL;
    }
    MiSetVaAge(a1, a2, v16);
    return 0LL;
  }
  if ( (v10 & 0xF) != 0 && (unsigned int)MiGetPfnPriority(v11, v8) >= 5 )
  {
    if ( VaAge < v14 )
      goto LABEL_7;
    if ( ((unsigned __int8)v12 & a5) != 0 )
    {
      if ( *(_QWORD *)(v13 + 240) && a2 <= 0x7FFFFFFEFFFFLL && a6 )
      {
        *a6 = v12;
        return 0LL;
      }
      goto LABEL_7;
    }
  }
  return v12;
}
