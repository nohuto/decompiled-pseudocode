/*
 * XREFs of PspGetContextThreadInternal @ 0x14049D7A0
 * Callers:
 *     WbSetTrapFrame @ 0x1405023C0 (WbSetTrapFrame.c)
 *     WbGetTrapFrame @ 0x140502860 (WbGetTrapFrame.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspInitializeThunkContext @ 0x14053F16C (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x1405892A8 (NtGetContextThread.c)
 *     PsGetContextThread @ 0x140719570 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     RtlpValidateContextFlags @ 0x14006A610 (RtlpValidateContextFlags.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     RtlInitializeExtendedContext @ 0x1400DAE88 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeGate @ 0x14012C014 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140188DD0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpReadExtendedContext @ 0x140514FD8 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x140515A64 (RtlpWriteExtendedContext.c)
 */

int __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v10; // esi
  int result; // eax
  PCONTEXT_EX v12; // r13
  char v13; // cl
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  void *v21; // rsp
  int v22; // ecx
  ULONG ContextLength[2]; // [rsp+40h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v25[48]; // [rsp+50h] [rbp+10h] BYREF
  _BYTE v26[24]; // [rsp+1D0h] [rbp+190h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v17 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v17;
    ContextLength[1] = *(_DWORD *)v17;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpValidateContextFlags(v10, 0LL);
  if ( result < 0 || (v10 & 0x100000) != 0 )
  {
    if ( result != -1073741811 )
      goto LABEL_6;
  }
  else
  {
    result = -1073741811;
  }
  if ( a3 )
  {
    v10 = v10 & 0xD800001F | 0x100000;
    goto LABEL_7;
  }
LABEL_6:
  if ( result < 0 )
    return result;
LABEL_7:
  if ( !a3 )
  {
    v25[15] = a2;
    v12 = (PCONTEXT_EX)(a2 + 1232);
    goto LABEL_9;
  }
  result = RtlGetExtendedContextLength(v10, ContextLength);
  if ( result >= 0 )
  {
    v18 = ContextLength[0] + 15LL;
    if ( v18 <= ContextLength[0] )
      v18 = 0xFFFFFFFFFFFFFF0LL;
    v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
    v20 = alloca(v19);
    v21 = alloca(v19);
    v25[15] = ContextLength;
    result = RtlInitializeExtendedContext((PCONTEXT)ContextLength, v10, &ContextEx);
    if ( result >= 0 )
    {
      v12 = ContextEx;
      v25[15] = (char *)ContextEx - 1232;
      result = RtlpReadExtendedContext(v22, 0, (_DWORD)ContextEx, v10, a2, (__int64)v26);
      if ( result >= 0 )
      {
LABEL_9:
        if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
          return -1073741776;
        LOBYTE(v25[11]) = a4;
        v13 = (BYTE1(v25[11]) ^ (2 * a5)) & 2 ^ BYTE1(v25[11]);
        if ( (struct _KTHREAD *)a1 == CurrentThread )
        {
          v25[8] = 0LL;
          v25[9] = a1;
          BYTE1(v25[11]) = v13 & 0xFE;
          --CurrentThread->SpecialApcDisable;
          PspGetSetContextSpecialApc((__int64)v25, 0LL, 0LL, &v25[8]);
          v15 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v15
            && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v14);
          }
          goto LABEL_13;
        }
        BYTE1(v25[11]) = v13 | 1;
        KeInitializeGate((__int64)&v25[12]);
        KeInitializeApc((__int64)v25, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( KeInsertQueueApc((__int64)v25, 0LL, a1, 2u) )
        {
          KeWaitForGate((__int64)&v25[12], 0);
LABEL_13:
          v16 = HIDWORD(v25[11]);
          if ( v25[11] >= 0 && v25[15] != a2 )
            return RtlpWriteExtendedContext(
                     HIDWORD(v25[11]),
                     (int)a2 + 1232,
                     (unsigned int)v26,
                     *(_DWORD *)(v25[15] + 48LL),
                     (__int64)v12);
          return v16;
        }
        return -1073741823;
      }
    }
  }
  return result;
}
