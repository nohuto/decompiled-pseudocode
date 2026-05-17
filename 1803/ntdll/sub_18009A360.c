/*
 * XREFs of sub_18009A360 @ 0x18009A360
 * Callers:
 *     RtlVirtualUnwind @ 0x18000B340 (RtlVirtualUnwind.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 * Callees:
 *     sub_180003F70 @ 0x180003F70 (sub_180003F70.c)
 */

__int64 __fastcall sub_18009A360(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  int v10; // esi
  __int64 v11; // rbx
  _BYTE *v12; // rbp
  unsigned int v13; // edi
  unsigned __int16 v14; // cx
  __int64 v15; // rax
  unsigned int v17; // r10d
  __int16 *v18; // r15
  __int16 v19; // ax
  __int64 v20; // r11
  _QWORD *v21; // rdx
  unsigned int v22; // ecx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rcx

  v10 = 0;
  while ( 1 )
  {
    v11 = 0LL;
    v12 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v13 = (unsigned __int8)v12[2];
    if ( v12[2] )
    {
      do
      {
        v14 = *(_WORD *)&v12[2 * v11 + 4];
        if ( (v14 & 0xF00) == 0 )
          break;
        if ( (HIBYTE(v14) & 0xF) == 0xA )
          break;
        v11 = (unsigned int)sub_180003F70(v14) + (unsigned int)v11;
      }
      while ( (unsigned int)v11 < v13 );
      if ( (unsigned int)v11 < v13 )
        break;
    }
    if ( (*v12 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v10 > 0x20 )
      return 3221225727LL;
    v15 = v13 + 1;
    if ( (v13 & 1) == 0 )
      v15 = v13;
    a4 = &v12[2 * v15 + 4];
  }
  v17 = 0;
  if ( (unsigned int)v11 >= v13 )
    goto LABEL_40;
  v18 = (__int16 *)&v12[2 * v11 + 4];
  do
  {
    v19 = *v18;
    v20 = (unsigned __int8)HIBYTE(*v18) >> 4;
    if ( (*v18 & 0xF00) != 0 )
      break;
    if ( v17 >= a3 )
    {
      v21 = *(_QWORD **)(a5 + 152);
      if ( a7 && ((unsigned __int64)v21 < *a7 || (unsigned __int64)v21 > *a8 - 8LL) )
        return 3221225512LL;
      *(_QWORD *)(a5 + 152) = v21 + 1;
      *(_QWORD *)(a5 + 8 * v20 + 120) = *v21;
      if ( a6 )
        *(_QWORD *)(a6 + 8 * v20 + 128) = v21;
    }
    v22 = v17 + 1;
    if ( (unsigned int)v20 < 8 )
      v22 = v17;
    v11 = (unsigned int)(v11 + 1);
    ++v18;
    v17 = v22 + 1;
  }
  while ( (unsigned int)v11 < v13 );
  if ( (unsigned int)v11 >= v13 )
    goto LABEL_40;
  if ( (HIBYTE(v19) & 0xF) == 2 && !(_DWORD)v20 )
  {
    if ( v17 >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    v11 = (unsigned int)(v11 + 1);
  }
  if ( (unsigned int)v11 >= v13 || (HIBYTE(*(_WORD *)&v12[2 * v11 + 4]) & 0xF) != 0xA )
  {
LABEL_40:
    v27 = *(_QWORD **)(a5 + 152);
    if ( !a7 || (unsigned __int64)v27 >= *a7 && (unsigned __int64)v27 <= *a8 - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v27;
      v26 = v27 + 1;
      goto LABEL_44;
    }
    return 3221225512LL;
  }
  v23 = *(_QWORD **)(a5 + 152);
  v24 = v23 + 3;
  if ( a7 )
  {
    if ( (unsigned __int64)v23 < *a7 )
      return 3221225512LL;
    v25 = *a8 - 8LL;
    if ( (unsigned __int64)v23 > v25 || (unsigned __int64)v24 < *a7 || (unsigned __int64)v24 > v25 )
      return 3221225512LL;
  }
  *(_QWORD *)(a5 + 248) = *v23;
  v26 = (_QWORD *)*v24;
LABEL_44:
  *(_QWORD *)(a5 + 152) = v26;
  return 0LL;
}
