/*
 * XREFs of ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180036AF0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Reset@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013DA8C (-Reset@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     Template_qqx @ 0x18013FC64 (Template_qqx.c)
 */

void __fastcall CCrossThreadComposition::Reset(CCrossThreadComposition *this, int a2)
{
  unsigned int i; // esi
  __int64 v4; // rbx
  int v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+34h] [rbp-24h]
  __int64 v7; // [rsp+3Ch] [rbp-1Ch]
  __int64 v8; // [rsp+44h] [rbp-14h]

  for ( i = 0; i < *((_DWORD *)this + 128); *(_QWORD *)(v4 + 8) = 0LL )
  {
    v4 = *((_QWORD *)this + 61) + 16LL * i;
    if ( (unsigned int)(*(_DWORD *)(v4 + 4) - 1) <= 1 )
    {
      v5 = 8;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      HIDWORD(v6) = *(_DWORD *)v4;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v5);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qqx((_DWORD)this, a2, *(_DWORD *)(v4 + 4), *(_DWORD *)v4, *(_QWORD *)(v4 + 8));
    *(_DWORD *)(v4 + 4) = 0;
    ++i;
  }
  *((_DWORD *)this + 128) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 488, 16LL);
}
