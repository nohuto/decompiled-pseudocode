/*
 * XREFs of ndisPeriodicReceivesTimer @ 0x1C000E850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

void __fastcall ndisPeriodicReceivesTimer(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 *v4; // rbx
  char *v5; // rdi
  __int64 v6; // rax
  LARGE_INTEGER v7; // rdx
  __int64 *v8; // rax
  _QWORD v9[6]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD WnodeEventItem[8]; // [rsp+58h] [rbp+17h] BYREF

  v4 = 0LL;
  v5 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( *(char **)v5 != v5 )
  {
    v4 = *(__int64 **)v5;
    v6 = **(_QWORD **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *(__int64 **)(v6 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v6 + 8) = v5;
    v4[1] = 0LL;
    *v4 = 0LL;
    --*((_DWORD *)v5 + 6);
  }
  if ( *(char **)v5 == v5 )
  {
    *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number) = 0;
  }
  else
  {
    v7 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
    if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
      v7.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number],
      v7,
      (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number + 8]);
  }
  if ( v4 == (__int64 *)((char *)ndisPerCpuPoisonPills + 32 * KeGetPcr()->Prcb.Number) )
  {
    v8 = *(__int64 **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *v4 = (__int64)v8;
    v4[1] = (__int64)v5;
    v8[1] = (__int64)v4;
    *(_QWORD *)v5 = v4;
    ++*((_DWORD *)v5 + 6);
    v4 = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( v4 )
  {
    if ( (_BYTE)word_1C0093FDC )
    {
      memset((char *)WnodeEventItem + 2, 0, 0x36uLL);
      HIDWORD(WnodeEventItem[5]) = 0x20000;
      LOWORD(WnodeEventItem[0]) = 56;
      WnodeEventItem[1] = qword_1C0093FD0;
      *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
      BYTE4(WnodeEventItem[0]) = 22;
      LOBYTE(WnodeEventItem[6]) = 1;
      IoWMIWriteEvent(WnodeEventItem);
    }
    ((void (__fastcall *)(__int64))v4[2])(v4[3]);
    if ( (_BYTE)word_1C0093FDC )
    {
      memset((char *)v9 + 2, 0, 0x2EuLL);
      HIDWORD(v9[5]) = 0x20000;
      LOWORD(v9[0]) = 48;
      v9[1] = qword_1C0093FD0;
      *(GUID *)&v9[3] = EtwGuidNdisReceive;
      BYTE4(v9[0]) = 23;
      IoWMIWriteEvent(v9);
    }
  }
}
