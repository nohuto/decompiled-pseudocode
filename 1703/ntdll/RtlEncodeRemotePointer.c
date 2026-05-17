/*
 * XREFs of RtlEncodeRemotePointer @ 0x1800DD390
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodeRemotePointer(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int InformationProcess; // eax
  unsigned int v8; // [rsp+58h] [rbp+20h]

  v3 = 0;
  InformationProcess = ZwQueryInformationProcess();
  if ( InformationProcess < 0 )
    return InformationProcess | 0x10000000u;
  else
    *a3 = __ROR8__(a2 ^ v8, v8 & 0x3F);
  return v3;
}
