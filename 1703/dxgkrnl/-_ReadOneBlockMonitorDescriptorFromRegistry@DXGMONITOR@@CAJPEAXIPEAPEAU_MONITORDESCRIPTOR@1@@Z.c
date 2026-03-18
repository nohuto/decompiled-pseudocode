/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C01E5E90
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0108180 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0109F8C (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATIO.c)
 */

__int64 __fastcall DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        __int64 a2,
        struct DXGMONITOR::_MONITORDESCRIPTOR **a3,
        __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdi
  __int64 v20; // rax
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  wchar_t pszDest; // [rsp+38h] [rbp-30h] BYREF

  P = 0LL;
  v5 = (unsigned int)a2;
  if ( !KeyHandle )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(KeyHandle, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  *a3 = 0LL;
  v9 = RtlStringCbPrintfW(&pszDest, 8uLL, L"%d", (unsigned int)v5, P);
  v12 = v9;
  if ( v9 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, &pszDest);
    v14 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (struct _KEY_VALUE_PARTIAL_INFORMATION **)&P);
    v19 = (char *)P;
    v12 = v14;
    if ( v14 >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 3 && *((_DWORD *)P + 2) == 128 )
      {
        v21 = (char *)operator new(0x9FuLL, 0x4D677844u, PagedPool);
        if ( v21 )
        {
          *(_OWORD *)(v21 + 24) = *(_OWORD *)(v19 + 12);
          *(_OWORD *)(v21 + 40) = *(_OWORD *)(v19 + 28);
          *(_OWORD *)(v21 + 56) = *(_OWORD *)(v19 + 44);
          *(_OWORD *)(v21 + 72) = *(_OWORD *)(v19 + 60);
          *(_OWORD *)(v21 + 88) = *(_OWORD *)(v19 + 76);
          *(_OWORD *)(v21 + 104) = *(_OWORD *)(v19 + 92);
          *(_OWORD *)(v21 + 120) = *(_OWORD *)(v19 + 108);
          *(_OWORD *)(v21 + 136) = *(_OWORD *)(v19 + 124);
          *((_QWORD *)v21 + 2) = *((unsigned int *)v19 + 2);
          *((_DWORD *)v21 + 2) = 3;
          *((_DWORD *)v21 + 3) = (_DWORD)v5 != 0 ? 255 : 1;
          LODWORD(v12) = 0;
          *a3 = (struct DXGMONITOR::_MONITORDESCRIPTOR *)v21;
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(0LL, v22);
          WdLogEvent5_WdError(v23);
          LODWORD(v12) = -1073741801;
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        *(_QWORD *)(v24 + 24) = v5;
        WdLogEvent5_WdWarning(v24);
        LODWORD(v12) = -1071841279;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
      *(_QWORD *)(v20 + 24) = v12;
      WdLogEvent5_WdDmmEvent(v20);
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
