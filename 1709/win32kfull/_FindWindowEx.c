/*
 * XREFs of _FindWindowEx @ 0x1C006E920
 * Callers:
 *     NtUserFindWindowEx @ 0x1C006E540 (NtUserFindWindowEx.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FindWindowEx(__int64 ThreadDesktopWindow, __int64 a2, const wchar_t *a3, const wchar_t *a4)
{
  const wchar_t *v5; // rdi
  __int64 v6; // rsi
  int v8; // r12d
  _QWORD *v9; // rsi
  struct tagBWL *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *i; // rsi
  unsigned __int64 v21; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rsi
  __int64 *v25; // r12
  unsigned __int64 v26; // r14
  const wchar_t *v27; // rdx
  struct tagBWL **v28; // rcx
  struct tagBWL *v29; // rax
  struct tagBWL *v30; // rcx
  signed __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int16 v35; // [rsp+20h] [rbp-88h]
  _QWORD *v36; // [rsp+28h] [rbp-80h]
  char v37[8]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v38; // [rsp+40h] [rbp-68h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  struct tagBWL *v40; // [rsp+50h] [rbp-58h]
  int v41; // [rsp+D0h] [rbp+28h]

  v5 = a3;
  v6 = a2;
  v35 = 0;
  v8 = 0;
  v41 = 0;
  if ( a3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v37);
    if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, v5) < 0 )
      {
        LOWORD(v5) = 0;
        v35 = 0;
      }
      else
      {
        LOWORD(v5) = UserFindAtom(&gawchAtomScratch);
        v35 = (unsigned __int16)v5;
      }
    }
    else
    {
      v35 = (unsigned __int16)v5;
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v37);
    if ( !(_WORD)v5 )
      return 0LL;
  }
  if ( !ThreadDesktopWindow )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( !v6 )
      v8 = 1;
    v41 = v8;
  }
  while ( 1 )
  {
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 104) != ThreadDesktopWindow )
        return 0LL;
      v9 = *(_QWORD **)(v6 + 88);
    }
    else
    {
      v9 = *(_QWORD **)(ThreadDesktopWindow + 112);
    }
    v10 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v11 = Win32AllocPool(296LL, 1819767637LL);
      v10 = (struct tagBWL *)v11;
      if ( !v11 )
        return 0LL;
      *(_QWORD *)(v11 + 16) = v11 + 280;
    }
    *((_QWORD *)v10 + 1) = (char *)v10 + 32;
    for ( *((_QWORD *)v10 + 3) = 0LL; v9; v9 = (_QWORD *)v9[11] )
    {
      v12 = *((_QWORD *)v10 + 3);
      if ( !v12 || v12 == v9[2] )
      {
        **((_QWORD **)v10 + 1) = *v9;
        *((_QWORD *)v10 + 1) += 8LL;
        v13 = *((_QWORD *)v10 + 1);
        if ( v13 == *((_QWORD *)v10 + 2) )
        {
          v14 = v13 - (_QWORD)v10;
          v15 = UserReAllocPool(v10, (unsigned int)v14 + 8LL, (unsigned int)v14 + 72LL, 1819767637LL);
          if ( !v15 )
            break;
          v16 = v15 + v14;
          *(_QWORD *)(v15 + 8) = v16;
          *(_QWORD *)(v15 + 16) = v16 + 64;
          v10 = (struct tagBWL *)v15;
        }
      }
    }
    v17 = (_QWORD *)*((_QWORD *)v10 + 1);
    if ( (unsigned __int64)v17 >= *((_QWORD *)v10 + 2) )
    {
      Win32FreePool(v10, a2, a3);
      return 0LL;
    }
    *v17 = 1LL;
    *((_QWORD *)v10 + 3) = gptiCurrent;
    v18 = gpbwlList;
    *(_QWORD *)v10 = gpbwlList;
    gpbwlList = v10;
    v40 = v10;
    v19 = 0LL;
    for ( i = (_QWORD *)((char *)v10 + 32); ; i = v36 + 1 )
    {
      v36 = i;
      v21 = *i;
      if ( *i == 1LL )
        break;
      v19 = 0LL;
      v39 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v38 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v18, a2, a3, a4) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v38 = *ThreadWin32Thread;
      }
      a3 = (const wchar_t *)(unsigned __int16)v21;
      v18 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v21 < *(_QWORD *)(gpsi + 8LL) )
      {
        v24 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v21 * LODWORD(gSharedInfo[2]);
        a2 = 3 * ((__int64)((unsigned int)(unsigned __int16)v21 * LODWORD(gSharedInfo[2])) >> 5);
        v18 = gpKernelHandleTable;
        v25 = (__int64 *)(gpKernelHandleTable
                        + 24 * ((__int64)((unsigned int)(unsigned __int16)v21 * LODWORD(gSharedInfo[2])) >> 5));
        v26 = v21 >> 16;
        if ( ((_WORD)v26 == *(_WORD *)(v24 + 26)
           || (_WORD)v26 == 0xFFFF
           || !(_WORD)v26 && PsGetCurrentProcessWow64Process(gpKernelHandleTable))
          && (*(_BYTE *)(v24 + 25) & 1) == 0
          && *(_BYTE *)(v24 + 24) == 1 )
        {
          v19 = *v25;
          v39 = *v25;
        }
      }
      if ( v19 )
      {
        v18 = v35;
        if ( !v35 || v35 == *(_WORD *)(*(_QWORD *)(v19 + 168) + 10LL) )
        {
          if ( !a4
            || (!*(_DWORD *)(v19 + 232) ? (v27 = szNull) : (v27 = *(const wchar_t **)(v19 + 240)), !_wcsicmp(a4, v27)) )
          {
            i = v36;
            break;
          }
        }
        v19 = 0LL;
      }
    }
    v28 = (struct tagBWL **)gpbwlList;
    if ( gpbwlList )
    {
      while ( 1 )
      {
        v29 = *v28;
        if ( *v28 == v10 )
          break;
        v28 = (struct tagBWL **)*v28;
        if ( !*(_QWORD *)v29 )
          goto LABEL_63;
      }
      *v28 = *(struct tagBWL **)v10;
      v30 = pbwlCache;
      if ( pbwlCache )
      {
        v31 = (*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (__int64)((*((_QWORD *)v10 + 2) - (_QWORD)v10 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= v31 )
          v30 = v10;
        else
          pbwlCache = v10;
        Win32FreePool(v30, v31, a3);
      }
      else
      {
        pbwlCache = v10;
      }
    }
LABEL_63:
    if ( v19 || !v41 )
      break;
    v41 = 0;
    ThreadDesktopWindow = 0LL;
    v32 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 432);
      if ( v33 )
        ThreadDesktopWindow = *(_QWORD *)(v33 + 104);
    }
    v6 = 0LL;
  }
  if ( *i == 1LL )
    return 0LL;
  return v19;
}
