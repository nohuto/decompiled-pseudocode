/*
 * XREFs of BgpConsoleGetCursorState @ 0x14083FF50
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = qword_1403D1800;
  v7 = 0;
  if ( qword_1403D1800 )
  {
    *a1 = *(_DWORD *)(qword_1403D1800 + 68);
    *a2 = *(_DWORD *)(v6 + 72);
    *a3 = *(_DWORD *)(v6 + 76);
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
