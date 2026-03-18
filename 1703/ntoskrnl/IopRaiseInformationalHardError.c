/*
 * XREFs of IopRaiseInformationalHardError @ 0x140689CE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseInformationalHardError(_DWORD *P)
{
  void *v2; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  char *v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = (char *)(P + 6);
  if ( ExReadyForErrors )
    ExRaiseHardError(
      P[4],
      *((_QWORD *)P + 4) != 0LL,
      *((_QWORD *)P + 4) != 0LL,
      (unsigned __int64)&v4 & -(__int64)(*((_QWORD *)P + 4) != 0LL),
      7,
      (__int64)&v3);
  v2 = (void *)*((_QWORD *)P + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_1403690BC);
}
