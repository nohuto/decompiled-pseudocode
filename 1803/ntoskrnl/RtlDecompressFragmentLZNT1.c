/*
 * XREFs of RtlDecompressFragmentLZNT1 @ 0x14056D1C0
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunkNewThread @ 0x1400C1624 (LZNT1DecompressChunkNewThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     LZNT1DecompressChunk @ 0x1401B38F0 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8)
{
  unsigned __int64 v8; // rdi
  char *v9; // r14
  unsigned __int64 v10; // r13
  int v11; // ebx
  __int16 v12; // ax
  __int16 v13; // cx
  unsigned int v14; // esi
  __int16 *i; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  int v18; // r12d
  unsigned int v19; // edx
  __int64 v20; // rcx
  bool v21; // zf
  unsigned int v22; // ecx
  _BYTE *v24; // rdx
  size_t v25; // r8
  int v26; // eax
  struct _LIST_ENTRY *v27; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+38h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-18h] BYREF
  int v30; // [rsp+B0h] [rbp+48h]
  unsigned int v31; // [rsp+B8h] [rbp+50h]
  int v32; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  v31 = a2;
  v30 = (int)a1;
  v8 = a3;
  v27 = (struct _LIST_ENTRY *)&a1[a2];
  v9 = a1;
  v10 = a3 + a4;
  v11 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *(_WORD *)v8;
  v29 = 1LL;
  v13 = v12;
  v14 = a5;
  for ( i = (__int16 *)v8; ; v13 = *i )
  {
    v32 = 4096;
    v16 = (v13 & 0xFFFu) + 3;
    if ( v14 < 0x1000 )
      break;
    i = (__int16 *)((char *)i + (unsigned int)v16);
    if ( (unsigned __int64)i > v10 )
      goto LABEL_41;
    v14 -= 4096;
    v8 = (unsigned __int64)i;
    if ( (unsigned __int64)i <= v10 - 2 )
    {
      v12 = *i;
      if ( *i )
        continue;
    }
    *a7 = 0;
    goto LABEL_23;
  }
  v17 = (unsigned int)v16;
  if ( (unsigned __int64)i + v16 > v10 )
  {
LABEL_41:
    v11 = -1073741246;
    *a7 = v8;
    goto LABEL_23;
  }
  v18 = a6;
  v19 = v31;
  while ( 1 )
  {
    v20 = 4096 - v14;
    if ( (unsigned int)v20 >= v19 )
      v20 = v19;
    LODWORD(Size) = v20;
    if ( v12 >= 0 )
    {
      v25 = (unsigned int)v20;
      if ( v20 + v14 + v8 + 2 > v10 )
        goto LABEL_41;
      v24 = (_BYTE *)(v8 + v14 + 2LL);
LABEL_32:
      memmove(v9, v24, v25);
      goto LABEL_17;
    }
    if ( v14 || (_DWORD)v20 != 4096 )
      break;
    if ( v18 )
    {
      v11 = LZNT1DecompressChunkNewThread((__int64)&Event, (unsigned __int64)v9, v27, v8 + 2, v17 + v8, v18);
      if ( v11 < 0 )
        goto LABEL_37;
      LODWORD(Size) = v18;
    }
    else
    {
      v11 = LZNT1DecompressChunk(v9, v27, (_BYTE *)(v8 + 2), v17 + v8, &Size);
      if ( v11 < 0 )
      {
LABEL_37:
        v26 = Size;
        goto LABEL_39;
      }
    }
LABEL_17:
    v14 = 0;
    v9 += (unsigned int)Size;
    v21 = v31 == (_DWORD)Size;
    v19 = v31 - Size;
    v22 = (unsigned int)v9;
    v31 -= Size;
    if ( v21 )
      goto LABEL_22;
    v8 += v17;
    if ( v8 > v10 - 2 )
      goto LABEL_22;
    v12 = *(_WORD *)v8;
    if ( !*(_WORD *)v8 )
      goto LABEL_22;
    v32 = 4096;
    v17 = (v12 & 0xFFFu) + 3;
    if ( v8 + v17 > v10 )
      goto LABEL_41;
  }
  v11 = LZNT1DecompressChunk(a8, a8 + 4096, (_BYTE *)(v8 + 2), v17 + v8, &v32);
  if ( v11 >= 0 )
  {
    v24 = &a8[v14];
    if ( v32 - v14 < (unsigned int)Size )
    {
      memmove(v9, v24, v32 - v14);
      v22 = v32 + (_DWORD)v9 - v14;
LABEL_22:
      *a7 = v22 - v30;
      goto LABEL_23;
    }
    v25 = (unsigned int)Size;
    goto LABEL_32;
  }
  v26 = v32;
LABEL_39:
  *a7 = v26;
LABEL_23:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v11 >= 0 && v29 < 0 )
    return (unsigned int)HIDWORD(v29);
  return (unsigned int)v11;
}
