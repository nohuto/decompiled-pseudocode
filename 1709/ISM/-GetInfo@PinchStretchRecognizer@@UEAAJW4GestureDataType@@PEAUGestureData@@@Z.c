/*
 * XREFs of ?GetInfo@PinchStretchRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1800451D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PinchStretchRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r11
  int v6; // r10d
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp+20h]

  if ( *(_DWORD *)a3 != 56 )
    return 2147942487LL;
  if ( a2 != 6 )
    return 2147942487LL;
  v4 = 2LL;
  if ( (*(_BYTE *)(a1 + 56) & 2) == 0 )
    return 2147942487LL;
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 40);
  LODWORD(v10) = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 16);
  HIDWORD(v10) = *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 20);
  *(_QWORD *)(a3 + 28) = v10;
  LODWORD(v10) = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 24);
  HIDWORD(v10) = *(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a3 + 36) = v10;
  v6 = (*(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 24)) / 2;
  v7 = (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 20)) / 2;
  LODWORD(v10) = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40)) / 2;
  HIDWORD(v10) = (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36)) / 2;
  v8 = v10;
  HIDWORD(v10) -= v7;
  *(_QWORD *)(a3 + 20) = v8;
  LODWORD(v10) = v10 - v6;
  *(_QWORD *)(a3 + 44) = v10;
  *(_BYTE *)(a3 + 52) = (*(_BYTE *)(a1 + 56) & 1) == 0;
  *(_BYTE *)(a1 + 56) &= ~2u;
  do
  {
    *v5 = v5[2];
    ++v5;
    --v4;
  }
  while ( v4 );
  return 0LL;
}
