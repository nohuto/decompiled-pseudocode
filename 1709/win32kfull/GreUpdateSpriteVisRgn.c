/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C00721C0
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C006A790 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     DwmAsyncShowSprite @ 0x1C010FB90 (DwmAsyncShowSprite.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  struct DwmState *v16; // rdx
  struct DwmState *v17; // rcx
  char *v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // r12
  struct _KTHREAD *v21; // rbp
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // rbp
  __int64 *v27; // rcx
  bool v28; // zf
  __int64 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // esi
  __int64 v36; // rax
  int v37; // esi
  char v38; // cl
  __int64 StyleWindow; // rax
  __int64 v40; // rax
  BOOL v41; // ebp
  __int64 v42; // rcx
  void *v43; // rax
  _BYTE v44[8]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v45[2]; // [rsp+28h] [rbp-60h] BYREF
  int v46; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a1;
  v3 = a2;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v9 = 0;
  if ( g_pDwmState )
  {
    v10 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)IsThreadCrossSessionAttached(v6, v5, v7, v8)
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v13 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v13 + 104) && !*(_DWORD *)(v13 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v10 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v16 = g_pDwmState;
    if ( g_pDwmState )
    {
      v17 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v17 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          v18 = (char *)v17 - 24;
          if ( !v17 )
            v18 = 0LL;
          if ( !v18 )
          {
LABEL_79:
            v4 = ghsemGreLock;
            v2 = a1;
            goto LABEL_80;
          }
          v19 = *((_QWORD *)v18 + 5);
          if ( v19 )
            break;
LABEL_78:
          v16 = g_pDwmState;
          v17 = (struct DwmState *)*((_QWORD *)v18 + 3);
          if ( v17 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_79;
        }
        v20 = *(_QWORD *)v16;
        v21 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v14, v15) )
          PsGetThreadWin32Thread(v21);
        v14 = (unsigned __int16)v19;
        if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_68;
        v23 = v19 >> 16;
        v24 = gSharedInfo[1] + (unsigned int)(v14 * LODWORD(gSharedInfo[2]));
        v22 = 3 * ((__int64)(unsigned int)(v14 * LODWORD(gSharedInfo[2])) >> 5);
        v25 = (__int64 *)(gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v14 * LODWORD(gSharedInfo[2])) >> 5));
        if ( (_WORD)v23 != *(_WORD *)(v24 + 26)
          && (_WORD)v23 != 0xFFFF
          && ((_WORD)v23 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable)) )
        {
          goto LABEL_68;
        }
        if ( (*(_BYTE *)(v24 + 25) & 1) != 0 )
          goto LABEL_68;
        if ( *(_BYTE *)(v24 + 24) != 1 )
          goto LABEL_68;
        v26 = *v25;
        if ( !*v25 )
          goto LABEL_68;
        if ( (*(_DWORD *)(v26 + 304) & 0x20) == 0 )
        {
LABEL_55:
          if ( (*(_BYTE *)(v26 + 66) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v26 + 71) & 0x10) != 0 )
            {
LABEL_49:
              SetRectRgnIndirect(*(_QWORD *)(v20 + 184), v26 + 128);
              v35 = 1;
LABEL_69:
              if ( v35 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v45, *((HRGN *)g_pDwmState + 23), 0);
                v40 = v45[0];
                if ( v45[0] )
                  v35 = *(_DWORD *)(v45[0] + 84LL) != 1;
                if ( !v46 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v45);
                  v40 = v45[0];
                }
                if ( v40 )
                  _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
              }
              v41 = v35 != 0;
              if ( v41 != (*((_DWORD *)v18 + 50) & 1) )
              {
                v42 = v41 | *((_DWORD *)v18 + 50) & 0xFFFFFFFE;
                *((_DWORD *)v18 + 50) = v42;
                v43 = (void *)UserReferenceDwmApiPort(v42, v22, v14, v15);
                DwmAsyncShowSprite(v43);
              }
              goto LABEL_78;
            }
          }
          else
          {
            v36 = v26;
            v37 = (4 * (*(_BYTE *)(v26 + 71) & 4)) | 0x4401;
            while ( 1 )
            {
              v38 = *(_BYTE *)(v36 + 71);
              if ( (v38 & 0x10) == 0 || (v38 & 0x20) != 0 && v36 != v26 )
                break;
              if ( (*(_WORD *)(v36 + 82) & 0x3FFF) != 0x29D )
              {
                v36 = *(_QWORD *)(v36 + 104);
                if ( v36 )
                  continue;
              }
              StyleWindow = GetStyleWindow(v26, 2848);
              if ( !StyleWindow || GetRedirectionBitmap(StyleWindow) )
              {
                UpdatesLockedForDwm();
                v35 = CalcVisRgnWorker((struct tagWND *const)v26, (HRGN *)(v20 + 184), v37);
                goto LABEL_69;
              }
              break;
            }
            SetOrCreateRectRgnIndirectPublic(v20 + 184, gZero);
          }
