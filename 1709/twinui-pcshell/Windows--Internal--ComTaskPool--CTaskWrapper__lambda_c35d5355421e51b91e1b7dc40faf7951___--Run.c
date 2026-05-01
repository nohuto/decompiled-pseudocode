/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___::Run @ 0x18005EA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0zqtq @ 0x180061D64 (McTemplateU0zqtq.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___::Run(
        __int64 a1)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r15
  NTSTATUS v6; // eax
  signed int v7; // eax
  int v8; // edx
  unsigned __int64 v9; // r9
  unsigned int i; // edi
  __int64 v11; // rcx
  void *v12; // rcx
  LPVOID pv[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  int v15; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+40h] BYREF
  char v17; // [rsp+90h] [rbp+48h] BYREF
  __int64 v18; // [rsp+98h] [rbp+50h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[0] = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
    pv);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v3 + 16) )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(v3 + 8);
      v15 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v15 = 0;
        v6 = RtlQueryWnfStateData(&v17, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, &v15, 0LL);
        v7 = RtlNtStatusToDosError(v6);
        v9 = (unsigned __int16)v7 | 0x80070000;
        if ( v7 <= 0 )
          v9 = (unsigned int)v7;
        if ( (v9 & 0x80000000) != 0LL )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x30,
            (__int64)"internal\\onecoreuapshell\\private\\inc\\tabletmodehelpers.h",
            (const char *)v9);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0zqtq(*(unsigned __int8 *)(a1 + 24), v8, pv[0], *(_DWORD *)(v4 + v5), *(_BYTE *)(a1 + 24), v15);
      }
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 32LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
             &v16) >= 0 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v18 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 32LL)
                                                                        + 32LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
                 i,
                 &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
                 &v18) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
              v18,
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
              *(unsigned int *)(v4 + v5),
              *(_QWORD *)(v4 + v5 + 8));
          v11 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
      }
      ++v2;
      v4 += 16LL;
      v3 = *(_QWORD *)(a1 + 16);
    }
    while ( v2 < *(_QWORD *)(v3 + 16) );
  }
  v12 = pv[0];
  pv[0] = 0LL;
  CoTaskMemFree(v12);
}
