/*
 * XREFs of AlpcpReleaseAttributes @ 0x1404DC4C0
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1404DFC44 (AlpcpReleaseViewAttribute.c)
 */

void __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  __int64 v5; // rcx

  v2 = a1[4];
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2, 1);
    a1[4] = 0LL;
  }
  v3 = a1[5];
  if ( v3 )
  {
    AlpcpReleaseViewAttribute(v3);
    a1[5] = 0LL;
  }
  v4 = a1[6];
  if ( v4 )
  {
    AlpcpDereferenceBlobEx(v4, 1);
    a1[6] = 0LL;
  }
  v5 = a1[7];
  if ( v5 )
  {
    if ( (v5 & 1) != 0 )
      ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFEuLL));
    a1[7] = 0LL;
  }
}
