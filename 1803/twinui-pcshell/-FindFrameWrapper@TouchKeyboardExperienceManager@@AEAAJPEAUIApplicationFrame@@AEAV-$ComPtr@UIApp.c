/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18023D19C
 * Callers:
 *     _lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_::operator() @ 0x1800A12B4 (_lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_--operator().c)
 *     _lambda_0b793df119bfe5dcf9aeba02981ffa9e_::operator() @ 0x1800A139C (_lambda_0b793df119bfe5dcf9aeba02981ffa9e_--operator().c)
 *     _lambda_f0bf810a5d9c986258710a4a09c5f600_::operator() @ 0x1800A2034 (_lambda_f0bf810a5d9c986258710a4a09c5f600_--operator().c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18023F370 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18023F580 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18023FCC0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  char *Ptr; // rbx
  char *v8; // rbp
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1 + 52;
  AcquireSRWLockShared(a1 + 52);
  Ptr = (char *)a1[53].Ptr;
  v8 = (char *)a1[54].Ptr;
  while ( Ptr != v8
       && (*(_BYTE *)(*(_QWORD *)Ptr + 32LL)
        || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)Ptr + 8LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)Ptr + 8LL),
             a2) != 1) )
    Ptr += 16;
  if ( Ptr == a1[54].Ptr )
  {
    v9 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x822,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(a3, (__int64 *)(*(_QWORD *)Ptr + 8LL));
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
