/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C006D400
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066340 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     DwmAsyncShowSprite @ 0x1C0103F58 (DwmAsyncShowSprite.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, char a2)
{
  __int64 v2; // rsi
  char v3; // di
  __int64 v4; // rbx
  unsigned int v5; // r13d
  int v6; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  struct DwmState *v9; // rdx
  struct DwmState *v10; // rcx
  char *v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 *v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 *v19; // r14
  __int64 v20; // rbp
  int v21; // esi
  __int64 v22; // rcx
  char v23; // al
  int v24; // esi
  __int64 v25; // rax
  BOOL v26; // ebp
  __int64 v27; // r10
  __int16 v28; // r8
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rcx
  __int16 v32; // r8
  int v33; // edx
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edx
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 StyleWindow; // rax
  void *v41; // rax
  __int64 v42; // rax
  _BYTE v43[8]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v44[2]; // [rsp+28h] [rbp-60h] BYREF
  int v45; // [rsp+38h] [rbp-50h]
  __int64 v48; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a1;
  v3 = a2;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v5 = 0;
  if ( g_pDwmState )
  {
    v6 = 0;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v8 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v8 + 104) && !*(_DWORD *)(v8 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v6 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v9 = g_pDwmState;
    if ( g_pDwmState )
    {
      v10 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v10 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          if ( !v10 || (v11 = (char *)v10 - 24, v10 == (struct DwmState *)24) )
          {
LABEL_36:
            v4 = ghsemGreLock;
            v2 = a1;
            goto LABEL_37;
          }
          v12 = *((_QWORD *)v11 + 5);
          if ( v12 )
            break;
LABEL_35:
          v10 = (struct DwmState *)*((_QWORD *)v11 + 3);
          if ( v10 == (struct DwmState *)(*(_QWORD *)v9 + 80LL) )
            goto LABEL_36;
        }
        v13 = *(_QWORD *)v9;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v15 = (__int64 *)gpsi;
        v16 = (unsigned __int16)v12;
        if ( (unsigned __int64)(unsigned __int16)v12 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_24;
        v17 = v12 >> 16;
        v18 = gSharedInfo[1] + (unsigned int)(v16 * LODWORD(gSharedInfo[2]));
        v19 = (__int64 *)(gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v16 * LODWORD(gSharedInfo[2])) >> 5));
        if ( (_WORD)v17 != *(_WORD *)(v18 + 26) && (_WORD)v17 != 0xFFFF )
        {
          if ( (_WORD)v17 || !PsGetCurrentProcessWow64Process(gpsi, v14, v16, gpsi) )
            goto LABEL_24;
          v15 = (__int64 *)gpsi;
        }
        if ( (*(_BYTE *)(v18 + 25) & 1) == 0 && *(_BYTE *)(v18 + 24) == 1 )
        {
          v20 = *v19;
          if ( *v19 )
          {
            if ( (*(_DWORD *)(v20 + 304) & 0x20) == 0 )
              goto LABEL_18;
            v27 = *v15;
            v28 = *(_WORD *)(*v15 + 884);
            if ( *(_WORD *)(*(_QWORD *)(v20 + 168) + 8LL) == v28 )
            {
LABEL_57:
              v36 = *(_QWORD *)(v20 + 184);
              if ( v36 && atomDispAffinity && (v37 = *(_DWORD *)(v36 + 4), v38 = (__int64 *)(v36 + 8), v37) )
              {
                while ( *((_WORD *)v38 + 4) != atomDispAffinity || (*((_BYTE *)v38 + 10) & 1) == 0 )
                {
                  v38 += 2;
                  if ( !--v37 )
                    goto LABEL_62;
                }
                v39 = *v38;
              }
              else
              {
LABEL_62:
                LOBYTE(v39) = 0;
              }
              if ( (v39 & 1) == 0 )
                goto LABEL_64;
              goto LABEL_18;
            }
            v29 = *(_QWORD *)(v20 + 184);
            if ( !v29 )
              goto LABEL_55;
            if ( v28 )
            {
              v30 = *(_DWORD *)(v29 + 4);
              v31 = v29 + 8;
              if ( v30 )
              {
                while ( *(_WORD *)(v31 + 8) != v28 || (*(_BYTE *)(v31 + 10) & 1) == 0 )
                {
                  v31 += 16LL;
                  if ( !--v30 )
                    goto LABEL_51;
                }
                v35 = *(_QWORD *)v31;
                if ( v35 )
                {
                  if ( v35 == -1LL )
                    goto LABEL_57;
                  goto LABEL_56;
                }
              }
            }
LABEL_51:
            v32 = *(_WORD *)(v27 + 1362);
            if ( v32 && (v33 = *(_DWORD *)(v29 + 4), v34 = v29 + 8, v33) )
            {
              while ( *(_WORD *)(v34 + 8) != v32 || (*(_BYTE *)(v34 + 10) & 1) == 0 )
              {
                v34 += 16LL;
                if ( !--v33 )
                  goto LABEL_55;
              }
              v35 = *(_QWORD *)v34;
            }
            else
            {
LABEL_55:
              v35 = 0LL;
            }
LABEL_56:
            if ( v35 )
            {
              v42 = HMValidateHandleNoSecure(v35, 1);
              if ( v42 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v42) )
                {
LABEL_18:
                  if ( (*(_BYTE *)(v20 + 66) & 0x20) == 0 )
                  {
                    v21 = 17409;
                    if ( (*(_BYTE *)(v20 + 71) & 4) != 0 )
                      v21 = 17425;
                    v22 = v20;
                    do
                    {
                      v23 = *(_BYTE *)(v22 + 71);
                      if ( (v23 & 0x10) == 0 || (v23 & 0x20) != 0 && v22 != v20 )
                        goto LABEL_23;
                      if ( (*(_WORD *)(v22 + 82) & 0x3FFF) == 0x29D )
                        break;
                      v22 = *(_QWORD *)(v22 + 104);
                    }
                    while ( v22 );
                    StyleWindow = GetStyleWindow(v20, 2848);
                    if ( StyleWindow && !GetRedirectionBitmap(StyleWindow) )
                    {
LABEL_23:
                      SetOrCreateRectRgnIndirectPublic(v13 + 184, gZero);
                      goto LABEL_24;
                    }
                    UpdatesLockedForDwm();
                    v24 = CalcVisRgnWorker((struct tagWND *const)v20, (HRGN *)(v13 + 184), v21);
                    goto LABEL_25;
                  }
                  if ( (*(_BYTE *)(v20 + 71) & 0x10) == 0 )
                    goto LABEL_24;
LABEL_64:
                  SetRectRgnIndirect(*(_QWORD *)(v13 + 184), v20 + 128);
                  v24 = 1;
                  goto LABEL_25;
                }
              }
            }
            goto LABEL_57;
          }
        }
LABEL_24:
        v24 = 0;
LABEL_25:
        if ( v24 )
        {
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v44, *((HRGN *)g_pDwmState + 23), 0);
          v25 = v44[0];
          if ( v44[0] )
            v24 = *(_DWORD *)(v44[0] + 84LL) != 1;
          if ( !v45 )
          {
            RGNOBJ::UpdateUserRgn((RGNOBJ *)v44);
            v25 = v44[0];
          }
          if ( v25 )
            _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
        }
        v26 = v24 != 0;
        if ( v26 != (*((_DWORD *)v11 + 50) & 1) )
        {
          *((_DWORD *)v11 + 50) = v26 | *((_DWORD *)v11 + 50) & 0xFFFFFFFE;
          v41 = (void *)UserReferenceDwmApiPort();
          DwmAsyncShowSprite(v41);
        }
        v9 = g_pDwmState;
        goto LABEL_35;
      }
    }
LABEL_37:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v6 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v3 = a2;
  }
  v48 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v43, (struct PDEVOBJ *)&v48);
  if ( *(_DWORD *)(v2 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v2 + 144) + 8LL * v5++), v3);
    while ( v5 < *(_DWORD *)(v2 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v2 + 72), v3);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v43);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
