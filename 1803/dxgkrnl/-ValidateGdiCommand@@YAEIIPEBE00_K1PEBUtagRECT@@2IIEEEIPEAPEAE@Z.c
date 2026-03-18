/*
 * XREFs of ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z @ 0x1C017B8C0
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017C130 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C017BCF4 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C017BD30 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C017BDFC (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 */

char __fastcall ValidateGdiCommand(
        __int64 a1,
        unsigned int a2,
        const unsigned __int8 *a3,
        unsigned __int8 *a4,
        const unsigned __int8 *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        const struct tagRECT *a8,
        const struct tagRECT *a9,
        unsigned int a10,
        unsigned int a11,
        unsigned __int8 a12,
        char a13,
        char a14,
        unsigned int a15,
        unsigned __int8 **a16)
{
  unsigned __int64 v16; // rax
  signed int v17; // r11d
  __int64 v18; // rax
  unsigned int v19; // eax
  const unsigned __int8 *v20; // rcx
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  char v23; // bl
  __int64 v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  char v30; // r11
  LONG *p_top; // r15
  int v32; // r13d
  LONG *v33; // rbp
  int v34; // edx
  float v35; // xmm6_4
  float v36; // xmm7_4
  int v37; // r8d
  int v38; // r9d
  int v39; // r10d
  int v40; // ecx
  _DWORD *v41; // rsi
  int v42; // eax
  LONG left; // edx
  LONG v44; // r9d
  LONG v45; // ecx
  LONG v46; // r8d
  LONG v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v51; // [rsp+20h] [rbp-58h]
  struct tagRECT v52; // [rsp+28h] [rbp-50h] BYREF
  int v53; // [rsp+D8h] [rbp+60h]

  v16 = 16LL * a15;
  if ( v16 <= 0xFFFFFFFF )
  {
    v17 = 16 * a15;
    v19 = v16 + a1;
    if ( v17 + (int)a1 < (unsigned int)a1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v18 + 24) = 1468LL;
      goto LABEL_47;
    }
    if ( v19 > a2 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v18 + 24) = 1473LL;
      goto LABEL_47;
    }
    if ( *a16 <= a5 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v18 + 24) = 1478LL;
      goto LABEL_47;
    }
    v20 = &a4[v19];
    v21 = (unsigned __int64)&a3[*a16 - a5];
    *a16 = (unsigned __int8 *)v21;
    if ( v21 <= (unsigned __int64)a4 || v21 >= (unsigned __int64)v20 || (v20 -= v21, (__int64)v20 < v17) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v18 + 24) = 1485LL;
      goto LABEL_47;
    }
    v23 = 0;
    if ( !ValidateRect(a8) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v24 + 24) = 1499LL;
LABEL_45:
      WdLogEvent5_WdAssertion(v24);
      return v23;
    }
    v25 = 0;
    if ( a15 )
    {
      while ( ValidateSubRect((const struct tagRECT *)(v21 + 16LL * v25), a8) )
      {
        if ( !ValidateRectBounds((const struct tagRECT *)(v21 + 16LL * v25), a10, a6) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v27);
          *(_QWORD *)(v24 + 24) = 1519LL;
          goto LABEL_45;
        }
        if ( ++v25 >= a15 )
          goto LABEL_19;
      }
      v24 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v24 + 24) = 1514LL;
      goto LABEL_45;
    }
LABEL_19:
    if ( !a9 )
      return 1;
    if ( !ValidateRect(a9) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v24 + 24) = 1527LL;
      goto LABEL_45;
    }
    if ( a13 && !ValidateRectBounds(a9, a11, a7) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v24 + 24) = 1534LL;
      goto LABEL_45;
    }
    v30 = a14;
    p_top = &a9->top;
    v51 = 0;
    v32 = 0;
    v33 = &a8->top;
    v34 = 0;
    v35 = 0.0;
    v36 = 0.0;
    if ( a14 )
    {
      v37 = a8->bottom - *v33;
      v38 = a9->right - a9->left;
      v39 = a8->right - a8->left;
      v40 = a9->bottom - *p_top;
      if ( v38 != v39 || v40 != v37 )
      {
        v35 = (float)v38 / (float)v39;
        v36 = (float)v40 / (float)v37;
LABEL_32:
        v53 = 0;
        if ( a15 )
        {
          v41 = (_DWORD *)(v21 + 8);
          while ( 1 )
          {
            v42 = *(v41 - 2);
            if ( v30 )
            {
              left = a8->left;
              v44 = a9->left;
              v45 = *v33;
              v46 = *p_top;
              v52.left = a9->left + (int)(float)((float)((float)(v42 - a8->left) + 0.5) * v35);
              v52.top = v46 + (int)(float)((float)((float)(*(v41 - 1) - v45) + 0.5) * v36);
              v52.right = v44 + (int)(float)((float)((float)(*v41 - left) + 0.5) * v35);
              v52.bottom = v46 + (int)(float)((float)((float)(v41[1] - v45) + 0.5) * v36);
            }
            else
            {
              v47 = v34 + *(v41 - 1);
              v52.left = v32 + v42;
              v52.top = v47;
              v52.right = v32 + *v41;
              v52.bottom = v34 + v41[1];
            }
            if ( !ValidateSubRect(&v52, a9) )
              break;
            if ( !ValidateRectBounds(&v52, a11, a7) )
            {
              v24 = WdLogNewEntry5_WdAssertion(v49);
              *(_QWORD *)(v24 + 24) = 1593LL;
              goto LABEL_45;
            }
            v41 += 4;
            v34 = v51;
            v30 = a14;
            if ( ++v53 >= a15 )
              return 1;
          }
          v24 = WdLogNewEntry5_WdAssertion(v48);
          *(_QWORD *)(v24 + 24) = 1588LL;
          goto LABEL_45;
        }
        return 1;
      }
      v30 = 0;
      a14 = 0;
    }
    v32 = a9->left - a8->left;
    v34 = *p_top - *v33;
    v51 = v34;
    goto LABEL_32;
  }
  v18 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v18 + 24) = 1462LL;
LABEL_47:
  WdLogEvent5_WdAssertion(v18);
  return 0;
}
