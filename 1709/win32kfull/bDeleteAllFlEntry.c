/*
 * XREFs of bDeleteAllFlEntry @ 0x1C0040B50
 * Callers:
 *     GreEnableEUDC @ 0x1C00BF0E4 (GreEnableEUDC.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     vLinkEudcPFEs @ 0x1C00C199C (vLinkEudcPFEs.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C01100E0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0123C54 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 */

__int64 bDeleteAllFlEntry()
{
  __int64 v0; // rcx
  int v1; // edx
  int v2; // ecx
  _UNKNOWN **v3; // rbx
  int v4; // eax
  int v5; // r14d
  char v6; // si
  _UNKNOWN **v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r9
  _QWORD **v10; // rdx
  int v11; // r11d
  __int64 v12; // r11
  _QWORD *v13; // rdi
  _QWORD *v14; // r11
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v24; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v25; // [rsp+28h] [rbp-18h]
  __int128 v26; // [rsp+30h] [rbp-10h] BYREF

  v25 = &v24;
  v24 = &v24;
  v26 = 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return 0LL;
  }
  else
  {
    vUnlinkAllEudcRFONTsAndPFEs(v0, 1LL);
    vUnlinkAllEudcFromRFONTList(v2, v1);
    if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      ++dword_1C0327BF8;
      v26 = *(_OWORD *)&gappfeSysEUDC;
      *(_OWORD *)&gappfeSysEUDC = 0uLL;
      Dst = 0;
    }
    v3 = (_UNKNOWN **)off_1C03207F0;
    if ( off_1C03207F0 != (_UNKNOWN *)&off_1C03207F0 )
    {
      v4 = dword_1C0327BF4;
      v5 = dword_1C0327BF4;
      v6 = dword_1C0327C04;
      do
      {
        v7 = v3;
        v8 = 0LL;
        v3 = (_UNKNOWN **)*v3;
        v9 = v7[2];
        if ( v9 == v7 + 2 )
          goto LABEL_15;
        do
        {
          v10 = (_QWORD **)v9;
          v9 = (_QWORD *)*v9;
          v11 = *((_DWORD *)v10 + 4);
          if ( !v11 && (v6 & 2) != 0 || v11 == 1 && (v6 & 8) != 0 )
          {
            v12 = (__int64)*v10;
            if ( (_QWORD **)(*v10)[1] != v10 || (v13 = v10[1], (_QWORD **)*v13 != v10) )
              __fastfail(3u);
            *v13 = v12;
            *(_QWORD *)(v12 + 8) = v13;
            v14 = v25;
            if ( *v25 != &v24 )
              __fastfail(3u);
            v10[1] = v25;
            *v10 = &v24;
            *v14 = v10;
            v25 = v10;
          }
          else
          {
            v8 = (unsigned int)(v8 + 1);
          }
        }
        while ( v9 != v7 + 2 );
        if ( (_DWORD)v8 )
        {
          if ( *((_DWORD *)v7 + 25) != (_DWORD)v8 )
          {
            ++*((_DWORD *)v7 + 26);
            *((_DWORD *)v7 + 25) = v8;
          }
        }
        else
        {
LABEL_15:
          v15 = (__int64)*v7;
          if ( *((_UNKNOWN ***)*v7 + 1) != v7 || (v16 = v7[1], (_UNKNOWN **)*v16 != v7) )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          Win32FreePool(v7, v16, v8);
          v6 = dword_1C0327C04;
          v4 = --dword_1C0327BF4;
        }
      }
      while ( v3 != &off_1C03207F0 );
      if ( v5 != v4 )
        ++dword_1C0327BFC;
      if ( v4 )
        vLinkEudcPFEs(0LL);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v26 != 0 )
      bUnloadEudcFont((__int64)&v26);
    v17 = v24;
    while ( v17 != &v24 )
    {
      v18 = v17;
      v17 = (_QWORD *)*v17;
      v19 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18) )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      bUnloadEudcFont((__int64)(v18 + 4));
      Win32FreePool(v18, v21, v22);
    }
    return 1LL;
  }
}
