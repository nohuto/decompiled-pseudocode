/*
 * XREFs of ??$CreateClient@VMPCManagerClientConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18002701C
 * Callers:
 *     ?Create@MPCManagerClient@@SAJPEAPEAV1@@Z @ 0x1800264A0 (-Create@MPCManagerClient@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18001A690 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BamoConnection::CreateClient<MPCManagerClientConnection>(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        char **a4)
{
  char *v7; // r14
  char *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  void (__fastcall ***v12)(_QWORD); // rax
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  v7 = (char *)operator new(0xA8uLL);
  memset_0(v7, 0, 0xA8uLL);
  *(_QWORD *)v7 = &ISMBamosBamoConnection::`vftable';
  *((_DWORD *)v7 + 4) = 1;
  *((_QWORD *)v7 + 1) = &Microsoft::BamoImpl::BamoConnectionImpl::`vftable';
  *((_QWORD *)v7 + 3) = v7;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_DWORD *)v7 + 10) = 0;
  *((_QWORD *)v7 + 6) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  *((_QWORD *)v7 + 9) = 0LL;
  *((_QWORD *)v7 + 10) = 0LL;
  *((_QWORD *)v7 + 11) = 0LL;
  v7[96] = 0;
  *((_QWORD *)v7 + 18) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v7 + 104));
  *((_QWORD *)v7 + 1) = &BamoImpl::dataproviderBamoConnectionImpl::`vftable';
  *(_QWORD *)v7 = &MPCManagerClientConnection::`vftable';
  *((_QWORD *)v7 + 19) = 0LL;
  *((_QWORD *)v7 + 20) = 0LL;
  v8 = v7;
  v14 = *a2;
  v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 40LL))(v7);
  v10 = Microsoft::BamoImpl::BamoConnectionImpl::Join(v9, a1, 0LL, &v14, L"System\\MPCManagerConversation", 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v8 = 0LL;
    *a4 = v7;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x620,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10);
  }
  if ( v8 )
  {
    v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 40LL))(v8);
    (**v12)(v12);
  }
  return v11;
}
