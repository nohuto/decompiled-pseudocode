/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x1402B93A0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeCacheAwarePushLock(PVOID *P)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx

  v2 = P;
  v3 = (-(__int64)(*((_BYTE *)*P + 8) != 0) & 0xFFFFFFFFFFFFFFE1uLL) + 32;
  do
  {
    ExFreePoolWithTag(*v2++, 0);
    --v3;
  }
  while ( v3 );
  ExFreePoolWithTag(P, 0);
}
