/*
 * XREFs of ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DF90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAAEAUAttachedInputObjectEntry@InputSite@@$$QEAU23@@Z @ 0x18000C99C (--$emplace_back@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@InputSi.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x18000E4EC (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputSiteElementProxy::OnActivationConfigurationInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r15
  InputSiteElementProxy *v9; // r12
  __int64 v10; // rdi
  void (__fastcall ***v11)(_QWORD); // rax
  void (__fastcall ***v12)(_QWORD); // rbx
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  InputSiteElementProxy *v16; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v17[6]; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+60h] [rbp-10h]
  char *v19; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  char v21; // [rsp+B8h] [rbp+48h] BYREF

  v5 = *((_QWORD *)this + 11);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
    __debugbreak();
  }
  v6 = v5 + 24;
  v7 = *(_QWORD *)(v5 + 24);
  v8 = *(_QWORD *)(v5 + 32);
  while ( v7 != v8 )
  {
    v9 = *(InputSiteElementProxy **)v7;
    v10 = v7 + 8;
    if ( v7 == -8
      || (*(_QWORD *)(v7 + 64) & 0xFFFFFFFFFFFFFFFCuLL) == 0
      || (unsigned int)__std_type_info_compare((*(_QWORD *)(v7 + 64) & 0xFFFFFFFFFFFFFFFCuLL) + 8, &qword_1801348F8) )
    {
      v10 = 0LL;
    }
    if ( v9 == this && v10 )
      break;
    v7 += 72LL;
  }
  if ( v7 != *(_QWORD *)(v6 + 8) )
    std::vector<InputSite::AttachedInputObjectEntry>::erase(v6, &v21, v7);
  v11 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  v12 = v11;
  if ( v11 )
    (**v11)(v11);
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 11);
    v16 = this;
    v17[0] = v12;
    (**v12)(v12);
    v18 = off_1800EB420;
    v19 = (char *)&Microsoft::WRL::ComPtr<BamoActivationConfigurationInputObjectProxy> `RTTI Type Descriptor' + 2;
    std::vector<InputSite::AttachedInputObjectEntry>::emplace_back<InputSite::AttachedInputObjectEntry>(
      (_QWORD *)(v13 + 24),
      (__int64)&v16);
    if ( ((unsigned __int8)v19 & 3) == 1LL )
    {
      v14 = (_QWORD *)v17[5];
    }
    else
    {
      if ( ((unsigned __int8)v19 & 3) != 2LL )
        goto LABEL_21;
      v14 = v17;
    }
    ((void (__fastcall *)(_QWORD *))*v18)(v14);
  }
LABEL_21:
  if ( v12 )
    (*v12)[1](v12);
  return 0LL;
}
