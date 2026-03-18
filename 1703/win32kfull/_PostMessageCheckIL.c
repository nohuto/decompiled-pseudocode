/*
 * XREFs of _PostMessageCheckIL @ 0x1C01BD084
 * Callers:
 *     ForwardTouchMessage @ 0x1C01B81B4 (ForwardTouchMessage.c)
 *     NtUserInjectGesture @ 0x1C01DC1D0 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00C9614 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00C9964 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1C01E590C (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostMessageCheckIL(struct tagWND *a1, __int64 a2, unsigned __int64 a3, struct _LARGE_STRING *a4)
{
  unsigned int v6; // ebx
  BOOL v8; // edi
  __int64 v9; // rsi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v11; // r15
  int v12; // edi
  __int16 v13; // ax
  unsigned int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx

  v6 = a2;
  v8 = 0;
  if ( (unsigned int)(a2 - 992) <= 8 )
    v8 = ValidateDDEConvPair(a3, a1) != 0;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostMessage((__int64)a1, v6, a3, a4);
  if ( v8 )
    return PostMessage((__int64)a1, v6, a3, a4);
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  v11 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v9 == CurrentProcessWin32Process )
    return PostMessage((__int64)a1, v6, a3, a4);
  if ( v6 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (void *const **)v9,
                         a1,
                         v6,
                         a3,
                         (__int64)a4,
                         0) )
      return PostMessage((__int64)a1, v6, a3, a4);
    v12 = IsMessageAlwaysAllowedAcrossIL(v6);
    if ( v12 )
    {
      v13 = 2;
    }
    else
    {
      if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, 0x112u, a3, (unsigned __int64)a4, 0, 2);
        return PostMessage((__int64)a1, v6, a3, a4);
      }
      if ( *(_QWORD *)v9 == gpepCSRSS )
      {
        v15 = 0x2000;
        v16 = 0;
      }
      else
      {
        v15 = *(_DWORD *)(v9 + 824);
        v16 = *(_DWORD *)(v9 + 828);
      }
      v17 = *((_QWORD *)v11 + 103);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v17 <= v15 )
        {
          if ( (_DWORD)v17 != v15 || (v18 = HIDWORD(v17), (_DWORD)v18 != v16) && (_DWORD)v18 != -1 && v16 != -1 )
          {
            v12 = 0;
            if ( v6 == 793 )
            {
              v19 = *((_QWORD *)a1 + 2);
              if ( *(struct tagWND **)(v19 + 1264) == a1 && *(_QWORD *)(v19 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
                return PostMessage((__int64)a1, v6, a3, a4);
            }
            EtwTraceUIPIMsgError(v11, v9, v6, a3, a4);
            UserSetLastError(5LL);
            MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, v6, a3, (unsigned __int64)a4, 0, 0);
            goto LABEL_30;
          }
        }
      }
      v12 = 1;
      v13 = gbEnforceUIPI != 0 ? 5 : 1;
    }
    MSGSQMAddMessage(v11, (struct tagPROCESSINFO *)v9, v6, a3, (unsigned __int64)a4, 0, v13);
LABEL_30:
    if ( !v12 )
      return 0LL;
    return PostMessage((__int64)a1, v6, a3, a4);
  }
  return 0LL;
}
