/*
 * XREFs of ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x18001CF80
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014770 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x1800150E4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIsActiveMediaApplication(struct CApplication *a1)
{
  unsigned int v2; // ebx
  __int64 **i; // rcx
  struct TSSession *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(*((_DWORD *)a1 + 43), 0, 0LL, &v5) )
  {
    for ( i = (__int64 **)*((_QWORD *)v5 + 13); i; i = (__int64 **)*i )
    {
      if ( i[2] == (__int64 *)a1 )
        goto LABEL_7;
    }
    i = 0LL;
LABEL_7:
    LOBYTE(v2) = i != 0LL;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v2;
}
