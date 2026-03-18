/*
 * XREFs of ttfdEnableDriver @ 0x1C011C230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HSEMAPHORE __fastcall ttfdEnableDriver(__int64 a1, __int64 a2, __int64 a3)
{
  HSEMAPHORE result; // rax

  result = EngCreateSemaphore();
  ghsemTTFD = result;
  if ( result )
  {
    *(_DWORD *)(a3 + 4) = 17;
    *(_QWORD *)(a3 + 8) = &gadrvfnTTFD;
    result = (HSEMAPHORE)1;
    *(_DWORD *)a3 = 196608;
  }
  return result;
}
