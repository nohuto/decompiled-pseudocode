/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x1400046A0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rax
  signed __int32 v11; // ebp
  unsigned int v12; // edi
  __int64 result; // rax
  __int64 *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *i; // rcx
  int v19; // [rsp+48h] [rbp+10h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = 0;
  v9 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v19 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v19);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
    memmove(*(void **)a2, ExPoolTagTables, 56LL * *(_QWORD *)(a2 + 8));
    v14 = (__int64 *)&unk_14039EDC8;
    v15 = 1279LL;
    v16 = *(_QWORD *)a2 + 56LL * *(_QWORD *)(a2 + 8);
    do
    {
      v17 = *v14;
      if ( *v14 )
      {
        for ( i = *(_QWORD **)a2; i != (_QWORD *)v16; v17 += 56LL )
        {
          if ( *(_DWORD *)v17 )
          {
            i[2] += *(_QWORD *)(v17 + 16);
            i[3] += *(_QWORD *)(v17 + 24);
            i[1] += *(_QWORD *)(v17 + 8);
            i[5] += *(_QWORD *)(v17 + 40);
            i[6] += *(_QWORD *)(v17 + 48);
            i[4] += *(_QWORD *)(v17 + 32);
          }
          i += 7;
        }
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
      memmove(*(void **)(a2 + 16), PoolTrackTableExpansion, 56 * v10);
  }
  v11 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v12 = ~v11 & 0x80000000;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v12 )
        break;
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  else
  {
    result = v12 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
