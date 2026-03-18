/*
 * XREFs of NtUserSetWindowBand @ 0x1C010F1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0066818 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     _BeginDeferWindowPos @ 0x1C009D6E0 (_BeginDeferWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___ @ 0x1C010F3CC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a__.c)
 *     _lambda_83d541044935d6b78d321269d1803f89_::operator() @ 0x1C010F404 (_lambda_83d541044935d6b78d321269d1803f89_--operator().c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagWND *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  struct tagSMWP *v20; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagWND *v27; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v28[3]; // [rsp+30h] [rbp-41h] BYREF
  __int128 v29; // [rsp+48h] [rbp-29h]
  __int128 v30; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v31[3]; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v32[3]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v33[4]; // [rsp+98h] [rbp+27h] BYREF
  int v34; // [rsp+E8h] [rbp+77h] BYREF
  struct tagSMWP *v35; // [rsp+F0h] [rbp+7Fh] BYREF

  v34 = a3;
  v28[0] = &v35;
  v28[1] = &v34;
  *(_QWORD *)&v29 = v28;
  *((_QWORD *)&v29 + 1) = &v34;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v5;
  if ( v5 )
  {
    v7 = (*(_WORD *)(v5 + 82) & 0x3FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      v31[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v31;
      v31[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      if ( !(unsigned int)ValidateHWNDIA(a2, &v27) )
        goto LABEL_20;
      v35 = (struct tagSMWP *)BeginDeferWindowPos(0, v10, v12);
      if ( !v35 )
        goto LABEL_20;
      v13 = v27;
      lambda_83d541044935d6b78d321269d1803f89_::operator()(v28, v9, v27);
      if ( !v35 )
        goto LABEL_20;
      v14 = *(_QWORD *)(v9 + 16);
      v30 = v29;
      v15 = *(_QWORD *)(v14 + 1360);
      if ( !v15 )
        v15 = v9;
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___(v15, &v30);
      if ( !v35 )
        goto LABEL_20;
      if ( GetProp(v9, gatomBrokeredForeground, 1) )
      {
        v19 = 5LL;
LABEL_11:
        UserSetLastError(v19, v16);
LABEL_20:
        ThreadUnlock1(v11, v10);
        goto LABEL_21;
      }
      if ( (unsigned __int64)v13 > v17 )
      {
        if ( (unsigned __int64)v13 <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_17:
          v32[0] = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = v32;
          v32[1] = v13;
          if ( v13 )
            _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
          v20 = v35;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
          v33[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v33;
          v33[1] = v20;
          _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
          v8 = xxxEndDeferWindowPosEx(v35, 1);
          ThreadUnlock1(v23, v22);
          ThreadUnlock1(v25, v24);
          goto LABEL_20;
        }
        if ( v34 != (_DWORD)v17 )
        {
          v19 = 87LL;
          goto LABEL_11;
        }
      }
      v13 = 0LL;
      goto LABEL_17;
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
