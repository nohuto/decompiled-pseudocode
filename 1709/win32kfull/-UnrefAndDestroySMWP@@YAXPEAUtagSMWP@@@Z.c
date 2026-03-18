/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01AB190
 * Callers:
 *     <none>
 * Callees:
 *     DestroySMWP @ 0x1C00687B0 (DestroySMWP.c)
 *     HMUnlockObject @ 0x1C00CF2F0 (HMUnlockObject.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = (_DWORD *)HMUnlockObject((__int64)a1);
  if ( v1 )
    DestroySMWP(v1, v2, v3);
}
