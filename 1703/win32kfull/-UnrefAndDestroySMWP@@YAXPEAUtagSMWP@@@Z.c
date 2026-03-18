/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01A3D50
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C0064650 (DestroySMWP.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  bool v1; // zf
  struct tagSMWP *v2; // rax

  v1 = (*((_DWORD *)a1 + 2))-- == 1;
  v2 = a1;
  if ( v1 )
    v2 = (struct tagSMWP *)HMUnlockObjectInternal(a1);
  if ( v2 )
    DestroySMWP(v2);
}
