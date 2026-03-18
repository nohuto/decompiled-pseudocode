/*
 * XREFs of EngCreateWnd @ 0x1C0267E40
 * Callers:
 *     VerifierEngCreateWnd @ 0x1C027D520 (VerifierEngCreateWnd.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     UserAssociateHwnd @ 0x1C01C2C28 (UserAssociateHwnd.c)
 *     ??1WO_CLEANUP@@QEAA@XZ @ 0x1C02676E8 (--1WO_CLEANUP@@QEAA@XZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0267BE0 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 */

WNDOBJ *__stdcall EngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  __int64 v5; // rbx
  __int64 v9; // r14
  TRACKOBJ *v10; // rdi
  TRACKOBJ *v11; // rax
  __int64 i; // rcx
  char *v13; // rax
  struct _RECTL *v14; // r13
  void *v15; // rax
  __int64 v16; // rsi
  struct REGION **v17; // rcx
  struct REGION *v18; // rdx
  void *v19; // rax
  __int64 v20; // rsi
  __int64 Semaphore; // rax
  FLONG v22; // r15d
  struct REGION *v23; // rdx
  __int64 v24; // rax
  struct REGION *v26; // [rsp+20h] [rbp-B1h] BYREF
  int v27; // [rsp+28h] [rbp-A9h]
  struct REGION *v28; // [rsp+30h] [rbp-A1h] BYREF
  int v29; // [rsp+38h] [rbp-99h]
  __int64 v30; // [rsp+40h] [rbp-91h] BYREF
  int v31; // [rsp+48h] [rbp-89h]
  __int64 v32; // [rsp+50h] [rbp-81h] BYREF
  __int64 v33; // [rsp+58h] [rbp-79h] BYREF
  int v34; // [rsp+60h] [rbp-71h] BYREF
  char *v35; // [rsp+68h] [rbp-69h]
  __int128 v36; // [rsp+70h] [rbp-61h]
  __int128 v37; // [rsp+80h] [rbp-51h]
  __int128 v38; // [rsp+90h] [rbp-41h]
  struct _RECTL v39; // [rsp+A0h] [rbp-31h] BYREF
  struct _RECTL v40; // [rsp+B0h] [rbp-21h] BYREF
  struct _RECTL v41; // [rsp+C0h] [rbp-11h] BYREF
  struct _RECTL v42; // [rsp+D0h] [rbp-1h] BYREF

  v5 = 0LL;
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v9 = SURFOBJ_TO_SURFACE(pso);
  if ( (unsigned int)UserIsUserCritSecIn() && (fl & 0xF7FFFC00) == 0 )
  {
    v33 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v10 = gpto;
    v11 = gpto;
    if ( gpto )
    {
      while ( 2 )
      {
        for ( i = *((_QWORD *)v11 + 3); i; i = *(_QWORD *)(i + 160) )
        {
          if ( *(HWND *)(i + 176) == hwnd )
          {
            if ( *((WNDOBJCHANGEPROC *)v11 + 5) == pfn && *(_DWORD *)(i + 188) == iPixelFormat )
              v5 = -1LL;
            goto LABEL_44;
          }
        }
        v11 = (TRACKOBJ *)*((_QWORD *)v11 + 1);
        if ( v11 )
          continue;
        break;
      }
    }
    if ( !gpto )
      goto LABEL_48;
    do
    {
      if ( *((_QWORD *)v10 + 4) == v9 && *((WNDOBJCHANGEPROC *)v10 + 5) == pfn )
        break;
      v10 = (TRACKOBJ *)*((_QWORD *)v10 + 1);
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_48:
      v13 = (char *)PALLOCMEM2(0x48uLL, 1684961095LL, 1);
      v10 = (TRACKOBJ *)v13;
      if ( !v13 )
        goto LABEL_44;
      v35 = v13;
      v14 = (struct _RECTL *)(v13 + 52);
      *((_DWORD *)v13 + 13) = 0;
      *(_DWORD *)v13 = 1128354388;
      *((_QWORD *)v13 + 2) = 0LL;
      *((_QWORD *)v13 + 3) = 0LL;
      *((_QWORD *)v13 + 4) = v9;
      *((_QWORD *)v13 + 5) = pfn;
      *((_DWORD *)v13 + 12) = fl;
      *((_DWORD *)v13 + 14) = 0;
      *((_DWORD *)v13 + 15) = *(_DWORD *)(v9 + 56);
      *((_DWORD *)v13 + 16) = *(_DWORD *)(v9 + 60);
      if ( (fl & 0xC) != 0 )
      {
        v15 = PALLOCMEM2(0xD0uLL, 1684961095LL, 1);
        v16 = (__int64)v15;
        if ( !v15 )
          goto LABEL_44;
        *(_QWORD *)&v36 = v15;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26, 0, 1);
        if ( !v26 )
        {
          if ( v27 == 1 )
          {
            v17 = &v26;
LABEL_43:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v17);
            goto LABEL_44;
          }
          goto LABEL_44;
        }
        *(_QWORD *)&v37 = v26;
        RGNOBJ::vSet((RGNOBJ *)&v26, v14);
        *(_QWORD *)(v16 + 168) = v10;
        v18 = v26;
        *((_DWORD *)v18 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        v39 = *v14;
        EWNDOBJ::vSetClip(v16, v26, &v39);
        *(_QWORD *)(v16 + 24) = 0LL;
        *(_QWORD *)(v16 + 48) = v9 + 24;
        *(_DWORD *)(v16 + 152) = 1145984837;
        *(_QWORD *)(v16 + 160) = 0LL;
        *(_DWORD *)(v16 + 184) = fl | 0x20000000;
        *(_QWORD *)(v16 + 176) = 0LL;
        *(_DWORD *)(v16 + 188) = 0;
        *((_QWORD *)v10 + 2) = v16;
        if ( v27 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
      }
    }
    if ( (*((_DWORD *)v10 + 12) & 0x87FFFFF) != fl )
      goto LABEL_44;
    v19 = PALLOCMEM2(0xD0uLL, 1684961095LL, 1);
    v20 = (__int64)v19;
    if ( !v19 )
      goto LABEL_44;
    *((_QWORD *)&v36 + 1) = v19;
    v42 = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28, 0, 1);
    if ( !v28 )
    {
LABEL_41:
      if ( v29 == 1 )
      {
        v17 = &v28;
        goto LABEL_43;
      }
LABEL_44:
      SEMOBJ::vUnlock((SEMOBJ *)&v33);
      goto LABEL_45;
    }
    *((_QWORD *)&v37 + 1) = v28;
    RGNOBJ::vSet((RGNOBJ *)&v28, &v42);
    *(_QWORD *)&v41.left = 0LL;
    *(_QWORD *)&v41.right = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30, 0, 1);
    if ( v30 )
    {
      *(_QWORD *)&v38 = v30;
      RGNOBJ::vSet((RGNOBJ *)&v30, &v41);
      Semaphore = GreCreateSemaphore();
      *(_QWORD *)(v20 + 200) = Semaphore;
      if ( Semaphore )
      {
        *(_QWORD *)(v20 + 168) = v10;
        v22 = fl | 0x10000000;
        v23 = v28;
        *((_QWORD *)&v38 + 1) = Semaphore;
        *((_DWORD *)v23 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        v40 = v42;
        EWNDOBJ::vSetClip(v20, v28, &v40);
        *(_QWORD *)(v20 + 192) = v30;
        v24 = 0LL;
        *(_QWORD *)(v20 + 24) = 0LL;
        if ( v9 )
          v24 = v9 + 24;
        *(_QWORD *)(v20 + 48) = v24;
        *(_DWORD *)(v20 + 188) = iPixelFormat;
        *(_DWORD *)(v20 + 152) = 1145984837;
        *(_QWORD *)(v20 + 176) = hwnd;
        *(_DWORD *)(v20 + 184) = v22;
        if ( hwnd )
        {
          if ( !(unsigned int)UserAssociateHwnd((__int64)hwnd, v20) )
            goto LABEL_39;
        }
        else
        {
          *(_QWORD *)(v9 + 136) = v20;
        }
        *(_QWORD *)(v20 + 160) = *((_QWORD *)v10 + 3);
        *((_QWORD *)v10 + 3) = v20;
        if ( v35 )
        {
          *((_QWORD *)v10 + 1) = gpto;
          gpto = v10;
        }
        gbWndobjUpdate = 1;
        *((_DWORD *)v10 + 12) |= 0x40000000u;
        *(_DWORD *)(v20 + 184) |= 0x40000000u;
        v32 = *(_QWORD *)(v9 + 48);
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v32);
        v34 = 1;
        v5 = v20;
      }
    }
LABEL_39:
    if ( v31 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
    goto LABEL_41;
  }
LABEL_45:
  WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v34);
  return (WNDOBJ *)v5;
}
