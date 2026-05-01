/*
 * XREFs of ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1802C5E34
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1802C7EC4 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1802C801C (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1802CA070 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18031225C (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1803158C8 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::CreateEmptyAppLayout(
        const struct LAYOUT_ENVIRONMENT_DETAILS *a1,
        struct IAppLayout **a2)
{
  const struct _GUID *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v11; // [rsp+58h] [rbp+28h] BYREF
  void *v12; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v5 = CAppLayout_CreateInstance(a1, v4, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v7 = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(void *, _QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *))(*(_QWORD *)v11 + 104LL))(
        v11,
        0LL,
        a1);
      (*(void (__fastcall **)(void *, __int64, const struct LAYOUT_ENVIRONMENT_DETAILS *))(*(_QWORD *)v11 + 104LL))(
        v11,
        1LL,
        a1);
      v7 = (*(__int64 (__fastcall **)(void *, void *, _QWORD, _QWORD))(*(_QWORD *)v12 + 224LL))(v12, v11, 0LL, 0LL);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v7 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IAppLayout **))v12)(
               v12,
               &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
               a2);
        v6 = v7;
        if ( v7 >= 0 )
        {
          v6 = 0;
          goto LABEL_11;
        }
        v8 = 1590LL;
      }
      else
      {
        v8 = 1587LL;
      }
    }
    else
    {
      v8 = 1584LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v6;
}
