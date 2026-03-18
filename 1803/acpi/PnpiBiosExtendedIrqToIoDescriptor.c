/*
 * XREFs of PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00854E0
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0085C6C (PnpiUpdateForceActiveBothInterrupts.c)
 *     PnpiUpdateResourceList @ 0x1C0085FAC (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosExtendedIrqToIoDescriptor(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 result; // rax
  int v10; // ebp
  char v11; // r15
  char v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  _BYTE *v16; // rcx
  char v17; // al
  unsigned __int8 v18; // al
  int v19; // eax
  _BYTE *v20; // [rsp+58h] [rbp+10h] BYREF

  if ( a3 >= *(_BYTE *)(a2 + 4) )
    return 3221225485LL;
  v10 = *(_DWORD *)(a2 + 4LL * a3 + 5);
  if ( !v10 )
    return 0LL;
  v11 = 0;
  v12 = *(_BYTE *)(a2 + 3) & 2;
  if ( a1 )
  {
    result = PnpiUpdateForceActiveBothInterrupts();
    if ( (int)result < 0 )
      return result;
    v13 = *(_DWORD *)(a1 + 656);
    v14 = 0;
    if ( v13 )
    {
      while ( v10 != *(_DWORD *)(*(_QWORD *)(a1 + 648) + 4LL * v14) )
      {
        if ( ++v14 >= v13 )
          goto LABEL_13;
      }
      if ( !v12 )
        return 3221225485LL;
      v11 = 1;
    }
  }
LABEL_13:
  result = PnpiUpdateResourceList(a4 + 8LL * a5, &v20);
  v15 = result;
  if ( (int)result >= 0 )
  {
    v16 = v20;
    *v20 = a3 != 0 ? 8 : 0;
    v16[1] = 2;
    *((_DWORD *)v16 + 2) = v10;
    *((_DWORD *)v16 + 3) = v10;
    *((_WORD *)v16 + 2) = 0;
    if ( v12 )
    {
      *((_WORD *)v16 + 2) = 1;
      if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
      {
        v16[2] = 1;
        goto LABEL_20;
      }
      v17 = (v11 != 0) + 2;
    }
    else
    {
      *((_WORD *)v16 + 2) = 0;
      v17 = (unsigned __int8)(*(_BYTE *)(a2 + 3) & 8 | 4) >> 2;
    }
    v16[2] = v17;
LABEL_20:
    v18 = *(_BYTE *)(a2 + 3);
    if ( (v18 & 0x10) != 0 )
    {
      *((_WORD *)v16 + 2) |= 0x20u;
      v18 = *(_BYTE *)(a2 + 3);
    }
    v19 = (v18 >> 1) & 2;
    *((_DWORD *)v16 + 4) = v19;
    if ( v11 )
      *((_DWORD *)v16 + 4) = v19 | 8;
    return v15;
  }
  return result;
}
