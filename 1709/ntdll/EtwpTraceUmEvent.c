/*
 * XREFs of EtwpTraceUmEvent @ 0x180019A88
 * Callers:
 *     EtwLogTraceEvent @ 0x180019A30 (EtwLogTraceEvent.c)
 *     EtwTraceEventInstance @ 0x180109740 (EtwTraceEventInstance.c)
 * Callees:
 *     EtwpRelogEvent @ 0x180019DB8 (EtwpRelogEvent.c)
 *     EtwpReserveTraceBuffer @ 0x18001A834 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     EtwpDemuxUmTraceHandle @ 0x180109AB0 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpTraceUmEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  size_t v4; // r15
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // ebx
  __int16 v10; // r12
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int i; // ecx
  int v16; // r12d
  struct _TEB *v17; // rax
  unsigned __int64 *v18; // r9
  size_t v19; // r14
  char *v20; // rax
  char *v21; // rsi
  unsigned int j; // r15d
  const void *v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  _CLIENT_ID *p_ClientId; // rdx
  char *v28; // rcx
  unsigned int v29; // [rsp+30h] [rbp-1B8h]
  unsigned int v30; // [rsp+34h] [rbp-1B4h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-1B0h]
  unsigned int v32; // [rsp+3Ch] [rbp-1ACh]
  _DWORD *v33; // [rsp+40h] [rbp-1A8h]
  unsigned int v34; // [rsp+48h] [rbp-1A0h]
  int v35; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v36; // [rsp+50h] [rbp-198h]
  int v37; // [rsp+54h] [rbp-194h]
  int v38; // [rsp+58h] [rbp-190h]
  void *v39; // [rsp+60h] [rbp-188h]
  __int64 v40; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-178h] BYREF
  int UniqueThread; // [rsp+78h] [rbp-170h]
  int UniqueProcess; // [rsp+7Ch] [rbp-16Ch]
  char *v44; // [rsp+80h] [rbp-168h]
  struct _TEB *v45; // [rsp+88h] [rbp-160h]
  _CLIENT_ID *v46; // [rsp+90h] [rbp-158h]
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v38 = a4;
  v4 = a3;
  v40 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v32 = 0;
  v41 = 0LL;
  v30 = a1 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( (a1 & 0x7FFFu) < 0x40 || (result = EtwpDemuxUmTraceHandle(a1, &v30), !(_DWORD)result) )
  {
    v7 = 2LL * v30;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v30 + 8));
    v6 = *(_DWORD **)(EtwpLoggerArray + 8 * v7);
    if ( (*(_BYTE *)(EtwpLoggerArray + 8 * v7) & 1) == 0 )
    {
      v33 = *(_DWORD **)(EtwpLoggerArray + 8 * v7);
      result = 0LL;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 8));
    return 4201LL;
  }
LABEL_5:
  v29 = result;
  if ( (_DWORD)result )
    return result;
  v9 = *a2;
  v31 = v9;
  if ( v9 < (unsigned int)v4 )
  {
    v29 = 87;
  }
  else
  {
    v37 = *((_DWORD *)a2 + 11);
    v10 = v37;
    if ( (v37 & 0x200000) != 0 )
    {
      v11 = EtwpRelogEvent(v6, a2);
    }
    else
    {
      v35 = v37 & 0x100000;
      if ( (v37 & 0x100000) != 0 )
      {
        v12 = v9 - v4;
        if ( v12 > 0x100 )
        {
          v29 = 13;
          goto LABEL_42;
        }
        memset(Src, 0, sizeof(Src));
        if ( v12 )
          memmove(Src, (char *)a2 + v4, v12);
        v13 = v4;
        v31 = v4;
        v14 = v12 >> 4;
        v32 = v14;
        for ( i = 0; ; ++i )
        {
          v34 = i;
          if ( i >= v14 )
            break;
          v13 += LODWORD(Src[2 * i + 1]);
          v31 = v13;
          if ( v13 < LODWORD(Src[2 * i + 1]) )
          {
            v29 = 234;
            goto LABEL_42;
          }
        }
      }
      v16 = v10 & 0x200;
      v17 = NtCurrentTeb();
      v45 = v17;
      v18 = &v41;
      if ( v16 )
        v18 = 0LL;
      v19 = v31;
      v6 = v33;
      v20 = (char *)EtwpReserveTraceBuffer(v33, v31, v17->CurrentIdealProcessor.Reserved, v18, &v40);
      v21 = v20;
      v44 = v20;
      if ( v20 )
      {
        if ( v35 )
        {
          v39 = &v20[v4];
          memmove(v20, a2, v4);
          for ( j = 0; ; ++j )
          {
            v36 = j;
            if ( j >= v32 )
              break;
            v23 = Src[2 * j];
            v24 = (unsigned int)Src[2 * j + 1];
            if ( v23 && v24 )
            {
              v25 = v24;
              memmove(v39, v23, v24);
              v39 = (char *)v39 + v25;
            }
          }
        }
        else
        {
          memmove(v20, a2, v19);
        }
        if ( (v37 & 0x80000) != 0 )
          *(_OWORD *)(v21 + 24) = *(_OWORD *)*((_QWORD *)a2 + 3);
        if ( !v16 )
        {
          v26 = v41;
          *((_QWORD *)v21 + 2) = v41;
          if ( v6[4] != 3 )
            v26 = __rdtsc();
          *((_QWORD *)v21 + 5) = v26;
        }
        *(_DWORD *)v21 = v38 | v19;
        p_ClientId = &NtCurrentTeb()->ClientId;
        v46 = p_ClientId;
        UniqueThread = (int)p_ClientId->UniqueThread;
        v28 = v44;
        *((_DWORD *)v44 + 2) = UniqueThread;
        UniqueProcess = (int)p_ClientId->UniqueProcess;
        *((_DWORD *)v28 + 3) = UniqueProcess;
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
        v6 = v33;
        goto LABEL_42;
      }
      if ( (unsigned int)v19 <= 0xFFF8 )
        v11 = v6[53] < (unsigned int)v19 ? 234 : 8;
      else
        v11 = 534;
    }
    v29 = v11;
  }
LABEL_42:
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (unsigned int)v6[5] + 8));
  return v29;
}
