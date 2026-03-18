/*
 * XREFs of ??1DxgkAttachToObjectSession@@QEAA@XZ @ 0x1C000D8CC
 * Callers:
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C000D800 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkAttachToObjectSession::~DxgkAttachToObjectSession(DxgkAttachToObjectSession *this)
{
  void *v2; // rcx

  if ( *(_BYTE *)this )
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 24));
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ObfDereferenceObject(v2);
}
