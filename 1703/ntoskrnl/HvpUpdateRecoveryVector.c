/*
 * XREFs of HvpUpdateRecoveryVector @ 0x140678ACC
 * Callers:
 *     HvApplyLegacyLogFile @ 0x140678004 (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x1406781F8 (HvApplyLogFile.c)
 * Callees:
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 */

void __fastcall HvpUpdateRecoveryVector(_DWORD *a1, unsigned int a2, _RTL_BITMAP *a3)
{
  unsigned int i; // edi
  unsigned int SizeOfBitMap; // ecx
  ULONG v8; // edx
  ULONG v9; // r8d

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      SizeOfBitMap = a3->SizeOfBitMap;
      v8 = *a1 >> 9;
      v9 = a1[1] >> 9;
      if ( v8 >= a3->SizeOfBitMap )
        break;
      if ( v9 + v8 > SizeOfBitMap )
        v9 = SizeOfBitMap - v8;
      RtlSetBits(a3, v8, v9);
      a1 += 2;
    }
  }
}
