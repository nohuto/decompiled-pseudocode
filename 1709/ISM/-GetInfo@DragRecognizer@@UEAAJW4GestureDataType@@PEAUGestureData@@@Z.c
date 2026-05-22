/*
 * XREFs of ?GetInfo@DragRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x180045EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  char v3; // dl
  int v4; // eax
  __int64 v6; // [rsp+18h] [rbp+18h]

  if ( *(_DWORD *)a3 != 24 || a2 != 5 || (*(_BYTE *)(a1 + 30) & 8) == 0 )
    return 2147942487LL;
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 56);
  LODWORD(v6) = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 64);
  HIDWORD(v6) = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 68);
  *(_QWORD *)(a3 + 12) = v6;
  *(_BYTE *)(a3 + 20) = (*(_BYTE *)(a1 + 30) & 1) == 0;
  v3 = *(_BYTE *)(a1 + 30);
  if ( (v3 & 8) != 0 )
    v4 = *(_DWORD *)(a1 + 72);
  else
    v4 = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 30) = v3 & 0xF7;
  }
  return 0LL;
}
