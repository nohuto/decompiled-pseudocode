/*
 * XREFs of ?PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONMENT_DETAILS@@PEAUIApplicationViewOperation@@@Z @ 0x1802C9370
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::PositionView(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const RECT *a4,
        struct IApplicationViewOperation *a5)
{
  struct IApplicationViewOperation *v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  RECT v10; // xmm0
  int v11; // eax
  unsigned int v12; // ebx
  RECT v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( EqualRect(a3, a4) )
  {
    v6 = a5;
    v7 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 48LL))(a5, 3LL);
    if ( v7 < 0 )
    {
      v8 = 2390LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  else
  {
    v10 = *a3;
    v6 = a5;
    v13 = v10;
    v7 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, RECT *))(*(_QWORD *)a5 + 56LL))(a5, &v13);
    if ( v7 < 0 )
    {
      v8 = 2395LL;
      goto LABEL_4;
    }
    v7 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 48LL))(a5, 4LL);
    if ( v7 < 0 )
    {
      v8 = 2396LL;
      goto LABEL_4;
    }
    v7 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 64LL))(a5, 3LL);
    if ( v7 < 0 )
    {
      v8 = 2397LL;
      goto LABEL_4;
    }
  }
  v11 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x960,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
