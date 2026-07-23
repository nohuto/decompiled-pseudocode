/*
 * XREFs of RtlpGetContainingRange @ 0x1800F048C
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180012E80 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 */

__int64 __fastcall RtlpGetContainingRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _QWORD *v6; // r14
  _QWORD *v7; // r10
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 result; // rax

  v6 = (_QWORD *)(a1 + 96);
  v7 = 0LL;
  v8 = *(_QWORD **)(a1 + 96);
  v9 = 0LL;
  if ( v8 == (_QWORD *)(a1 + 96) )
  {
LABEL_14:
    v14 = a1;
    if ( a1 + 24 == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 288LL) )
      v14 = *(_QWORD *)(a1 + 40);
    *a3 = v14;
  }
  else
  {
    do
    {
      v12 = v8[2];
      if ( a2 < v12 )
      {
        if ( !v9 || v9[4] > v12 )
          v9 = v8 - 2;
      }
      else
      {
        v13 = v12 + v8[3];
        if ( a2 < v13 )
        {
          *a3 = v12;
          *a4 = v13;
          *a5 = 0;
          goto LABEL_21;
        }
        if ( !v7 || v7[4] < v12 )
          v7 = v8 - 2;
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != v6 );
    if ( !v7 )
      goto LABEL_14;
    *a3 = v7[4] + v7[5];
  }
  if ( v9 )
    v15 = v9[4];
  else
    v15 = *a3 + ((unsigned __int64)*(unsigned int *)(a1 + 56) << 12);
  *a4 = v15;
  *a5 = 1;
LABEL_21:
  result = RtlpGetHeapProtection(*(_DWORD **)(a1 + 40), 0);
  *a6 = result;
  return result;
}
