/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C0105778
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C010439C (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C0105664 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00089FC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(BLTQUEUE *this, struct DXGDODPRESENT *a2, int a3, struct _KEVENT *a4, char a5)
{
  char *v7; // rbx
  unsigned int v8; // edx
  char *v9; // rbx
  char *v10; // rax
  char **v11; // rcx

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 27) = a4;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 28) = 0LL;
  v7 = (char *)this + 864;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 66) = -1;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_BYTE *)this + 316) = a5;
  *((_BYTE *)this + 317) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_DWORD *)this + 165) = -1;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 166) = 32;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 214) = 0;
  `vector constructor iterator'((char *)this + 864, 560LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)v7 + 210) = 0LL;
  *((_DWORD *)v7 + 422) = 0;
  *((_QWORD *)this + 320) = 0LL;
  v8 = 0;
  *((_DWORD *)this + 656) = 0;
  v9 = v7 + 8;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
  *((_DWORD *)this + 666) = 0;
  *((_QWORD *)this + 334) = 0LL;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  v10 = (char *)this + 80;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  do
  {
    v11 = (char **)*((_QWORD *)this + 11);
    if ( *v11 != v10 )
      __fastfail(3u);
    *(_QWORD *)v9 = v10;
    ++v8;
    *((_QWORD *)v9 + 1) = v11;
    *v11 = v9;
    *((_QWORD *)this + 11) = v9;
    v9 += 560;
  }
  while ( v8 < 3 );
  *((_DWORD *)this + 24) = a3;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0x100000040LL;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 213) = 0;
  *((_QWORD *)this + 40) = 0LL;
  memset((char *)this + 160, 0, 0x20uLL);
  memset((char *)this + 400, 0, 0x28uLL);
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 212) = 0;
  KeInitializeEvent((PRKEVENT)((char *)this + 536), NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 560),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 536);
  KeSetImportanceDpc((PRKDPC)((char *)this + 560), HighImportance);
  memset((char *)this + 672, 0, 0xB0uLL);
  KeInitializeEvent((PRKEVENT)((char *)this + 328), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 352), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 376), SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 8), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 104), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 2568), 0);
  KeInitializeTimerEx((PKTIMER)((char *)this + 472), SynchronizationTimer);
  return this;
}
