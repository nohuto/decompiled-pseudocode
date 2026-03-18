/*
 * XREFs of SmKmStoreHelperStart @ 0x14012E34C
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x14012DF60 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
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
