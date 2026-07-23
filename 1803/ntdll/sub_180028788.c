/*
 * XREFs of sub_180028788 @ 0x180028788
 * Callers:
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     sub_180054C90 @ 0x180054C90 (sub_180054C90.c)
 *     TpReleaseWait @ 0x180058580 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x180059580 (TpWaitForWait.c)
 * Callees:
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     ZwCancelWaitCompletionPacket @ 0x18009BD10 (ZwCancelWaitCompletionPacket.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

char __fastcall sub_180028788(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v4; // r8d
  char v8; // si
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  char v16; // al

  v4 = a3 & 2;
  if ( *(_QWORD *)(a1 + 360) )
  {
    v10 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 368), v4 != 0);
    if ( v10 )
    {
      if ( v10 != 259 && v10 != -1073741536 )
        sub_1801086C8(v12, v11, v13, v14);
      v16 = *(_BYTE *)(a1 + 464);
      v8 = 0;
      if ( (v16 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 464) = v16 | 4;
        sub_180055584(a1 + 56, 1LL);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v8 = 1;
      LOBYTE(v13) = 1;
      v15 = sub_18002888C(a1, a2, v13);
      *a4 = -1;
      if ( v15 )
        *a4 = -2;
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        sub_180055584(a1 + 56, 0xFFFFFFFFLL);
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
