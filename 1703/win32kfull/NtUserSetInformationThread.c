/*
 * XREFs of NtUserSetInformationThread @ 0x1C00C73B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserSetInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // edi
  _BYTE Src[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  memset(Src, 0, 0x20uLL);
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v8);
  v13 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS || a2 == 1 )
  {
    if ( (unsigned int)v4 > 0x20 )
    {
      v14 = -1073741811;
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        ProbeForRead(a3, v4, 4u);
        memmove(Src, (const void *)a3, v4);
      }
      v14 = xxxSetInformationThread(a1, a2, Src, (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        ProbeForWrite(a3, v4, 4u);
        memmove((void *)a3, Src, v4);
      }
    }
  }
  else
  {
    v14 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v13, v12);
  return v14;
}
