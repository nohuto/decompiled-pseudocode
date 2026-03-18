/*
 * XREFs of PspAttachSession @ 0x140580258
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
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
