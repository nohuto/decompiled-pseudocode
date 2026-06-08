/*
 * XREFs of PerfControlHwpHidden @ 0x1C0003F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfControlHwpHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp-18h]

  if ( a4 && a3 )
  {
    v6 = 0LL;
    if ( *(_BYTE *)(a1 + 94) )
    {
      v4 = (unsigned __int8)*(_DWORD *)(a1 + 32);
      LODWORD(v6) = v4;
    }
    else
    {
      v4 = 0;
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a1 + 32) << 8)) & 0xFF00;
      LODWORD(v6) = v4;
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      v4 |= 0xFF000000;
      LODWORD(v6) = v4;
    }
    if ( *(_BYTE *)(a1 + 93) )
      LODWORD(v6) = (v4 ^ (*(_DWORD *)(a1 + 32) << 16)) & 0xFF0000 ^ v4;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C0016070)(
             *(unsigned int *)(*(_QWORD *)a1 + 80LL),
             *(unsigned int *)(a1 + 124),
             ~*(_QWORD *)(a1 + 144),
             v6);
  }
  return result;
}
