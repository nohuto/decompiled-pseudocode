/*
 * XREFs of EtwpTraceMessageVa @ 0x140087260
 * Callers:
 *     WmiTraceMessage @ 0x14003B520 (WmiTraceMessage.c)
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     WmiTraceMessageVa @ 0x1402531F0 (WmiTraceMessageVa.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x140087070 (EtwpReleaseTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1400877F4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140131B2C (EtwpGetReserveTraceBufferStatus.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 */

__int64 __fastcall EtwpTraceMessageVa(
        __int64 a1,
        char a2,
        signed __int32 *a3,
        __int16 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int16 v7; // di
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int8 v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // si
  char v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned int ReserveTraceBufferStatus; // esi
  __int64 v23; // rbx
  int v24; // edx
  int v25; // r10d
  int v26; // r9d
  int v27; // ecx
  int v28; // r8d
  unsigned int v29; // ecx
  __int64 v30; // rbx
  signed __int32 v31; // ecx
  volatile signed __int32 *v32; // rax
  __int16 v33; // dx
  signed __int32 *v34; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v36; // rdi
  char *v37; // rdx
  size_t v38; // r15
  int v39; // r8d
  char v41; // [rsp+30h] [rbp-D8h]
  char v42; // [rsp+31h] [rbp-D7h]
  __int64 v43; // [rsp+38h] [rbp-D0h]
  signed __int32 *v44; // [rsp+40h] [rbp-C8h]
  int v45; // [rsp+48h] [rbp-C0h]
  unsigned int v46; // [rsp+70h] [rbp-98h]
  unsigned __int64 v47; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-88h]
  unsigned __int64 v49; // [rsp+88h] [rbp-80h]
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  signed __int32 KernelStack; // [rsp+A0h] [rbp-68h]
  unsigned int CurrentRunTime; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v53; // [rsp+A8h] [rbp-60h]
  signed __int64 v54[11]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v55; // [rsp+110h] [rbp+8h]
  unsigned int v56; // [rsp+114h] [rbp+Ch]

  v56 = HIDWORD(a1);
  v7 = a1;
  v8 = 0LL;
  v45 = 0;
  v9 = 0LL;
  v47 = 0LL;
  v10 = a6;
  if ( a6 )
    v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v11 = EtwpHostSiloState;
  v43 = v11;
  v46 = v7;
  if ( v7 >= 0x40u )
    return (unsigned int)-1073741816;
  v12 = EtwpOpenLogger(v7, v11, v10, &a6);
  v13 = v12;
  v48 = v12;
  if ( !v12 )
    return (unsigned int)-1073741816;
  v14 = *(_DWORD *)(v12 + 12);
  if ( (v14 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
    goto LABEL_101;
  }
  if ( !v10 && (v14 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
LABEL_101:
    v23 = v43;
    goto LABEL_84;
  }
  v15 = a2 & 0x40;
  v41 = a2 & 0x40;
  v16 = a2 & 0x80;
  v42 = a2 & 0x80;
  v17 = a5;
  if ( (a2 & 0x40) != 0 )
  {
    v9 = a5 + v56;
    v47 = v9;
  }
  v49 = 0LL;
  v18 = a5;
  while ( 1 )
  {
    if ( !v15 )
    {
      v19 = v18 + 8;
LABEL_13:
      v20 = *(_QWORD *)(v19 - 8);
      goto LABEL_14;
    }
    if ( !v16 )
    {
      v19 = v18 + 8;
      if ( v19 > v9 )
      {
        ReserveTraceBufferStatus = -1073741306;
        v23 = v43;
        goto LABEL_84;
      }
      goto LABEL_13;
    }
    v19 = v18 + 4;
    if ( v19 > v9 )
    {
      ReserveTraceBufferStatus = -1073741306;
      v23 = v43;
      goto LABEL_84;
    }
    v20 = *(unsigned int *)(v19 - 4);
LABEL_14:
    if ( !v20 )
      break;
    if ( v15 && v16 )
    {
      v18 = v19 + 4;
      v21 = *(unsigned int *)(v18 - 4);
    }
    else
    {
      v18 = v19 + 8;
      v21 = *(_QWORD *)(v18 - 8);
    }
    if ( v21 )
    {
      v8 += v21;
      v49 = v8;
      if ( v8 < v21 )
      {
        ReserveTraceBufferStatus = -1073741675;
        v23 = v43;
        goto LABEL_84;
      }
    }
  }
  if ( !*(_QWORD *)(v13 + 264) )
    a2 &= ~1u;
  v24 = 4;
  if ( (a2 & 1) != 0 )
    v25 = 4;
  else
    v25 = 0;
  if ( (a2 & 2) != 0 )
    v26 = 16;
  else
    v26 = 0;
  if ( (a2 & 4) == 0 )
    v24 = 0;
  v27 = 8;
  if ( (a2 & 0x18) != 0 )
    v28 = 8;
  else
    v28 = 0;
  if ( (a2 & 0x20) == 0 )
    v27 = 0;
  v29 = v8 + v28 + v24 + v25 + v26 + 8 + v27;
  v55 = v29;
  if ( v8 > v29 )
  {
    ReserveTraceBufferStatus = -1073741306;
    goto LABEL_101;
  }
  v30 = EtwpReserveTraceBuffer((int *)v48, v29, (__int64)v54, &v50, 0);
  v31 = 0;
  v32 = *(volatile signed __int32 **)(v48 + 264);
  if ( v32 )
  {
    v31 = _InterlockedIncrement(v32);
    v45 = 0;
    v9 = v47;
    v15 = v41;
    v16 = v42;
    v8 = v49;
  }
  if ( !v30 )
  {
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v48, v55);
    goto LABEL_101;
  }
  *(_DWORD *)v30 = -1879048192;
  *(_WORD *)v30 = v55;
  *(_WORD *)(v30 + 4) = a4;
  if ( v16 )
    v33 = 64;
  else
    v33 = 128;
  *(_WORD *)(v30 + 6) = v33 | a2 & 0x3F;
  v34 = (signed __int32 *)(v30 + 8);
  v44 = v34;
  if ( (a2 & 1) != 0 )
  {
    *v34++ = v31;
    v44 = v34;
  }
  if ( (a2 & 4) != 0 )
  {
    *v34++ = *a3;
LABEL_53:
    v44 = v34;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_OWORD *)v34 = *(_OWORD *)a3;
    v34 += 4;
    goto LABEL_53;
  }
  if ( (a2 & 8) != 0 )
  {
    *(_QWORD *)v34 = v50;
    v34 += 2;
    v44 = v34;
  }
  if ( (a2 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    KernelStack = (signed __int32)CurrentThread[1].KernelStack;
    *v44 = KernelStack;
    CurrentRunTime = CurrentThread[1].CurrentRunTime;
    v44[1] = CurrentRunTime;
    v34 = v44 + 2;
    v45 = 0;
    v9 = v47;
    v15 = v41;
    v16 = v42;
    v8 = v49;
  }
  v53 = v8;
  while ( 1 )
  {
    do
    {
      if ( v15 && v16 )
      {
        v36 = v17 + 4;
        v37 = (char *)*(unsigned int *)(v36 - 4);
      }
      else
      {
        v36 = v17 + 8;
        v37 = *(char **)(v36 - 8);
      }
      if ( !v37 )
      {
        v39 = 0;
        goto LABEL_81;
      }
      if ( !v15 )
        goto LABEL_66;
      if ( v36 >= v9 )
      {
        v39 = -1073741306;
        v45 = -1073741306;
        goto LABEL_81;
      }
      if ( v16 )
      {
        v17 = v36 + 4;
        v38 = *(unsigned int *)(v17 - 4);
      }
      else
      {
LABEL_66:
        v17 = v36 + 8;
        v38 = *(_QWORD *)(v17 - 8);
      }
    }
    while ( !v38 );
    if ( v38 > v8 )
      break;
    if ( v15 && ((unsigned __int64)&v37[v38] > 0x7FFFFFFF0000LL || &v37[v38] < v37) )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(v34, v37, v38);
    v8 -= v38;
    v53 = v8;
    v34 = (signed __int32 *)((char *)v34 + v38);
  }
  v39 = -1073741306;
  v45 = -1073741306;
LABEL_81:
  v23 = v43;
  if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
    && (*(_DWORD *)(v48 + 12) & 0x80000) != 0
    && v39 >= 0 )
  {
    EtwpSendTraceEvent(v48, v54);
  }
  EtwpReleaseTraceBuffer(v54);
  ReserveTraceBufferStatus = v45;
LABEL_84:
  EtwpCloseLogger(v46, v23, a6);
  return ReserveTraceBufferStatus;
}
