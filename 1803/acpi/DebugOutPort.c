/*
 * XREFs of DebugOutPort @ 0x1C0048B2C
 * Callers:
 *     DebugO @ 0x1C0048AD0 (DebugO.c)
 *     DebugOD @ 0x1C0048AF0 (DebugOD.c)
 *     DebugOW @ 0x1C0048B10 (DebugOW.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0003FC2 (_strtoui64_0.c)
 *     IsNumber @ 0x1C0049010 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     WriteSystemIO @ 0x1C004E34C (WriteSystemIO.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C00687E4 == 2 )
    {
LABEL_9:
      dword_1C00687E4 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0, 0, 0, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C00687E4 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C00687E4 == 1 )
    dword_1C0067B1C = v5;
  else
    WriteSystemIO((unsigned int)dword_1C0067B1C, a2, v5);
  return v2;
}
