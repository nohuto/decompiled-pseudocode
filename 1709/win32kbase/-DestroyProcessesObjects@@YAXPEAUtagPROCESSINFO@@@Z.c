/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C003EB90
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     GreGetObjectOwner @ 0x1C0073C80 (GreGetObjectOwner.c)
 *     HMChangeOwnerPheProcess @ 0x1C0081B80 (HMChangeOwnerPheProcess.c)
 *     FixupGlobalCursor @ 0x1C00947D0 (FixupGlobalCursor.c)
 *     HMDestroyUnlockedObject @ 0x1C009E950 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  _BOOL8 v2; // r14
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 *v5; // rdi
  char *v6; // rbx
  _QWORD *v7; // rdi
  char *v8; // rsi
  unsigned __int8 v9; // dl
  char v10; // al
  unsigned int CurrentProcessId; // ebx

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C0192B88 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner(qword_1C0192B80, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      StopFade();
  }
  v3 = (char *)&gcachedCaptions;
  v4 = 5LL;
  v5 = (__int64 *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v3 && *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
      HMAssignmentUnlock(v5);
    v5 += 3;
    v3 += 24;
    --v4;
  }
  while ( v4 );
  v6 = (char *)qword_1C018E9B8;
  v7 = gpKernelHandleTable;
  v8 = (char *)qword_1C018E9B8 + 32 * (unsigned int)giheLast;
  if ( qword_1C018E9B8 <= v8 )
  {
    do
    {
      v9 = v6[24];
      if ( v9 && (*((_BYTE *)&unk_1C015EA5C + 24 * v9) & 2) != 0 && (struct tagPROCESSINFO *)v7[1] == a1 )
      {
        if ( v2 && v9 == 3 )
          FixupGlobalCursor(*v7, a1);
        if ( (v6[25] & 1) == 0 )
          HMDestroyUnlockedObject(v6);
        v10 = v6[24];
        if ( v10 && gptiRit )
        {
          if ( v10 == 3 )
          {
            if ( (int)IsZombieCursorSupported() >= 0 )
              ZombieCursor(*v7);
          }
          else
          {
            HMChangeOwnerPheProcess(v6);
          }
        }
      }
      v6 += 32;
      v7 += 3;
    }
    while ( v6 <= v8 );
  }
}
