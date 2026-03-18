/*
 * XREFs of PspSiloLoadApiSets @ 0x1406DF778
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ApiSetReleaseSchema @ 0x140261344 (ApiSetReleaseSchema.c)
 *     PspQueryForwardersEnabled @ 0x1405A559C (PspQueryForwardersEnabled.c)
 *     PspApiSetCopyToSystemSpace @ 0x1406DE588 (PspApiSetCopyToSystemSpace.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140724E80 (ApiSetLoadSchemaWithExtensions.c)
 */

__int64 __fastcall PspSiloLoadApiSets(__int64 a1)
{
  __int64 v2; // r14
  int v3; // esi
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+28h] [rbp-18h] BYREF
  const wchar_t *v8; // [rsp+30h] [rbp-10h]
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  v7 = 4980810;
  v8 = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaWithExtensions(&v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v11, &v6);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(a1);
      ServerSiloGlobals[124] = v11;
      ServerSiloGlobals[125] = v6;
      *((_BYTE *)ServerSiloGlobals + 1008) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema(Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
