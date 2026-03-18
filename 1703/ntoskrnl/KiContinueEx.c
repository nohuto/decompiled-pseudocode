/*
 * XREFs of KiContinueEx @ 0x140008870
 * Callers:
 *     NtContinue @ 0x140181F30 (NtContinue.c)
 * Callees:
 *     KeTestAlertThread @ 0x1400089E0 (KeTestAlertThread.c)
 *     KiContinuePreviousModeUser @ 0x140008A84 (KiContinuePreviousModeUser.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KeContextToKframes @ 0x1401819C0 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v14; // [rsp+34h] [rbp-24h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v14 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( a2 )
    {
      if ( (a1 & 0xF) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v10 = a1;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 1231) = *(_BYTE *)(v10 + 1231);
      LOBYTE(v10) = 1;
      KeTestAlertThread(v10);
      if ( ((*(_QWORD *)(a1 + 152) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL) - 1232 == a1
        && CurrentThread->ApcState.UserApcPending )
      {
        *(_QWORD *)(a4 + 208) = a1;
        *(_QWORD *)(a4 + 352) = a3;
        LOBYTE(v11) = 1;
        KiDeliverApc(v11, 0LL, a4);
        v14 = 0;
        goto LABEL_18;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v12 = KiContinuePreviousModeUser(a1, a3, a4, CurrentThread);
    if ( v12 >= 0 )
      v12 = 1;
    v14 = v12;
  }
  else
  {
    KeContextToKframes(a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
    if ( a2 )
      KeTestAlertThread(0LL);
  }
LABEL_18:
  if ( !CurrentIrql )
    __writecr8(0LL);
  return v14;
}
