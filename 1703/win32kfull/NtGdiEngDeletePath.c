/*
 * XREFs of NtGdiEngDeletePath @ 0x1C0291430
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngDeletePath @ 0x1C02676C0 (EngDeletePath.c)
 */

__int64 __fastcall NtGdiEngDeletePath(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  unsigned int v4; // edi
  struct UMPDOBJ *v5; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = 0;
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    if ( a1 && a1 == *((_QWORD *)ThreadCurrentObj + 31) )
    {
      EngDeletePath(*((PATHOBJ **)ThreadCurrentObj + 30));
      *((_QWORD *)v5 + 30) = 0LL;
      *((_QWORD *)v5 + 31) = 0LL;
    }
    --*((_DWORD *)v5 + 108);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
