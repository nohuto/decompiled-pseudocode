/*
 * XREFs of ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18006B2A0
 * Callers:
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18006A720 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18006BC18 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18006B410 (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18006CD54 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_GetCoverageStateOfWindow(__int64 a1, __int64 a2)
{
  unsigned int CoverageStateOfTwoRects; // esi
  bool v3; // zf
  __int64 v5; // rax
  __int128 v6; // xmm0
  struct tagRECT *v7; // rax
  struct tagRECT v8; // xmm0
  struct tagRECT *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagRECT *v14; // rdx
  struct tagRECT v16; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF

  CoverageStateOfTwoRects = 0;
  v3 = *(_DWORD *)(a2 + 112) == 1;
  v19[0] = 0LL;
  v19[1] = 0LL;
  if ( !v3 || (v5 = *(_QWORD *)(a1 + 536)) != 0 && *(_DWORD *)(v5 + 112) != 1 )
  {
    v3 = *(_DWORD *)(a2 + 112) == 1;
    v18 = 0uLL;
    if ( v3 )
      v6 = (__int128)*CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v17, (struct CWindowData *)a2);
    else
      v6 = *(_OWORD *)(a2 + 48);
    v7 = *(struct tagRECT **)(a1 + 536);
    v18 = v6;
    if ( v7 )
    {
      *(_QWORD *)&v17.left = 0LL;
      *(_QWORD *)&v17.right = 0LL;
      if ( v7[7].left == 1 )
      {
        v8 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v16, (struct CWindowData *)v7);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 604) )
          v9 = (struct tagRECT *)(a1 + 588);
        else
          v9 = v7 + 3;
        v8 = *v9;
      }
      v17 = v8;
      return (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(&v17, &v18, v19);
    }
    else
    {
      v10 = 0LL;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 552) + 40LL);
      if ( v11 )
      {
        do
        {
          if ( CoverageStateOfTwoRects )
            break;
          v12 = *(_QWORD *)(a1 + 552);
          if ( (unsigned int)v10 >= *(_DWORD *)(v12 + 40) )
            v13 = 0LL;
          else
            v13 = *(_QWORD *)(v12 + 16) + 24 * v10;
          if ( v13 )
          {
            if ( (unsigned int)v10 >= *(_DWORD *)(v12 + 40) )
              v14 = 0LL;
            else
              v14 = (struct tagRECT *)(*(_QWORD *)(v12 + 16) + 24 * v10);
            v17 = *v14;
            CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(&v17, &v18, v19);
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < v11 );
      }
    }
  }
  return CoverageStateOfTwoRects;
}
