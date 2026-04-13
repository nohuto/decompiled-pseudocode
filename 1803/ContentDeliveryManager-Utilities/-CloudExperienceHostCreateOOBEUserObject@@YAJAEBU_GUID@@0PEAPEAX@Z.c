/*
 * XREFs of ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x18000D0B0
 * Callers:
 *     ?put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x1800120D0 (-put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 *     ?get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x180012170 (-get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloudExperienceHostCreateOOBEUserObject(const struct _GUID *a1, const struct _GUID *a2, void **a3)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = CoCreateInstance(
         &GUID_e9309678_18b4_414b_ba7a_2c9a7bcf9684,
         0LL,
         1u,
         &GUID_c0c64030_e846_4b67_a0e7_72809c951eb5,
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 31LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\onecoreuapshell\\inc\\cloudexperiencehostcreatebrokeredobjecthelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, void **))(*(_QWORD *)v10 + 32LL))(
         v10,
         &GUID_9cb89eff_b39e_4d5c_a493_f2171580cc21,
         &GUID_401c0441_9dd0_494f_bc60_c53a4a7b9b38,
         a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 32LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
