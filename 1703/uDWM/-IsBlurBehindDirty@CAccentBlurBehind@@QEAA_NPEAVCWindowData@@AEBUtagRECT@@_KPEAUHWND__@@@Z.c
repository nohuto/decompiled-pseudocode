/*
 * XREFs of ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18001A990
 * Callers:
 *     ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x18001D128 (-OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032EF4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

char __fastcall CAccentBlurBehind::IsBlurBehindDirty(
        CAccentBlurBehind *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        unsigned __int64 a4,
        HWND a5)
{
  __int64 v5; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  char v10; // bl
  unsigned int v11; // edx
  __int64 v12; // r10
  unsigned int v13; // ecx
  struct tagRECT v14; // xmm0
  __int64 v15; // r9
  LONG v16; // r10d
  LONG v17; // r11d
  LONG v18; // esi
  __int64 v19; // r13
  unsigned __int8 v20; // cl
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 v24; // r14
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  HWND Blink; // rdx
  struct tagRECT rcDst; // [rsp+28h] [rbp-18h] BYREF

  LOBYTE(v5) = 0;
  v7 = a4;
  v8 = *((_QWORD *)a2 + 50);
  v10 = 0;
  if ( v8 )
  {
    v11 = *((_DWORD *)this + 78);
    v10 = 1;
    v12 = *((_QWORD *)this + 36);
    v13 = 0;
    if ( v11 )
    {
      while ( *((_QWORD *)a2 + 5) != *(_QWORD *)(v12 + 8LL * v13) )
      {
        if ( ++v13 >= v11 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      v14 = *(struct tagRECT *)(*(_QWORD *)(v8 + 720) + 48LL);
      rcDst = v14;
      v15 = 2 * (*(_BYTE *)(v8 + 240) & 8 | 0x136LL);
      v16 = *(_DWORD *)(v15 + v8) + _mm_cvtsi128_si32((__m128i)v14);
      rcDst.left = v16;
      v17 = v14.right - *(_DWORD *)(v15 + v8 + 4);
      rcDst.right = v17;
      rcDst.top = *(_DWORD *)(v15 + v8 + 8) + v14.top;
      v18 = v14.bottom - *(_DWORD *)(v15 + v8 + 12);
      rcDst.bottom = v18;
      v19 = *(_QWORD *)(v8 + 320);
      if ( v19 )
      {
        v24 = *(_QWORD *)(v8 + 328);
        if ( v24 )
        {
          v5 = *(_QWORD *)(v8 + 344);
          if ( v5 )
          {
            v25 = *(_DWORD *)(v8 + 604) - *(_DWORD *)(v15 + v8) - *(_DWORD *)(v19 + 24);
            if ( v25 < 0 )
              v25 = 0;
            v26 = *(_DWORD *)(v8 + 608) - *(_DWORD *)(v15 + v8 + 4) - *(_DWORD *)(v24 + 24);
            if ( v26 < 0 )
              v26 = 0;
            v27 = *(_DWORD *)(v8 + 616) - *(_DWORD *)(v15 + v8 + 12) - *(_DWORD *)(v5 + 28);
            LOBYTE(v5) = 0;
            if ( v27 < 0 )
              v27 = 0;
            rcDst.left = v25 + v16;
            rcDst.right = v17 - v26;
            rcDst.bottom = v18 - v27;
          }
        }
        v7 = a4;
      }
      v20 = *((_BYTE *)a2 + 592);
      if ( (v20 & 1) != 0
        && ((unsigned __int8)~*((_BYTE *)a2 + 596) & (unsigned __int8)~(v20 >> 2) & 1) != 0
        && (*((_DWORD *)a2 + 25) & 0x20000000) == 0
        && IntersectRect(&rcDst, &rcDst, a3) )
      {
        WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                 v7);
        for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
        {
          Blink = (HWND)i[2].Blink;
          if ( Blink == a5 )
            break;
          if ( Blink == *((HWND *)a2 + 5) )
            return v5;
        }
      }
      else
      {
        return v5;
      }
    }
  }
  return v10;
}
