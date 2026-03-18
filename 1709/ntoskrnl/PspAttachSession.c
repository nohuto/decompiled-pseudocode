/*
 * XREFs of PspAttachSession @ 0x1404F0128
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 */

__int64 __fastcall PspAttachSession(int a1, __int64 a2, _KPROCESS **a3)
{
  _KPROCESS *SessionById; // rax
  _KPROCESS *v6; // rbx
  int v7; // edi

  SessionById = (_KPROCESS *)MmGetSessionById(a1);
  v6 = SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v7 = MmAttachSession(SessionById, a2);
  if ( v7 < 0 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
