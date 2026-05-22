/*
 * XREFs of ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@ZIMMMM@Z @ 0x18008F5BC
 * Callers:
 *     ?BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x18008C6A0 (-BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z.c)
 *     ?BroadcastSetQuaternionValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x18008C7E0 (-BroadcastSetQuaternionValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z.c)
 *     ?BroadcastSetColorValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x18008C920 (-BroadcastSetColorValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD),
        unsigned int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v3 + 32) )
      {
        v6 = a2(v3, a3);
        v7 = v6;
        if ( v6 < 0 )
          break;
      }
      v3 = *(_QWORD *)(v3 + 48);
      if ( !v3 )
        return 0;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
      (const char *)(unsigned int)v6);
  }
  else
  {
    return 0;
  }
  return v7;
}
