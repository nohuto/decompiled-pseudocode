/*
 * XREFs of PspSiloLoadApiSets @ 0x140779D80
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     ApiSetReleaseSchema @ 0x1402C0614 (ApiSetReleaseSchema.c)
 *     PspQueryForwardersEnabled @ 0x140630CC4 (PspQueryForwardersEnabled.c)
 *     PspApiSetCopyToSystemSpace @ 0x140778C28 (PspApiSetCopyToSystemSpace.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1407CC630 (ApiSetLoadSchemaWithExtensions.c)
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
  PVOID v11; // [rsp+78h] [rbp+38h] BYREF

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
      ServerSiloGlobals[128] = v11;
      ServerSiloGlobals[129] = v6;
      *((_BYTE *)ServerSiloGlobals + 1040) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema(Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
