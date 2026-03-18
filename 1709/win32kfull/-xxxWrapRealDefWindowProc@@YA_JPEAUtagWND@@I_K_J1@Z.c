/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00940E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00CCF70 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00CD2DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v9; // rdi
  int v11; // r15d
  unsigned int v12; // edx
  int v13; // r8d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int16 v18; // [rsp+30h] [rbp-38h]

  v6 = a2;
  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_19;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL);
  if ( v9 == CurrentProcessWin32Process )
    return xxxRealDefWindowProc(a1);
  if ( v6 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v9,
                         a1,
                         v6,
                         a3,
                         a4,
                         1) )
      return xxxRealDefWindowProc(a1);
    v11 = IsMessageAlwaysAllowedAcrossIL(v6);
    if ( v11 )
    {
      v18 = 2;
    }
    else
    {
      if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, a4, 1, 2);
        return xxxRealDefWindowProc(a1);
      }
      if ( *(_QWORD *)v9 == gpepCSRSS )
      {
        v12 = 0x2000;
        v13 = 0;
      }
      else
      {
        v12 = *(_DWORD *)(v9 + 832);
        v13 = *(_DWORD *)(v9 + 836);
      }
      v14 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      if ( !gbEnforceUIPI
        || (unsigned int)v14 > v12
        || (_DWORD)v14 == v12 && ((v15 = HIDWORD(v14), (_DWORD)v15 == v13) || v13 == -1 || (_DWORD)v15 == -1) )
      {
        v11 = 1;
        MSGSQMAddMessage(
          (struct tagPROCESSINFO *)CurrentProcessWin32Process,
          (struct tagPROCESSINFO *)v9,
          a4,
          1,
          gbEnforceUIPI != 0 ? 5 : 1);
        goto LABEL_13;
      }
      v11 = 0;
      if ( v6 == 793 )
      {
        v17 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v17 + 1352) == a1 && *(_QWORD *)(v17 + 408) == *(_QWORD *)(gptiCurrent + 408LL) )
          return xxxRealDefWindowProc(a1);
      }
      EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, v6, a3, a4);
      UserSetLastError(5LL, v16);
      v18 = 0;
    }
    MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, a4, 1, v18);
LABEL_13:
    if ( v11 )
      return xxxRealDefWindowProc(a1);
  }
  if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
    return xxxRealDefWindowProc(a1);
LABEL_19:
  UserSetLastError(5LL, a2);
  return 0LL;
}
