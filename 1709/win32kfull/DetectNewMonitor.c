/*
 * XREFs of DetectNewMonitor @ 0x1C01C3688
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetMonitorTransform @ 0x1C005D640 (GetMonitorTransform.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C00C83A0 (HasMaximizedState.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01C2994 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01C2A70 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     TransformVector @ 0x1C01D6334 (TransformVector.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  int v7; // r9d
  int v8; // eax
  __int64 v9; // r8
  int left; // edx
  int v11; // r8d
  struct tagRECT v12; // xmm6
  int v13; // r9d
  LONG v14; // eax
  __int64 v15; // rbx
  INT v16; // r8d
  INT v17; // r15d
  INT v18; // eax
  INT v19; // r8d
  INT v20; // r15d
  LONG top; // ebx
  struct tagRECT *MonitorRectForWindow; // rax
  struct tagWND *v23; // r8
  int v24; // ecx
  int v26; // [rsp+28h] [rbp-89h]
  struct tagRECT v27; // [rsp+38h] [rbp-79h] BYREF
  struct tagRECT v28; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v29; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v30[64]; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT v31; // [rsp+A8h] [rbp-9h] BYREF

  InheritedMonitor = GetInheritedMonitor(a1[2]);
  v5 = (__int64)a1[26];
  v28 = *a2;
  v31 = v28;
  v6 = InheritedMonitor;
  memset(v30, 0, sizeof(v30));
  if ( (unsigned int)GetMonitorTransform(v5, (__int64)a1[2], (__int64)v30) )
  {
    TransformVector((unsigned int)v30, (unsigned int)&v31, (unsigned int)&v31.top, 0, 0);
    TransformVector((unsigned int)v30, (unsigned int)&v31.right, (unsigned int)&v31.bottom, v7, v7 & v26);
  }
  if ( !v6 )
  {
    v6 = MonitorFromRect(&v31, 0, 0x12u);
    v8 = *((_DWORD *)a1 + 49);
    if ( (v8 & 0x2000000) == 0 && ((v8 & 8) == 0 || !(unsigned int)HasMaximizedState(a1[2])) && v5 && v6 && v5 != v6 )
    {
      if ( (unsigned int)(*((_DWORD *)a1 + 44) - 9) > 1 )
      {
        v12 = v31;
        v27 = v31;
        memset(v30, 0, sizeof(v30));
        if ( (unsigned int)GetMonitorTransform(v6, (__int64)a1[2], (__int64)v30) )
        {
          TransformVector((unsigned int)v30, (unsigned int)&v27, (unsigned int)&v27.top, 0, 1);
          TransformVector((unsigned int)v30, (unsigned int)&v27.right, (unsigned int)&v27.bottom, v13, 1);
          v12 = v27;
        }
        v14 = _mm_cvtsi128_si32((__m128i)v12);
        v15 = *(_QWORD *)(gpsi + 4944LL);
        v16 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 8)) - v14;
        v27.left = v14;
        v17 = v16;
        v18 = *((_DWORD *)a1 + 26);
        *(_QWORD *)&v29.left = v15;
        if ( v16 <= v18 )
          v17 = v18;
        if ( v17 >= *((_DWORD *)a1 + 28) )
          v17 = *((_DWORD *)a1 + 28);
        if ( v17 != v16 )
        {
          v27.left = v15 - EngMulDiv(v15 - v31.left, v17, v16);
          v27.right = v27.left + v17;
          v12 = v27;
        }
        v27.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 4));
        v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 12)) - v27.top;
        v20 = v19;
        if ( v19 <= *((_DWORD *)a1 + 27) )
          v20 = *((_DWORD *)a1 + 27);
        if ( v20 >= *((_DWORD *)a1 + 29) )
          v20 = *((_DWORD *)a1 + 29);
        if ( v20 != v19 )
        {
          top = v29.top;
          v27.top = top - EngMulDiv(v29.top - v31.top, v20, v19);
          v27.bottom = v27.top + v20;
          v12 = v27;
        }
        MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v28, v6, a1[2]);
        v23 = a1[2];
        v31 = *MonitorRectForWindow;
        v28 = (struct tagRECT)*GetMonitorRectForWindow(&v28, v5, v23);
        if ( IsNewMonitorRectMostOccupied(&v27, &v31, &v28) )
        {
          *a2 = v12;
          goto LABEL_35;
        }
      }
      else
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)a1,
          &v31,
          *(_WORD *)(*(_QWORD *)(v5 + 40) + 64LL),
          0LL,
          &v29,
          *(_WORD *)(*(_QWORD *)(v6 + 40) + 64LL));
        if ( IsNewMonitorRectMostOccupied(
               &v29,
               (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL),
               (const struct tagRECT *)(*(_QWORD *)(v5 + 40) + 28LL)) )
        {
          v31 = v29;
          memset(v30, 0, sizeof(v30));
          if ( (unsigned int)GetMonitorTransform(v6, (__int64)a1[2], (__int64)v30) )
            TransformVector((unsigned int)v30, (unsigned int)&v31, (unsigned int)&v31.top, 0, 1);
          v9 = *((unsigned int *)a1[2] + 92);
          if ( (*((_DWORD *)a1[2] + 92) & 0xF) == 2 )
          {
            v11 = v31.top;
            left = v31.left;
          }
          else
          {
            *(_QWORD *)&v29.left = v6;
            PhysicalToLogicalDPIPoint(&v27, (char *)a1 + 308, v9, &v29);
            left = *((_DWORD *)a1 + 42) + v27.left;
            v11 = *((_DWORD *)a1 + 43) + v27.top;
            v31.top = v11;
            v31.left = left;
          }
          v31.right = left + v28.right - v28.left;
          v31.bottom = v11 + v28.bottom - v28.top;
          *a2 = v31;
          goto LABEL_35;
        }
      }
      v6 = v5;
    }
  }
LABEL_35:
  if ( (struct tagWND *)v6 == a1[26] || !v6 )
    return 0LL;
  v24 = *((_DWORD *)a1 + 49);
  a1[26] = (struct tagWND *)v6;
  if ( (v24 & 0x20) == 0 )
    *((_DWORD *)a1 + 49) = v24 | 0x10000000;
  return 1LL;
}
