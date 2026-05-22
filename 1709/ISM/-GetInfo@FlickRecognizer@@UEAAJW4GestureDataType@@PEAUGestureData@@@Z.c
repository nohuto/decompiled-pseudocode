/*
 * XREFs of ?GetInfo@FlickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x180044E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FlickRecognizer::GetInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( *a3 != 12 || a2 != 7 || (*(_BYTE *)(a1 + 138) & 4) == 0 )
    return 2147942487LL;
  a3[1] = *(_DWORD *)(a1 + 148);
  a3[2] = *(_DWORD *)(a1 + 152);
  *(_BYTE *)(a1 + 138) &= ~4u;
  result = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  return result;
}
