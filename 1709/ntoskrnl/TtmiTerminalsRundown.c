/*
 * XREFs of TtmiTerminalsRundown @ 0x14070E990
 * Callers:
 *     TtmiSessionsRundown @ 0x14070FA28 (TtmiSessionsRundown.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     TtmiLogTerminalRundown @ 0x140713D64 (TtmiLogTerminalRundown.c)
 */

_UNKNOWN **__fastcall TtmiTerminalsRundown(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rdi
  __int64 *v4; // rbx
  unsigned __int64 v5; // kr00_8
  _QWORD v6[12]; // [rsp+20h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = (__int64 *)(a1 + 40);
  v4 = *(__int64 **)(a1 + 40);
  if ( v4 != (__int64 *)(a1 + 40) )
  {
    do
    {
      memset(v6, 0, 0x58uLL);
      LODWORD(v6[0]) = *(_DWORD *)a1;
      HIDWORD(v6[0]) = *((_DWORD *)v4 + 7);
      v6[1] = v4[4];
      v6[2] = v4[5];
      v6[3] = v4[6];
      v6[4] = v4[7] / 0x989680uLL;
      v5 = v4[8];
      v6[6] = v4[9];
      v6[7] = v4[31];
      v6[8] = v4[32];
      v6[9] = v4[33];
      LODWORD(v6[10]) = *((_DWORD *)v4 + 68);
      v6[5] = v5 / 0x989680;
      result = (_UNKNOWN **)TtmiLogTerminalRundown(v6);
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v2 );
  }
  return result;
}
