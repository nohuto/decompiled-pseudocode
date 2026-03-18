/*
 * XREFs of CmpSetupLoggingState @ 0x1405C0978
 * Callers:
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x14083C6D0 (CmpInitializePreloadedHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetupLoggingState(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax

  result = *a2;
  if ( (result & 1) != 0 && (result & 4) == 0 )
  {
    *(_BYTE *)(a1 + 174) = 0;
    v3 = *a2;
    if ( (*a2 & 2) != 0 )
    {
      if ( (v3 & 0x38) == 0x20 )
      {
        *(_DWORD *)(a1 + 148) = 5;
        *(_WORD *)(a1 + 172) = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 148) = 4;
        *(_WORD *)(a1 + 172) = 256;
      }
      *(_DWORD *)(a1 + 164) = a2[3];
      *(_DWORD *)(a1 + 152) = a2[2];
      result = a2[3];
      *(_QWORD *)(a1 + 156) = (unsigned int)result;
    }
    else
    {
      *(_DWORD *)(a1 + 148) = (v3 >> 3) & 7;
      *(_WORD *)(a1 + 172) = 257;
      *(_DWORD *)(a1 + 164) = a2[3];
      *(_DWORD *)(a1 + 152) = a2[2];
      *(_DWORD *)(a1 + 156) = a2[3];
      result = a2[4];
      *(_DWORD *)(a1 + 160) = result;
    }
  }
  return result;
}
