/*
 * XREFs of ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C0023670
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C002498C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannel::OnProcessDestruction(struct DirectComposition::CProcessData *a1)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      v2 = *(struct _RTL_GENERIC_TABLE **)a1;
      RestartKey = 0LL;
      v3 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
      if ( !v3 )
        break;
      v9 = v3[1];
      RtlDeleteElementGenericTable(v2, v3);
      if ( !v9 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    }
    Win32FreePool(*(_QWORD *)a1, v4, v5);
  }
  v6 = (struct _ERESOURCE *)*((_QWORD *)a1 + 1);
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    Win32FreePool(*((_QWORD *)a1 + 1), v7, v8);
  }
}
