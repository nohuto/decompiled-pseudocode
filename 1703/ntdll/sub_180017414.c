/*
 * XREFs of sub_180017414 @ 0x180017414
 * Callers:
 *     TpWaitForWait @ 0x180012BD0 (TpWaitForWait.c)
 *     TpReleaseWait @ 0x1800135B0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     sub_1800737B0 @ 0x1800737B0 (sub_1800737B0.c)
 * Callees:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A6510 (ZwCancelWaitCompletionPacket.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

char __fastcall sub_180017414(__int64 a1, __int64 a2, char a3, int *a4)
{
  int v4; // r8d
  __int64 v6; // rbp
  char v8; // si
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  int v16; // ecx
  bool v17; // zf
  char v18; // al

  v4 = a3 & 2;
  v6 = a2;
  if ( *(_QWORD *)(a1 + 360) )
  {
    LOBYTE(a2) = v4 != 0;
    v10 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), a2);
    if ( v10 )
    {
      if ( v10 != -1073741536 && v10 != 259 )
        sub_1801058B8(v12, v11, v13, v14);
      v18 = *(_BYTE *)(a1 + 464);
      v8 = 0;
      if ( (v18 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 464) = v18 | 4;
        sub_18007358C(a1 + 56, 1LL, 0LL);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v8 = 1;
      LOBYTE(v13) = 1;
      v15 = sub_1800177A0(a1, v6, v13);
      v16 = -1;
      if ( v15 )
        v16 = -2;
      v17 = (*(_BYTE *)(a1 + 464) & 4) == 0;
      *a4 = v16;
      if ( !v17 )
      {
        sub_18007358C(a1 + 56, 0xFFFFFFFFLL, 0LL);
        *(_BYTE *)(a1 + 464) &= ~4u;
      }
    }
  }
  else
  {
    *a4 = 0;
    v8 = 1;
  }
  *(_BYTE *)(a1 + 464) &= 0xFCu;
  return v8;
}
