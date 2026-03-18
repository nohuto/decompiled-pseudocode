/*
 * XREFs of RtlpWow64SetContextOnAmd64 @ 0x140424374
 * Callers:
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpWow64CtxToAmd64 @ 0x14042421C (RtlpWow64CtxToAmd64.c)
 */

__int64 __fastcall RtlpWow64SetContextOnAmd64(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v6; // ebp
  __int16 v9; // bx
  int v10; // ecx
  int v11; // edx
  int v12; // eax

  *a4 = 0;
  v6 = *(_DWORD *)a3;
  if ( a2 )
  {
    v9 = *(_WORD *)(a2 + 56);
    RtlpWow64CtxToAmd64(v6, (_DWORD *)a3, a2);
    if ( v9 == 35 )
      goto LABEL_18;
  }
  if ( (v6 & 0x10001) == 0x10001 )
  {
    *(_DWORD *)(a1 + 180) = *(_DWORD *)(a3 + 180);
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a3 + 184);
    *(_DWORD *)(a1 + 188) = 35;
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a3 + 192) & 0x3F0DD5 | 0x202;
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(a3 + 196);
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a3 + 200);
  }
  if ( (v6 & 0x10002) == 0x10002 )
  {
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a3 + 156);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(a3 + 160);
    *(_DWORD *)(a1 + 164) = *(_DWORD *)(a3 + 164);
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(a3 + 168);
    *(_DWORD *)(a1 + 172) = *(_DWORD *)(a3 + 172);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a3 + 176);
  }
  v10 = 1048584;
  if ( (v6 & 0x10008) != 0x10008 )
    v10 = 0;
  v11 = v10 | 0x100010;
  if ( (v6 & 0x10010) != 0x10010 )
    v11 = v10;
  if ( (v6 & 0x10020) == 0x10020 )
  {
    v11 |= 0x100008u;
    *(_OWORD *)(a1 + 364) = *(_OWORD *)(a3 + 364);
    *(_OWORD *)(a1 + 380) = *(_OWORD *)(a3 + 380);
    *(_OWORD *)(a1 + 396) = *(_OWORD *)(a3 + 396);
    *(_OWORD *)(a1 + 412) = *(_OWORD *)(a3 + 412);
    *(_OWORD *)(a1 + 428) = *(_OWORD *)(a3 + 428);
    *(_OWORD *)(a1 + 444) = *(_OWORD *)(a3 + 444);
  }
  v12 = v11 | 0x100040;
  if ( (v6 & 0x10040) != 0x10040 )
    v12 = v11;
  if ( v12 && a2 )
  {
    *(_DWORD *)(a2 + 48) = v12;
LABEL_18:
    *a4 = 1;
  }
  return 0LL;
}
