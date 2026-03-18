/*
 * XREFs of RtlpUnwindEpilogue @ 0x14013011C
 * Callers:
 *     RtlUnwindEx @ 0x1400D5CB0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x1400D86E0 (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x14012C5E0 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x1401302CC (RtlpUnwindOpSlots.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        _QWORD *a8)
{
  int v11; // ebp
  _BYTE *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // r11
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int16 v26; // [rsp+50h] [rbp+8h]

  v11 = 0;
  while ( 1 )
  {
    v12 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int8)v12[2];
    v14 = 0LL;
    if ( v12[2] )
    {
      do
      {
        v15 = *(unsigned __int16 *)&v12[2 * v14 + 4];
        if ( (v15 & 0xF00) == 0 )
          break;
        if ( (BYTE1(v15) & 0xF) == 0xA )
          break;
        v14 = (unsigned int)RtlpUnwindOpSlots(v15) + (unsigned int)v14;
      }
      while ( (unsigned int)v14 < v13 );
      if ( (unsigned int)v14 < v13 )
        goto LABEL_8;
    }
    if ( (*v12 & 0x20) == 0 )
    {
LABEL_8:
      v16 = 0;
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_20;
      while ( 1 )
      {
        v26 = *(_WORD *)&v12[2 * v14 + 4];
        v17 = HIBYTE(v26) >> 4;
        if ( (v26 & 0xF00) != 0 )
          break;
        if ( v16 >= a3 )
        {
          v18 = *(_QWORD *)(a5 + 152);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v18 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a7 && (v18 < *a7 || v18 > *a8 - 8LL) )
            return 3221225512LL;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 8 * v17 + 120) = *(_QWORD *)v18;
          if ( a6 )
            *(_QWORD *)(a6 + 8 * v17 + 128) = v18;
        }
        v19 = v16 + 1;
        if ( (unsigned int)v17 < 8 )
          v19 = v16;
        v14 = (unsigned int)(v14 + 1);
        v16 = v19 + 1;
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_20;
      }
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_20;
      if ( (HIBYTE(v26) & 0xF) == 2 && !(_DWORD)v17 )
      {
        if ( v16 >= a3 )
          *(_QWORD *)(a5 + 152) += 8LL;
        v14 = (unsigned int)(v14 + 1);
      }
      if ( (unsigned int)v14 < v13 && (HIBYTE(*(_WORD *)&v12[2 * v14 + 4]) & 0xF) == 0xA )
      {
        v24 = *(_QWORD *)(a5 + 152);
        v25 = v24 + 24;
        if ( a2 <= 0x7FFFFFFEFFFFLL && (v24 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !a7 || v24 >= *a7 && v24 <= *a8 - 8LL )
        {
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v25 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( !a7 || v25 >= *a7 && v25 <= *a8 - 8LL )
          {
            *(_QWORD *)(a5 + 248) = *(_QWORD *)v24;
            *(_QWORD *)(a5 + 152) = *(_QWORD *)v25;
            return 0LL;
          }
        }
      }
      else
      {
LABEL_20:
        v20 = *(_QWORD *)(a5 + 152);
        if ( a2 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !a7 || v20 >= *a7 && v20 <= *a8 - 8LL )
        {
          v21 = *(_QWORD *)v20;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 248) = v21;
          return 0LL;
        }
      }
      return 3221225512LL;
    }
    if ( (unsigned int)++v11 > 0x20 )
      return 3221225727LL;
    v23 = v13 + 1;
    if ( (v13 & 1) == 0 )
      v23 = v13;
    a4 = &v12[2 * v23 + 4];
  }
}
