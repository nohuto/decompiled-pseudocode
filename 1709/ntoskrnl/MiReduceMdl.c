/*
 * XREFs of MiReduceMdl @ 0x140026F8C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceMdl(__int64 a1)
{
  char *v1; // r11
  unsigned int v2; // r9d
  __int64 v3; // rsi
  char *v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // r10d
  unsigned __int64 v7; // r8
  _QWORD *v8; // rdx
  signed __int64 v10; // rdi
  int v11; // eax
  __int16 v12; // di
  unsigned int v13; // eax
  char *v14; // rdx
  __int64 v15; // r10

  v1 = (char *)(a1 + 48);
  v2 = 0;
  v3 = *(unsigned int *)(a1 + 40);
  v4 = (char *)(a1 + 48);
  v5 = 0LL;
  v6 = 0;
  v7 = ((unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + v3 + 4095) >> 12;
  if ( v7 != 1 )
  {
    do
    {
      if ( *(_QWORD *)v4 != qword_140389198 )
        break;
      ++v6;
      ++v5;
      v4 += 8;
    }
    while ( v6 < v7 - 1 );
  }
  if ( v5 )
  {
    *(_WORD *)(a1 + 8) += -8 * v5;
    *(_DWORD *)(a1 + 40) = v3 - ((_DWORD)v5 << 12);
    v10 = v1 - v4;
    do
    {
      ++v6;
      *(_QWORD *)&v4[v10] = *(_QWORD *)v4;
      v4 += 8;
    }
    while ( v6 < v7 );
    v7 -= v5;
  }
  v8 = (_QWORD *)(a1 + 40 + 8 * v7);
  if ( *v8 == qword_140389198 )
  {
    *(_WORD *)(a1 + 8) -= 8;
    v11 = *(_DWORD *)(a1 + 40);
    v12 = *(_WORD *)(a1 + 8);
    if ( (v11 & 0xFFF) != 0 )
      v13 = v11 & 0xFFFFF000;
    else
      v13 = v11 - 4096;
    v14 = (char *)(v8 - 1);
    *(_DWORD *)(a1 + 40) = v13;
    v15 = 0LL;
    if ( v14 != v1 )
    {
      do
      {
        if ( *(_QWORD *)v14 != qword_140389198 )
          break;
        ++v15;
        v14 -= 8;
      }
      while ( v14 != v1 );
      if ( v15 )
      {
        *(_WORD *)(a1 + 8) = v12 - 8 * v15;
        *(_DWORD *)(a1 + 40) += -4096 * v15;
      }
    }
    v7 += -1 - v15;
  }
  *(_WORD *)(a1 + 10) |= 0x4000u;
  if ( v7 )
  {
    while ( *(_QWORD *)v1 != qword_140389198 )
    {
      ++v2;
      v1 += 8;
      if ( v2 >= v7 )
        return v5;
    }
    *(_WORD *)(a1 + 10) &= ~0x4000u;
  }
  return v5;
}
