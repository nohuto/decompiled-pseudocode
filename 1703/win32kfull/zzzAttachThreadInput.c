/*
 * XREFs of zzzAttachThreadInput @ 0x1C00B34F8
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00B043C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserAttachThreadInput @ 0x1C00B33F0 (NtUserAttachThreadInput.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01BC668 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01BCD5C (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B21BC (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rdx
  __int64 *i; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 376);
      if ( v7 != *(_QWORD *)(a1 + 376) || *(_QWORD *)(gptiCurrent + 376LL) != v7 )
      {
        v8 = *(_QWORD *)(a2 + 384);
        v9 = *(_QWORD *)(gptiCurrent + 376LL);
        v10 = *(_QWORD *)(v8 + 380);
        v11 = *(_QWORD *)(v9 + 824);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v10 )
          {
            if ( (_DWORD)v11 != (_DWORD)v10
              || (v21 = HIDWORD(v10), HIDWORD(v11) != (_DWORD)v21) && HIDWORD(v11) != -1 && (_DWORD)v21 != -1 )
            {
              if ( *(int *)(v9 + 12) >= 0 )
              {
                v22 = a2;
LABEL_40:
                EtwTraceUIPIInputError(gptiCurrent, v22, v8, *(_QWORD *)(v8 + 380), 2);
                return 3221225506LL;
              }
            }
          }
        }
        v8 = *(_QWORD *)(a1 + 384);
        v12 = *(_QWORD *)(v8 + 380);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v12 )
          {
            if ( (_DWORD)v11 != (_DWORD)v12
              || (v23 = HIDWORD(v11), v24 = HIDWORD(v12), (_DWORD)v23 != (_DWORD)v24)
              && (_DWORD)v24 != -1
              && (_DWORD)v23 != -1 )
            {
              if ( *(int *)(v9 + 12) >= 0 )
              {
LABEL_67:
                v22 = a1;
                goto LABEL_40;
              }
            }
          }
        }
        if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 376LL))
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 376))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 376)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) & 0x100) == 0 )
        {
          v8 = *(_QWORD *)(a1 + 384);
          goto LABEL_67;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 440) & 0x40) != 0
      || (*(_DWORD *)(a1 + 440) & 0x40) != 0
      || *(_QWORD *)(a2 + 408) != *(_QWORD *)(a1 + 408) )
    {
      return 3221225506LL;
    }
    if ( v3 )
    {
      for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v18 = Win32AllocPool(32LL, 1767994197LL);
          if ( v18 )
          {
            *(_QWORD *)(v18 + 8) = a1;
            *(_QWORD *)(v18 + 16) = a2;
            *(_DWORD *)(v18 + 24) = 1;
            *(_QWORD *)v18 = gpai;
            gpai = v18;
            goto LABEL_26;
          }
          return 3221225495LL;
        }
        v25 = i[2];
        if ( v25 == a2 && i[1] == a1 )
          break;
        if ( v25 == a1 && i[1] == a2 )
          break;
      }
      v26 = *((_DWORD *)i + 6);
      if ( v26 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v26 + 1;
      return 0LL;
    }
    v13 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v14 = (__int64 *)*v13;
        v15 = *(_QWORD *)(*v13 + 16);
        if ( v15 == a2 && v14[1] == a1 )
          break;
        if ( v15 == a1 && v14[1] == a2 )
          break;
        v13 = (__int64 *)*v13;
        if ( !*v14 )
          return 3221225485LL;
      }
      --*((_DWORD *)v14 + 6);
      v16 = (__int64 *)*v13;
      if ( !*(_DWORD *)(*v13 + 24) || v6 )
      {
        *v13 = *v16;
        Win32FreePool(v16);
LABEL_26:
        *(_DWORD *)(a2 + 1096) |= 0x200u;
        *(_DWORD *)(a1 + 1096) |= 0x200u;
        if ( (*(_DWORD *)(a1 + 1096) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 648), 1, 0);
        if ( (*(_DWORD *)(a2 + 1096) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 648), 1, 0);
        v19 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v19 + 40) && !*(_QWORD *)(v19 + 48) )
          zzzReattachThreads(0LL, a1, a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
