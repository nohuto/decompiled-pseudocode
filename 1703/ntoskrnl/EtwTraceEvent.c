/*
 * XREFs of EtwTraceEvent @ 0x140150C60
 * Callers:
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x140148670 (IoWMIWriteEvent.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x140087070 (EtwpReleaseTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1400877F4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140131B2C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, __int64 a3, int a4, char a5)
{
  size_t v5; // r12
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rax
  int *v10; // r13
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // edi
  char *v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbx
  int j; // edx
  unsigned int v19; // ecx
  unsigned int ReserveTraceBufferStatus; // ebx
  __int64 v21; // rdi
  char *v22; // rax
  char *v23; // rsi
  size_t v24; // r8
  char *v25; // r12
  int i; // edi
  char *v27; // rdx
  size_t v28; // rcx
  size_t v29; // rbx
  unsigned __int64 v30; // rcx
  _OWORD *v31; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v34[4]; // [rsp+30h] [rbp-1B8h] BYREF
  int v35; // [rsp+34h] [rbp-1B4h]
  size_t v36; // [rsp+38h] [rbp-1B0h]
  __int64 v37; // [rsp+40h] [rbp-1A8h]
  int v38; // [rsp+48h] [rbp-1A0h]
  int v39; // [rsp+4Ch] [rbp-19Ch]
  int v40; // [rsp+50h] [rbp-198h]
  int v41; // [rsp+54h] [rbp-194h]
  int v42; // [rsp+58h] [rbp-190h]
  unsigned int v43; // [rsp+5Ch] [rbp-18Ch]
  __int64 v44; // [rsp+60h] [rbp-188h]
  char *v45; // [rsp+68h] [rbp-180h]
  __int64 v46; // [rsp+70h] [rbp-178h]
  char *v47; // [rsp+78h] [rbp-170h]
  __int64 v48; // [rsp+80h] [rbp-168h] BYREF
  signed __int64 v49[3]; // [rsp+88h] [rbp-160h] BYREF
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v5 = (unsigned int)a3;
  v38 = 0;
  v35 = 0;
  v7 = a1;
  v43 = a1;
  if ( a1 >= 0x40u )
    return (unsigned int)-1073741816;
  v8 = a5 ? *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108) : EtwpHostSiloState;
  v44 = v8;
  v37 = v8;
  LOBYTE(a3) = a5;
  v9 = EtwpOpenLogger(v7, v8, a3, v34);
  v10 = (int *)v9;
  v46 = v9;
  if ( !v9 )
    return (unsigned int)-1073741816;
  v11 = *(_DWORD *)(v9 + 12);
  if ( (v11 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
LABEL_69:
    v21 = v37;
    goto LABEL_63;
  }
  if ( !a5 && (v11 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
    goto LABEL_69;
  }
  if ( a5 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a2 + v5 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)a2 + v5) < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  LODWORD(v36) = *a2;
  if ( (unsigned int)v36 < (unsigned int)v5 )
  {
    ReserveTraceBufferStatus = -1073741811;
    v35 = -1073741811;
    v21 = v37;
  }
  else
  {
    v40 = *((_DWORD *)a2 + 11);
    v12 = v40;
    v39 = v40;
    v13 = v36;
    if ( (v40 & 0x100000) == 0 )
    {
LABEL_32:
      v22 = (char *)EtwpReserveTraceBuffer(v10, v13, (__int64)v49, &v48, 0);
      v23 = v22;
      v47 = v22;
      if ( v22 )
      {
        if ( (v12 & 0x100000) != 0 )
        {
          v24 = v5;
          v25 = &v22[v5];
          v45 = v25;
          memmove(v22, a2, v24);
          for ( i = 0; ; ++i )
          {
            v42 = i;
            if ( i >= v38 )
              break;
            v27 = (char *)Src[2 * i];
            v28 = LODWORD(Src[2 * i + 1]);
            if ( v27 && (_DWORD)v28 )
            {
              if ( a5 && ((unsigned __int64)&v27[v28] > 0x7FFFFFFF0000LL || &v27[v28] < v27) )
                MEMORY[0x7FFFFFFF0000] = 0;
              v29 = v28;
              memmove(v25, v27, v28);
              v25 += v29;
              v45 = v25;
            }
          }
          v12 = v39;
        }
        else
        {
          if ( a5 && v13 )
          {
            if ( ((unsigned __int8)a2 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v30 = (unsigned __int64)a2 + v13;
            if ( v30 > 0x7FFFFFFF0000LL || v30 < (unsigned __int64)a2 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(v22, a2, v13);
        }
        if ( (v12 & 0x80000) != 0 )
        {
          v31 = (_OWORD *)*((_QWORD *)a2 + 3);
          if ( a5 && ((unsigned __int8)v31 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v23 + 24) = *v31;
        }
        v21 = v37;
        CurrentThread = KeGetCurrentThread();
        *(_DWORD *)v23 = a4 | v36;
        *((_QWORD *)v23 + 2) = v48;
        *((_DWORD *)v23 + 10) = CurrentThread->SchedulerApc.SpareLong0;
        *((_DWORD *)v23 + 11) = CurrentThread->UserTime;
        *((_DWORD *)v23 + 2) = CurrentThread[1].KernelStack;
        *((_DWORD *)v23 + 3) = CurrentThread[1].CurrentRunTime;
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) && (v10[3] & 0x80000) != 0 )
          EtwpSendTraceEvent(v10, v49);
        EtwpReleaseTraceBuffer(v49);
        ReserveTraceBufferStatus = v35;
        goto LABEL_63;
      }
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus((__int64)v10, v13);
      goto LABEL_69;
    }
    v14 = (char *)a2 + v5;
    v15 = v36 - v5;
    if ( (unsigned int)(v36 - v5) <= 0x100 )
    {
      if ( v15 )
      {
        if ( a5 )
        {
          if ( ((unsigned __int8)v14 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = (unsigned __int64)&v14[v15];
          if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)v14 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v17 = v15;
        memmove(Src, v14, v15);
        v13 = v5;
        LODWORD(v36) = v5;
        v38 = v17 >> 4;
        for ( j = 0; ; ++j )
        {
          v41 = j;
          if ( j >= v38 )
          {
            v12 = v39;
            goto LABEL_32;
          }
          v19 = (unsigned int)Src[2 * j + 1];
          v13 += v19;
          LODWORD(v36) = v13;
          if ( v13 < v19 )
            break;
        }
        ReserveTraceBufferStatus = -2147483643;
        v35 = -2147483643;
        v21 = v37;
        goto LABEL_63;
      }
      goto LABEL_32;
    }
    ReserveTraceBufferStatus = -1073741684;
    v35 = -1073741684;
    v21 = v37;
  }
LABEL_63:
  EtwpCloseLogger(v43, v21, v34[0]);
  return ReserveTraceBufferStatus;
}
