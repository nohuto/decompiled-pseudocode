/*
 * XREFs of xxxTooltipWndProc @ 0x1C010DBA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00AFCF4 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     InitTooltipDelay @ 0x1C00C69DC (InitTooltipDelay.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C010DF14 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C010DFEC (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 *     zzzStartFade @ 0x1C01C295C (zzzStartFade.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020CD28 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C020D618 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C020D6C4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  HDC v5; // r14
  unsigned int v6; // esi
  struct tagWND *v7; // rdi
  __int16 v8; // ax
  size_t v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  struct tagTOOLTIPWND *v18; // rcx
  int v19; // eax
  int v20; // r8d
  int v21; // edx
  unsigned __int64 Fade; // rax
  ULONG_PTR v23; // rcx
  HDC v24[10]; // [rsp+50h] [rbp-A8h] BYREF

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
    if ( a2 != 129 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    v10 = *((unsigned int *)a1 + 63);
    v11 = *(unsigned __int16 *)(gpsi + 384LL);
    if ( (int)v10 + 400 >= v11 )
    {
      v15 = (void *)*((_QWORD *)a1 + 49);
      if ( v15 )
        memset(v15, 0, v10);
    }
    else
    {
      if ( *((_DWORD *)a1 + 62) + (int)v10 + 400 < v11 )
        return 0LL;
      v12 = v11 - 400;
      v13 = Win32AllocPoolWithQuotaZInit(v11 - 400, 1937208149LL);
      if ( !v13 )
        return 0LL;
      v14 = *((_QWORD *)v7 + 49);
      if ( v14 )
        Win32FreePool(v14);
      *((_QWORD *)v7 + 49) = v13;
      *((_DWORD *)v7 + 63) = v12;
    }
    *((_WORD *)v7 + 41) = 694;
  }
  v16 = *((_QWORD *)v7 + 49);
  *(_QWORD *)v16 = v7;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 && v6 != 130 )
    goto LABEL_49;
  if ( v6 == 15 )
  {
    xxxBeginPaint(v7, (__int64)v24);
    xxxTooltipRender((struct tagTOOLTIPWND *)v16, v24[0]);
    xxxEndPaint(v7, v24);
    return 0LL;
  }
  if ( v6 != 20 )
  {
    if ( v6 != 71 )
    {
      switch ( v6 )
      {
        case 0x81u:
          InitTooltipDelay(v16);
          InitTooltipAnimation(v18);
          break;
        case 0x82u:
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v16);
          v17 = *(_QWORD *)(v16 + 16);
          if ( v17 )
            GreDeleteDC(v17);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 24LL) + 48LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v16, (unsigned int)v5);
          return 0LL;
        case 0x318u:
          xxxTooltipRender((struct tagTOOLTIPWND *)v16, v5);
          return 0LL;
      }
LABEL_49:
      a4 = v4;
      a3 = (__int64)v5;
      a2 = v6;
      a1 = v7;
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    v19 = *(_DWORD *)(v4 + 32);
    if ( (v19 & 0x40) == 0 )
    {
      if ( (v19 & 0x80u) != 0 )
      {
        if ( (gfade[6] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v16);
      }
      goto LABEL_49;
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_32:
      v20 = *(_DWORD *)(v16 + 12);
LABEL_33:
      v21 = 2;
LABEL_34:
      SetTooltipTimer((struct tagTOOLTIPWND *)v16, v21, v20);
      goto LABEL_49;
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            (struct tagTOOLTIPWND *)v16,
                            *((_DWORD *)v7 + 34) - *((_DWORD *)v7 + 32),
                            *((_DWORD *)v7 + 35) - *((_DWORD *)v7 + 33)) )
        goto LABEL_44;
      Fade = *(_QWORD *)(v16 + 16);
    }
    else
    {
      Fade = CreateFade((_DWORD)v7, 0, 135, 33, *((_DWORD *)v7 + 92));
    }
    if ( Fade )
    {
      v23 = *(_QWORD *)v16;
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v23, 0x317u, Fade, (struct _LARGE_STRING *)0x1E, 0, 0, 0LL, 1, 1);
      if ( (gfade[6] & 0x20) == 0 )
      {
        v21 = 3;
        v20 = 20;
        *(_DWORD *)(v16 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_34;
      }
      zzzStartFade();
      goto LABEL_32;
    }
LABEL_44:
    v20 = 0;
    goto LABEL_33;
  }
  return 0LL;
}
