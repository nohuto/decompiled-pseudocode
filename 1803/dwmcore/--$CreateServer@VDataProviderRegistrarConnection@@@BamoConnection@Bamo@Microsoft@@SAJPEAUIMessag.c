/*
 * XREFs of ??$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800C4B7C
 * Callers:
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1800C4A70 (-Initialize@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0DataProviderRegistrarConnection@@QEAA@XZ @ 0x1800C4C34 (--0DataProviderRegistrarConnection@@QEAA@XZ.c)
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800C4D68 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18015459C (-Release@BamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::Bamo::BamoConnection::CreateServer<DataProviderRegistrarConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        DataProviderRegistrarConnection **a5)
{
  DataProviderRegistrarConnection *v8; // rax
  DataProviderRegistrarConnection *v9; // rax
  DataProviderRegistrarConnection *v10; // rsi
  Microsoft::Bamo::BamoConnection *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-38h]
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v8 = (DataProviderRegistrarConnection *)WPF::ProcessHeapImpl::AllocClear(0xA0uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v9 = DataProviderRegistrarConnection::DataProviderRegistrarConnection(v8);
  v10 = v9;
  v11 = v9;
  if ( v9 )
  {
    v12 = *(_QWORD *)v9;
    v20 = *a3;
    v13 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoConnection *))(v12 + 40))(v11);
    v14 = Microsoft::BamoImpl::BamoConnectionImpl::Join(v13, a1, a2, &v20);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v11 = 0LL;
      *a5 = v10;
      v15 = 0;
      goto LABEL_5;
    }
    v18 = (unsigned int)v14;
    v17 = 1524LL;
  }
  else
  {
    v15 = -2147024882;
    v17 = 1522LL;
    v18 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
    (const char *)v18,
    v19);
LABEL_5:
  if ( v11 )
    Microsoft::Bamo::BamoConnection::Release(v11);
  return v15;
}
