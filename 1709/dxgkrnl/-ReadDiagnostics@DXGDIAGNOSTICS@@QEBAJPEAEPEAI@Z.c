/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0009A80
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009748 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C002AB78 (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C01A9094 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(DXGDIAGNOSTICS *this, unsigned __int8 *a2, unsigned int *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // eax
  const void *v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  size_t v12; // r8
  unsigned __int8 *v13; // rcx
  __int64 v14; // rcx
  int v16; // ecx
  __int64 v17; // rax

  if ( !a2 || !a3 || !*a3 )
    return 3221225507LL;
  memset(a2, 0, *a3);
  v6 = *((unsigned int *)this + 5);
  v7 = *((_DWORD *)this + 6);
  if ( (unsigned int)v6 > v7 )
    v7 += *((_DWORD *)this + 4);
  if ( v7 - (unsigned int)v6 < *a3 )
    *a3 = v7 - v6;
  if ( v7 == (_DWORD)v6 )
  {
    *a3 = 0;
  }
  else
  {
    v8 = *a3;
    v9 = (const void *)(*((_QWORD *)this + 4) + v6);
    v10 = *((_DWORD *)this + 4);
    v11 = *a3 + v6;
    if ( v11 > v10 )
    {
      memmove(a2, v9, v10 - (unsigned int)v6);
      v16 = *((_DWORD *)this + 4);
      v9 = (const void *)*((_QWORD *)this + 4);
      v12 = v11 - v16;
      v13 = &a2[(unsigned int)(v16 - v6)];
    }
    else
    {
      v12 = v8;
      v13 = a2;
    }
    memmove(v13, v9, v12);
    if ( v11 > v7 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v17 + 24) = 1346LL;
      WdLogEvent5_WdAssertion(v17);
    }
  }
  return 0LL;
}
