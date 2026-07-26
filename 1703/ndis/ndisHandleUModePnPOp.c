/*
 * XREFs of ndisHandleUModePnPOp @ 0x1C00D9594
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisIfAliasChange @ 0x1C00446C8 (ndisIfAliasChange.c)
 *     Template_qzz @ 0x1C004FE1C (Template_qzz.c)
 *     WPP_SF_sZZ @ 0x1C0050230 (WPP_SF_sZZ.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00D8B84 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00D93C4 (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00D94DC (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C01023B0 (ndisHandleProtocolReconfigNotification.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  UNICODE_STRING *v6; // rdi
  const char *v7; // r8
  const EVENT_DESCRIPTOR *v8; // rdx
  const char *v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  __int64 v14; // r9
  unsigned int v15; // r8d

  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = (UNICODE_STRING *)(a1 + 40);
  if ( v5 == 1 )
  {
    if ( (unsigned __int8)byte_1C0092614 >= 4u )
    {
      v7 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v7 = "TDI ";
      WPP_SF_sZZ(0x1Cu, v2, v7, &v6->Length, (unsigned __int16 *)(a1 + 24));
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000000LL) != 0 )
    {
      v8 = (const EVENT_DESCRIPTOR *)&ProtocolBind;
LABEL_15:
      Template_qzz(v3, v8, v4, *(_DWORD *)a1, *(const wchar_t **)(a1 + 48), *(const wchar_t **)(a1 + 32));
    }
  }
  else if ( v5 == 2 )
  {
    if ( (unsigned __int8)byte_1C0092614 >= 4u )
    {
      v9 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v9 = "TDI ";
      WPP_SF_sZZ(0x1Du, v2, v9, &v6->Length, (unsigned __int16 *)(a1 + 24));
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000000LL) != 0 )
    {
      v8 = (const EVENT_DESCRIPTOR *)&ProtocolUnbind;
      goto LABEL_15;
    }
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v12 = *(_DWORD *)(a1 + 4);
    if ( v12 > 9 )
    {
      if ( v12 > 0xB )
      {
        if ( v12 == 14 )
        {
          v10 = ndisIfAliasChange(a1 + 24, a1 + 40);
          goto LABEL_32;
        }
        if ( v12 != 15 )
          goto LABEL_37;
      }
    }
    else
    {
      if ( v12 == 9 )
      {
        v14 = *(_QWORD *)(a1 + 8);
        v15 = *(_DWORD *)(a1 + 16) >> 1;
        if ( v15 >= 2 && (*(_WORD *)(v14 + 2LL * (v15 - 1)) || *(_WORD *)(v14 + 2LL * (v15 - 2))) )
          goto LABEL_37;
        goto LABEL_38;
      }
      if ( !v12 )
        goto LABEL_37;
      if ( v12 > 2 )
      {
        if ( v12 != 3 )
        {
          if ( v12 == 5 )
          {
            v10 = ndisHandleProtocolUnloadNotification(v6);
            goto LABEL_32;
          }
          if ( v12 == 6 )
          {
            v11 = -1073741637;
            goto LABEL_33;
          }
LABEL_37:
          v11 = -1073741811;
          goto LABEL_33;
        }
LABEL_38:
        v10 = ndisHandleProtocolReconfigNotification(
                a1 + 24,
                a1 + 40,
                *(_QWORD *)(a1 + 8),
                *(unsigned int *)(a1 + 16),
                v12);
        goto LABEL_32;
      }
      ndisHandleLegacyBindIoctl((PCUNICODE_STRING)(a1 + 24), v12, (const struct _UNICODE_STRING *)(a1 + 40));
    }
    v10 = ndisHandleBindNotification((PCUNICODE_STRING)(a1 + 24));
    goto LABEL_32;
  }
  if ( *(_DWORD *)a1 != 2 )
    goto LABEL_37;
  if ( ndisTdiPnPHandler )
  {
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD, _DWORD))ndisTdiPnPHandler)(
            a1 + 40,
            a1 + 24,
            a1 + 56,
            *(_QWORD *)(a1 + 8),
            *(_DWORD *)(a1 + 16),
            *(_DWORD *)(a1 + 4));
LABEL_32:
    v11 = v10;
    goto LABEL_33;
  }
  v11 = -1073741823;
LABEL_33:
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v11;
}
