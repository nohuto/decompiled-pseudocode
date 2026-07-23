/*
 * XREFs of EtwpTraceUmMessage @ 0x180019700
 * Callers:
 *     EtwTraceMessageVa @ 0x180019640 (EtwTraceMessageVa.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18001A834 (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     EtwpDemuxUmTraceHandle @ 0x180109AB0 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpTraceUmMessage(unsigned __int16 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5)
{
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // r13d
  char v11; // r14
  unsigned int v12; // ebx
  __int64 v13; // rsi
  __int64 i; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  signed __int32 v17; // ecx
  volatile signed __int32 *v18; // rdx
  signed __int32 *v19; // rdi
  struct _TEB *v20; // rcx
  __int64 v21; // rsi
  const void *v22; // rdx
  size_t v23; // rbx
  int v24; // eax
  signed __int32 *v25; // [rsp+30h] [rbp-98h]
  unsigned int v26; // [rsp+38h] [rbp-90h]
  __int64 v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+60h] [rbp-68h] BYREF
  __int64 v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  signed __int32 UniqueThread; // [rsp+78h] [rbp-50h]
  signed __int32 UniqueProcess; // [rsp+7Ch] [rbp-4Ch]
  __int64 v33; // [rsp+80h] [rbp-48h]
  struct _TEB *v34; // [rsp+88h] [rbp-40h]
  const void *v35; // [rsp+90h] [rbp-38h]
  unsigned int v36; // [rsp+D0h] [rbp+8h] BYREF
  __int16 v37; // [rsp+E8h] [rbp+20h]

  v37 = a4;
  v28 = 0LL;
  v36 = a1 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( (a1 & 0x7FFFu) < 0x40 || (result = EtwpDemuxUmTraceHandle(a1, &v36), !(_DWORD)result) )
  {
    v7 = 2LL * v36;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v36 + 8));
    v8 = *(_QWORD *)(EtwpLoggerArray + 8 * v7);
    if ( (*(_BYTE *)(EtwpLoggerArray + 8 * v7) & 1) == 0 )
    {
      v27 = *(_QWORD *)(EtwpLoggerArray + 8 * v7);
      result = 0LL;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 8));
    return 4201LL;
  }
  v8 = v27;
LABEL_5:
  v26 = result;
  if ( !(_DWORD)result )
  {
    v10 = a2 & 0x18;
    v11 = a2 & 0xFE;
    if ( *(_QWORD *)(v8 + 400) )
      v11 = a2;
    v12 = (v10 != 0 ? 8 : 0)
        + ((v11 & 2) != 0 ? 0x10 : 0)
        + ((v11 & 4) != 0 ? 4 : 0)
        + ((v11 & 0x20) != 0 ? 16 : 8)
        + 4 * (v11 & 1);
    v13 = a5;
    for ( i = a5 - 8; *(_QWORD *)(i + 8); v12 += *(_DWORD *)i )
    {
      i += 16LL;
      if ( v12 + *(_DWORD *)i < v12 )
        return 534LL;
    }
    v34 = NtCurrentTeb();
    v15 = v27;
    v16 = EtwpReserveTraceBuffer(
            v27,
            v12,
            v34->CurrentIdealProcessor.Reserved,
            (unsigned __int64)&v28 & -(__int64)(v10 != 0),
            &v30);
    v33 = v16;
    v17 = 0;
    v18 = *(volatile signed __int32 **)(v8 + 400);
    if ( v18 )
    {
      v17 = _InterlockedIncrement(v18);
      v15 = v27;
      v16 = v33;
    }
    if ( !v16 )
    {
      if ( v12 <= 0xFFF8 )
        v24 = *(_DWORD *)(v15 + 212) < v12 ? 234 : 8;
      else
        v24 = 534;
      v26 = v24;
LABEL_34:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v15 + 20) + 8));
      return v26;
    }
    *(_DWORD *)v16 = -1879048192;
    *(_WORD *)v16 = v12;
    *(_WORD *)(v16 + 6) = v11 & 0x3F | 0x80;
    *(_WORD *)(v16 + 4) = v37;
    v19 = (signed __int32 *)(v16 + 8);
    v25 = (signed __int32 *)(v16 + 8);
    if ( (v11 & 1) != 0 )
    {
      *v19 = v17;
      v19 = (signed __int32 *)(v16 + 12);
      v25 = (signed __int32 *)(v16 + 12);
    }
    if ( (v11 & 4) != 0 )
    {
      *v19++ = *a3;
    }
    else
    {
      if ( (v11 & 2) == 0 )
      {
LABEL_21:
        if ( v10 )
        {
          *(_QWORD *)v19 = v28;
          v19 += 2;
          v25 = v19;
        }
        if ( (v11 & 0x20) != 0 )
        {
          v20 = NtCurrentTeb();
          UniqueThread = (signed __int32)v20->ClientId.UniqueThread;
          *v25 = UniqueThread;
          UniqueProcess = (signed __int32)v20->ClientId.UniqueProcess;
          v25[1] = UniqueProcess;
          v19 = v25 + 2;
        }
        v29 = v13;
        while ( 1 )
        {
          v21 = v13 + 8;
          v29 = v21;
          v22 = *(const void **)(v21 - 8);
          v35 = v22;
          if ( !v22 )
            break;
          v13 = v21 + 8;
          v29 = v13;
          v23 = *(_QWORD *)(v13 - 8);
          memmove(v19, v22, v23);
          v19 = (signed __int32 *)((char *)v19 + v23);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
        v15 = v27;
        goto LABEL_34;
      }
      *(_OWORD *)v19 = *(_OWORD *)a3;
      v19 += 4;
    }
    v25 = v19;
    goto LABEL_21;
  }
  return result;
}
