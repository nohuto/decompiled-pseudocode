/*
 * XREFs of ??$CreateServer@VMPCManagerConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180052AB8
 * Callers:
 *     _lambda_bf3949d951f60169eb17c52705c3d45b_::operator() @ 0x180052164 (_lambda_bf3949d951f60169eb17c52705c3d45b_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18001A690 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BamoConnection::CreateServer<MPCManagerConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        char **a5)
{
  char *v8; // r14
  char *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  void (__fastcall ***v13)(_QWORD); // rax
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a5 = 0LL;
  v8 = (char *)operator new(0xA0uLL);
  memset_0(v8, 0, 0xA0uLL);
  *(_QWORD *)v8 = &ISMBamosBamoConnection::`vftable';
  *((_DWORD *)v8 + 4) = 1;
  *((_QWORD *)v8 + 1) = &Microsoft::BamoImpl::BamoConnectionImpl::`vftable';
  *((_QWORD *)v8 + 3) = v8;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_DWORD *)v8 + 10) = 0;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_QWORD *)v8 + 9) = 0LL;
  *((_QWORD *)v8 + 10) = 0LL;
  *((_QWORD *)v8 + 11) = 0LL;
  v8[96] = 0;
  *((_QWORD *)v8 + 18) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v8 + 104));
  *((_QWORD *)v8 + 1) = &BamoImpl::dataproviderBamoConnectionImpl::`vftable';
  *(_QWORD *)v8 = &MPCManagerConnection::`vftable';
  *((_QWORD *)v8 + 19) = 0LL;
  v9 = v8;
  v15 = *a3;
  v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 40LL))(v8);
  v11 = Microsoft::BamoImpl::BamoConnectionImpl::Join(v10, a1, a2, &v15, L"System\\MPCManagerConversation", 1);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v9 = 0LL;
    *a5 = v8;
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F4,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11);
  }
  if ( v9 )
  {
    v13 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 40LL))(v9);
    (**v13)(v13);
  }
  return v12;
}
