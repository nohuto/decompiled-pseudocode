/*
 * XREFs of ndisPeriodicReceivesTimer @ 0x1C00079A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisPeriodicReceivesTimer(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  _QWORD *v4; // rbx
  char *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  LARGE_INTEGER v8; // rdx
  __int64 *v9; // rax
  _QWORD v10[6]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD WnodeEventItem[8]; // [rsp+58h] [rbp+17h] BYREF

  v4 = 0LL;
  v5 = (char *)qword_1C0098E00 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 2);
  v6 = *(__int64 **)v5;
  if ( *(char **)v5 == v5 )
    goto LABEL_5;
  v4 = *(_QWORD **)v5;
  if ( (char *)v6[1] != v5 || (v7 = *v6, *(_QWORD **)(v7 + 8) != v4) )
    __fastfail(3u);
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v7 + 8) = v5;
  v4[1] = 0LL;
  *v4 = 0LL;
  --*((_DWORD *)v5 + 6);
  if ( *(char **)v5 == v5 )
  {
LABEL_5:
    *((_DWORD *)qword_1C0098DF8 + KeGetPcr()->Prcb.Number) = 0;
  }
  else
  {
    v8 = DueTime;
    if ( !DueTime.QuadPart )
      v8.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C0098DF0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v8,
      (PKDPC)qword_1C0098DF0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
  if ( v4 == (_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceObject + 4 * KeGetPcr()->Prcb.Number )
  {
    v9 = *(__int64 **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *v4 = v9;
    v4[1] = v5;
    v9[1] = (__int64)v4;
    *(_QWORD *)v5 = v4;
    ++*((_DWORD *)v5 + 6);
    v4 = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( v4 )
  {
    if ( (_BYTE)word_1C009AF1C )
    {
      memset((char *)WnodeEventItem + 2, 0, 0x36uLL);
      HIDWORD(WnodeEventItem[5]) = 0x20000;
      LOWORD(WnodeEventItem[0]) = 56;
      WnodeEventItem[1] = qword_1C009AF10;
      *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
      BYTE4(WnodeEventItem[0]) = 22;
      LOBYTE(WnodeEventItem[6]) = 1;
      IoWMIWriteEvent(WnodeEventItem);
    }
    ((void (__fastcall *)(_QWORD))v4[2])(v4[3]);
    if ( (_BYTE)word_1C009AF1C )
    {
      memset((char *)v10 + 2, 0, 0x2EuLL);
      HIDWORD(v10[5]) = 0x20000;
      LOWORD(v10[0]) = 48;
      v10[1] = qword_1C009AF10;
      *(GUID *)&v10[3] = EtwGuidNdisReceive;
      BYTE4(v10[0]) = 23;
      IoWMIWriteEvent(v10);
    }
  }
}
