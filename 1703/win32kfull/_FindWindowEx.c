/*
 * XREFs of _FindWindowEx @ 0x1C00A44D0
 * Callers:
 *     NtUserFindWindowEx @ 0x1C00A41E0 (NtUserFindWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FindWindowEx(__int64 a1, __int64 a2, wchar_t *a3, const wchar_t *a4)
{
  wchar_t *v5; // r14
  int v8; // r15d
  _DWORD *v9; // r10
  int v10; // r15d
  unsigned int v11; // ecx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  wchar_t *v15; // rax
  int v16; // r11d
  __int64 v17; // r8
  __int16 Atom; // dx
  unsigned int v19; // ecx
  __int64 v20; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v22; // rax
  _QWORD *v23; // rsi
  struct tagBWL *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rdi
  _QWORD *i; // rsi
  unsigned __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 *v39; // r15
  unsigned __int64 v40; // r14
  const wchar_t *v41; // rdx
  struct tagBWL **v42; // rcx
  struct tagBWL *v43; // rax
  struct tagBWL *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int16 v48; // [rsp+20h] [rbp-A8h]
  int v49; // [rsp+2Ch] [rbp-9Ch]
  _QWORD *v50; // [rsp+30h] [rbp-98h]
  int v51; // [rsp+F0h] [rbp+28h]

  v5 = a3;
  v48 = 0;
  v8 = 0;
  v51 = 0;
  if ( !a3 )
    goto LABEL_30;
  v9 = (_DWORD *)gdwInAtomicOperation;
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v10 = ++gdwAtomicCheckSerial;
    v49 = gdwAtomicCheckSerial;
    v11 = 0;
    if ( !gdwAtomicCheckLogSize )
      goto LABEL_9;
    while ( *(_DWORD *)(((unsigned __int64)v11 << 6) + gpAtomickCheckStacks) )
    {
      if ( ++v11 >= gdwAtomicCheckLogSize )
        goto LABEL_9;
    }
    v12 = (unsigned __int64)v11 << 6;
    *(_DWORD *)(v12 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
    *(_DWORD *)(gpAtomickCheckStacks + v12 + 4) = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)(gpAtomickCheckStacks + v12 + 8) = (MEMORY[0xFFFFF78000000320]
                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    RtlWalkFrameChain((PVOID *)(v12 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    v9 = (_DWORD *)gdwInAtomicOperation;
  }
  v10 = v49;
LABEL_9:
  if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v13 = 2147483646LL;
    v14 = 256LL;
    v15 = &gawchAtomScratch;
    v16 = 0;
    v17 = 0LL;
    while ( v14 )
    {
      if ( !v13 || !*v5 )
        goto LABEL_17;
      *v15++ = *v5++;
      --v14;
      --v13;
      ++v17;
    }
    --v15;
    v16 = -2147483643;
LABEL_17:
    *v15 = 0;
    if ( v16 >= 0 )
    {
      Atom = UserFindAtom(&gawchAtomScratch);
      v48 = Atom;
      v9 = (_DWORD *)gdwInAtomicOperation;
      goto LABEL_22;
    }
    Atom = 0;
  }
  else
  {
    Atom = (__int16)v5;
  }
  v48 = Atom;
LABEL_22:
  --*v9;
  if ( gpAtomickCheckStacks )
  {
    v19 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v19 << 6) + gpAtomickCheckStacks) != v10 )
      {
        if ( ++v19 >= gdwAtomicCheckLogSize )
          goto LABEL_28;
      }
      *(_DWORD *)(((unsigned __int64)v19 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_28:
  if ( !Atom )
    return 0LL;
  v8 = 0;
LABEL_30:
  if ( !a1 )
  {
    a1 = 0LL;
    v20 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v20 = *ThreadWin32Thread;
    if ( v20 )
    {
      v22 = *(_QWORD *)(v20 + 416);
      if ( v22 )
        a1 = *(_QWORD *)(v22 + 16);
    }
    if ( !a2 )
      v8 = 1;
    v51 = v8;
  }
  while ( 1 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 104) != a1 )
        return 0LL;
      v23 = *(_QWORD **)(a2 + 88);
    }
    else
    {
      v23 = *(_QWORD **)(a1 + 112);
    }
    v24 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v25 = Win32AllocPool(296LL, 1819767637LL);
      v24 = (struct tagBWL *)v25;
      if ( !v25 )
        return 0LL;
      *(_QWORD *)(v25 + 16) = v25 + 280;
    }
    *((_QWORD *)v24 + 1) = (char *)v24 + 32;
    for ( *((_QWORD *)v24 + 3) = 0LL; v23; v23 = (_QWORD *)v23[11] )
    {
      v26 = *((_QWORD *)v24 + 3);
      if ( !v26 || v26 == v23[2] )
      {
        **((_QWORD **)v24 + 1) = *v23;
        *((_QWORD *)v24 + 1) += 8LL;
        v27 = *((_QWORD *)v24 + 1);
        if ( v27 == *((_QWORD *)v24 + 2) )
        {
          v28 = v27 - (_QWORD)v24;
          v29 = UserReAllocPool(v24, (unsigned int)v28 + 8LL, (unsigned int)v28 + 72LL, 1819767637LL);
          if ( !v29 )
            break;
          v30 = v29 + v28;
          *(_QWORD *)(v29 + 8) = v30;
          *(_QWORD *)(v29 + 16) = v30 + 64;
          v24 = (struct tagBWL *)v29;
        }
      }
    }
    v31 = (_QWORD *)*((_QWORD *)v24 + 1);
    if ( (unsigned __int64)v31 >= *((_QWORD *)v24 + 2) )
    {
      Win32FreePool(v24);
      return 0LL;
    }
    *v31 = 1LL;
    *((_QWORD *)v24 + 3) = gptiCurrent;
    *(_QWORD *)v24 = gpbwlList;
    gpbwlList = v24;
    v32 = 0LL;
    for ( i = (_QWORD *)((char *)v24 + 32); ; i = v50 + 1 )
    {
      v50 = i;
      v34 = *i;
      if ( *i == 1LL )
        break;
      v32 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v37 = (unsigned __int16)v34;
      if ( (unsigned __int64)(unsigned __int16)v34 < *(_QWORD *)(gpsi + 8LL) )
      {
        v38 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v34 * LODWORD(gSharedInfo[2]);
        v39 = (__int64 *)(gpKernelHandleTable
                        + 16 * ((__int64)((unsigned int)(unsigned __int16)v34 * LODWORD(gSharedInfo[2])) >> 5));
        v40 = v34 >> 16;
        if ( ((_WORD)v40 == *(_WORD *)(v38 + 26)
           || (_WORD)v40 == 0xFFFF
           || !(_WORD)v40
           && PsGetCurrentProcessWow64Process((unsigned int)(v37 * LODWORD(gSharedInfo[2])), v35, v37, v36))
          && (*(_BYTE *)(v38 + 25) & 1) == 0
          && *(_BYTE *)(v38 + 24) == 1 )
        {
          v32 = *v39;
        }
      }
      if ( v32 )
      {
        if ( !v48 || v48 == *(_WORD *)(*(_QWORD *)(v32 + 168) + 10LL) )
        {
          if ( !a4
            || (!*(_DWORD *)(v32 + 232) ? (v41 = szNull) : (v41 = *(const wchar_t **)(v32 + 240)), !_wcsicmp(a4, v41)) )
          {
            i = v50;
            break;
          }
        }
        v32 = 0LL;
      }
    }
    v42 = (struct tagBWL **)gpbwlList;
    if ( gpbwlList )
    {
      while ( 1 )
      {
        v43 = *v42;
        if ( *v42 == v24 )
          break;
        v42 = (struct tagBWL **)*v42;
        if ( !*(_QWORD *)v43 )
          goto LABEL_87;
      }
      *v42 = *(struct tagBWL **)v24;
      v44 = pbwlCache;
      if ( pbwlCache )
      {
        if ( (__int64)((*((_QWORD *)v24 + 2) - (_QWORD)v24 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
          v44 = v24;
        else
          pbwlCache = v24;
        Win32FreePool(v44);
      }
      else
      {
        pbwlCache = v24;
      }
    }
LABEL_87:
    if ( v32 || !v51 )
      break;
    v51 = 0;
    a1 = 0LL;
    v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 408);
      if ( v46 )
        a1 = *(_QWORD *)(v46 + 104);
    }
    a2 = 0LL;
  }
  if ( *i == 1LL )
    return 0LL;
  return v32;
}
