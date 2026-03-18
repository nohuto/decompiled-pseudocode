/*
 * XREFs of WbValidateEncryptionSegmentArguments @ 0x14044A800
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x14044A4DC (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 */

__int64 __fastcall WbValidateEncryptionSegmentArguments(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  _OWORD *v9; // rax

  if ( a2 < 0x10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = WbAlloc(0xF4uLL);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 + 244 > 0x7FFFFFFF0000LL || v8 + 244 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v9 = *(_OWORD **)(a1 + 8);
      MEMORY[0] = *v9;
      MEMORY[0x10] = v9[1];
      MEMORY[0x20] = v9[2];
      MEMORY[0x30] = v9[3];
      MEMORY[0x40] = v9[4];
      MEMORY[0x50] = v9[5];
      MEMORY[0x60] = v9[6];
      MEMORY[0x70] = v9[7];
      v9 += 8;
      MEMORY[0x80] = *v9;
      MEMORY[0x90] = v9[1];
      MEMORY[0xA0] = v9[2];
      MEMORY[0xB0] = v9[3];
      MEMORY[0xC0] = v9[4];
      MEMORY[0xD0] = v9[5];
      MEMORY[0xE0] = v9[6];
      MEMORY[0xF0] = *((_DWORD *)v9 + 28);
      if ( (MEMORY[0x24] & 0xF) != 0 )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        *(_DWORD *)(a4 + 8) = MEMORY[0x40];
        *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (MEMORY[0x28] & 0xFFFFFFF);
        if ( a3 )
          *a3 = 0LL;
      }
    }
  }
  return (unsigned int)v7;
}
