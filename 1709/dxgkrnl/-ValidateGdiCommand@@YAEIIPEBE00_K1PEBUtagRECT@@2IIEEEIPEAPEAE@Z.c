/*
 * XREFs of ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z @ 0x1C0190308
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0190B60 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C0190724 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C0190760 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C019082C (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
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
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  char v30; // r8
  int v31; // r15d
  int v32; // r12d
  float v33; // xmm6_4
  float v34; // xmm7_4
  int v35; // edx
  int v36; // r9d
  int v37; // r10d
  int v38; // ecx
  int v39; // r13d
  _DWORD *i; // rsi
  LONG left; // edx
  LONG v42; // r9d
  LONG top; // ecx
  LONG v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rcx
  struct tagRECT v48; // [rsp+20h] [rbp-48h] BYREF

  v16 = 16LL * a15;
  if ( v16 <= 0xFFFFFFFF )
  {
    v17 = 16 * a15;
    v19 = v16 + a1;
    if ( v17 + (int)a1 < (unsigned int)a1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v18 + 24) = 1342LL;
      goto LABEL_47;
    }
    if ( v19 > a2 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v18 + 24) = 1347LL;
      goto LABEL_47;
    }
    if ( *a16 <= a5 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v18 + 24) = 1352LL;
      goto LABEL_47;
    }
    v20 = &a4[v19];
    v21 = (unsigned __int64)&a3[*a16 - a5];
    *a16 = (unsigned __int8 *)v21;
    if ( v21 <= (unsigned __int64)a4 || v21 >= (unsigned __int64)v20 || (v20 -= v21, (__int64)v20 < v17) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v18 + 24) = 1359LL;
      goto LABEL_47;
    }
    v23 = 0;
    if ( !ValidateRect(a8) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v24 + 24) = 1373LL;
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
          *(_QWORD *)(v24 + 24) = 1393LL;
          goto LABEL_45;
        }
        if ( ++v25 >= a15 )
          goto LABEL_19;
      }
      v24 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v24 + 24) = 1388LL;
      goto LABEL_45;
    }
LABEL_19:
    if ( !a9 )
      return 1;
    if ( !ValidateRect(a9) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v24 + 24) = 1401LL;
      goto LABEL_45;
    }
    if ( a13 && !ValidateRectBounds(a9, a11, a7) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v24 + 24) = 1408LL;
      goto LABEL_45;
    }
    v30 = a14;
    v31 = 0;
    v32 = 0;
    v33 = 0.0;
    v34 = 0.0;
    if ( a14 )
    {
      v35 = a8->bottom - a8->top;
      v36 = a9->right - a9->left;
      v37 = a8->right - a8->left;
      v38 = a9->bottom - a9->top;
      if ( v36 != v37 || v38 != v35 )
      {
        v33 = (float)v36 / (float)v37;
        v34 = (float)v38 / (float)v35;
LABEL_32:
        v39 = 0;
        if ( a15 )
        {
          for ( i = (_DWORD *)(v21 + 8); ; i += 4 )
          {
            if ( v30 )
            {
              left = a8->left;
              v42 = a9->left;
              top = a8->top;
              v44 = a9->top;
              v48.left = a9->left + (int)(float)((float)((float)(*(i - 2) - a8->left) + 0.5) * v33);
              v48.top = v44 + (int)(float)((float)((float)(*(i - 1) - top) + 0.5) * v34);
              v48.right = v42 + (int)(float)((float)((float)(*i - left) + 0.5) * v33);
              v48.bottom = v44 + (int)(float)((float)((float)(i[1] - top) + 0.5) * v34);
            }
            else
            {
              v48.left = v31 + *(i - 2);
              v48.top = v32 + *(i - 1);
              v48.right = v31 + *i;
              v48.bottom = v32 + i[1];
            }
            if ( !ValidateSubRect(&v48, a9) )
              break;
            if ( !ValidateRectBounds(&v48, a11, a7) )
            {
              v24 = WdLogNewEntry5_WdAssertion(v46);
              *(_QWORD *)(v24 + 24) = 1467LL;
              goto LABEL_45;
            }
            v30 = a14;
            if ( ++v39 >= a15 )
              return 1;
          }
          v24 = WdLogNewEntry5_WdAssertion(v45);
          *(_QWORD *)(v24 + 24) = 1462LL;
          goto LABEL_45;
        }
        return 1;
      }
      v30 = 0;
      a14 = 0;
    }
    v31 = a9->left - a8->left;
    v32 = a9->top - a8->top;
    goto LABEL_32;
  }
  v18 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v18 + 24) = 1336LL;
LABEL_47:
  WdLogEvent5_WdAssertion(v18);
  return 0;
}
