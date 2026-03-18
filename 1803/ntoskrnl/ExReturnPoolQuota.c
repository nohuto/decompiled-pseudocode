/*
 * XREFs of ExReturnPoolQuota @ 0x1400BA618
 * Callers:
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140106E60 (IopFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x14059C710 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     PsReturnPoolQuota @ 0x1400BA6B0 (PsReturnPoolQuota.c)
 *     ExpGetBilledProcess @ 0x1400BA6E8 (ExpGetBilledProcess.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ExReturnPoolQuota(unsigned __int64 a1)
{
  char v2; // di
  struct _KPROCESS *BilledProcess; // rsi
  unsigned __int16 v4; // cx
  __int64 v5; // r8
  __int16 v6; // cx
  __int64 v7; // rdx
  __int16 v8; // ax

  if ( !ExpSpecialAllocations || !(unsigned int)MmIsSpecialPoolAddress(a1) )
  {
    v2 = *(_BYTE *)(a1 - 13);
    if ( (v2 & 8) != 0 )
    {
      BilledProcess = (struct _KPROCESS *)ExpGetBilledProcess(a1 - 16);
      if ( BilledProcess )
      {
        v4 = *(_WORD *)(a1 - 14);
        v5 = (unsigned __int8)v4;
        v6 = HIBYTE(v4);
        if ( (v2 & 4) != 0 )
        {
          v7 = a1 - 16 - 16LL * (unsigned __int8)*(_WORD *)(a1 - 16);
          v8 = *(_WORD *)(v7 + 2);
          v5 = (unsigned __int8)v8;
          *(_BYTE *)(v7 + 3) = HIBYTE(v8) & 0xF7;
          LOBYTE(v6) = *(_BYTE *)(a1 - 13);
        }
        *(_BYTE *)(a1 - 13) = v6 & 0xF7;
        PsReturnPoolQuota(BilledProcess, (POOL_TYPE)(v2 & 1), 16 * v5);
        ObDereferenceObjectDeferDeleteWithTag(BilledProcess, *(_DWORD *)(a1 - 12));
      }
    }
  }
}
