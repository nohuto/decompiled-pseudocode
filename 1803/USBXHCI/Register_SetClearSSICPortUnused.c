/*
 * XREFs of Register_SetClearSSICPortUnused @ 0x1C0019328
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_SetClearSSICPortUnused(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int Ulong; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
  if ( (result & 0x200000000000000LL) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24) + 34876LL;
    Ulong = XilRegister_ReadUlong(a1, v5);
    XilRegister_WriteUlong(a1, v5, Ulong & 0xBFFFFFFF);
    v7 = XilRegister_ReadUlong(a1, v5);
    if ( a2 )
      v8 = v7 | 0x80000000;
    else
      v8 = v7 & 0x7FFFFFFF;
    XilRegister_WriteUlong(a1, v5, v8);
    v9 = XilRegister_ReadUlong(a1, v5);
    return XilRegister_WriteUlong(a1, v5, v9 | 0x40000000u);
  }
  return result;
}
