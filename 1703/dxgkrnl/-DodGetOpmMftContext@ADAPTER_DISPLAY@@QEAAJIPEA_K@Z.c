/*
 * XREFs of ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C0170DDC
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C0174A70 (DxgkOpmGetRedirectionInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetOpmMftContext(ADAPTER_DISPLAY *this, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax

  v4 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v4 + 1552) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(v4 + 1552))(*(_QWORD *)(v4 + 1520), a2, a3);
    v10 = v7;
    if ( v7 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdError(v11);
    }
    return (unsigned int)v10;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v4, a2);
    *(_QWORD *)(v5 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v5);
    return 3221225659LL;
  }
}
