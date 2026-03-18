/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x14011BF20
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140573684 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784 (NtAlpcImpersonateClientContainerOfPort.c)
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
