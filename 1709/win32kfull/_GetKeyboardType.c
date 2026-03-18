/*
 * XREFs of _GetKeyboardType @ 0x1C01A1D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKeyboardType(int a1)
{
  int v1; // edx
  int v2; // ecx
  __int64 result; // rax
  unsigned __int16 *v4; // r8
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 v7; // cx

  v1 = 0;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
        return gKeyboardInfo[2];
      return 0LL;
    }
    v4 = (unsigned __int16 *)gpKbdNlsTbl;
    if ( gpKL )
    {
      v5 = *(_QWORD *)(gpKL + 56LL);
      if ( *(_QWORD *)(v5 + 48) )
        v4 = *(unsigned __int16 **)(v5 + 48);
      v6 = *(_DWORD *)(*(_QWORD *)(v5 + 32) + 100LL);
    }
    else
    {
      LOBYTE(v6) = HIBYTE(gKeyboardInfo[0]);
    }
    if ( v4 )
    {
      v7 = v4[1];
      if ( (v7 & 0x10) != 0 )
        return 0LL;
      if ( (v7 & 0x20) != 0 )
        return 2LL;
      v1 = *v4 << 8;
    }
    return v1 | v6 & 0xFu;
  }
  else
  {
    if ( !gpKL )
      return LOBYTE(gKeyboardInfo[0]);
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(gpKL + 56LL) + 32LL) + 96LL);
    if ( !(_DWORD)result || (_DWORD)result == 81 )
      return LOBYTE(gKeyboardInfo[0]);
  }
  return result;
}
