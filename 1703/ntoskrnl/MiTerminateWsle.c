/*
 * XREFs of MiTerminateWsle @ 0x140105650
 * Callers:
 *     MiRemoveSystemImagePage @ 0x14002CDA4 (MiRemoveSystemImagePage.c)
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 * Callees:
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3)
{
  int v5; // r15d
  _BYTE *v6; // r14
  char v7; // r9
  unsigned __int64 v8; // r10
  __int64 v9; // r12
  unsigned int v10; // r13d
  char WsleContents; // bl
  char v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx

  v5 = 10;
  v6 = (_BYTE *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v6) - 0x58000000000LL;
  if ( a2 >= v8 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 0;
    WsleContents = (*(_DWORD *)v9 >> 2) & 7;
LABEL_11:
    --*(_QWORD *)(a1 + 144);
    if ( a2 < v8 || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      --*(_QWORD *)(a1 + 128);
    goto LABEL_14;
  }
  v5 = 10 - ((v7 & 2) != 0);
  WsleContents = MiGetWsleContents(0xFFFFF6FFFFFFFFFFuLL, a2);
  if ( (v12 & 1) != 0 )
    MI_WSLE_LOG_ACCESS(a1, v6);
  v13 = (*(_QWORD *)(v9 + 40) >> 57) & 1LL;
  if ( (WsleContents & 0xF) == 8 )
  {
    MiUnlockWsle(a1, a2, v9);
    WsleContents = MiGetWsleContents(v14, a2);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( !(_DWORD)v13 )
  {
    v8 = 0xFFFFF68000000000uLL;
    goto LABEL_11;
  }
LABEL_14:
  if ( (a3 & 4) != 0 )
  {
    *(_QWORD *)v6 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v6) )
      MiWritePteShadow(v15);
  }
  MiRemoveWsle(a1, a2, WsleContents, v5);
  return v10;
}
