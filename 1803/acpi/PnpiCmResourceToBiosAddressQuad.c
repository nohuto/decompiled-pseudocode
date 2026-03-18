/*
 * XREFs of PnpiCmResourceToBiosAddressQuad @ 0x1C0086B14
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C00862DC (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddressQuad(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  int v5; // ecx
  __int64 i; // rdi
  bool v7; // al
  __int16 v8; // cx
  char v9; // al
  ULONGLONG v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 Start; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 3) )
    return 3221225473LL;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = 0;
  if ( v4 )
  {
    for ( i = a2 + 20; ((*(_BYTE *)i - 3) & 0xFB) != 0; i += 20LL )
    {
      if ( ++v5 >= v4 )
        return 0LL;
    }
    *(_BYTE *)(a1 + 5) = 0;
    v7 = (*(_BYTE *)(i + 2) & 3) == 0;
    *(_BYTE *)(a1 + 5) = v7;
    v8 = *(_WORD *)(i + 2);
    if ( (v8 & 0x20) != 0 )
    {
      v9 = v7 | 2;
    }
    else if ( (v8 & 8) != 0 )
    {
      v9 = v7 | 4;
    }
    else
    {
      if ( (v8 & 4) == 0 )
      {
LABEL_15:
        v10 = RtlCmDecodeMemIoResource((PCM_PARTIAL_RESOURCE_DESCRIPTOR)i, &Start);
        v11 = Start + v10 - 1;
        *(_QWORD *)(a1 + 14) = Start;
        *(_QWORD *)(a1 + 22) = v11;
        *(_BYTE *)i = 0;
        return 0LL;
      }
      v9 = v7 | 6;
    }
    *(_BYTE *)(a1 + 5) = v9;
    goto LABEL_15;
  }
  return 0LL;
}
