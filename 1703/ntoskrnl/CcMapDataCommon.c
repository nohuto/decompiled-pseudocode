/*
 * XREFs of CcMapDataCommon @ 0x1404406E4
 * Callers:
 *     CcMapDataForOverwrite @ 0x140024DB0 (CcMapDataForOverwrite.c)
 * Callees:
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 */

char __fastcall CcMapDataCommon(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, _QWORD *a5, __int64 *a6)
{
  __int64 VirtualAddress; // rcx
  char result; // al
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( (a4 & 1) != 0 )
    __incgsdword(0x5E90u);
  else
    __incgsdword(0x5E8Cu);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  if ( (a4 & 1) != 0 )
  {
    VirtualAddress = CcGetVirtualAddress(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL), *a2, &v9, &v10, (a4 >> 6) & 1, 0);
    *a6 = VirtualAddress;
LABEL_5:
    result = 1;
    *a5 = v9;
    return result;
  }
  result = CcPinFileData(a1, a2, a3, 1u, 0, a4, (ULONG_PTR *)&v9, a6, v8);
  if ( result )
    goto LABEL_5;
  __incgsdword(0x5ECCu);
  return result;
}
