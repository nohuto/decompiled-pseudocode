/*
 * XREFs of ?Initialize@DWMInputTarget@@IEAAJXZ @ 0x18002128C
 * Callers:
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z @ 0x180021364 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x1800214AC (-CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z @ 0x18002D03C (-UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Initialize(DWMInputTarget *this)
{
  __int64 **v1; // rsi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 *v8; // rcx
  __int64 v9; // rax

  v1 = (__int64 **)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v1);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = *v1;
    v9 = **v1;
    if ( *((_BYTE *)this + 140) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64 *, char *, char *))(v9 + 96))(v8, (char *)this + 96, (char *)this + 72);
      v6 = v4;
      if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 110;
        goto LABEL_13;
      }
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(v9 + 112))(
             v8,
             *((_QWORD *)this + 9),
             (char *)this + 96);
      v6 = v4;
      if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 114;
        goto LABEL_13;
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 106;
LABEL_13:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 3, v7, v4);
  }
  return v6;
}
