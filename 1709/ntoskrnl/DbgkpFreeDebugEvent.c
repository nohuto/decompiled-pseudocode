/*
 * XREFs of DbgkpFreeDebugEvent @ 0x1406A9FE0
 * Callers:
 *     DbgkpWakeTarget @ 0x1406AB018 (DbgkpWakeTarget.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 */

void __fastcall DbgkpFreeDebugEvent(PVOID P)
{
  int v1; // eax
  void *v3; // rcx

  v1 = *((_DWORD *)P + 32);
  if ( v1 == 2 )
  {
    v3 = (void *)*((_QWORD *)P + 18);
  }
  else
  {
    if ( v1 != 5 )
      goto LABEL_7;
    v3 = (void *)*((_QWORD *)P + 17);
  }
  if ( v3 )
    ObCloseHandle(v3, 0);
LABEL_7:
  ObfDereferenceObjectWithTag(*((PVOID *)P + 7), 0x4F676244u);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 8), 0x4F676244u);
  ExFreePoolWithTag(P, 0);
}
