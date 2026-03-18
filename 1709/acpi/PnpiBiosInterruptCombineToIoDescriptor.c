/*
 * XREFs of PnpiBiosInterruptCombineToIoDescriptor @ 0x1C00579E4
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00A5AEC (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 */

__int64 __fastcall PnpiBiosInterruptCombineToIoDescriptor(
        int a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // ebp
  unsigned int v10; // edi
  unsigned int v11; // r14d
  char *PoolWithTag; // rax
  unsigned __int8 v13; // di
  char *v14; // rbx
  _BYTE *v15; // r8
  __int16 v16; // cx
  __int64 v17; // rax
  int v18; // r8d

  v6 = *(unsigned __int8 *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 4) )
  {
    v11 = 2 * v6 + 23 + a3;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x52706341u);
    v13 = 0;
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      *v14 = -116;
      *(_WORD *)(v14 + 1) = v11 - 3;
      *(_DWORD *)(v14 + 3) = 65537;
      if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
        *(_WORD *)(v14 + 7) |= 1u;
      if ( (*(_BYTE *)(a2 + 3) & 4) != 0 )
        *(_WORD *)(v14 + 7) |= 2u;
      if ( (*(_BYTE *)(a2 + 3) & 8) != 0 )
        *(_WORD *)(v14 + 7) |= 8u;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
        *(_WORD *)(v14 + 7) |= 0x10u;
      v14[9] = 0;
      *((_WORD *)v14 + 7) = 23;
      v15 = v14 + 23;
      *(_DWORD *)(v14 + 10) = 0;
      *(_WORD *)(v14 + 21) = 0;
      v16 = 2 * v6 + 23;
      *(_WORD *)(v14 + 17) = v16;
      *(_WORD *)(v14 + 19) = v16 + a3;
      if ( (_BYTE)v6 )
      {
        do
        {
          v17 = v13++;
          *v15 = *(_BYTE *)(a2 + 4 * v17 + 5);
          v15 = v14 + 2;
        }
        while ( v13 < (unsigned __int8)v6 );
      }
      v14[16] = *(_BYTE *)((unsigned int)(2 * v6 + 7) + a2);
      memmove(&v14[*(unsigned __int16 *)(v14 + 17)], (const void *)(a2 + (unsigned int)(2 * v6 + 8)), a3);
      v10 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, (_DWORD)v14, v18, a4, a5, a6);
      ExFreePoolWithTag(v14, 0x52706341u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
