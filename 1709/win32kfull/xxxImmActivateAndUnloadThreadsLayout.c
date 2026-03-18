/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01C1BD8
 * Callers:
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01C1BD8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01D2D20 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     xxxImmActivateLayout @ 0x1C0125C04 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01C1BD8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01C22E8 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // edx
  __int64 v7; // r9
  int v8; // edi
  int v9; // r11d
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  PRKPROCESS *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // edi
  __int64 result; // rax
  int v18; // ebx
  _QWORD *v19; // rdi
  _DWORD *i; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rbx
  int v23; // edi
  __int64 v24; // rcx
  _QWORD *j; // rcx
  __int64 v26; // rcx
  char v27; // [rsp+30h] [rbp-348h]
  int v28; // [rsp+34h] [rbp-344h]
  _DWORD *v30; // [rsp+38h] [rbp-340h]
  int v31; // [rsp+40h] [rbp-338h]
  _QWORD *v33; // [rsp+48h] [rbp-330h]
  int v34; // [rsp+50h] [rbp-328h]
  int v35; // [rsp+58h] [rbp-320h]
  __int64 v36; // [rsp+68h] [rbp-310h]
  __int64 ThreadWin32Thread; // [rsp+78h] [rbp-300h]
  __int128 v39; // [rsp+90h] [rbp-2E8h]
  __int128 v40; // [rsp+B0h] [rbp-2C8h] BYREF
  _QWORD v41[82]; // [rsp+C0h] [rbp-2B8h] BYREF

  v34 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v41[0] = a3;
  v8 = 0;
  v9 = 0;
  v31 = 0;
  while ( 1 )
  {
    v10 = a1;
    if ( v8 >= v34 )
      break;
    v6 = 0;
    v28 = 0;
    v11 = *(_QWORD *)(a1 + 8LL * v8);
    if ( (*(_DWORD *)(v11 + 464) & 1) != 0 )
    {
      v6 = -65536;
LABEL_5:
      v28 = v6;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v11 + 416) != a4 )
    {
      if ( *(_QWORD *)(v11 + 752) )
      {
        v6 = 1;
        goto LABEL_5;
      }
      v27 = 0;
      *(_QWORD *)&v39 = v11 + 416;
      *((_QWORD *)&v39 + 1) = a4;
      v40 = v39;
      HMAssignmentLock(&v40);
      v10 = a1;
      v12 = *(_QWORD *)(a1 + 8LL * v8);
      if ( *(_QWORD *)(v12 + 456) != *(_QWORD *)(ThreadWin32Thread + 456) )
      {
        v13 = *(PRKPROCESS **)(v12 + 400);
        if ( v13 != *(PRKPROCESS **)(ThreadWin32Thread + 400) )
        {
          KeAttachProcess(*v13);
          v27 = 1;
          v10 = a1;
        }
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8LL * v8) + 456LL) + 152LL) = *(_WORD *)(a4 + 72);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8LL * v8) + 456LL) + 144LL) = *(_QWORD *)(a4 + 40);
      v6 = 0;
      if ( v27 )
      {
        KeDetachProcess();
        v6 = 0;
        v10 = a1;
      }
      v9 = v31;
    }
LABEL_15:
    v7 = *(_QWORD *)(v10 + 8LL * v8);
    if ( *(_QWORD *)(v7 + 752) )
    {
      v14 = *(_QWORD *)(v7 + 416);
      if ( v14 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v14 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v6 != -65536 )
        {
          v6 |= 2u;
          v28 = v6;
        }
      }
    }
    if ( ((v6 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v15 = 5LL * v9;
      LockW32Thread(v7, &v41[5 * v9 + 2], v10, v7);
      v41[v15 + 1] = *(_QWORD *)(a1 + 8LL * v8);
      LODWORD(v41[v15 + 5]) = v28;
      v9 = v31 + 1;
      v31 = v9;
      if ( v9 == 16 )
      {
        v16 = v8 + 1;
        if ( v16 < v34 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v16, v34 - v16, (unsigned int)v41, a4, a5);
        break;
      }
    }
    ++v8;
  }
  v35 = v9 - 1;
  v18 = v9 - 1;
  v19 = v41;
  result = v9 - 1;
  v36 = result;
  while ( v19 )
  {
    for ( i = &v19[5 * result + 5]; ; i -= 10 )
    {
      v30 = i;
      if ( v18 < 0 )
        break;
      if ( (*i & 1) != 0 )
      {
        v21 = *((_QWORD *)i - 4);
        if ( (*(_DWORD *)(v21 + 464) & 1) == 0 )
        {
          xxxImmActivateLayout(*((_QWORD *)i - 4), a4, v21, v7);
          i = v30;
        }
      }
      if ( (*i & 3) == 1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v19[4 * v18 + 2 + v18], v6);
        i = v30;
      }
      --v18;
    }
    v6 = 15;
    v18 = 15;
    result = 15LL;
    v19 = (_QWORD *)*v19;
  }
  v22 = v41;
  v23 = v35;
  v24 = v36;
  while ( v22 )
  {
    for ( j = &v22[5 * v24 + 1]; ; j -= 5 )
    {
      v33 = j;
      if ( v23 < 0 )
        break;
      if ( (j[4] & 2) != 0 )
      {
        v26 = *j;
        if ( (*(_DWORD *)(v26 + 464) & 1) == 0 )
          xxxImmUnloadLayout(v26, a5);
        PopAndFreeW32ThreadLock((__int64)&v22[4 * v23 + 2 + v23], v6);
        j = v33;
      }
      --v23;
    }
    result = 15LL;
    v23 = 15;
    v24 = 15LL;
    v22 = (_QWORD *)*v22;
  }
  return result;
}
