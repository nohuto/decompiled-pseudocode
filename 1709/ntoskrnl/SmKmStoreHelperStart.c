/*
 * XREFs of SmKmStoreHelperStart @ 0x140005060
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004C74 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 */

__int64 __fastcall SmKmStoreHelperStart(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = PsCreateSystemThread(&Handle, 0x1FFFFFu, 0LL, a2, 0LL, (PKSTART_ROUTINE)SmKmStoreHelperWorker, a1);
  if ( v3 >= 0 )
  {
    v4 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v5 = Handle;
    v3 = v4;
    *a1 = Object;
    ObCloseHandle(v5, 0);
  }
  return (unsigned int)v3;
}
