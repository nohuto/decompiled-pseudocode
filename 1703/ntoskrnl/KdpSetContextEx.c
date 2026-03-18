/*
 * XREFs of KdpSetContextEx @ 0x1401FBDB0
 * Callers:
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x14078C400 (KdpCopyContext.c)
 *     KdpQuickMoveMemory @ 0x14078C5C8 (KdpQuickMoveMemory.c)
 *     KdpSanitizeContextFlags @ 0x14078C5E8 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContextEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int16 v6; // ax
  __int64 v7; // rdi
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int16 v11; // cx
  __int16 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v13 = 56;
  v14 = a1;
  v4 = *(unsigned int *)(a1 + 16);
  v6 = *(_WORD *)(a1 + 6);
  v7 = *(unsigned int *)(a1 + 20);
  v8 = *(unsigned int *)(a1 + 24);
  if ( v6 < 0x280u && KiProcessorBlock[v6] && KdpContextSent )
  {
    if ( (unsigned int)v8 <= 0x1000 && (unsigned int)v4 < (unsigned int)v8 && (_DWORD)v7 && v4 + v7 <= v8 )
    {
      KdpQuickMoveMemory((char *)&unk_140389250 + v4, *(_QWORD *)(a2 + 8), (unsigned int)v7);
      if ( v10 == v9 )
      {
        v11 = *(_WORD *)(a1 + 6);
        if ( v11 != (unsigned __int16)KeGetPcr()->Prcb.Number )
          a3 = *(_QWORD *)(KiProcessorBlock[v11] + 25600);
        KdpSanitizeContextFlags(&unk_140389250, (unsigned int)v9, &v15);
        KdpCopyContext(a3, v15, &unk_140389250);
      }
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 24) = v7;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v13, 0LL, &KdpContext);
}
