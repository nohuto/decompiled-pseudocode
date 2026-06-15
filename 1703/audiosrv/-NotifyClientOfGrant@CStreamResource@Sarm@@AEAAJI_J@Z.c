/*
 * XREFs of ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1800C61A8
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C667C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::NotifyClientOfGrant(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // r10
  unsigned int v12; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  char *v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  char *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  int *v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  __int64 *v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]
  int *v24; // [rsp+B0h] [rbp+17h]
  __int64 v25; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v12 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)this + 160LL))(
         *(_QWORD *)this,
         0LL,
         a3,
         a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( (unsigned int)dword_18012A220 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18012A220, 0x400000000000uLL) )
      {
        v17 = 8LL;
        v16 = (char *)this + 40;
        v18 = (char *)this + 16;
        v20 = (int *)&v12;
        v22 = &v14;
        v13 = *((_DWORD *)this + 13);
        v24 = &v13;
        v19 = 16LL;
        v21 = v11;
        v14 = a3;
        v23 = 8LL;
        v25 = v11;
        TlgWrite(v8, &unk_1800FAB86, v9, v10, 7u, &pData);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x118,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
