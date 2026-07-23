/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18007F270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_18007F3E0 @ 0x18007F3E0 (sub_18007F3E0.c)
 *     ZwAlpcQueryInformation @ 0x1800A63B0 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)sub_18007F3E0(Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 70);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 34), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    sub_18007358C((_RTL_SRWLOCK *)Alpc + 16, 0, 1);
  }
}
