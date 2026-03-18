/*
 * XREFs of GetCertificateLengthAndMonitorPDO @ 0x1C00ED750
 * Callers:
 *     NtGdiGetCertificate @ 0x1C00EE1C0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00EE420 (NtGdiGetCertificateSize.c)
 * Callees:
 *     CallMonitor @ 0x1C00E89E0 (CallMonitor.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C00FA10C (DrvPVPGetFirstActiveMonitor.c)
 */

__int64 __fastcall GetCertificateLengthAndMonitorPDO(
        struct _UNICODE_STRING *a1,
        int a2,
        void *a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 result; // rax
  int v7; // edi
  struct _DEVICE_OBJECT *Object; // [rsp+30h] [rbp-18h]
  int InputBuffer; // [rsp+58h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = DrvPVPGetFirstActiveMonitor(a1);
  if ( (int)result >= 0 )
  {
    v7 = CallMonitor(Object, 0x232483u, &InputBuffer, 4u, a3, 4u);
    if ( v7 >= 0 )
    {
      if ( a4 )
        *a4 = Object;
      else
        ObfDereferenceObject(Object);
      return 0LL;
    }
    else
    {
      ObfDereferenceObject(Object);
      return (unsigned int)v7;
    }
  }
  return result;
}
