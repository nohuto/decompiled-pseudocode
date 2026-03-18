/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01BE0D8
 * Callers:
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01BE0D8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01D2A70 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     xxxImmActivateLayout @ 0x1C011BE9C (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01BE0D8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01BE7C8 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // edi
  int v7; // r11d
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rcx
  char v11; // bl
  __int64 v12; // r9
  __int64 v13; // rcx
  PRKPROCESS *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  __int64 result; // rax
  int v20; // edi
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _DWORD *i; // rcx
  _QWORD *v24; // rdi
  int v25; // ebx
  _QWORD *j; // rcx
  __int64 v27; // rcx
  int v28; // [rsp+34h] [rbp-334h]
  _DWORD *v30; // [rsp+38h] [rbp-330h]
  int v31; // [rsp+40h] [rbp-328h]
  _QWORD *v33; // [rsp+48h] [rbp-320h]
  int v35; // [rsp+58h] [rbp-310h]
  __int64 ThreadWin32Thread; // [rsp+68h] [rbp-300h]
  __int128 v37; // [rsp+80h] [rbp-2E8h]
  __int128 v38; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v39[82]; // [rsp+B0h] [rbp-2B8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v39[0] = a3;
  v6 = 0;
  v7 = 0;
  v31 = 0;
  while ( 1 )
  {
    v8 = a1;
    if ( v6 >= a2 )
      break;
    v9 = 0;
    v28 = 0;
    v10 = *(_QWORD *)(a1 + 8LL * v6);
    if ( (*(_DWORD *)(v10 + 440) & 1) != 0 )
    {
      v9 = -65536;
LABEL_14:
      v28 = v9;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v10 + 392) == a4 )
      goto LABEL_15;
    if ( *(_QWORD *)(v10 + 696) )
    {
      v9 = 1;
      goto LABEL_14;
    }
    v11 = 0;
    *(_QWORD *)&v37 = v10 + 392;
    *((_QWORD *)&v37 + 1) = a4;
    v38 = v37;
    HMAssignmentLock(&v38);
    v8 = a1;
    v12 = v6;
    v13 = *(_QWORD *)(a1 + 8LL * v6);
    if ( *(_QWORD *)(v13 + 432) != *(_QWORD *)(ThreadWin32Thread + 432) )
    {
      v14 = *(PRKPROCESS **)(v13 + 376);
      if ( v14 != *(PRKPROCESS **)(ThreadWin32Thread + 376) )
      {
        KeAttachProcess(*v14);
        v11 = 1;
        v8 = a1;
        v12 = v6;
      }
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * v12) + 432LL) + 152LL) = *(_WORD *)(a4 + 72);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * v12) + 432LL) + 144LL) = *(_QWORD *)(a4 + 40);
    v9 = 0;
    if ( v11 )
    {
      KeDetachProcess();
      v9 = 0;
      v8 = a1;
    }
    v7 = v31;
LABEL_15:
    v15 = *(_QWORD *)(v8 + 8LL * v6);
    if ( *(_QWORD *)(v15 + 696) )
    {
      v16 = *(_QWORD *)(v15 + 392);
      if ( v16 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v9 != -65536 )
        {
          v9 |= 2u;
          v28 = v9;
        }
      }
    }
    if ( ((v9 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v17 = 5LL * v7;
      LockW32Thread(v15, &v39[5 * v7 + 2]);
      v39[v17 + 1] = *(_QWORD *)(a1 + 8LL * v6);
      LODWORD(v39[v17 + 5]) = v28;
      v7 = v31 + 1;
      v31 = v7;
      if ( v7 == 16 )
      {
        v18 = v6 + 1;
        if ( v18 < a2 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v18, a2 - v18, (unsigned int)v39, a4, a5);
        break;
      }
    }
    ++v6;
  }
  v35 = v7 - 1;
  v20 = v7 - 1;
  v21 = v39;
  v22 = v7 - 1;
  while ( v21 )
  {
    for ( i = &v21[5 * v22 + 5]; ; i -= 10 )
    {
      v30 = i;
      if ( v20 < 0 )
        break;
      if ( (*i & 1) != 0 && (*(_DWORD *)(*((_QWORD *)i - 4) + 440LL) & 1) == 0 )
      {
        xxxImmActivateLayout(*((_QWORD *)i - 4), a4);
        i = v30;
      }
      if ( (*i & 3) == 1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v21[4 * v20 + 2 + v20]);
        i = v30;
      }
      --v20;
    }
    v20 = 15;
    v22 = 15LL;
    v21 = (_QWORD *)*v21;
  }
  v24 = v39;
  v25 = v35;
  result = v35;
  while ( v24 )
  {
    for ( j = &v24[4 * result + 1 + result]; ; j -= 5 )
    {
      v33 = j;
      if ( v25 < 0 )
        break;
      if ( (j[4] & 2) != 0 )
      {
        v27 = *j;
        if ( (*(_DWORD *)(v27 + 440) & 1) == 0 )
          xxxImmUnloadLayout(v27, a5);
        PopAndFreeW32ThreadLock((__int64)&v24[4 * v25 + 2 + v25]);
        j = v33;
      }
      --v25;
    }
    result = 15LL;
    v25 = 15;
    v24 = (_QWORD *)*v24;
  }
  return result;
}
