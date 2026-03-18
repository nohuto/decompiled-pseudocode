/*
 * XREFs of AlpcpReferencePort @ 0x1406B1838
 * Callers:
 *     AlpcpMapLegacyPortRemoteView @ 0x140574B50 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall AlpcpReferencePort(PVOID Object)
{
  return ObfReferenceObject(Object);
}
