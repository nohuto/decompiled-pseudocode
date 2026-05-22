/*
 * XREFs of ?GetInfo@TwoFingerClickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1800477D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwoFingerClickRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  char v3; // r9

  v3 = 0;
  if ( (unsigned int)(a2 - 9) <= 1 && *(_DWORD *)a3 == 12 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v3 = 1;
    *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 28);
    *(_WORD *)(a1 + 16) &= ~1u;
    *(_WORD *)(a1 + 16) &= ~2u;
    *(_WORD *)(a1 + 16) &= ~8u;
  }
  return v3 == 0 ? 0x80070057 : 0;
}
