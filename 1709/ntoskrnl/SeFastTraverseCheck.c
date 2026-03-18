/*
 * XREFs of SeFastTraverseCheck @ 0x14025DED0
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     ObpCheckTraverseAccess @ 0x1406EFDB4 (ObpCheckTraverseAccess.c)
 * Callees:
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 */

char __fastcall SeFastTraverseCheck(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rbx
  unsigned int v10; // esi

  if ( !a1 )
    return 0;
  v5 = *(_WORD *)(a1 + 2);
  if ( (v5 & 4) != 0 )
  {
    if ( v5 >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v6 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v6 )
        return 1;
      v7 = a1 + v6;
    }
    if ( v7 )
    {
      v8 = *(unsigned __int16 *)(v7 + 4);
      if ( *(_WORD *)(v7 + 4) )
      {
        if ( (*(_DWORD *)(a2 + 12) & 0x810) == 0 )
        {
          v9 = v7 + 8;
          v10 = 0;
          if ( v8 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(v9 + 1) & 8) == 0 )
              {
                if ( *(_BYTE *)v9 )
                {
                  if ( *(_BYTE *)v9 == 1 && (*(_DWORD *)(v9 + 4) & a3) != 0 )
                    return 0;
                }
                else if ( (a3 & *(_DWORD *)(v9 + 4)) != 0 && RtlEqualSid(SeWorldSid, (PSID)(v9 + 8)) )
                {
                  return 1;
                }
              }
              ++v10;
              v9 += *(unsigned __int16 *)(v9 + 2);
              if ( v10 >= v8 )
                return 0;
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}
