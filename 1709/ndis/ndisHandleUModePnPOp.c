/*
 * XREFs of ndisHandleUModePnPOp @ 0x1C00C5E14
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisIfAliasChange @ 0x1C00411E0 (ndisIfAliasChange.c)
 *     McTemplateK0qzz @ 0x1C004E9B4 (McTemplateK0qzz.c)
 *     WPP_SF_sZZ @ 0x1C004EDFC (WPP_SF_sZZ.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E2F40 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00E3784 (ndisHandleBindNotification.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E389C (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  const UNICODE_STRING *v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  const char *v10; // r8
  const EVENT_DESCRIPTOR *v11; // rdx
  const char *v12; // r8
  unsigned int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // r9

  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = (const UNICODE_STRING *)(a1 + 40);
  if ( v5 == 1 )
  {
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
    {
      v10 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v10 = "TDI ";
      WPP_SF_sZZ(0x18u, v2, v10, &v6->Length, (unsigned __int16 *)(a1 + 24));
    }
    if ( (dword_1C0099FC4 & 1) != 0 )
    {
      v11 = (const EVENT_DESCRIPTOR *)&ProtocolBind;
LABEL_23:
      McTemplateK0qzz(v3, v11, v4, *(_DWORD *)a1, *(const wchar_t **)(a1 + 48), *(const wchar_t **)(a1 + 32));
    }
  }
  else if ( v5 == 2 )
  {
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
    {
      v12 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v12 = "TDI ";
      WPP_SF_sZZ(0x19u, v2, v12, &v6->Length, (unsigned __int16 *)(a1 + 24));
    }
    if ( (dword_1C0099FC4 & 1) != 0 )
    {
      v11 = (const EVENT_DESCRIPTOR *)&ProtocolUnbind;
      goto LABEL_23;
    }
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v13 = *(_DWORD *)(a1 + 4);
    if ( v13 > 9 )
    {
      if ( v13 > 0xB )
      {
        if ( v13 == 14 )
        {
          v7 = ndisIfAliasChange(a1 + 24, a1 + 40);
          goto LABEL_7;
        }
        if ( v13 != 15 )
          goto LABEL_10;
      }
    }
    else
    {
      if ( v13 == 9 )
      {
        v14 = *(_DWORD *)(a1 + 16) >> 1;
        if ( v14 >= 2 )
        {
          v15 = *(_QWORD *)(a1 + 8);
          if ( *(_WORD *)(v15 + 2LL * (v14 - 1)) || *(_WORD *)(v15 + 2LL * (v14 - 2)) )
            goto LABEL_10;
        }
        goto LABEL_38;
      }
      if ( !v13 )
        goto LABEL_10;
      if ( v13 > 2 )
      {
        if ( v13 != 3 )
        {
          if ( v13 == 5 )
          {
            v7 = ndisHandleProtocolUnloadNotification(v6);
            goto LABEL_7;
          }
          if ( v13 == 6 )
          {
            v8 = -1073741637;
            goto LABEL_8;
          }
LABEL_10:
          v8 = -1073741811;
          goto LABEL_8;
        }
LABEL_38:
        v7 = ndisHandleProtocolReconfigNotification(
               a1 + 24,
               a1 + 40,
               *(_QWORD *)(a1 + 8),
               *(unsigned int *)(a1 + 16),
               v13);
        goto LABEL_7;
      }
      ndisHandleLegacyBindIoctl((PCUNICODE_STRING)(a1 + 24), v13, (const struct _UNICODE_STRING *)(a1 + 40));
    }
    v7 = ndisHandleBindNotification((PCUNICODE_STRING)(a1 + 24));
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 != 2 )
    goto LABEL_10;
  if ( !ndisTdiPnPHandler )
  {
    v8 = -1073741823;
    goto LABEL_8;
  }
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD, _DWORD))ndisTdiPnPHandler)(
         a1 + 40,
         a1 + 24,
         a1 + 56,
         *(_QWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 4));
LABEL_7:
  v8 = v7;
LABEL_8:
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v8;
}
