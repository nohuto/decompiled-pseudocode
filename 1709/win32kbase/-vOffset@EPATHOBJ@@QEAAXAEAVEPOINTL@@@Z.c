/*
 * XREFs of ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C009F520
 * Callers:
 *     <none>
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0046980 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 */

void __fastcall EPATHOBJ::vOffset(EPATHOBJ *this, struct _POINTL *a2)
{
  _DWORD *v2; // rax
  LONG y; // r10d
  int v6; // r9d
  int v7; // r10d
  __int64 *i; // rdx
  __int64 *j; // r8
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  int *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 1);
  y = a2->y;
  v6 = 16 * a2->x;
  v2[12] += v6;
  v2[14] += v6;
  v7 = 16 * y;
  v2[13] += v7;
  v2[15] += v7;
  if ( (*(_DWORD *)this & 4) != 0 )
  {
    v6 >>= 4;
    v7 >>= 4;
  }
  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
  {
    for ( j = i + 3; j < &i[*((unsigned int *)i + 5) + 3]; ++j )
    {
      *(_DWORD *)j += v6;
      *((_DWORD *)j + 1) += v7;
    }
  }
  if ( *((_DWORD *)this + 12) )
  {
    v11 = 0;
    do
    {
      v12 = v11++;
      v13 = (_DWORD *)(*((_QWORD *)this + 7) + 16 * v12);
      *v13 += a2->x;
      v13[2] += a2->x;
      v13[1] += a2->y;
      v13[3] += a2->y;
    }
    while ( v11 < *((_DWORD *)this + 12) );
  }
  if ( *((_DWORD *)this + 16) )
  {
    v14 = 0;
    do
    {
      v15 = v14++;
      v16 = (_DWORD *)(*((_QWORD *)this + 9) + 16 * v15);
      *v16 += a2->x;
      v16[2] += a2->x;
      v16[1] += a2->y;
      v16[3] += a2->y;
    }
    while ( v14 < *((_DWORD *)this + 16) );
  }
  v10 = *((_QWORD *)this + 2);
  if ( v10 || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
  {
    v17 = (int *)*((_QWORD *)this + 2);
    if ( v10 )
      RGNOBJ::bOffset(&v17, a2);
    v17 = (int *)*((_QWORD *)this + 3);
    if ( v17 )
      RGNOBJ::bOffset(&v17, a2);
    v17 = (int *)*((_QWORD *)this + 4);
    if ( v17 )
      RGNOBJ::bOffset(&v17, a2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v17 = (int *)*((_QWORD *)this + 5);
    RGNOBJ::bOffset(&v17, a2);
  }
}
