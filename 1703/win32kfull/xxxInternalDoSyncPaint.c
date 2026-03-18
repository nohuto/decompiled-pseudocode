/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C00686A0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1C00C648C (xxxDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0068B20 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     xxxSendEraseBkgnd @ 0x1C00EB518 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F11D0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F3E14 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  int v4; // ebp
  int v5; // esi
  __int64 v6; // r9
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // esi
  void *v11; // rax
  int v12; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v14; // rsi
  __int64 result; // rax
  struct tagWND *v16; // rbx
  struct tagBWL *v17; // r8
  _QWORD *v18; // rax
  char *v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 *v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD v30[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+60h] [rbp+8h]
  struct tagBWL *v33; // [rsp+70h] [rbp+18h]

  v2 = a1;
  if ( !a1 )
  {
LABEL_4:
    v3 = *(_DWORD *)(v2 + 304);
    v4 = *(_DWORD *)(v2 + 68);
    v5 = *(_DWORD *)(v2 + 64);
    *(_BYTE *)(v2 + 58) &= ~0x40u;
    v31 = v3;
    if ( (unsigned int)IsWindowDesktopComposed(v2) )
    {
      v7 = *(_DWORD *)(v2 + 68);
      v8 = *(unsigned int *)(v2 + 64);
      v9 = *(unsigned int *)(v2 + 304);
      if ( v4 != v7 )
        goto LABEL_9;
      if ( v5 == (_DWORD)v8 && v31 == (_DWORD)v9 )
        goto LABEL_17;
      if ( v4 == v7 )
      {
        if ( v5 == (_DWORD)v8 )
        {
          if ( ((v31 ^ (unsigned int)v9) & 0x5C00300) != 0 )
          {
            v10 = -268435456;
            v7 = *(_DWORD *)(v2 + 304);
            goto LABEL_16;
          }
        }
        else if ( ((v5 ^ (unsigned int)v8) & 0x4E27A9) != 0 )
        {
          v10 = -20;
          v7 = *(_DWORD *)(v2 + 64);
          goto LABEL_16;
        }
      }
      else
      {
LABEL_9:
        if ( ((v4 ^ v7) & 0xB9CF0000) != 0 )
        {
          v10 = -16;
LABEL_16:
          v11 = (void *)ReferenceDwmApiPort(v8, v9, v31, v6);
          DwmAsyncChildStyleChange(v11, *(_QWORD *)v2, v10, v7);
        }
      }
    }
LABEL_17:
    v12 = (*(unsigned __int8 *)(v2 + 57) >> 2) & 2 | 1;
    if ( (*(_BYTE *)(v2 + 57) & 2) == 0 )
      v12 = (*(unsigned __int8 *)(v2 + 57) >> 2) & 2;
    if ( v12 )
    {
      if ( (*(_BYTE *)(v2 + 71) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(v2 + 176) )
        {
          SetOrClrWF(0, (_DWORD *)v2, 0x102u, 1);
          SetOrClrWF(0, (_DWORD *)v2, 0x104u, 1);
          LOBYTE(v12) = v12 & 0xFE;
        }
        if ( *(_QWORD *)(v2 + 16) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v2, 1);
          v14 = NCUpdateRgn;
          if ( (v12 & 2) != 0 && (*(_BYTE *)(v2 + 57) & 8) != 0 )
            xxxSendNCPaint((struct tagWND *)v2, NCUpdateRgn);
          if ( (v12 & 1) != 0 )
          {
            if ( (*(_BYTE *)(v2 + 57) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v14);
              v14 = GetNCUpdateRgn((struct tagWND *)v2, 0);
            }
            if ( (*(_BYTE *)(v2 + 57) & 2) != 0 )
            {
              SetOrClrWF(0, (_DWORD *)v2, 0x102u, 1);
              SetOrClrWF(0, (_DWORD *)v2, 0x104u, 1);
              xxxSendEraseBkgnd(v2, 0LL, v14);
            }
            ClearHungFlag((struct tagWND *)v2, 776);
          }
          DeleteMaybeSpecialRgn(v14);
        }
        else if ( (*(_BYTE *)(v2 + 71) & 0xC0) != 0x40
               && v2 != *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL)
               && (unsigned int)IsHungWindow(v2)
               && (*(_BYTE *)(v2 + 59) & 8) != 0 )
        {
          ClearHungFlag((struct tagWND *)v2, 776);
          xxxRedrawHungWindow((struct tagWND *)v2);
        }
      }
      else
      {
        SetOrClrWF(0, (_DWORD *)v2, 0x108u, 1);
        SetOrClrWF(0, (_DWORD *)v2, 0x102u, 1);
        SetOrClrWF(0, (_DWORD *)v2, 0x680u, 1);
        SetOrClrWF(0, (_DWORD *)v2, 0x104u, 1);
        ClearHungFlag((struct tagWND *)v2, 776);
      }
    }
    goto LABEL_40;
  }
  while ( (*(_BYTE *)(a1 + 67) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      goto LABEL_4;
  }
LABEL_40:
  result = a2;
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(v2 + 71) & 2) != 0 )
  {
    result = (__int64)pbwlCache;
    v16 = *(struct tagWND **)(v2 + 112);
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      result = Win32AllocPool(296LL, 1819767637LL);
      if ( !result )
        return result;
      *(_QWORD *)(result + 16) = result + 280;
    }
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 8) = result + 32;
    v17 = InternalBuildHwndList((struct tagBWL *)result, v16, 2u);
    v33 = v17;
    v18 = (_QWORD *)*((_QWORD *)v17 + 1);
    if ( (unsigned __int64)v18 < *((_QWORD *)v17 + 2) )
    {
      v19 = (char *)v17 + 32;
      *v18 = 1LL;
      *((_QWORD *)v17 + 3) = gptiCurrent;
      *(_QWORD *)v17 = gpbwlList;
      gpbwlList = v17;
      v20 = *((_QWORD *)v17 + 4);
      if ( v20 != 1 )
      {
        do
        {
          if ( v20 )
          {
            PsGetThreadWin32Thread(KeGetCurrentThread());
            v23 = (unsigned __int16)v20;
            if ( (unsigned __int64)(unsigned __int16)v20 < *(_QWORD *)(gpsi + 8LL) )
            {
              v24 = v20 >> 16;
              v25 = gSharedInfo[1] + (unsigned int)(v23 * LODWORD(gSharedInfo[2]));
              v26 = (__int64 *)(gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v23 * LODWORD(gSharedInfo[2])) >> 5));
              if ( ((_WORD)v24 == *(_WORD *)(v25 + 26)
                 || (_WORD)v24 == 0xFFFF
                 || !(_WORD)v24 && PsGetCurrentProcessWow64Process(gpsi, v21, v23, v22))
                && (*(_BYTE *)(v25 + 25) & 1) == 0
                && *(_BYTE *)(v25 + 24) == 1 )
              {
                v27 = *v26;
                if ( *v26 )
                {
                  if ( (*(_BYTE *)(v27 + 71) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v27 + 16) )
                  {
                    v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = v30;
                    v30[1] = v27;
                    ++*(_DWORD *)(v27 + 8);
                    xxxInternalDoSyncPaint(v27, a2);
                    ThreadUnlock1(v29, v28);
                  }
                }
              }
            }
          }
          v20 = *((_QWORD *)v19 + 1);
          v19 += 8;
        }
        while ( v20 != 1 );
        v17 = v33;
      }
      return FreeHwndList(v17);
    }
    else
    {
      return Win32FreePool(v17);
    }
  }
  return result;
}
