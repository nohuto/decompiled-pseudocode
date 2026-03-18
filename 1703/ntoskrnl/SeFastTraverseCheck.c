/*
 * XREFs of SeFastTraverseCheck @ 0x140246784
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     ObpCheckTraverseAccess @ 0x1406C1408 (ObpCheckTraverseAccess.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 */

char __fastcall SeFastTraverseCheck(__int64 a1, __int64 a2, int a3)
{
  __int16 v6; // cx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rbx
  unsigned int v11; // esi
  PSID v12; // r14

  if ( !a1 )
    return 0;
  v6 = *(_WORD *)(a1 + 2);
  if ( (~(_BYTE)v6 & 4) == 0 )
  {
    if ( v6 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v7 )
        return 1;
      v8 = a1 + v7;
    }
    if ( v8 )
    {
      v9 = *(unsigned __int16 *)(v8 + 4);
      if ( *(_WORD *)(v8 + 4) )
      {
        if ( (*(_DWORD *)(a2 + 12) & 0x810) == 0 )
        {
          v10 = v8 + 8;
          v11 = 0;
          if ( *(_WORD *)(v8 + 4) )
          {
            v12 = SeWorldSid;
            while ( 1 )
            {
              if ( (*(_BYTE *)(v10 + 1) & 8) == 0 )
              {
                if ( *(_BYTE *)v10 )
                {
                  if ( *(_BYTE *)v10 == 1 && (*(_DWORD *)(v10 + 4) & a3) != 0 )
                    return 0;
                }
                else if ( (a3 & *(_DWORD *)(v10 + 4)) != 0 && RtlEqualSid(v12, (PSID)(v10 + 8)) )
                {
                  return 1;
                }
              }
              ++v11;
              v10 += *(unsigned __int16 *)(v10 + 2);
              if ( v11 >= v9 )
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
