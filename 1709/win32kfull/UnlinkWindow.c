/*
 * XREFs of UnlinkWindow @ 0x1C0062338
 * Callers:
 *     ImeSetTopmost @ 0x1C00568B8 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01F7AA4 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

LONG_PTR __fastcall UnlinkWindow(__int64 *a1, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int128 *v6; // rcx
  __int64 v7; // rax
  LONG_PTR result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *v12; // rbx
  __int128 v13; // [rsp+28h] [rbp-49h]
  __int128 v14; // [rsp+38h] [rbp-39h]
  __int128 v15; // [rsp+48h] [rbp-29h]
  _DWORD v16[16]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v17; // [rsp+98h] [rbp+27h] BYREF
  __int128 v18; // [rsp+A8h] [rbp+37h] BYREF
  __int128 v19; // [rsp+B8h] [rbp+47h] BYREF

  v4 = -__CFSHR__(*((_DWORD *)a1 + 76), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  if ( (__int64 *)a2[14] == a1 )
  {
    *(_QWORD *)&v13 = a2 + 14;
    v6 = &v17;
    *((_QWORD *)&v13 + 1) = a1[11];
    v17 = v13;
  }
  else
  {
    v5 = a1[12];
    if ( !v5 )
      goto LABEL_7;
    v6 = &v18;
    *(_QWORD *)&v14 = v5 + 88;
    *((_QWORD *)&v14 + 1) = a1[11];
    v18 = v14;
  }
  HMAssignmentLock(v6);
LABEL_7:
  v7 = a1[11];
  if ( v7 )
  {
    *(_QWORD *)&v15 = v7 + 96;
    *((_QWORD *)&v15 + 1) = a1[12];
    v19 = v15;
    HMAssignmentLock(&v19);
    HMAssignmentUnlock(a1 + 11);
  }
  result = HMAssignmentUnlock(a1 + 12);
  *((_DWORD *)a1 + 76) &= 0xFFFFFFE7;
  if ( v4 )
  {
    result = IsWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      result = GetDesktopWindow(a1);
      if ( a1 != (__int64 *)result )
      {
        v9 = a1[3];
        result = 0LL;
        if ( v9 )
          result = *(_QWORD *)(v9 + 104);
        if ( a1 != (__int64 *)result )
        {
          result = gTermIO[0];
          if ( a2 != (__int64 *)gTermIO[1] )
          {
            v10 = *a2;
            v11 = *a1;
            result = ReferenceDwmApiPort(v9);
            v12 = (void *)result;
            _InterlockedIncrement64(&g_cDWMWindowUniqueness);
            if ( result )
            {
              memset(v16, 0, 0x3CuLL);
              v16[0] = 3932180;
              LOWORD(v16[1]) = 0x8000;
              v16[10] = 1073741843;
              *(_QWORD *)&v16[11] = v11;
              *(_QWORD *)&v16[13] = v10;
              LpcRequestPort(v12, v16);
              return ObfDereferenceObject(v12);
            }
          }
        }
      }
    }
  }
  return result;
}
