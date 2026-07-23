/*
 * XREFs of sub_1800DE5E4 @ 0x1800DE5E4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 * Callees:
 *     sub_180070674 @ 0x180070674 (sub_180070674.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwWaitForMultipleObjects @ 0x1800A5E50 (ZwWaitForMultipleObjects.c)
 */

__int64 __fastcall sub_1800DE5E4(void *a1, void *a2, void *a3, LARGE_INTEGER *a4)
{
  unsigned int v4; // edi
  ULONG v9; // esi
  int UniqueProcess; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  NTSTATUS v13; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v9 = 0;
  if ( a1 )
  {
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    if ( (unsigned int)sub_180070674(a1) != UniqueProcess )
    {
      Handles[0] = a1;
      v9 = 1;
    }
  }
  if ( a2 )
  {
    v11 = v9++;
    Handles[v11] = a2;
  }
  if ( a3 )
  {
    v12 = v9++;
    Handles[v12] = a3;
  }
  if ( v9 )
  {
    if ( v9 <= 3 )
    {
      do
      {
        v13 = ZwWaitForMultipleObjects(v9, Handles, WaitAny, 1u, a4);
        if ( v13 < 0 )
          return (unsigned int)v13;
        if ( v13 < (int)v9 )
          return v4;
      }
      while ( v13 != 258 );
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741684;
    }
  }
  return v4;
}
