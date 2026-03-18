/*
 * XREFs of Crashdump_Command_InstallRing @ 0x1C0039CB4
 * Callers:
 *     Crashdump_Command_PrepareForDump @ 0x1C0039D04 (Crashdump_Command_PrepareForDump.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Crashdump_Command_InstallRing(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 result; // rax
  __int128 v4; // xmm0
  _DWORD *v5; // rdx
  signed __int32 v6[6]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 56) = 1;
  result = v2 | 1;
  v4 = *(_OWORD *)(v1 + 8);
  v5 = *(_DWORD **)(a1 + 16);
  *(_OWORD *)v6 = v4;
  if ( (v4 & 1) != 0 )
  {
    *v5 = result;
    _InterlockedOr(v6, 0);
    result >>= 32;
    v5[1] = result;
  }
  else
  {
    *(_QWORD *)v5 = result;
  }
  _InterlockedOr(v6, 0);
  return result;
}
