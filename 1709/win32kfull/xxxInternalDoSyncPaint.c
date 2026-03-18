/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C006EDA0
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxDoSyncPaint @ 0x1C00E3344 (xxxDoSyncPaint.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006F230 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     xxxSendEraseBkgnd @ 0x1C007F4F4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007F96C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007FA1C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  __int64 v7; // rcx
  int v8; // edx
  void *v9; // rax
  int v10; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v12; // rsi
  __int64 result; // rax
  struct tagWND *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v27[7]; // [rsp+20h] [rbp-38h] BYREF
  int v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+70h] [rbp+18h]

  v2 = a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(a1 + 67) & 2) == 0 )
    {
      a1 = *(_QWORD *)(a1 + 104);
      if ( !a1 )
        goto LABEL_4;
    }
    goto LABEL_39;
  }
LABEL_4:
  v3 = *(_DWORD *)(v2 + 304);
  v4 = *(_DWORD *)(v2 + 68);
  v5 = *(_DWORD *)(v2 + 64);
  *(_BYTE *)(v2 + 58) &= ~0x40u;
  v28 = v3;
  if ( (unsigned int)IsWindowDesktopComposed(v2) )
  {
    v6 = *(_DWORD *)(v2 + 68);
    v7 = *(unsigned int *)(v2 + 64);
    v8 = *(_DWORD *)(v2 + 304);
    if ( v4 != v6 )
      goto LABEL_9;
    if ( v5 == (_DWORD)v7 && v28 == v8 )
      goto LABEL_16;
    if ( v4 == v6 )
    {
      if ( v5 == (_DWORD)v7 )
      {
        if ( ((v28 ^ v8) & 0x5C00300) != 0 )
        {
LABEL_15:
          v9 = (void *)ReferenceDwmApiPort(v7);
          DwmAsyncChildStyleChange(v9);
        }
      }
      else if ( ((v5 ^ (unsigned int)v7) & 0x4E27A9) != 0 )
      {
        goto LABEL_15;
      }
    }
    else
    {
LABEL_9:
      if ( ((v4 ^ v6) & 0xB9CF0000) != 0 )
        goto LABEL_15;
    }
  }
LABEL_16:
  v10 = (*(unsigned __int8 *)(v2 + 57) >> 2) & 2 | 1;
  if ( (*(_BYTE *)(v2 + 57) & 2) == 0 )
    v10 = (*(unsigned __int8 *)(v2 + 57) >> 2) & 2;
  if ( v10 )
  {
    if ( (*(_BYTE *)(v2 + 71) & 0x10) != 0 )
    {
      if ( !*(_QWORD *)(v2 + 176) )
      {
        SetOrClrWF(0LL, v2, 258LL, 1LL);
        SetOrClrWF(0LL, v2, 260LL, 1LL);
        LOBYTE(v10) = v10 & 0xFE;
      }
      if ( *(_QWORD *)(v2 + 16) == gptiCurrent )
      {
        NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v2, 1);
        v12 = NCUpdateRgn;
        if ( (v10 & 2) != 0 && (*(_BYTE *)(v2 + 57) & 8) != 0 )
          xxxSendNCPaint((struct tagWND *)v2, NCUpdateRgn);
        if ( (v10 & 1) != 0 )
        {
          if ( (*(_BYTE *)(v2 + 57) & 8) != 0 )
          {
            DeleteMaybeSpecialRgn(v12);
            v12 = GetNCUpdateRgn((struct tagWND *)v2, 0);
          }
          if ( (*(_BYTE *)(v2 + 57) & 2) != 0 )
          {
            SetOrClrWF(0LL, v2, 258LL, 1LL);
            SetOrClrWF(0LL, v2, 260LL, 1LL);
            xxxSendEraseBkgnd(v2, 0LL, v12);
          }
          ClearHungFlag((struct tagWND *)v2, 776);
        }
        DeleteMaybeSpecialRgn(v12);
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
      SetOrClrWF(0LL, v2, 264LL, 1LL);
      SetOrClrWF(0LL, v2, 258LL, 1LL);
      SetOrClrWF(0LL, v2, 1664LL, 1LL);
      SetOrClrWF(0LL, v2, 260LL, 1LL);
      ClearHungFlag((struct tagWND *)v2, 776);
    }
  }
LABEL_39:
  result = a2;
  if ( (a2 & 0x20) == 0 && ((a2 & 4) == 0 || (*(_BYTE *)(v2 + 71) & 2) == 0) )
    return result;
  result = (__int64)pbwlCache;
  v14 = *(struct tagWND **)(v2 + 112);
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
  v15 = (__int64)InternalBuildHwndList((struct tagBWL *)result, v14, 2u);
  v31 = v15;
  v18 = *(_QWORD **)(v15 + 8);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v15 + 16) )
    return Win32FreePool(v15, v15, v16);
  *v18 = 1LL;
  v19 = v15 + 32;
  *(_QWORD *)(v15 + 24) = gptiCurrent;
  v20 = gpbwlList;
  *(_QWORD *)v15 = gpbwlList;
  gpbwlList = v15;
  v21 = *(_QWORD *)(v15 + 32);
  if ( v21 == 1 )
    return FreeHwndList(v15);
  do
  {
    if ( v21 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v15, v16, v17) )
        PsGetThreadWin32Thread(CurrentThread);
      v16 = (unsigned __int16)v21;
      v20 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v21 < *(_QWORD *)(gpsi + 8LL) )
      {
        v23 = v21 >> 16;
        v24 = gSharedInfo[1] + (unsigned int)(v16 * LODWORD(gSharedInfo[2]));
        v15 = 3 * ((__int64)(unsigned int)(v16 * LODWORD(gSharedInfo[2])) >> 5);
        v20 = gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v16 * LODWORD(gSharedInfo[2])) >> 5);
        v29 = v20;
        if ( (_WORD)v23 != *(_WORD *)(v24 + 26) && (_WORD)v23 != 0xFFFF )
        {
          if ( (_WORD)v23 || !PsGetCurrentProcessWow64Process(v20) )
            goto LABEL_64;
          v20 = v29;
        }
        if ( (*(_BYTE *)(v24 + 25) & 1) == 0 && *(_BYTE *)(v24 + 24) == 1 )
        {
          v20 = *(_QWORD *)v20;
          if ( v20 )
          {
            if ( (*(_BYTE *)(v20 + 71) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v20 + 16) )
            {
              v27[0] = *(_QWORD *)(gptiCurrent + 392LL);
              *(_QWORD *)(gptiCurrent + 392LL) = v27;
              v27[1] = v20;
              _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
              xxxInternalDoSyncPaint(v20, a2);
              ThreadUnlock1(v26, v25);
            }
          }
        }
      }
    }
LABEL_64:
    v21 = *(_QWORD *)(v19 + 8);
    v19 += 8LL;
  }
  while ( v21 != 1 );
  v15 = v31;
  return FreeHwndList(v15);
}
