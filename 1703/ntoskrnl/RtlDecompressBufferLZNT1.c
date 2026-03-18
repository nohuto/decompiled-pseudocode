/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x1405804C0
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunkNewThread @ 0x1400531A8 (LZNT1DecompressChunkNewThread.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     LZNT1DecompressChunk @ 0x140189F80 (LZNT1DecompressChunk.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(
        struct _LIST_ENTRY *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int *a6)
{
  unsigned __int16 *v6; // rsi
  struct _LIST_ENTRY *v7; // r14
  struct _LIST_ENTRY *v8; // r12
  unsigned __int64 v9; // r13
  int v10; // edi
  unsigned __int16 v11; // bx
  unsigned __int16 i; // r15
  int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  unsigned int *v16; // rax
  unsigned int v18; // ecx
  size_t v19; // r8
  char *v20; // r15
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  int v23; // [rsp+90h] [rbp+40h]
  unsigned int v24; // [rsp+98h] [rbp+48h] BYREF

  v23 = (int)a1;
  v6 = a3;
  v7 = a1;
  v8 = (struct _LIST_ENTRY *)((char *)a1 + a2);
  v9 = (unsigned __int64)a3 + a4;
  v10 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v22 = 1LL;
  v11 = *v6;
  v24 = 0;
  for ( i = v11; ; i = v11 )
  {
    v15 = (i & 0xFFF) + 3;
    if ( (unsigned __int64)v6 + v15 > v9 )
    {
LABEL_12:
      v16 = a6;
      goto LABEL_32;
    }
    if ( v11 < 0x8000u )
    {
      if ( v15 < 2 )
        goto LABEL_12;
      v18 = v15 - 2;
      v24 = v15 - 2;
      if ( (struct _LIST_ENTRY *)((char *)v7 + v15 - 2) > v8 )
      {
        v18 = (_DWORD)v8 - (_DWORD)v7;
        v24 = (_DWORD)v8 - (_DWORD)v7;
      }
      if ( (unsigned __int64)v6 + v18 + 2 > v9 )
        goto LABEL_12;
      memmove(v7, v6 + 1, v18);
      goto LABEL_26;
    }
    v13 = a5;
    if ( !a5 )
    {
      v10 = LZNT1DecompressChunk(v7, v8, (_BYTE *)v6 + 2, (__int64)v6 + v15, &v24);
      if ( v10 < 0 )
      {
        *a6 = v24;
        goto LABEL_15;
      }
LABEL_26:
      v14 = v24;
      goto LABEL_6;
    }
    v10 = LZNT1DecompressChunkNewThread(
            (__int64)&Event,
            (unsigned __int64)v7,
            v8,
            (unsigned __int64)(v6 + 1),
            (__int64)v6 + v15,
            a5);
    if ( v10 < 0 )
    {
      *a6 = v24;
      goto LABEL_15;
    }
    v14 = v13;
    v24 = v13;
LABEL_6:
    v6 = (unsigned __int16 *)((char *)v6 + v15);
    v7 = (struct _LIST_ENTRY *)((char *)v7 + v14);
    if ( v7 == v8 )
      break;
    if ( (unsigned __int64)v6 > v9 - 2 )
      break;
    v11 = *v6;
    if ( !*v6 )
      break;
    if ( v14 < 0x1000 )
    {
      v19 = (int)(4096 - v14);
      v20 = (char *)v7 + v19;
      if ( (struct _LIST_ENTRY *)((char *)v7 + v19) >= v8 )
        break;
      memset(v7, 0, v19);
      v7 = (struct _LIST_ENTRY *)v20;
    }
  }
  v16 = a6;
  if ( (unsigned __int64)v6 <= v9 )
  {
    *a6 = (_DWORD)v7 - v23;
    goto LABEL_15;
  }
LABEL_32:
  v10 = -1073741246;
  *v16 = (unsigned int)v6;
LABEL_15:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v10 >= 0 && v22 < 0 )
    return (unsigned int)HIDWORD(v22);
  return (unsigned int)v10;
}
