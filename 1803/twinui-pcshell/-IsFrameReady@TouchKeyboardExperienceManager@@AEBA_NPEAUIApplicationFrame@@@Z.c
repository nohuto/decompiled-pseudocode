/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18023E788
 * Callers:
 *     _lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_::operator() @ 0x1800A12B4 (_lambda_0ad303f9e2ae70fb7fe20ab0d5a38fb6_--operator().c)
 *     _lambda_0b793df119bfe5dcf9aeba02981ffa9e_::operator() @ 0x1800A139C (_lambda_0b793df119bfe5dcf9aeba02981ffa9e_--operator().c)
 *     _lambda_f0bf810a5d9c986258710a4a09c5f600_::operator() @ 0x1800A2034 (_lambda_f0bf810a5d9c986258710a4a09c5f600_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TouchKeyboardExperienceManager::IsFrameReady(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int128 v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&v4 = this;
  if ( !a2 )
    return 0;
  (*(void (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 24LL))(a2, &v4);
  (*(void (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a2 + 40LL))(a2, (char *)&v4 + 8);
  return v4 != 0;
}
