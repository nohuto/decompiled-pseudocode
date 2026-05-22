/*
 * XREFs of ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180027160
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007CD8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
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
      (void *)0x129,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      v7);
    JUMPOUT(0x180027254LL);
  }
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 232) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 248) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 264) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 280) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 296) = *((_OWORD *)a2 + 8);
  *(_OWORD *)((char *)this + 312) = *((_OWORD *)a2 + 9);
  *(_OWORD *)((char *)this + 328) = *((_OWORD *)a2 + 10);
  MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(v8);
  return (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 48LL))(
           PostProcessor,
           (char *)this + 168);
}
