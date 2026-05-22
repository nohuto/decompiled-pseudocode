/*
 * XREFs of ??0EdgyProcessor@@QEAA@XZ @ 0x1800B2F78
 * Callers:
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1800B2ECC (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800676AC (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

EdgyProcessor *__fastcall EdgyProcessor::EdgyProcessor(EdgyProcessor *this)
{
  struct EdgyConnection *v2; // rax
  BOOL v3; // eax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &EdgyProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &EdgyProcessor::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v2 = EdgyConnection::Get();
  *((_QWORD *)this + 11) = v2;
  if ( v2 )
    (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v2 + 8LL))(v2);
  *((_QWORD *)this + 13) = 1000000LL;
  v3 = QueryPerformanceFrequency(&Frequency);
  v4 = Frequency.QuadPart & -(__int64)v3;
  *((_QWORD *)this + 12) = v4;
  if ( v4 > 0x10C6F7A0B5EDLL )
  {
    v5 = *((_QWORD *)this + 13);
    do
    {
      if ( v5 < 0xA )
        break;
      v6 = *((_QWORD *)this + 12) / 0xAuLL;
      *((_QWORD *)this + 12) = v6;
      v5 /= 0xAuLL;
      *((_QWORD *)this + 13) = v5;
    }
    while ( v6 > 0x10C6F7A0B5EDLL );
  }
  if ( !*((_QWORD *)this + 11) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      (const char *)0x10C6F7A0B5EDLL);
    JUMPOUT(0x1800B3081LL);
  }
  return this;
}
