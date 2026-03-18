/*
 * XREFs of xxxTooltipWndProc @ 0x1C0113E40
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0084470 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C01141B0 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C01142BC (InitTooltipDelay.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0114394 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C013B818 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C013BC90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     zzzStartFade @ 0x1C013DD98 (zzzStartFade.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020EBB8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  HDC v5; // r14
  unsigned int v6; // esi
  struct tagWND *v7; // rdi
  __int16 v8; // ax
  size_t v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  struct tagTOOLTIPWND *v20; // rcx
  int v21; // eax
  int v22; // r8d
  int v23; // edx
  HDC FadeInternal; // rax
  __int64 *v25; // rcx
  HDC v26[10]; // [rsp+50h] [rbp-A8h] BYREF

  v4 = a4;
  v5 = (HDC)a3;
  v6 = a2;
  v7 = a1;
  if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    return 0LL;
  v8 = *((_WORD *)a1 + 41);
  if ( v8 != 694 )
  {
    if ( v8 )
      return 0LL;
    if ( (_DWORD)a2 != 129 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    v10 = *((unsigned int *)a1 + 63);
    v11 = *(unsigned __int16 *)(gpsi + 384LL);
    if ( (int)v10 + 400 >= v11 )
    {
      v17 = (void *)*((_QWORD *)a1 + 49);
      if ( v17 )
        memset(v17, 0, v10);
    }
    else
    {
      if ( *((_DWORD *)a1 + 62) + (int)v10 + 400 < v11 )
        return 0LL;
      v12 = v11 - 400;
      v14 = Win32AllocPoolWithQuotaZInit(v11 - 400, 1937208149LL);
      if ( !v14 )
        return 0LL;
      v16 = *((_QWORD *)v7 + 49);
      if ( v16 )
        Win32FreePool(v16, v13, v15);
      *((_QWORD *)v7 + 49) = v14;
      *((_DWORD *)v7 + 63) = v12;
    }
    *((_WORD *)v7 + 41) = 694;
  }
  v18 = *((_QWORD *)v7 + 49);
  *(_QWORD *)v18 = v7;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 1) != 0 && v6 != 130 )
    goto LABEL_49;
  if ( v6 == 15 )
  {
    xxxBeginPaint(v7, (__int64)v26);
    xxxTooltipRender((struct tagTOOLTIPWND *)v18, v26[0]);
    xxxEndPaint(v7, v26);
    return 0LL;
  }
  if ( v6 != 20 )
  {
    if ( v6 != 71 )
    {
      switch ( v6 )
      {
        case 0x81u:
          InitTooltipDelay(v18);
          InitTooltipAnimation(v20);
          break;
        case 0x82u:
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v18);
          v19 = *(_QWORD *)(v18 + 16);
          if ( v19 )
            GreDeleteDC(v19);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 24LL) + 48LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v18, (unsigned int)v5);
          return 0LL;
        case 0x318u:
          xxxTooltipRender((struct tagTOOLTIPWND *)v18, v5);
          return 0LL;
      }
LABEL_49:
      a4 = v4;
      a3 = (__int64)v5;
      a2 = v6;
      a1 = v7;
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    v21 = *(_DWORD *)(v4 + 32);
    if ( (v21 & 0x40) == 0 )
    {
      if ( (v21 & 0x80u) != 0 )
      {
        if ( (gfade[6] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v18);
      }
      goto LABEL_49;
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_32:
      v22 = *(_DWORD *)(v18 + 12);
LABEL_33:
      v23 = 2;
LABEL_34:
      SetTooltipTimer((struct tagTOOLTIPWND *)v18, v23, v22);
      goto LABEL_49;
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            (struct tagTOOLTIPWND *)v18,
                            *((_DWORD *)v7 + 34) - *((_DWORD *)v7 + 32),
                            *((_DWORD *)v7 + 35) - *((_DWORD *)v7 + 33)) )
        goto LABEL_44;
      FadeInternal = *(HDC *)(v18 + 16);
    }
    else
    {
      FadeInternal = CreateFadeInternal(v7, 0LL, 0x87u, 0x21u, 0);
    }
    if ( FadeInternal )
    {
      v25 = *(__int64 **)v18;
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(
        v25,
        791LL,
        (unsigned __int64)FadeInternal,
        (struct _LARGE_STRING *)0x1E,
        0,
        0,
        0LL,
        1u,
        1);
      if ( (gfade[6] & 0x20) == 0 )
      {
        v23 = 3;
        v22 = 20;
        *(_DWORD *)(v18 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_34;
      }
      zzzStartFade();
      goto LABEL_32;
    }
LABEL_44:
    v22 = 0;
    goto LABEL_33;
  }
  return 0LL;
}
