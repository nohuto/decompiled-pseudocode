/*
 * XREFs of ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0073FD4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 */

void __fastcall UninitializeThreadInfoIocp(struct tagTHREADINFO *a1, __int64 a2)
{
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v3 = (void *)*((_QWORD *)a1 + 177);
  if ( v3 )
  {
    ObCloseHandle(v3, 0);
    *((_QWORD *)a1 + 177) = 0LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 176);
  if ( v4 )
  {
    ObCloseHandle(v4, 0);
    *((_QWORD *)a1 + 176) = 0LL;
  }
  v5 = *((_QWORD *)a1 + 174);
  if ( v5 )
  {
    if ( (int)ProtectHandle(v5, a2, 0LL, 0LL) >= 0 )
      ObCloseHandle(*((HANDLE *)a1 + 174), 1);
    *((_QWORD *)a1 + 174) = 0LL;
  }
  v6 = (void *)*((_QWORD *)a1 + 173);
  if ( v6 )
  {
    ObCloseHandle(v6, 0);
    *((_QWORD *)a1 + 173) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a1 + 172);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)a1 + 172) = 0LL;
  }
}
