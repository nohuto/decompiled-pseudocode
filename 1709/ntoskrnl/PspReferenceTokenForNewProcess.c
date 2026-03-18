/*
 * XREFs of PspReferenceTokenForNewProcess @ 0x14053A8C4
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PspReferenceTokenForNewProcess(struct _KPROCESS *a1, void *a2, KPROCESSOR_MODE a3, _QWORD *a4)
{
  PACCESS_TOKEN v5; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( a1 )
    {
      v5 = PsReferencePrimaryToken(a1);
    }
    else
    {
      v5 = PspBootAccessToken;
      ObfReferenceObject(PspBootAccessToken);
    }
    goto LABEL_4;
  }
  result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
  v5 = Object;
  if ( result >= 0 )
  {
LABEL_4:
    *a4 = v5;
    return 0;
  }
  return result;
}
