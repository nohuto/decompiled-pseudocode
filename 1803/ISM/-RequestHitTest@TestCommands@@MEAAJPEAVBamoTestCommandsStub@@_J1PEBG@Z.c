/*
 * XREFs of ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x180092960
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TestCommands::RequestHitTest(
        TestCommands *this,
        struct BamoTestCommandsStub *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+38h] [rbp-81h] BYREF
  const unsigned __int16 *v17; // [rsp+48h] [rbp-71h]
  __int64 v18; // [rsp+50h] [rbp-69h]
  _BYTE v19[8]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+78h] [rbp-41h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]

  v18 = -2LL;
  v17 = a5;
  v16[0] = 0LL;
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 7))(
         *((_QWORD *)this + 7),
         &GUID_b694737b_3300_4bb1_8b67_44715c8db610,
         v16);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\testcommands.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180092AF7LL);
  }
  v16[1] = __PAIR64__(a4, a3);
  (*(void (__fastcall **)(_QWORD, _BYTE *, unsigned __int64, _QWORD))(*(_QWORD *)v16[0] + 24LL))(
    v16[0],
    v19,
    __PAIR64__(a4, a3),
    0LL);
  if ( v19[0] )
  {
    v9 = v20[0];
    v10 = v20[1];
LABEL_13:
    if ( v9 != v10 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
      v12 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
      while ( 1 )
      {
        if ( v11 == v12 )
        {
          v9 += 8LL;
          goto LABEL_13;
        }
        v13 = v11 + 8;
        if ( v11 == -8
          || (*(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFFCuLL) == 0
          || (unsigned int)__std_type_info_compare(
                             (*(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFFCuLL) + 8,
                             &qword_180134958) )
        {
          v13 = 0LL;
        }
        if ( v13 )
          break;
        v11 += 72LL;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)(*(_QWORD *)v13 + 8LL)
                                                                                  + 24LL))(
        *(_QWORD *)v13 + 8LL,
        a3,
        a4,
        v17);
    }
  }
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v21);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v20, v8);
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
