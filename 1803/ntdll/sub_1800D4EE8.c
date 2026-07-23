/*
 * XREFs of sub_1800D4EE8 @ 0x1800D4EE8
 * Callers:
 *     sub_1800D4FBC @ 0x1800D4FBC (sub_1800D4FBC.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 */

__int64 sub_1800D4EE8()
{
  NTSTATUS v0; // ebx
  NTSTATUS v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp+10h] BYREF
  ULONG ProcessInformation_4; // [rsp+3Ch] [rbp+14h]

  if ( !dword_18015D494
    || (ProcessInformation = 0,
        ProcessInformation_4 = dword_18015D494,
        v0 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &ProcessInformation, 8u),
        v0 < 0) )
  {
    v3 = 0;
    v1 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &v3, 4u);
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
