/*
 * XREFs of EtwTraceEvent @ 0x14015331C
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x1401157E0 (IoWMIWriteEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140153740 (EtwpReleaseTraceBuffer.c)
 *     EtwpOpenLogger @ 0x14015377C (EtwpOpenLogger.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14027EEAC (EtwpGetReserveTraceBufferStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, __int64 a3, int a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // r13
  int v11; // eax
  unsigned int v12; // edi
  char *v13; // rdx
  unsigned int v14; // ecx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rbx
  int j; // edx
  unsigned int v18; // ecx
  unsigned int ReserveTraceBufferStatus; // ebx
  char *v20; // rax
  char *v21; // rsi
  int i; // edi
  char *v23; // rdx
  size_t v24; // rcx
  size_t v25; // rbx
  unsigned __int64 v26; // rcx
  _OWORD *v27; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v30[4]; // [rsp+30h] [rbp-1B8h] BYREF
  int v31; // [rsp+34h] [rbp-1B4h]
  unsigned int v32; // [rsp+38h] [rbp-1B0h]
  int v33; // [rsp+3Ch] [rbp-1ACh]
  char *v34; // [rsp+40h] [rbp-1A8h]
  int v35; // [rsp+48h] [rbp-1A0h]
  int v36; // [rsp+4Ch] [rbp-19Ch]
  int v37; // [rsp+50h] [rbp-198h]
  int v38; // [rsp+54h] [rbp-194h]
  int v39; // [rsp+58h] [rbp-190h]
  unsigned int v40; // [rsp+5Ch] [rbp-18Ch]
  void *v41; // [rsp+60h] [rbp-188h]
  __int64 v42; // [rsp+68h] [rbp-180h]
  __int64 v43; // [rsp+70h] [rbp-178h]
  __int64 v44; // [rsp+78h] [rbp-170h] BYREF
  _BYTE v45[32]; // [rsp+80h] [rbp-168h] BYREF
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v5 = (unsigned int)a3;
  LODWORD(v34) = a3;
  v33 = 0;
  v31 = 0;
  v7 = a1;
  v40 = a1;
  if ( a5 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  v42 = v8;
  if ( v7 >= *(_DWORD *)(v8 + 8) )
    return (unsigned int)-1073741816;
  LOBYTE(a3) = a5;
  v9 = EtwpOpenLogger(v7, v8, a3, v30);
  v10 = (unsigned int *)v9;
  v43 = v9;
  if ( !v9 )
    return (unsigned int)-1073741816;
  v11 = *(_DWORD *)(v9 + 12);
  if ( (v11 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
  }
  else
  {
    if ( !a5 && (v11 & 0x1000000) != 0 )
    {
      ReserveTraceBufferStatus = -1073741637;
      goto LABEL_62;
    }
    if ( a5 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)a2 + v5 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)a2 + v5) < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v32 = *a2;
    if ( v32 < (unsigned int)v5 )
    {
      ReserveTraceBufferStatus = -1073741811;
      v31 = -1073741811;
    }
    else
    {
      v35 = *((_DWORD *)a2 + 11);
      v39 = v35;
      v37 = v35 & 0x100000;
      v12 = v32;
      if ( (v35 & 0x100000) == 0 )
      {
LABEL_32:
        v20 = (char *)EtwpReserveTraceBuffer(v10, v12, (__int64)v45, &v44, 0);
        v21 = v20;
        v34 = v20;
        if ( v20 )
        {
          if ( v37 )
          {
            v41 = &v20[(unsigned int)v5];
            memmove(v20, a2, (unsigned int)v5);
            for ( i = 0; ; ++i )
            {
              v38 = i;
              if ( i >= v33 )
                break;
              v23 = (char *)Src[2 * i];
              v24 = LODWORD(Src[2 * i + 1]);
              if ( v23 && (_DWORD)v24 )
              {
                if ( a5 && ((unsigned __int64)&v23[v24] > 0x7FFFFFFF0000LL || &v23[v24] < v23) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v25 = v24;
                memmove(v41, v23, v24);
                v41 = (char *)v41 + v25;
              }
            }
          }
          else
          {
            if ( a5 && v12 )
            {
              if ( ((unsigned __int8)a2 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v26 = (unsigned __int64)a2 + v12;
              if ( v26 > 0x7FFFFFFF0000LL || v26 < (unsigned __int64)a2 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v20, a2, v12);
          }
          if ( (v39 & 0x80000) != 0 )
          {
            v27 = (_OWORD *)*((_QWORD *)a2 + 3);
            if ( a5 && ((unsigned __int8)v27 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(_OWORD *)(v21 + 24) = *v27;
          }
          CurrentThread = KeGetCurrentThread();
          *(_DWORD *)v21 = a4 | v32;
          *((_QWORD *)v21 + 2) = v44;
          *((_DWORD *)v21 + 10) = CurrentThread->SchedulerApc.SpareLong0;
          *((_DWORD *)v21 + 11) = CurrentThread->UserTime;
          *((_DWORD *)v21 + 2) = CurrentThread[1].CurrentRunTime;
          *((_DWORD *)v21 + 3) = CurrentThread[1].CycleTime;
          if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) && (v10[3] & 0x80000) != 0 )
            EtwpSendTraceEvent(v10, v45);
          EtwpReleaseTraceBuffer(v45);
          ReserveTraceBufferStatus = v31;
        }
        else
        {
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v10, v12);
        }
        goto LABEL_62;
      }
      v13 = (char *)a2 + v5;
      v14 = v32 - v5;
      if ( v32 - (unsigned int)v5 <= 0x100 )
      {
        if ( v14 )
        {
          if ( a5 )
          {
            if ( ((unsigned __int8)v13 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v15 = (unsigned __int64)&v13[v14];
            if ( v15 > 0x7FFFFFFF0000LL || v15 < (unsigned __int64)v13 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v16 = v14;
          memmove(Src, v13, v14);
          v12 = (unsigned int)v34;
          v32 = (unsigned int)v34;
          v33 = v16 >> 4;
          for ( j = 0; ; ++j )
          {
            v36 = j;
            if ( j >= v33 )
            {
              LODWORD(v5) = (_DWORD)v34;
              goto LABEL_32;
            }
            v18 = (unsigned int)Src[2 * j + 1];
            v12 += v18;
            v32 = v12;
            if ( v12 < v18 )
              break;
          }
          ReserveTraceBufferStatus = -2147483643;
          v31 = -2147483643;
          goto LABEL_62;
        }
        goto LABEL_32;
      }
      ReserveTraceBufferStatus = -1073741684;
      v31 = -1073741684;
    }
  }
LABEL_62:
  EtwpCloseLogger(v40, v8, v30[0]);
  return ReserveTraceBufferStatus;
}
