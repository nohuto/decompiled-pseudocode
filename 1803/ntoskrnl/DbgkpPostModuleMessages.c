/*
 * XREFs of DbgkpPostModuleMessages @ 0x14070EEF8
 * Callers:
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14070EA5C (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     DbgkPostEnclaveModuleMessages @ 0x1402234D8 (DbgkPostEnclaveModuleMessages.c)
 *     DbgkPostModuleMessage @ 0x140223554 (DbgkPostModuleMessage.c)
 *     PsFreeEnclaveModuleInfo @ 0x1402858BC (PsFreeEnclaveModuleInfo.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x140285918 (PsGetProcessEnclaveModuleInfo.c)
 *     VslSendDebugAttachNotifications @ 0x140718DA4 (VslSendDebugAttachNotifications.c)
 */

void __fastcall DbgkpPostModuleMessages(_QWORD *Object, PVOID a2, PRKEVENT a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  unsigned int v8; // edx
  PIMAGE_NT_HEADERS v9; // rax
  unsigned int PointerToSymbolTable; // r9d
  unsigned int NumberOfSymbols; // eax
  unsigned int v12; // edi
  char *v13; // r15
  _WORD *v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  PIMAGE_NT_HEADERS v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  int i; // [rsp+30h] [rbp-68h]
  int j; // [rsp+30h] [rbp-68h]
  PVOID BaseAddress; // [rsp+38h] [rbp-60h]
  PVOID BaseAddressa; // [rsp+38h] [rbp-60h]
  _QWORD *v26; // [rsp+40h] [rbp-58h]
  unsigned int *v27; // [rsp+48h] [rbp-50h]
  _QWORD *v28; // [rsp+50h] [rbp-48h]
  __int64 v29; // [rsp+58h] [rbp-40h]
  PVOID P; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+20h] BYREF

  if ( (Object[90] & 1) != 0 )
  {
    VslSendDebugAttachNotifications();
  }
  else
  {
    v28 = (_QWORD *)(*(_QWORD *)(Object[127] + 24LL) + 16LL);
    v6 = v28;
    v7 = (_QWORD *)*v28;
    v8 = 0;
    for ( i = 0; ; ++i )
    {
      v26 = v7;
      if ( v7 == v6 || v8 >= DbgkpMaxModuleMsgs )
        break;
      if ( v8 > 1 )
      {
        BaseAddress = (PVOID)v7[6];
        v9 = RtlImageNtHeader(BaseAddress);
        if ( v9 )
        {
          PointerToSymbolTable = v9->FileHeader.PointerToSymbolTable;
          NumberOfSymbols = v9->FileHeader.NumberOfSymbols;
        }
        else
        {
          PointerToSymbolTable = 0;
          NumberOfSymbols = 0;
        }
        DbgkPostModuleMessage(Object, a2, BaseAddress, PointerToSymbolTable, NumberOfSymbols, a3);
      }
      v7 = (_QWORD *)*v26;
      v8 = i + 1;
      v6 = v28;
    }
    if ( (int)PsGetProcessEnclaveModuleInfo((__int64)Object, (char **)&P, &v31) >= 0 )
    {
      v12 = 0;
      v13 = (char *)P;
      while ( v12 < v31 )
      {
        DbgkPostEnclaveModuleMessages(Object, a2, a3, *(_QWORD *)&v13[16 * v12], *(_DWORD *)&v13[16 * v12 + 8]);
        ++v12;
      }
      PsFreeEnclaveModuleInfo(v13, v31);
    }
    v14 = (_WORD *)Object[133];
    if ( v14 )
    {
      v15 = v14[4];
      if ( v15 == 332 || v15 == 452 )
      {
        v29 = *(unsigned int *)(*(_QWORD *)v14 + 12LL) + 12LL;
        v16 = v29;
        v17 = (unsigned int *)*(unsigned int *)(*(unsigned int *)(*(_QWORD *)v14 + 12LL) + 0xCLL);
        v18 = 0;
        for ( j = 0; ; ++j )
        {
          v27 = v17;
          if ( v17 == (unsigned int *)v16 || v18 >= DbgkpMaxModuleMsgs )
            break;
          if ( v18 > 1 )
          {
            BaseAddressa = (PVOID)v17[6];
            v19 = RtlImageNtHeader(BaseAddressa);
            if ( v19 )
            {
              v20 = v19->FileHeader.PointerToSymbolTable;
              v21 = v19->FileHeader.NumberOfSymbols;
            }
            else
            {
              v20 = 0;
              v21 = 0;
            }
            DbgkPostModuleMessage(Object, a2, BaseAddressa, v20, v21, a3);
          }
          v17 = (unsigned int *)*v27;
          v18 = j + 1;
          v16 = v29;
        }
      }
    }
  }
}
