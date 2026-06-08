/*
 * XREFs of GetHwpPerfControlHandler @ 0x1C0006B70
 * Callers:
 *     <none>
 * Callees:
 *     IsHwpPackageControlSupported @ 0x1C0006EA4 (IsHwpPackageControlSupported.c)
 */

__int64 __fastcall GetHwpPerfControlHandler(
        __int64 a1,
        _QWORD *a2,
        __int64 (__fastcall **a3)(__int64 a1, __int64 a2, char a3, char a4),
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v5 = *(_QWORD *)(a1 + 112);
  v6 = 0LL;
  v7 = 0LL;
  v8 = (_QWORD *)a4;
  v10 = -1073741637;
  LOBYTE(a4) = 8;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_BYTE *)(v5 + 68) != 127 || *(_BYTE *)(v5 + 69) != 8 || *(_BYTE *)(v5 + 70) != 16 )
      return v10;
    v6 = *(_QWORD *)(v5 + 72);
    v7 = 16711680LL;
  }
  if ( *(_BYTE *)(a1 + 94) )
  {
    if ( *(_BYTE *)(v5 + 80) != 127 )
      return v10;
    if ( *(_BYTE *)(v5 + 81) != 8 )
      return v10;
    if ( *(_BYTE *)(v5 + 82) )
      return v10;
    v11 = *(_QWORD *)(v5 + 84);
    if ( v6 )
    {
      if ( v6 != v11 )
        return v10;
    }
    v7 |= 0xFFuLL;
    if ( v6 )
      v11 = v6;
    v6 = v11;
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    if ( *(_BYTE *)(v5 + 92) != 127 )
      return v10;
    if ( *(_BYTE *)(v5 + 93) != 8 )
      return v10;
    if ( *(_BYTE *)(v5 + 94) != 8 )
      return v10;
    v12 = *(_QWORD *)(v5 + 96);
    if ( v6 )
    {
      if ( v6 != v12 )
        return v10;
    }
    v7 |= 0xFF00uLL;
    if ( v6 )
      v12 = v6;
    v6 = v12;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( *(_BYTE *)(v5 + 212) != 127 )
      return v10;
    if ( *(_BYTE *)(v5 + 213) != 8 )
      return v10;
    if ( *(_BYTE *)(v5 + 214) != 24 )
      return v10;
    v13 = *(_QWORD *)(v5 + 216);
    if ( v6 )
    {
      if ( v6 != v13 )
        return v10;
    }
    a4 = 4278190080LL;
    v7 |= 0xFF000000uLL;
    if ( v6 )
      v13 = v6;
    v6 = v13;
  }
  if ( *(_BYTE *)(a1 + 97) )
  {
    if ( *(_BYTE *)(v5 + 200) != 127 )
      return v10;
    if ( *(_BYTE *)(v5 + 201) != 10 )
      return v10;
    if ( *(_BYTE *)(v5 + 202) != 32 )
      return v10;
    v14 = *(_QWORD *)(v5 + 204);
    if ( v6 )
    {
      if ( v6 != v14 )
        return v10;
    }
    v7 |= 0x3FF00000000uLL;
    if ( v6 )
      v14 = v6;
    v6 = v14;
  }
  if ( !*(_BYTE *)(a1 + 98) && ((v6 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
    v10 = 0;
    *(_QWORD *)(a1 + 144) = v7;
    *a5 = PerfSelectionHwp;
    *a2 = PerfControlHwp;
    *a3 = PerfControlHwpHidden;
    *v8 = (unsigned __int64)PerfControlHwpPackage & -(__int64)((unsigned __int8)IsHwpPackageControlSupported(
                                                                                  a5,
                                                                                  a2,
                                                                                  a3,
                                                                                  a4) != 0);
  }
  return v10;
}
