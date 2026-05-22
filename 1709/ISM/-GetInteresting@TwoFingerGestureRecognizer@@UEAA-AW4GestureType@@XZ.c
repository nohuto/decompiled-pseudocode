/*
 * XREFs of ?GetInteresting@TwoFingerGestureRecognizer@@UEAA?AW4GestureType@@XZ @ 0x180046760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::GetInteresting(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // edi
  unsigned int v4; // r8d
  __int64 v6; // [rsp+30h] [rbp+8h]

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1 + 16);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 88) + 16LL))(a1 + 88) | v2;
  if ( (v3 & 0x800) == 0 || (v3 & 0x1000) != 0 )
    goto LABEL_7;
  if ( !*(_BYTE *)(a1 + 176) )
  {
    if ( *(_DWORD *)(a1 + 180) == 12 && (*(_BYTE *)(a1 + 32) & 1) != 0 )
    {
      *(_QWORD *)(a1 + 184) = *(_QWORD *)(a1 + 44);
      *(_BYTE *)(a1 + 176) = 1;
    }
LABEL_7:
    if ( !*(_BYTE *)(a1 + 176) )
      return v3;
  }
  if ( (v3 & 0x2000) != 0 && *(_DWORD *)(a1 + 192) == 28 && (*(_BYTE *)(a1 + 104) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 196) = *(_QWORD *)(a1 + 156);
    *(_QWORD *)(a1 + 204) = *(_QWORD *)(a1 + 140);
    LODWORD(v6) = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 148);
    HIDWORD(v6) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 212) = v6;
    v4 = *(unsigned __int16 *)(a1 + 84);
    if ( abs32(*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 196)) >= v4
      || abs32(*(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 200)) >= v4 )
    {
      *(_BYTE *)(a1 + 176) = 0;
    }
    else
    {
      v3 |= 0x4000u;
    }
  }
  return v3;
}
