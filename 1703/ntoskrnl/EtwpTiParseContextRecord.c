/*
 * XREFs of EtwpTiParseContextRecord @ 0x14070FB60
 * Callers:
 *     EtwTiLogSetContextThread @ 0x14070F650 (EtwTiLogSetContextThread.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpTiParseContextRecord(_QWORD *a1, __int64 a2)
{
  int v4; // ecx
  unsigned __int16 v6; // [rsp+20h] [rbp-18h]

  v6 = 0;
  memset(a1, 0, 0x60uLL);
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = *(_DWORD *)(a2 + 48);
  if ( (v4 & 0x100001) != 0 )
  {
    v6 = 1;
    *a1 = *(_QWORD *)(a2 + 248);
    a1[1] = *(_QWORD *)(a2 + 152);
    a1[2] = 0LL;
  }
  if ( (v4 & 0x100002) != 0 )
  {
    v6 |= 2u;
    a1[3] = *(_QWORD *)(a2 + 160);
    a1[4] = *(_QWORD *)(a2 + 120);
    a1[5] = *(_QWORD *)(a2 + 128);
    a1[6] = *(_QWORD *)(a2 + 136);
    a1[7] = *(_QWORD *)(a2 + 144);
    a1[8] = *(_QWORD *)(a2 + 168);
    a1[9] = *(_QWORD *)(a2 + 176);
    a1[10] = *(_QWORD *)(a2 + 184);
    a1[11] = *(_QWORD *)(a2 + 192);
  }
  return v6;
}
