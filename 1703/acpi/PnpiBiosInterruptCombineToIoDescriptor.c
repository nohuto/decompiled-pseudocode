/*
 * XREFs of PnpiBiosInterruptCombineToIoDescriptor @ 0x1C0056DF0
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00A2EA0 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
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
  unsigned int v9; // edi
  unsigned int v10; // r14d
  char *PoolWithTag; // rax
  unsigned __int8 v12; // di
  char *v13; // rbx
  _BYTE *v14; // r8
  __int16 v15; // cx
  __int64 v16; // rax
  int v17; // r8d

  v6 = *(unsigned __int8 *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 4) )
  {
    v10 = a3 + 23 + 2 * v6;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x52706341u);
    v12 = 0;
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)a3 + 23 + 2 * v6);
      *v13 = -116;
      *(_WORD *)(v13 + 1) = v10 - 3;
      *(_DWORD *)(v13 + 3) = 65537;
      if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
        *(_WORD *)(v13 + 7) |= 1u;
      if ( (*(_BYTE *)(a2 + 3) & 4) != 0 )
        *(_WORD *)(v13 + 7) |= 2u;
      if ( (*(_BYTE *)(a2 + 3) & 8) != 0 )
        *(_WORD *)(v13 + 7) |= 8u;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
        *(_WORD *)(v13 + 7) |= 0x10u;
      v13[9] = 0;
      *((_WORD *)v13 + 7) = 23;
      v14 = v13 + 23;
      *(_DWORD *)(v13 + 10) = 0;
      *(_WORD *)(v13 + 21) = 0;
      v15 = 2 * v6 + 23;
      *(_WORD *)(v13 + 17) = v15;
      *(_WORD *)(v13 + 19) = v15 + a3;
      if ( (_WORD)v6 )
      {
        do
        {
          v16 = v12++;
          *v14 = *(_BYTE *)(a2 + 4 * v16 + 5);
          v14 = v13 + 2;
        }
        while ( v12 < (unsigned __int16)v6 );
      }
      v13[16] = *(_BYTE *)((unsigned int)(2 * v6 + 7) + a2);
      memmove(&v13[*(unsigned __int16 *)(v13 + 17)], (const void *)(a2 + (unsigned int)(2 * v6 + 8)), a3);
      v9 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, (_DWORD)v13, v17, a4, a5, a6);
      ExFreePoolWithTag(v13, 0x52706341u);
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
  return v9;
}
