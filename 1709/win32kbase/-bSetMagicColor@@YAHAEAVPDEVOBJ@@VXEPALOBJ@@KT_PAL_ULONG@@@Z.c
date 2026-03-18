/*
 * XREFs of ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00FB49C
 * Callers:
 *     GreSetMagicColors @ 0x1C00FB5EC (GreSetMagicColors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetMagicColor(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r9d
  int v6; // eax
  signed __int32 v7; // ecx
  __int64 v8; // r10
  signed __int32 v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // eax

  v5 = 0;
  if ( *(_DWORD *)(a2 + 60) == 20 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    if ( (v6 & 0x1000) == 0 && (v6 & 0x10000) == 0 )
    {
      HIBYTE(a4) = 48;
      *(_DWORD *)(*(_QWORD *)(a2 + 120) + 4LL * a3) = a4;
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)&ulXlatePalUnique, 1u);
      v8 = *(_QWORD *)(a2 + 128);
      v9 = v7 + 1;
      *(_DWORD *)(a2 + 32) = v9;
      if ( v8 != a2 )
        *(_DWORD *)(v8 + 32) = v9;
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 1832LL);
      if ( v10 )
        *(_DWORD *)(*(_QWORD *)(v10 + 120) + 4LL * a3) = a4;
      HIBYTE(a4) = 0;
      v11 = a3 - 236;
      v5 = 1;
      if ( a3 <= 0xA )
        v11 = a3;
      dword_1C018DEE4[v11] = a4;
      *(_DWORD *)(*((_QWORD *)ppalDefault + 15) + 4LL * v11) = a4;
    }
  }
  return v5;
}
