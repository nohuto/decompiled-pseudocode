/*
 * XREFs of ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18008B520
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007E1C (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 */

__int64 __fastcall DWMCursor::Set3DHitData(DWMCursor *this, struct Cursor3DHitData *a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rdi
  char v6; // bl
  const char *v7; // r9
  PSRWLOCK v8; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MPC3DStateHelper::GetInstance();
  v5 = v4;
  AcquireSRWLockShared(v4);
  v6 = BYTE4(v5[2].Ptr);
  ReleaseSRWLockShared(v5);
  if ( !v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x127,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      v7);
    JUMPOUT(0x18008B614LL);
  }
  *((_OWORD *)this + 10) = *(_OWORD *)a2;
  *((_OWORD *)this + 11) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 12) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 13) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 14) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 15) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 16) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 17) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 18) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 19) = *((_OWORD *)a2 + 9);
  *((_OWORD *)this + 20) = *((_OWORD *)a2 + 10);
  MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(v8);
  return (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 48LL))(
           PostProcessor,
           (char *)this + 160);
}
