/*
 * XREFs of AlpcpCaptureAttributes @ 0x140525C00
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140474A80 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 * Callees:
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14002872C (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x1400E7974 (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpGetMessageAttributeOffset @ 0x140437AB8 (AlpcpGetMessageAttributeOffset.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x140439174 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpCaptureDirectAttribute @ 0x14043E820 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x140441C50 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140442284 (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureContextAttribute32 @ 0x140442618 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140445FC4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140457FC4 (AlpcpCaptureViewAttribute32.c)
 *     AlpcpReleaseAttributes @ 0x140475E20 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureViewAttribute @ 0x14047A588 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14047CCE0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureHandleAttribute @ 0x140516ED0 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureContextAttribute @ 0x140526380 (AlpcpCaptureContextAttribute.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x14056E0DC (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, int *a3, __int64 a4, void *a5)
{
  _QWORD *v8; // r15
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // r12
  unsigned int v12; // eax
  ULONG v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int *v16; // rax
  int v17; // ebx
  int v18; // esi
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v21; // rdi
  __int64 v22; // rbx
  __int64 MessageAttributeOffset32; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 MessageAttributeOffset; // rax
  void *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v38; // [rsp+90h] [rbp+18h] BYREF

  v8 = a5;
  memset(a5, 0, 0x48uLL);
  *v8 = *(_QWORD *)(a4 + 104);
  v8[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v9 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v9;
    v11 = 2LL;
    v12 = 2;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( v10 < 0 )
        v12 = 5;
      if ( (v10 & 0x40000000) != 0 )
        v12 += 4;
      if ( (v10 & 0x20000000) != 0 )
        v12 += 5;
      if ( (v10 & 0x10000000) != 0 )
        v12 += 4;
      if ( (v10 & 0x8000000) != 0 )
        v12 += 6;
      if ( (v10 & 0x2000000) != 0 )
        v12 += 2;
      v13 = 4;
    }
    else
    {
      if ( v10 < 0 )
        v12 = 8;
      if ( (v10 & 0x40000000) != 0 )
        v12 += 8;
      if ( (v10 & 0x20000000) != 0 )
        v12 += 8;
      if ( (v10 & 0x10000000) != 0 )
        v12 += 6;
      if ( (v10 & 0x8000000) != 0 )
        v12 += 6;
      if ( (v10 & 0x4000000) != 0 )
        v12 += 2;
      if ( (v10 & 0x2000000) != 0 )
        v12 += 2;
      v13 = 8;
    }
    if ( (v10 & 0xA0000000) != 0 )
    {
      v14 = (__int64)a3;
      if ( (unsigned __int64)(v12 * 4) - 1 > 0xFFE )
      {
        ProbeForWrite(a3, v12 * 4, v13);
      }
      else
      {
        if ( ((v13 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v14 = *(_BYTE *)v14;
        *(_BYTE *)(v14 + v12 * 4 - 1) = *(_BYTE *)(v14 + v12 * 4 - 1);
      }
    }
    else
    {
      v15 = v12 * 4;
      if ( (unsigned __int64)(v12 * 4) - 1 > 0xFFFE )
      {
        if ( v12 * 4 )
        {
          if ( ((v13 - 1) & (unsigned int)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = &a3[v12];
          if ( (unsigned __int64)a3 + v15 > 0x7FFFFFFF0000LL || v16 < a3 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( ((v13 - 1) & (unsigned int)a3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    v17 = a3[1];
  }
  else
  {
    v10 = *a3;
    v17 = a3[1];
    v11 = 2LL;
  }
  if ( (~v10 & v17) == 0 )
  {
    v18 = 0;
    if ( a2 >= 0 )
    {
      if ( v17 >= 0
        || (v29 = AlpcpGetMessageAttributeOffset(v10, 0x80000000),
            v18 = AlpcpCaptureSecurityAttribute(a1, (__int64)a3 + v29, (__int64)v8),
            v18 >= 0) )
      {
        if ( (v17 & 0x40000000) == 0
          || (v30 = AlpcpGetMessageAttributeOffset(v10, 0x40000000),
              v18 = AlpcpCaptureViewAttribute((__int64)a1, (int *)((char *)a3 + v30)),
              v18 >= 0) )
        {
          if ( (v17 & 0x20000000) == 0 )
            goto LABEL_107;
          if ( v10 < 0 )
            v11 = 8LL;
          if ( (v10 & 0x40000000) != 0 )
            v11 += 8LL;
          v18 = AlpcpCaptureContextAttribute(a1, &a3[v11], a4, v8);
          if ( v18 >= 0 )
          {
LABEL_107:
            if ( (v17 & 0x10000000) == 0
              || (AlpcpGetMessageAttributeOffset(v10, 0x10000000), v18 = AlpcpCaptureHandleAttribute(), v18 >= 0) )
            {
              if ( (v17 & 0x4000000) == 0
                || (MessageAttributeOffset = AlpcpGetMessageAttributeOffset(v10, 0x4000000),
                    v18 = AlpcpCaptureDirectAttribute(
                            (HANDLE *)((char *)a3 + MessageAttributeOffset),
                            v33,
                            (__int64)v8,
                            a2,
                            v17),
                    v18 >= 0) )
              {
                if ( (v17 & 0x2000000) != 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &a5);
                  v21 = WorkOnBehalfThread;
                  if ( WorkOnBehalfThread )
                  {
                    v31 = (__int64)WorkOnBehalfThread;
                  }
                  else
                  {
                    if ( !*(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[10] && !PoEnergyEstimationEnabled() )
                    {
                      v22 = 0LL;
LABEL_70:
                      if ( (_DWORD)a5 )
                        ObfDereferenceObject(v21);
                      v8[8] = v22;
                      return 0;
                    }
                    v31 = (__int64)CurrentThread;
                  }
                  PsEncodeThreadWorkOnBehalfTicket(v31, &v38);
                  v22 = v38;
                  goto LABEL_70;
                }
              }
            }
          }
        }
      }
LABEL_84:
      if ( v18 < 0 )
        AlpcpReleaseAttributes(v8);
      return (unsigned int)v18;
    }
    if ( v17 >= 0 )
    {
      v25 = (__int64)a1;
    }
    else
    {
      MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v10, 0x80000000);
      v25 = (__int64)a1;
      v18 = AlpcpCaptureSecurityAttribute32(a1, (__int64)a3 + MessageAttributeOffset32, (__int64)v8);
      if ( v18 < 0 )
        goto LABEL_84;
    }
    if ( (v17 & 0x40000000) == 0
      || (v34 = AlpcpGetMessageAttributeOffset32(v10, 0x40000000),
          v18 = AlpcpCaptureViewAttribute32(v25, (int *)((char *)a3 + v34)),
          v18 >= 0) )
    {
      if ( (v17 & 0x20000000) == 0
        || (v26 = AlpcpGetMessageAttributeOffset32(v10, 0x20000000),
            v18 = AlpcpCaptureContextAttribute32(v25, (int *)((char *)a3 + v26), a4, v8),
            v18 >= 0) )
      {
        if ( (v17 & 0x10000000) == 0
          || (v35 = AlpcpGetMessageAttributeOffset32(v10, 0x10000000),
              v18 = AlpcpCaptureHandleAttribute32((char *)a3 + v35, v8),
              v18 >= 0) )
        {
          if ( (v17 & 0x4000000) == 0
            || (v27 = AlpcpGetMessageAttributeOffset32(v10, 0x4000000),
                v18 = AlpcpCaptureDirectAttribute32((unsigned int *)((char *)a3 + v27), v28, (__int64)v8, a2, v17),
                v18 >= 0) )
          {
            if ( (v17 & 0x2000000) != 0 )
              v18 = AlpcpCaptureWorkOnBehalfAttribute((__int64)v8);
          }
        }
      }
    }
    goto LABEL_84;
  }
  return 3221225485LL;
}