LABEL_68:
          v35 = 0;
          goto LABEL_69;
        }
        v14 = *(unsigned __int16 *)(gpsi + 884LL);
        if ( *(_WORD *)(*(_QWORD *)(v26 + 168) + 8LL) == (_WORD)v14 )
          goto LABEL_41;
        v15 = *(_QWORD *)(v26 + 184);
        if ( !v15 )
          goto LABEL_37;
        if ( (_WORD)v14 )
        {
          v22 = *(unsigned int *)(v15 + 4);
          v27 = (__int64 *)(v15 + 8);
          if ( (_DWORD)v22 )
          {
            while ( *((_WORD *)v27 + 4) != (_WORD)v14 || (*((_BYTE *)v27 + 10) & 1) == 0 )
            {
              v27 += 2;
              v28 = (_DWORD)v22 == 1;
              v22 = (unsigned int)(v22 - 1);
              if ( v28 )
                goto LABEL_32;
            }
            v30 = *v27;
            if ( v30 )
            {
              if ( v30 != -1 )
                goto LABEL_38;
LABEL_41:
              v32 = *(_QWORD *)(v26 + 184);
              if ( v32
                && (v14 = (unsigned __int16)atomDispAffinity, atomDispAffinity)
                && (v22 = *(unsigned int *)(v32 + 4), v33 = (__int64 *)(v32 + 8), (_DWORD)v22) )
              {
                while ( *((_WORD *)v33 + 4) != atomDispAffinity || (*((_BYTE *)v33 + 10) & 1) == 0 )
                {
                  v33 += 2;
                  v28 = (_DWORD)v22 == 1;
                  v22 = (unsigned int)(v22 - 1);
                  if ( v28 )
                    goto LABEL_47;
                }
                v34 = *v33;
              }
              else
              {
LABEL_47:
                LOBYTE(v34) = 0;
              }
              if ( (v34 & 1) == 0 )
                goto LABEL_49;
              goto LABEL_55;
            }
          }
        }
LABEL_32:
        v14 = *(unsigned __int16 *)(gpsi + 1362LL);
        if ( (_WORD)v14 && (v22 = *(unsigned int *)(v15 + 4), v29 = (__int64 *)(v15 + 8), (_DWORD)v22) )
        {
          while ( *((_WORD *)v29 + 4) != (_WORD)v14 || (*((_BYTE *)v29 + 10) & 1) == 0 )
          {
            v29 += 2;
            v28 = (_DWORD)v22 == 1;
            v22 = (unsigned int)(v22 - 1);
            if ( v28 )
              goto LABEL_37;
          }
          v30 = *v29;
        }
        else
        {
LABEL_37:
          v30 = 0LL;
        }
LABEL_38:
        if ( v30 )
        {
          LOBYTE(v22) = 1;
          v31 = HMValidateHandleNoSecure(v30, v22);
          if ( v31 )
          {
            if ( !(unsigned int)IsWindowBeingDestroyed(v31) )
              goto LABEL_55;
          }
        }
        goto LABEL_41;
      }
    }
LABEL_80:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v3 = a2;
  }
  v49 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v44, (struct PDEVOBJ *)&v49);
  if ( *(_DWORD *)(v2 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v2 + 144) + 8LL * v9++), v3);
    while ( v9 < *(_DWORD *)(v2 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v2 + 72), v3);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v44);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
