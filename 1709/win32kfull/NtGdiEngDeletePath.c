/*
 * XREFs of NtGdiEngDeletePath @ 0x1C028DB40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngDeletePath @ 0x1C0266490 (EngDeletePath.c)
 */

__int64 __fastcall NtGdiEngDeletePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    if ( a1 && a1 == *((_QWORD *)ThreadCurrentObj + 31) )
    {
      EngDeletePath(*((PATHOBJ **)ThreadCurrentObj + 30));
      *((_QWORD *)v7 + 30) = 0LL;
      *((_QWORD *)v7 + 31) = 0LL;
    }
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 108);
  return result;
}
