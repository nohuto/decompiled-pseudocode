/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01C1FF4
 * Callers:
 *     xxxImmActivateThreadsLayout @ 0x1C01C1FF4 (xxxImmActivateThreadsLayout.c)
 *     EditionImmActivateThreadsLayout @ 0x1C01D2D40 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     xxxImmActivateLayout @ 0x1C0125C04 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01C1FF4 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD *v11; // rbx
  int i; // edi
  __int64 v13; // rcx
  _QWORD *v16; // [rsp+38h] [rbp-320h]
  __int64 v18; // [rsp+50h] [rbp-308h]
  __int128 v19; // [rsp+60h] [rbp-2F8h]
  __int128 v20; // [rsp+90h] [rbp-2C8h] BYREF
  _QWORD v21[82]; // [rsp+A0h] [rbp-2B8h] BYREF

  v4 = a3;
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  while ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 416);
    if ( v7 != v4 && (*(_DWORD *)(a1 + 464) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 752) )
      {
        LockW32Thread(a1, &v21[5 * v6 + 2], v8, v9);
        v21[5 * v6++ + 1] = a1;
        v4 = a3;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 768) = *(_QWORD *)(v7 + 40);
        *(_QWORD *)&v19 = a1 + 416;
        *((_QWORD *)&v19 + 1) = a3;
        v20 = v19;
        HMAssignmentLock(&v20);
        if ( *(_QWORD *)(a1 + 760) )
          **(_QWORD **)(a1 + 456) |= 0x40uLL;
        *(_QWORD *)(*(_QWORD *)(a1 + 456) + 144LL) = *(_QWORD *)(v4 + 40);
        *(_WORD *)(*(_QWORD *)(a1 + 456) + 152LL) = *(_WORD *)(v4 + 72);
      }
    }
    a1 = *(_QWORD *)(a1 + 640);
  }
  result = a2;
  if ( a2 )
    goto LABEL_14;
  if ( !a1 )
  {
    if ( !v6 )
      return result;
LABEL_14:
    if ( !a1 )
      goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 640) )
  {
    v21[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 640), v21, v4);
  }
LABEL_17:
  v21[0] = a2;
  v11 = v21;
  while ( v11 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v16 = &v11[5 * i];
      v13 = v16[1];
      v18 = v13;
      if ( (*(_DWORD *)(v13 + 464) & 1) == 0 )
      {
        xxxImmActivateLayout(v13, a3, v8, v9);
        LODWORD(v7) = v18;
        if ( (*(_DWORD *)(v18 + 464) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v18 + 456) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v18 + 456) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v16 + 2), v7);
    }
    v11 = (_QWORD *)*v11;
    v6 = 16;
  }
  return 1LL;
}
