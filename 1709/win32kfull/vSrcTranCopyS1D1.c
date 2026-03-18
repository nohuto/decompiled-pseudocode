/*
 * XREFs of vSrcTranCopyS1D1 @ 0x1C01159D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS1D1(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned __int32 v9; // r11d
  unsigned __int32 v11; // r10d
  unsigned int v12; // ebx
  unsigned int *v13; // rcx
  __int64 v14; // r15
  unsigned int *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // r14
  unsigned int *v18; // rdi
  int v19; // r9d
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r9
  unsigned int *v24; // r8
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r9
  unsigned int *v29; // r8
  int v30; // r10d
  unsigned int v31; // eax
  int v32; // r10d
  unsigned int v33; // eax

  v9 = -1;
  v11 = -1;
  v12 = ((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v11 = _byteswap_ulong(0xFFFFFFFF >> (a2 & 0x1F));
  if ( (((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F) != 0 )
    v9 = _byteswap_ulong(-1 << (32 - v12));
  v13 = (unsigned int *)(a1 + (((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v14 = a2 & 0x1F;
  v15 = (unsigned int *)(a1 + (((__int64)(a2 + a6 - a5) >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v16 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v17 = v12;
  v18 = (unsigned int *)((char *)v13 + a3 * (__int64)a8);
  v19 = (_DWORD)v15 - (_DWORD)v13;
  if ( a9 )
  {
    if ( v13 == v15 )
    {
      v30 = v9 & v11;
      do
      {
        v31 = *v13;
        v13 = (unsigned int *)((char *)v13 + a3);
        result = v30 & v31;
        *v16 |= result;
        v16 = (_DWORD *)((char *)v16 + a7);
      }
      while ( v13 != v18 );
    }
    else
    {
      result = (unsigned int)(a7 - v19);
      v26 = v19;
      v27 = (int)result;
      v28 = a3 - v19;
      do
      {
        v29 = (unsigned int *)((char *)v13 + v26);
        if ( v14 )
        {
          result = v11 & *v13;
          *v16++ |= result;
          ++v13;
        }
        while ( v13 != v29 )
        {
          result = *v13++;
          *v16++ |= result;
        }
        if ( v17 )
        {
          result = v9 & *v13;
          *v16 |= result;
        }
        v13 = (unsigned int *)((char *)v13 + v28);
        v16 = (_DWORD *)((char *)v16 + v27);
      }
      while ( v13 != v18 );
    }
  }
  else if ( v13 == v15 )
  {
    v32 = v9 & v11;
    do
    {
      v33 = *v13;
      v13 = (unsigned int *)((char *)v13 + a3);
      result = ~(v32 & v33);
      *v16 &= result;
      v16 = (_DWORD *)((char *)v16 + a7);
    }
    while ( v13 != v18 );
  }
  else
  {
    result = (unsigned int)(a7 - v19);
    v21 = v19;
    v22 = (int)result;
    v23 = a3 - v19;
    do
    {
      v24 = (unsigned int *)((char *)v13 + v21);
      if ( v14 )
      {
        result = ~(v11 & *v13);
        *v16++ &= result;
        ++v13;
      }
      while ( v13 != v24 )
      {
        v25 = *v13++;
        result = (unsigned int)~v25;
        *v16++ &= result;
      }
      if ( v17 )
      {
        result = ~(v9 & *v13);
        *v16 &= result;
      }
      v13 = (unsigned int *)((char *)v13 + v23);
      v16 = (_DWORD *)((char *)v16 + v22);
    }
    while ( v13 != v18 );
  }
  return result;
}
