/*
 * XREFs of zzzAttachThreadInput @ 0x1C00C92D0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     NtUserAttachThreadInput @ 0x1C00C8F70 (NtUserAttachThreadInput.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0116C8C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B5244 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 *i; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 400);
      if ( v7 != *(_QWORD *)(a1 + 400) || *(_QWORD *)(gptiCurrent + 400LL) != v7 )
      {
        v8 = *(_QWORD *)(a2 + 408);
        v9 = *(_QWORD *)(gptiCurrent + 400LL);
        v10 = *(_QWORD *)(v8 + 420);
        v11 = *(_QWORD *)(v9 + 832);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v10 )
          {
            if ( (_DWORD)v11 != (_DWORD)v10
              || (v10 >>= 32, HIDWORD(v11) != (_DWORD)v10) && HIDWORD(v11) != -1 && (_DWORD)v10 != -1 )
            {
              if ( *(int *)(v9 + 12) >= 0 )
              {
                v23 = a2;
LABEL_42:
                EtwTraceUIPIInputError(gptiCurrent, v23, v8, *(_QWORD *)(v8 + 420), 2);
                return 3221225506LL;
              }
            }
          }
        }
        v8 = *(_QWORD *)(a1 + 408);
        v12 = *(_QWORD *)(v8 + 420);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v12 )
          {
            if ( (_DWORD)v11 != (_DWORD)v12
              || (v13 = HIDWORD(v11), v14 = HIDWORD(v12), (_DWORD)v13 != (_DWORD)v14)
              && (_DWORD)v14 != -1
              && (_DWORD)v13 != -1 )
            {
              if ( *(int *)(v9 + 12) >= 0 )
              {
LABEL_67:
                v23 = a1;
                goto LABEL_42;
              }
            }
          }
        }
        if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 400LL), v10, v8, v9)
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 400))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 400)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 776LL) & 0x100) == 0 )
        {
          v8 = *(_QWORD *)(a1 + 408);
          goto LABEL_67;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 464) & 0x40) != 0
      || (*(_DWORD *)(a1 + 464) & 0x40) != 0
      || *(_QWORD *)(a2 + 432) != *(_QWORD *)(a1 + 432) )
    {
      return 3221225506LL;
    }
    if ( v3 )
    {
      for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v16 = Win32AllocPool(32LL, 1767994197LL);
          if ( v16 )
          {
            *(_QWORD *)(v16 + 8) = a1;
            *(_QWORD *)(v16 + 16) = a2;
            *(_DWORD *)(v16 + 24) = 1;
            *(_QWORD *)v16 = gpai;
            gpai = v16;
            goto LABEL_25;
          }
          return 3221225495LL;
        }
        v24 = i[2];
        if ( v24 == a2 && i[1] == a1 )
          break;
        if ( v24 == a1 && i[1] == a2 )
          break;
      }
      v25 = *((_DWORD *)i + 6);
      if ( v25 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v25 + 1;
      return 0LL;
    }
    v19 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v20 = (__int64 *)*v19;
        v21 = *(_QWORD *)(*v19 + 16);
        if ( v21 == a2 && v20[1] == a1 )
          break;
        if ( v21 == a1 && v20[1] == a2 )
          break;
        v19 = (__int64 *)*v19;
        if ( !*v20 )
          return 3221225485LL;
      }
      --*((_DWORD *)v20 + 6);
      v22 = (__int64 *)*v19;
      if ( !*(_DWORD *)(*v19 + 24) || v6 )
      {
        *v19 = *v22;
        Win32FreePool(v22, v22, a3);
LABEL_25:
        *(_DWORD *)(a2 + 1184) |= 0x200u;
        *(_DWORD *)(a1 + 1184) |= 0x200u;
        if ( (*(_DWORD *)(a1 + 1184) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 704), 1, 0);
        if ( (*(_DWORD *)(a2 + 1184) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 704), 1, 0);
        v17 = *(_QWORD *)(gptiCurrent + 440LL);
        if ( !*(_QWORD *)(v17 + 40) && !*(_QWORD *)(v17 + 48) )
          zzzReattachThreads(0LL, a1, a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
