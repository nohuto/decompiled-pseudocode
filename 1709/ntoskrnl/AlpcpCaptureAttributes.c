/*
 * XREFs of AlpcpCaptureAttributes @ 0x1404A1A00
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x14006AD64 (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14011BF20 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x14044A08C (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x14044A118 (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureViewAttribute @ 0x14046134C (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureSecurityAttribute @ 0x140461FBC (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpReleaseAttributes @ 0x140465C84 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureContextAttribute @ 0x1404A1F30 (AlpcpCaptureContextAttribute.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     AlpcpCaptureHandleAttribute @ 0x14050654C (AlpcpCaptureHandleAttribute.c)
 *     AlpcpGetMessageAttributeOffset @ 0x1405701E8 (AlpcpGetMessageAttributeOffset.c)
 *     AlpcpCaptureDirectAttribute @ 0x140572630 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140573684 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x140582EF4 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpCaptureContextAttribute32 @ 0x14058CA74 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x14059E8BC (AlpcpCaptureViewAttribute32.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x1406DE8A8 (AlpcpCaptureHandleAttribute32.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, _DWORD *a3, __int64 a4, void *a5)
{
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // r14d
  ULONG v11; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  SIZE_T v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  ULONG v22; // eax
  ULONG v23; // ecx
  ULONG v24; // eax
  ULONG v25; // ecx
  int v26; // edi
  int v27; // esi
  __int64 v28; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  int MessageAttributeOffset; // eax
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 MessageAttributeOffset32; // rax
  void *v43; // rdx
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
    v11 = 8;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (v10 & 0x80000000) != 0 )
        v11 = 20;
      v22 = v11 + 16;
      if ( (v10 & 0x40000000) == 0 )
        v22 = v11;
      v23 = v22 + 20;
      if ( (v10 & 0x20000000) == 0 )
        v23 = v22;
      v24 = v23 + 16;
      if ( (v10 & 0x10000000) == 0 )
        v24 = v23;
      v25 = v24 + 24;
      if ( (v10 & 0x8000000) == 0 )
        v25 = v24;
      v18 = v25 + 8;
      if ( (v10 & 0x2000000) == 0 )
        v18 = v25;
      v11 = 4;
    }
    else
    {
      v12 = 8;
      if ( (v10 & 0x80000000) != 0 )
        v12 = 32;
      v13 = v12 + 32;
      if ( (v10 & 0x40000000) == 0 )
        v13 = v12;
      v14 = v13 + 32;
      if ( (v10 & 0x20000000) == 0 )
        v14 = v13;
      v15 = v14 + 24;
      if ( (v10 & 0x10000000) == 0 )
        v15 = v14;
      v16 = v15 + 24;
      if ( (v10 & 0x8000000) == 0 )
        v16 = v15;
      v17 = v16 + 8;
      if ( (v10 & 0x4000000) == 0 )
        v17 = v16;
      v18 = v17 + 8;
      if ( (v10 & 0x2000000) == 0 )
        v18 = v17;
    }
    v19 = v18;
    v20 = (__int64)a3;
    v21 = v19 - 1;
    if ( (v10 & 0xA0000000) != 0 )
    {
      if ( v21 > 0xFFE )
      {
        ProbeForWrite(a3, v19, v11);
      }
      else
      {
        if ( ((v11 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v20 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v20 = *(_BYTE *)v20;
        *(_BYTE *)(v20 + v19 - 1) = *(_BYTE *)(v20 + v19 - 1);
      }
    }
    else if ( v21 > 0xFFFE )
    {
      if ( v19 )
      {
        if ( ((v11 - 1) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)a3 + v19 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)a3 + v19) < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( ((v11 - 1) & (unsigned int)a3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v26 = a3[1];
  }
  else
  {
    v10 = *a3;
    v26 = a3[1];
  }
  if ( (~v10 & v26) == 0 )
  {
    v27 = 0;
    if ( a2 < 0 )
    {
      if ( v26 >= 0
        || (v41 = AlpcpGetMessageAttributeOffset32(v10, 0x80000000LL),
            v27 = AlpcpCaptureSecurityAttribute32(a1, (__int64)a3 + v41, (__int64)v8),
            v27 >= 0) )
      {
        if ( (v26 & 0x40000000) == 0
          || (v44 = AlpcpGetMessageAttributeOffset32(v10, 0x40000000LL),
              v27 = AlpcpCaptureViewAttribute32(a1, (char *)a3 + v44, a4, v8),
              v27 >= 0) )
        {
          if ( (v26 & 0x20000000) == 0
            || (v40 = AlpcpGetMessageAttributeOffset32(v10, 0x20000000LL),
                v27 = AlpcpCaptureContextAttribute32(a1, (char *)a3 + v40, a4, v8),
                v27 >= 0) )
          {
            if ( (v26 & 0x10000000) == 0
              || (v45 = AlpcpGetMessageAttributeOffset32(v10, 0x10000000LL),
                  v27 = AlpcpCaptureHandleAttribute32((char *)a3 + v45, v8),
                  v27 >= 0) )
            {
              if ( (v26 & 0x4000000) == 0
                || (MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v10, 0x4000000LL),
                    v27 = AlpcpCaptureDirectAttribute32(
                            (_DWORD *)((char *)a3 + MessageAttributeOffset32),
                            v43,
                            (__int64)v8,
                            a2,
                            v26),
                    v27 >= 0) )
              {
                if ( (v26 & 0x2000000) != 0 )
                  v27 = AlpcpCaptureWorkOnBehalfAttribute(v8);
              }
            }
          }
        }
      }
    }
    else if ( v26 >= 0
           || (v35 = AlpcpGetMessageAttributeOffset(v10, 0x80000000LL),
               v27 = AlpcpCaptureSecurityAttribute(a1, (__int64)a3 + v35, (__int64)v8),
               v27 >= 0) )
    {
      if ( (v26 & 0x40000000) == 0
        || (v36 = AlpcpGetMessageAttributeOffset(v10, 0x40000000LL),
            v27 = AlpcpCaptureViewAttribute((__int64)a1, (_DWORD *)((char *)a3 + v36), a4, (__int64)v8),
            v27 >= 0) )
      {
        if ( (v26 & 0x20000000) == 0 )
          goto LABEL_105;
        v28 = (((int)(v10 & 0xC0000000) >> 31) & 0x18) + 40LL;
        if ( (v10 & 0x40000000) == 0 )
          v28 = (((int)(v10 & 0xC0000000) >> 31) & 0x18) + 8LL;
        v27 = AlpcpCaptureContextAttribute(a1, (char *)a3 + v28, a4, v8);
        if ( v27 >= 0 )
        {
LABEL_105:
          if ( (v26 & 0x10000000) == 0
            || (v39 = AlpcpGetMessageAttributeOffset(v10, 0x10000000LL),
                v27 = AlpcpCaptureHandleAttribute((char *)a3 + v39, v8),
                v27 >= 0) )
          {
            if ( (v26 & 0x4000000) == 0
              || (MessageAttributeOffset = AlpcpGetMessageAttributeOffset(v10, 0x4000000LL),
                  v27 = AlpcpCaptureDirectAttribute((int)a3 + MessageAttributeOffset, v38, (_DWORD)v8, a2, v26),
                  v27 >= 0) )
            {
              if ( (v26 & 0x2000000) != 0 )
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
                    goto LABEL_68;
                  }
                  v32 = (__int64)CurrentThread;
                }
                PsEncodeThreadWorkOnBehalfTicket(v32, &v47);
                v33 = v47;
LABEL_68:
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
    if ( v27 < 0 )
      AlpcpReleaseAttributes(v8);
    return (unsigned int)v27;
  }
  return 3221225485LL;
}
