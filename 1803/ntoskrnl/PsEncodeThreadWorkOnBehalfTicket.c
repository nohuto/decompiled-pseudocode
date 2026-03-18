/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x1400604FC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1405709E4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1600);
  a2[1] = *(_DWORD *)(a1 + 1520);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}
