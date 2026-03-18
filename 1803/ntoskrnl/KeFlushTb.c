/*
 * XREFs of KeFlushTb @ 0x1400349E0
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAttachSession @ 0x140070CAC (MiAttachSession.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140185724 (MiGetWsAndMakePageTablesNx.c)
 *     MiSwitchToPfns @ 0x140899CB8 (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x14089D77C (MiInitializeTbFlush.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x140034B20 (KiPreprocessFlushTb.c)
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1400394C0 (KxFlushNonGlobalTb.c)
 *     KiFlushCurrentTbOnly @ 0x1400ADBA4 (KiFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x140159C68 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14015A5C0 (KiFlushAffinity.c)
 *     VslFlushSecureAddressSpace @ 0x14022F78C (VslFlushSecureAddressSpace.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // edx
  unsigned int v5; // ebx
  char v6; // di
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int8 v12; // r10
  unsigned __int8 CurrentIrql; // di
  _BYTE v14[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  unsigned __int8 v16; // [rsp+60h] [rbp+18h] BYREF
  char v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1;
  v6 = 0;
  LOBYTE(a1) = 1;
  result = KiPreprocessFlushTb(a1, v4, a2, (unsigned int)&v17, (__int64)&v16);
  if ( (_BYTE)result )
  {
    KiFlushCurrentTbOnly(v5, v8, v9, v10);
    result = v16;
    __writecr8(v16);
    v6 = 1;
  }
  if ( v17 )
  {
    KiPrepareFlushParameters(v5, &v15, v14);
    v11 = KiFlushAffinity(a2);
    result = KiFlushAddressSpaceTb(v15, v11, v14[0], v12);
    goto LABEL_8;
  }
  if ( !v6 )
  {
    if ( KiKvaShadow )
    {
      if ( v5 == 1 )
      {
LABEL_7:
        result = KxFlushEntireTb(a2);
        goto LABEL_8;
      }
      if ( !v5 )
      {
LABEL_19:
        result = KxFlushNonGlobalTb(a2);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v5 == 1 )
        goto LABEL_19;
      if ( !v5 )
        goto LABEL_7;
    }
    if ( v5 != 2 )
      goto LABEL_7;
    goto LABEL_19;
  }
LABEL_8:
  if ( v5 == 1 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 720LL) )
      result = VslFlushSecureAddressSpace();
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, v5);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, v5);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
