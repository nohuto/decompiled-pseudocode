/*
 * XREFs of IoGetDriverDirectory @ 0x1407248D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     PiGetDriverImageDirectory @ 0x140725044 (PiGetDriverImageDirectory.c)
 *     PiGetDriverStateSubDirectory @ 0x14072516C (PiGetDriverStateSubDirectory.c)
 */

__int64 __fastcall IoGetDriverDirectory(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  void *v5; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  int DriverStateSubDirectory; // eax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v11 = 0LL;
  if ( a1 && (v7 = *(_QWORD *)(a1 + 48)) != 0 && *(_QWORD *)(v7 + 32) && *(_WORD *)(v7 + 24) && !a3 && a4 )
  {
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 != 1 )
        return (unsigned int)-1073741811;
      DriverStateSubDirectory = PiGetDriverStateSubDirectory(a1, a2, &v11);
    }
    else
    {
      DriverStateSubDirectory = PiGetDriverImageDirectory(a1, &v11);
    }
    v8 = DriverStateSubDirectory;
    if ( DriverStateSubDirectory >= 0 )
    {
      *a4 = v11;
      return v8;
    }
    v5 = v11;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v5 )
    ZwClose(v5);
  return v8;
}
