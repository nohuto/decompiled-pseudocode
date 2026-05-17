/*
 * XREFs of sub_1800DD1E4 @ 0x1800DD1E4
 * Callers:
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwOpenProcess @ 0x1800A57C0 (ZwOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 */

__int64 __fastcall sub_1800DD1E4(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 result; // rax
  int InformationThread; // ebx
  __int64 v9; // [rsp+88h] [rbp+1Fh]
  __int128 v10; // [rsp+90h] [rbp+27h]

  result = ZwDuplicateObject();
  if ( (int)result >= 0 )
  {
    InformationThread = ZwQueryInformationThread();
    ZwClose();
    if ( InformationThread >= 0 )
    {
      if ( a5 )
        *a5 = v10;
      if ( a3 )
        *a3 = v9;
      if ( a4 )
      {
        if ( (HANDLE)v10 == NtCurrentTeb()->ClientId.UniqueProcess )
          *a4 = -1LL;
        else
          return (unsigned int)ZwOpenProcess();
      }
    }
    return (unsigned int)InformationThread;
  }
  return result;
}
