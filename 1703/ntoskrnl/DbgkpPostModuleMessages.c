/*
 * XREFs of DbgkpPostModuleMessages @ 0x14067F610
 * Callers:
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14067F184 (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     DbgkPostModuleMessage @ 0x1401E1D28 (DbgkPostModuleMessage.c)
 *     VslSendDebugAttachNotifications @ 0x140688244 (VslSendDebugAttachNotifications.c)
 */

unsigned int *__fastcall DbgkpPostModuleMessages(_QWORD *Object, PVOID a2, PRKEVENT a3)
{
  unsigned int *result; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  unsigned int v9; // edx
  PIMAGE_NT_HEADERS v10; // rax
  unsigned int PointerToSymbolTable; // r9d
  unsigned int NumberOfSymbols; // eax
  __int16 v13; // dx
  __int64 v14; // rdx
  __int16 v15; // r8
  unsigned int *v16; // rdx
  unsigned int v17; // ecx
  PIMAGE_NT_HEADERS v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  int i; // [rsp+30h] [rbp-58h]
  int j; // [rsp+30h] [rbp-58h]
  _QWORD *v23; // [rsp+38h] [rbp-50h]
  unsigned int *v24; // [rsp+40h] [rbp-48h]
  _QWORD *v25; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+50h] [rbp-38h]
  PVOID BaseAddress; // [rsp+A8h] [rbp+20h]
  PVOID BaseAddressa; // [rsp+A8h] [rbp+20h]

  if ( Object[90] )
    return (unsigned int *)VslSendDebugAttachNotifications();
  v25 = (_QWORD *)(*(_QWORD *)(Object[127] + 24LL) + 16LL);
  v7 = v25;
  v8 = (_QWORD *)*v25;
  v9 = 0;
  for ( i = 0; ; ++i )
  {
    v23 = v8;
    if ( v8 == v7 || v9 >= DbgkpMaxModuleMsgs )
      break;
    if ( v9 > 1 )
    {
      BaseAddress = (PVOID)v8[6];
      v10 = RtlImageNtHeader(BaseAddress);
      if ( v10 )
      {
        PointerToSymbolTable = v10->FileHeader.PointerToSymbolTable;
        NumberOfSymbols = v10->FileHeader.NumberOfSymbols;
      }
      else
      {
        PointerToSymbolTable = 0;
        NumberOfSymbols = 0;
      }
      DbgkPostModuleMessage(Object, a2, BaseAddress, PointerToSymbolTable, NumberOfSymbols, a3);
    }
    v8 = (_QWORD *)*v23;
    v9 = i + 1;
    v7 = v25;
  }
  result = (unsigned int *)Object[133];
  if ( result )
  {
    v13 = *((_WORD *)result + 4);
    if ( v13 == 332 || v13 == 452 )
    {
      v14 = 0LL;
      v15 = *((_WORD *)result + 4);
      if ( v15 == 332 || v15 == 452 )
        v14 = *(_QWORD *)result;
      v26 = *(unsigned int *)(v14 + 12) + 12LL;
      result = (unsigned int *)v26;
      v16 = (unsigned int *)*(unsigned int *)(*(unsigned int *)(v14 + 12) + 0xCLL);
      v17 = 0;
      for ( j = 0; ; ++j )
      {
        v24 = v16;
        if ( v16 == result || v17 >= DbgkpMaxModuleMsgs )
          break;
        if ( v17 > 1 )
        {
          BaseAddressa = (PVOID)v16[6];
          v18 = RtlImageNtHeader(BaseAddressa);
          if ( v18 )
          {
            v19 = v18->FileHeader.PointerToSymbolTable;
            v20 = v18->FileHeader.NumberOfSymbols;
          }
          else
          {
            v19 = 0;
            v20 = 0;
          }
          DbgkPostModuleMessage(Object, a2, BaseAddressa, v19, v20, a3);
        }
        v16 = (unsigned int *)*v24;
        v17 = j + 1;
        result = (unsigned int *)v26;
      }
    }
  }
  return result;
}
