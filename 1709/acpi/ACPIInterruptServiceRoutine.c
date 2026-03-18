/*
 * XREFs of ACPIInterruptServiceRoutine @ 0x1C0050530
 * Callers:
 *     <none>
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x1C0013CA4 (ACPIReadGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 *     READ_PM1_STATUS @ 0x1C0021B84 (READ_PM1_STATUS.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     ACPIPccSciReceived @ 0x1C0052DB4 (ACPIPccSciReceived.c)
 *     CLEAR_PM1_STATUS_BITS @ 0x1C0055834 (CLEAR_PM1_STATUS_BITS.c)
 */

bool __fastcall ACPIInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // edi
  signed __int32 v6; // eax
  unsigned int v7; // ebx
  signed __int32 v8; // edx

  v3 = 0;
  v4 = (unsigned __int16)(READ_PM1_STATUS() & (*((_WORD *)AcpiInformation + 56) | 0x8401));
  if ( *((_WORD *)AcpiInformation + 51) )
  {
    while ( (*((_BYTE *)GpeCurEnable + v3) & (unsigned __int8)ACPIReadGpeStatusRegister(v3)) == 0 )
    {
      if ( ++v3 >= *((unsigned __int16 *)AcpiInformation + 51) )
        goto LABEL_6;
    }
    v4 |= 0x10000u;
  }
LABEL_6:
  if ( (AcpiOverrideAttributes & 0x200) != 0 && !v4 )
    v4 = 0x10000;
  if ( (unsigned __int8)ACPIPccSciReceived() )
    v4 |= 0x20000u;
  v5 = v4 & 0x11;
  if ( (v4 & 0x11) != 0 )
  {
    CLEAR_PM1_STATUS_BITS(v4 & 0x11);
    if ( (v4 & 1) != 0 )
      (*(void (**)(void))(PmHalDispatchTable + 8))();
    v4 &= ~v5;
  }
  if ( v4 )
  {
    if ( (~*(_DWORD *)(a2 + 88) & v4) == 0 )
      v4 |= 0x10000u;
    if ( (v4 & 0x10000) != 0 )
      ACPIGpeEnableDisableEvents(0);
    CLEAR_PM1_STATUS_BITS((unsigned __int16)v4);
    v6 = *(_DWORD *)(a2 + 88);
    v7 = v4 | 0x80000000;
    do
    {
      v8 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), v7 | v6, v6);
    }
    while ( v8 != v6 );
    v5 |= v7 & ~v6;
    if ( v5 < 0 )
      KeInsertQueueDpc((PRKDPC)(a2 + 96), 0LL, 0LL);
  }
  return v5 != 0;
}
