/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01BE4E0
 * Callers:
 *     xxxImmActivateThreadsLayout @ 0x1C01BE4E0 (xxxImmActivateThreadsLayout.c)
 *     EditionImmActivateThreadsLayout @ 0x1C01D2A80 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     xxxImmActivateLayout @ 0x1C011BE9C (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01BE4E0 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int128 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rbx
  int i; // edi
  __int64 v10; // rcx
  _QWORD *v12; // [rsp+38h] [rbp-310h]
  __int64 v14; // [rsp+40h] [rbp-308h]
  __int128 v15; // [rsp+80h] [rbp-2C8h] BYREF
  _QWORD v16[82]; // [rsp+90h] [rbp-2B8h] BYREF

  *((_QWORD *)&v5 + 1) = a3;
  v4 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  while ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 392);
    if ( v6 != *((_QWORD *)&v5 + 1) && (*(_DWORD *)(a1 + 440) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 696) )
      {
        LockW32Thread(a1, &v16[5 * v4 + 2]);
        v16[5 * v4++ + 1] = a1;
        *((_QWORD *)&v5 + 1) = a3;
        if ( v4 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 712) = *(_QWORD *)(v6 + 40);
        *(_QWORD *)&v5 = a1 + 392;
        v15 = v5;
        HMAssignmentLock(&v15);
        if ( *(_QWORD *)(a1 + 704) )
          **(_QWORD **)(a1 + 432) |= 0x40uLL;
        *(_QWORD *)(*(_QWORD *)(a1 + 432) + 144LL) = *(_QWORD *)(*((_QWORD *)&v5 + 1) + 40LL);
        *(_WORD *)(*(_QWORD *)(a1 + 432) + 152LL) = *(_WORD *)(*((_QWORD *)&v5 + 1) + 72LL);
      }
    }
    a1 = *(_QWORD *)(a1 + 584);
  }
  result = a2;
  if ( a2 )
    goto LABEL_14;
  if ( !a1 )
  {
    if ( !v4 )
      return result;
LABEL_14:
    if ( !a1 )
      goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 584) )
  {
    v16[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 584), v16, *((_QWORD *)&v5 + 1));
  }
LABEL_17:
  v16[0] = a2;
  v8 = v16;
  while ( v8 )
  {
    for ( i = v4 - 1; i >= 0; --i )
    {
      v12 = &v8[5 * i];
      v10 = v12[1];
      v14 = v10;
      if ( (*(_DWORD *)(v10 + 440) & 1) == 0 )
      {
        xxxImmActivateLayout(v10, a3);
        if ( (*(_DWORD *)(v14 + 440) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v14 + 432) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v14 + 432) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v12 + 2));
    }
    v8 = (_QWORD *)*v8;
    v4 = 16;
  }
  return 1LL;
}
