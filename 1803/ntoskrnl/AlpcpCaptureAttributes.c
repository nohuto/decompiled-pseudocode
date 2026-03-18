/*
 * XREFs of AlpcpCaptureAttributes @ 0x1404CDA80
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x140060460 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400604FC (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x140060570 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x1404C9800 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpCaptureContextAttribute @ 0x1404CE610 (AlpcpCaptureContextAttribute.c)
 *     AlpcpGetMessageAttributeOffset @ 0x1404CECE4 (AlpcpGetMessageAttributeOffset.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1404D01DC (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureViewAttribute @ 0x1404D9AAC (AlpcpCaptureViewAttribute.c)
 *     AlpcpReleaseAttributes @ 0x1404DC4C0 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureHandleAttribute @ 0x140560510 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureDirectAttribute @ 0x140561508 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureContextAttribute32 @ 0x140564E14 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1405709E4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140581F0C (AlpcpCaptureViewAttribute32.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1405BF26C (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x1405C44DC (AlpcpCaptureHandleAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1405DCF0C (AlpcpCaptureSecurityAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(__int64 a1, int a2, unsigned int *a3, __int64 a4, void *a5)
{
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // edx
  ULONG v12; // r8d
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // edi
  int v26; // r14d
  unsigned int v27; // eax
  __int64 v28; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  int MessageAttributeOffset32; // eax
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  int MessageAttributeOffset; // eax
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v47; // [rsp+80h] [rbp+18h] BYREF

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
    v11 = *(_DWORD *)v9 & 0x80000000;
    v12 = 8;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      v22 = 20;
      if ( !v11 )
        v22 = 8;
      v23 = v22 + 16;
      if ( (v10 & 0x40000000) == 0 )
        v23 = v22;
      v24 = v23 + 20;
      if ( (v10 & 0x20000000) == 0 )
        v24 = v23;
      v18 = v24 + 16;
      if ( (v10 & 0x10000000) == 0 )
        v18 = v24;
      if ( (v10 & 0x8000000) != 0 )
        v18 += 24;
      v12 = 4;
    }
    else
    {
      v13 = 32;
      if ( !v11 )
        v13 = 8;
      v14 = v13 + 32;
      if ( (v10 & 0x40000000) == 0 )
        v14 = v13;
      v15 = v14 + 32;
      if ( (v10 & 0x20000000) == 0 )
        v15 = v14;
      v16 = v15 + 24;
      if ( (v10 & 0x10000000) == 0 )
        v16 = v15;
      v17 = v16 + 24;
      if ( (v10 & 0x8000000) == 0 )
        v17 = v16;
      v18 = v17 + 8;
      if ( (v10 & 0x4000000) == 0 )
        v18 = v17;
    }
    v19 = v18 + 8;
    if ( (v10 & 0x2000000) == 0 )
      v19 = v18;
    v20 = v19 - 1;
    if ( (v10 & 0xA0000000) != 0 )
    {
      v21 = (__int64)a3;
      if ( v20 > 0xFFE )
      {
        ProbeForWrite(a3, (unsigned int)v19, v12);
      }
      else
      {
        if ( ((v12 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v21 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v21 = *(_BYTE *)v21;
        *(_BYTE *)(v21 + (unsigned int)v19 - 1) = *(_BYTE *)(v21 + (unsigned int)v19 - 1);
      }
    }
    else if ( v20 > 0xFFFE )
    {
      if ( (_DWORD)v19 )
      {
        if ( ((v12 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 + (unsigned int)v19 > 0x7FFFFFFF0000LL
          || (unsigned int *)((char *)a3 + (unsigned int)v19) < a3 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
    }
    else if ( ((v12 - 1) & (unsigned int)a3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v25 = a3[1];
  }
  else
  {
    v10 = *a3;
    v25 = a3[1];
  }
  if ( (~v10 & v25) == 0 )
  {
    v26 = 0;
    v27 = v25 & 0x80000000;
    if ( a2 < 0 )
    {
      if ( !v27
        || (v35 = AlpcpGetMessageAttributeOffset32(v10, 0x80000000),
            v26 = AlpcpCaptureSecurityAttribute32(a1, (char *)a3 + v35, v8),
            v26 >= 0) )
      {
        if ( (v25 & 0x40000000) == 0
          || (v44 = AlpcpGetMessageAttributeOffset32(v10, 0x40000000),
              v26 = AlpcpCaptureViewAttribute32(a1, (char *)a3 + v44, a4, v8),
              v26 >= 0) )
        {
          if ( (v25 & 0x20000000) == 0
            || (v36 = AlpcpGetMessageAttributeOffset32(v10, 0x20000000),
                v26 = AlpcpCaptureContextAttribute32(a1, (char *)a3 + v36, a4, v8),
                v26 >= 0) )
          {
            if ( (v25 & 0x10000000) == 0
              || (v45 = AlpcpGetMessageAttributeOffset32(v10, 0x10000000),
                  v26 = AlpcpCaptureHandleAttribute32((char *)a3 + v45, v8),
                  v26 >= 0) )
            {
              if ( (v25 & 0x4000000) == 0
                || (MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v10, 0x4000000),
                    v26 = AlpcpCaptureDirectAttribute32((int)a3 + MessageAttributeOffset32, v38, (_DWORD)v8, a2, v25),
                    v26 >= 0) )
              {
                if ( (v25 & 0x2000000) != 0 )
                  v26 = AlpcpCaptureWorkOnBehalfAttribute(v8);
              }
            }
          }
        }
      }
    }
    else if ( !v27
           || (v39 = AlpcpGetMessageAttributeOffset(v10, 0x80000000LL),
               v26 = AlpcpCaptureSecurityAttribute(a1, (char *)a3 + v39, v8),
               v26 >= 0) )
    {
      if ( (v25 & 0x40000000) == 0
        || (v40 = AlpcpGetMessageAttributeOffset(v10, 0x40000000LL),
            v26 = AlpcpCaptureViewAttribute(a1, (char *)a3 + v40, a4, v8),
            v26 >= 0) )
      {
        if ( (v25 & 0x20000000) == 0 )
          goto LABEL_101;
        v28 = (((int)(v10 & 0xC0000000) >> 31) & 0x18) + 40LL;
        if ( (v10 & 0x40000000) == 0 )
          v28 = (((int)(v10 & 0xC0000000) >> 31) & 0x18) + 8LL;
        v26 = AlpcpCaptureContextAttribute(a1, (char *)a3 + v28, a4, v8);
        if ( v26 >= 0 )
        {
LABEL_101:
          if ( (v25 & 0x10000000) == 0
            || (v43 = AlpcpGetMessageAttributeOffset(v10, 0x10000000LL),
                v26 = AlpcpCaptureHandleAttribute((char *)a3 + v43, v8),
                v26 >= 0) )
          {
            if ( (v25 & 0x4000000) == 0
              || (MessageAttributeOffset = AlpcpGetMessageAttributeOffset(v10, 0x4000000LL),
                  v26 = AlpcpCaptureDirectAttribute((int)a3 + MessageAttributeOffset, v42, (_DWORD)v8, a2, v25),
                  v26 >= 0) )
            {
              if ( (v25 & 0x2000000) != 0 )
              {
                CurrentThread = KeGetCurrentThread();
                WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &a5);
                v31 = WorkOnBehalfThread;
                if ( WorkOnBehalfThread )
                {
                  v32 = (__int64)WorkOnBehalfThread;
                }
                else
                {
                  if ( !*(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[16] && !PoEnergyEstimationEnabled() )
                  {
                    v33 = 0LL;
                    goto LABEL_66;
                  }
                  v32 = (__int64)CurrentThread;
                }
                PsEncodeThreadWorkOnBehalfTicket(v32, &v47);
                v33 = v47;
LABEL_66:
                if ( (_DWORD)a5 )
                  ObfDereferenceObject(v31);
                v8[8] = v33;
                return 0;
              }
            }
          }
        }
      }
    }
    if ( v26 < 0 )
      AlpcpReleaseAttributes(v8);
    return (unsigned int)v26;
  }
  return 3221225485LL;
}
