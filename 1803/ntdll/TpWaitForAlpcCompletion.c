/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180055760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     ZwAlpcQueryInformation @ 0x18009BB90 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)sub_180056970(Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 70);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 34), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    sub_180055584((_RTL_SRWLOCK *)Alpc + 16, 0, 1);
  }
}
