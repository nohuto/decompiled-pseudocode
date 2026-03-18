/*
 * XREFs of WbCreateWarbirdProcess @ 0x140575D44
 * Callers:
 *     WbGetWarbirdProcess @ 0x140501C80 (WbGetWarbirdProcess.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 *     sub_140575E88 @ 0x140575E88 (sub_140575E88.c)
 */

__int64 __fastcall WbCreateWarbirdProcess(__int64 a1, _QWORD *a2)
{
  void *v4; // rdi
  int v5; // esi
  _QWORD *v6; // rbx
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v5 = WbAlloc(0xF0uLL, &v8);
  if ( v5 < 0 )
  {
    v4 = v8;
  }
  else
  {
    v6 = v8;
    memset(v8, 0, 0xF0uLL);
    ++v6[29];
    *v6 = a1;
    *((_DWORD *)v6 + 14) = 60;
    v5 = 0;
    v6[5] = sub_140501F70;
    v6[1] = 8LL;
    *((_DWORD *)v6 + 4) = 0;
    v6[3] = 0LL;
    *((_DWORD *)v6 + 8) = 10;
    v6[6] = 0LL;
    v6[10] = 0LL;
    v6[9] = v6 + 8;
    v6[8] = v6 + 8;
    v6[27] = sub_1405893F0;
    v6[23] = 8LL;
    *((_DWORD *)v6 + 48) = 0;
    v6[25] = 0LL;
    *((_DWORD *)v6 + 52) = 10;
    v6[28] = 0LL;
    v6[15] = sub_140501FD0;
    v6[11] = 8LL;
    *((_DWORD *)v6 + 24) = 0;
    v6[13] = 0LL;
    *((_DWORD *)v6 + 28) = 10;
    v6[16] = 0LL;
    v6[21] = sub_140451290;
    v6[17] = 8LL;
    *((_DWORD *)v6 + 36) = 0;
    v6[19] = 0LL;
    *((_DWORD *)v6 + 40) = 10;
    v6[22] = 0LL;
    *a2 = v6;
  }
  sub_140575E88(v4);
  return (unsigned int)v5;
}
