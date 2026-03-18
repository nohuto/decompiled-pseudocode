/*
 * XREFs of ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x18018F618
 * Callers:
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ @ 0x18017C820 (-ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CSharedCircularQueue::PopAll(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // ebx

  result = *(_QWORD *)a1;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  v10 = 0;
  *a4 = 0;
  *a5 = v9;
  if ( v9 > a3 )
  {
    v11 = a1[3];
    v12 = v9 - a3;
    result = (unsigned int)(*(_DWORD *)a2 / a1[2]);
    v13 = v11;
    if ( v11 >= (unsigned int)result )
      v13 = result;
    if ( v12 >= v13 )
      v12 = v13;
    if ( v12 )
    {
      do
      {
        v14 = *a5 - v10 - 1;
        memcpy_0(
          (void *)(*(_QWORD *)(a2 + 8) + v10 * a1[2]),
          (const void *)(a1[2] * (v14 % v11) + *(_QWORD *)a1 + 8LL),
          (unsigned int)a1[2]);
        v11 = a1[3];
        result = v11 + v14;
        if ( **(_DWORD **)a1 > (unsigned int)result )
          break;
        v10 = *a4 + 1;
        *a4 = v10;
      }
      while ( v10 < v12 );
    }
  }
  return result;
}
