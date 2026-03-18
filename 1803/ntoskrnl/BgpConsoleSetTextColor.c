/*
 * XREFs of BgpConsoleSetTextColor @ 0x140840300
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  BgpFwAcquireLock();
  v4 = qword_1403D1800;
  v5 = 0;
  if ( qword_1403D1800 )
  {
    if ( a1 )
      *(_DWORD *)(qword_1403D1800 + 12) = *a1;
    if ( a2 )
      *(_DWORD *)(v4 + 16) = *a2;
  }
  else
  {
    v5 = -1073741823;
  }
  BgpFwReleaseLock();
  return v5;
}
