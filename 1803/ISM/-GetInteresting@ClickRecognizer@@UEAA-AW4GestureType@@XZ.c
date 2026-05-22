/*
 * XREFs of ?GetInteresting@ClickRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1800DCF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ClickRecognizer::GetInteresting(__int64 a1)
{
  unsigned __int16 v1; // r8
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int result; // eax

  v1 = *(_WORD *)(a1 + 16);
  v2 = (2 * ((v1 >> 3) & 1)) | 1;
  if ( (v1 & 4) == 0 )
    v2 = 2 * ((v1 >> 3) & 1);
  v3 = v2 | 4;
  if ( (v1 & 0x30) == 0 )
    v3 = v2;
  v4 = v3 | 8;
  if ( (v1 & 0x40) == 0 )
    v4 = v3;
  result = v4 | 0x200;
  if ( (v1 & 0x100) == 0 )
    return v4;
  return result;
}
