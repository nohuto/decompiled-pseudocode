/*
 * XREFs of PspAttachSession @ 0x1404C814C
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

__int64 __fastcall PspAttachSession(int a1, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR SessionById; // rax
  void *v5; // rbx
  int v6; // edi

  SessionById = MmGetSessionById(a1);
  v5 = (void *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v6 = MmAttachSession(SessionById);
  if ( v6 < 0 )
    ObfDereferenceObject(v5);
  return (unsigned int)v6;
}
