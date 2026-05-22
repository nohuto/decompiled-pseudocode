/*
 * XREFs of ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x18009E954
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A1630 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::IsValidButtonUsage @ 0x18009D8D0 (SpatialInteractionDevices--IsValidButtonUsage.c)
 *     SpatialInteractionDevices::GetReportCaps @ 0x18009E738 (SpatialInteractionDevices--GetReportCaps.c)
 *     ??$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAX$$QEAUSpatialInputButtonCaps@SpatialInteractionDevices@@@Z @ 0x18009F3BC (--$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@-$vector@USpatialInputButton.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x18009F844 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_SpatialInteracti.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___ @ 0x18009F8D8 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_18009F8D8.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_1_ @ 0x18009FC30 (SpatialInteractionDevices--StoreCapsIfMatches_1_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_4_ @ 0x18009FCC4 (SpatialInteractionDevices--StoreCapsIfMatches_4_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_2_ @ 0x18009FD58 (SpatialInteractionDevices--StoreCapsIfMatches_2_.c)
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A01CC (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambda.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E2134 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r9
  __int128 v6; // xmm1
  __int64 v7; // rdx
  _WORD *v8; // rdx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r8
  __int16 v11; // ax
  __int128 v12; // xmm0
  unsigned __int64 v13; // r8
  __int16 v14; // ax
  unsigned int v15; // ebx
  __int64 v16; // r12
  __int64 v17; // r14
  char *ReportCaps; // r13
  unsigned int v19; // edi
  __int64 v20; // rdx
  unsigned int v21; // r12d
  __int64 v22; // r13
  __int64 v23; // rbx
  char *v24; // rdi
  int v25; // eax
  unsigned int v26; // r14d
  const char *v27; // r9
  __int64 result; // rax
  int v29; // eax
  unsigned int v30; // r14d
  int v31; // eax
  unsigned int v32; // r14d
  int v33; // eax
  unsigned int v34; // r14d
  int v35; // eax
  unsigned int v36; // r14d
  char v37; // dl
  unsigned __int64 v38; // r8
  _WORD *v39; // rcx
  __int16 v40; // ax
  int v41; // eax
  unsigned int v42; // ebx
  char v43; // r13
  int v44; // edx
  __int64 *v45; // rdi
  __int64 *v46; // rbx
  volatile signed __int32 *v47; // r12
  __int64 v48; // r14
  unsigned __int64 v49; // rcx
  _QWORD *v50; // rax
  char v51; // al
  unsigned __int64 v52; // rcx
  _QWORD *v53; // rax
  char v54; // al
  unsigned __int64 v55; // rcx
  _QWORD *v56; // rax
  char v57; // al
  unsigned __int64 v58; // rcx
  _QWORD *v59; // rax
  char v60; // al
  unsigned __int64 v61; // rcx
  _QWORD *v62; // rax
  char v63; // al
  unsigned __int64 v64; // rcx
  _QWORD *v65; // rax
  char v66; // al
  unsigned __int64 v67; // rcx
  _QWORD *v68; // rax
  char v69; // al
  char v70; // al
  __int64 **v71; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  ULONG v74; // eax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // kr10_8
  void *v77; // rax
  void *v78; // rcx
  _WORD v79[4]; // [rsp+20h] [rbp-C8h] BYREF
  int v80; // [rsp+28h] [rbp-C0h]
  __int128 v81; // [rsp+30h] [rbp-B8h]
  __int128 v82; // [rsp+40h] [rbp-A8h]
  __int64 v83; // [rsp+50h] [rbp-98h]
  __int128 v84; // [rsp+58h] [rbp-90h] BYREF
  __int128 v85; // [rsp+68h] [rbp-80h] BYREF
  __int128 v86; // [rsp+80h] [rbp-68h] BYREF
  __int64 v87; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v88[16]; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v89[16]; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  int v91; // [rsp+F0h] [rbp+8h] BYREF
  int v92; // [rsp+F8h] [rbp+10h]

  v83 = -2LL;
  try
  {
    v82 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___(
                       &v87,
                       this);
    v84 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
                       v88,
                       v3,
                       &off_1800F4170);
    v85 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
                       v89,
                       v4,
                       &off_1800F4140);
    v6 = *(_OWORD *)&off_1800F40E0;
    v8 = (_WORD *)(v7 + 64);
    v9 = 1LL;
    if ( *((_WORD *)this + 33) != 1 || *v8 != 15 )
    {
      v5 = 0LL;
      v10 = 0LL;
      while ( 1 )
      {
        if ( v8[1] == *(_WORD *)((char *)&unk_1800F40F4 + v10) && *v8 == *(_WORD *)((char *)&unk_1800F40F6 + v10) )
        {
          v11 = *(_WORD *)((char *)&unk_1800F40F0 + v10);
          if ( !v11 && !*(_WORD *)((char *)&unk_1800F40F2 + v10) )
            break;
          if ( *((_WORD *)this + 22) == v11 && *((_WORD *)this + 23) == *(_WORD *)((char *)&unk_1800F40F2 + v10) )
            break;
        }
        ++v5;
        v10 += 24LL;
        if ( v10 >= 0x48 )
          goto LABEL_14;
      }
      v6 = *(__int128 *)((char *)&xmmword_1800F40F8 + 24 * v5);
    }
LABEL_14:
    v81 = v6;
    v12 = *(_OWORD *)&off_1800F4070;
    if ( *((_WORD *)this + 33) != 1 || *v8 != 15 )
    {
      v5 = 0LL;
      v13 = 0LL;
      while ( 1 )
      {
        if ( v8[1] == *(_WORD *)((char *)&unk_1800F4084 + v13) && *v8 == *(_WORD *)((char *)&unk_1800F4086 + v13) )
        {
          v14 = *(_WORD *)((char *)&unk_1800F4080 + v13);
          if ( !v14 && !*(_WORD *)((char *)&unk_1800F4082 + v13) )
            break;
          if ( *((_WORD *)this + 22) == v14 && *((_WORD *)this + 23) == *(_WORD *)((char *)&unk_1800F4082 + v13) )
            break;
        }
        ++v5;
        v13 += 24LL;
        if ( v13 >= 0x60 )
          goto LABEL_26;
      }
      v12 = *(__int128 *)((char *)&xmmword_1800F4088 + 24 * v5);
    }
LABEL_26:
    v86 = v12;
    *((_BYTE *)this + 237) = word_1800F4530[2] == 1;
    v15 = 0;
    v16 = v82;
    while ( v15 < *((_DWORD *)this + 38) )
    {
      v17 = *((_QWORD *)this + 18) + 72LL * v15;
      ReportCaps = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v17 + 2), (__int64)this);
      v19 = 0;
      v9 = 1LL;
      while ( v19 < DWORD2(v82) )
      {
        if ( SpatialInteractionDevices::IsValidButtonUsage(v17, (_WORD *)(v16 + 24LL * v19)) )
        {
          *((_DWORD *)ReportCaps + 36) |= *(_DWORD *)(v20 + 8);
          v79[0] = *(_WORD *)(v17 + 6);
          v79[1] = *(_WORD *)(v20 + 4);
          v79[2] = *(_WORD *)(v20 + 6);
          v80 = *(_DWORD *)(v20 + 8);
          std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::emplace_back<SpatialInteractionDevices::SpatialInputButtonCaps>(
            ReportCaps + 152,
            v79);
          v9 = 1LL;
        }
        v19 += v9;
      }
      v15 += v9;
    }
    v21 = 0;
    v22 = v81;
    while ( v21 < *((_DWORD *)this + 34) )
    {
      v23 = *((_QWORD *)this + 16) + 72LL * v21;
      v24 = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v23 + 2), (__int64)this);
      LOBYTE(v91) = 0;
      v25 = SpatialInteractionDevices::StoreCapsIfMatches_1_(&off_1800F43A0, v23, v24, &v91);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x460,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v25);
        return v26;
      }
      if ( (_BYTE)v91 )
        goto LABEL_67;
      v29 = SpatialInteractionDevices::StoreCapsIfMatches_4_(&off_1800F44C0, v23, v24 + 48, &v91);
      v30 = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x461,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v29);
        return v30;
      }
      if ( (_BYTE)v91 )
        goto LABEL_67;
      v31 = SpatialInteractionDevices::StoreCapsIfMatches_2_(&v84, v23, v24 + 24, &v91);
      v32 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x462,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v31);
        return v32;
      }
      if ( (_BYTE)v91 )
        goto LABEL_67;
      v33 = SpatialInteractionDevices::StoreCapsIfMatches_2_(&off_1800F43B0, v23, v24 + 8, &v91);
      v34 = v33;
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x463,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v33);
        return v34;
      }
      if ( (_BYTE)v91 )
        goto LABEL_67;
      v35 = SpatialInteractionDevices::StoreCapsIfMatches_1_(&v85, v23, v24 + 40, &v91);
      v36 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x464,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v35);
        return v36;
      }
      if ( (_BYTE)v91 )
        goto LABEL_67;
      if ( DWORD2(v81) != 3 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x411,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)0x8000FFFFLL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x465,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      v37 = 0;
      LOBYTE(v91) = 0;
      v38 = 0LL;
      v39 = (_WORD *)(v22 + 4);
      v9 = 1LL;
      while ( 1 )
      {
        v5 = (unsigned __int16)*(v39 - 1);
        v40 = *(v39 - 2);
        if ( (!v40 || *(_WORD *)(v23 + 10) == v40)
          && (!(_WORD)v5 || *(_WORD *)(v23 + 8) == (_WORD)v5)
          && *(_WORD *)v23 == *v39
          && !*(_BYTE *)(v23 + 12)
          && *(_WORD *)(v23 + 56) == v39[1] )
        {
          break;
        }
        ++v38;
        v39 += 8;
        if ( v38 >= 3 )
          goto LABEL_64;
      }
      *(_QWORD *)&v24[8 * v38 + 80] = v23;
      v37 = 1;
      LOBYTE(v91) = 1;
LABEL_64:
      if ( !v37 )
      {
        v41 = SpatialInteractionDevices::StoreCapsIfMatches_4_(&v86, v23, v24 + 104, &v91);
        v42 = v41;
        if ( v41 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x466,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
            (const char *)(unsigned int)v41);
          return v42;
        }
LABEL_67:
        v9 = 1LL;
      }
      ++v21;
    }
    v43 = 0;
    v44 = 0;
    v45 = (__int64 *)*((_QWORD *)this + 31);
    v46 = (__int64 *)*v45;
    while ( v46 != v45 )
    {
      v47 = (volatile signed __int32 *)v46[6];
      if ( v47 )
      {
        _InterlockedAdd(v47 + 2, v9);
        v47 = (volatile signed __int32 *)v46[6];
      }
      *(_QWORD *)&v81 = v46[5];
      v48 = v81;
      *((_QWORD *)&v81 + 1) = v47;
      v49 = 0LL;
      v50 = (_QWORD *)v81;
      while ( *v50 )
      {
        v49 += v9;
        ++v50;
        if ( v49 >= v9 )
        {
          v51 = v9;
          goto LABEL_78;
        }
      }
      v51 = 0;
LABEL_78:
      *(_BYTE *)(v81 + 136) = v51;
      v52 = 0LL;
      v53 = (_QWORD *)(v48 + 40);
      while ( *v53 )
      {
        v52 += v9;
        ++v53;
        if ( v52 >= v9 )
        {
          v54 = v9;
          goto LABEL_83;
        }
      }
      v54 = 0;
LABEL_83:
      *(_BYTE *)(v48 + 137) = v54;
      v55 = 0LL;
      v56 = (_QWORD *)(v48 + 24);
      while ( *v56 )
      {
        v55 += v9;
        ++v56;
        if ( v55 >= 2 )
        {
          v57 = v9;
          goto LABEL_88;
        }
      }
      v57 = 0;
LABEL_88:
      *(_BYTE *)(v48 + 139) = v57;
      v58 = 0LL;
      v59 = (_QWORD *)(v48 + 8);
      while ( *v59 )
      {
        v58 += v9;
        ++v59;
        if ( v58 >= 2 )
        {
          v60 = v9;
          goto LABEL_93;
        }
      }
      v60 = 0;
LABEL_93:
      *(_BYTE *)(v48 + 138) = v60;
      v61 = 0LL;
      v62 = (_QWORD *)(v48 + 48);
      while ( *v62 )
      {
        v61 += v9;
        ++v62;
        if ( v61 >= 4 )
        {
          v63 = v9;
          goto LABEL_98;
        }
      }
      v63 = 0;
LABEL_98:
      *(_BYTE *)(v48 + 140) = v63;
      v64 = 0LL;
      v65 = (_QWORD *)(v48 + 80);
      while ( *v65 )
      {
        v64 += v9;
        ++v65;
        if ( v64 >= 3 )
        {
          v66 = v9;
          goto LABEL_103;
        }
      }
      v66 = 0;
LABEL_103:
      *(_BYTE *)(v48 + 141) = v66;
      v67 = 0LL;
      v68 = (_QWORD *)(v48 + 104);
      while ( *v68 )
      {
        v67 += v9;
        ++v68;
        if ( v67 >= 4 )
        {
          v69 = v9;
          goto LABEL_108;
        }
      }
      v69 = 0;
LABEL_108:
      *(_BYTE *)(v48 + 142) = v69;
      v92 = *(_DWORD *)(v48 + 144) | v44;
      v43 |= *(_BYTE *)(v48 + 137);
      LOBYTE(v5) = v91;
      std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        *(_QWORD *)(v48 + 152),
        *(_QWORD *)(v48 + 160),
        (*(_QWORD *)(v48 + 160) - *(_QWORD *)(v48 + 152)) / 12LL,
        v5);
      if ( *(_DWORD *)(v48 + 144)
        || *(_BYTE *)(v48 + 136)
        || *(_BYTE *)(v48 + 137)
        || *(_BYTE *)(v48 + 139)
        || *(_BYTE *)(v48 + 138)
        || *(_BYTE *)(v48 + 140)
        || *(_BYTE *)(v48 + 141)
        || (v70 = 0, *(_BYTE *)(v48 + 142)) )
      {
        v70 = 1;
      }
      *(_BYTE *)(v48 + 143) = v70;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
        }
      }
      v44 = v92;
      v9 = 1LL;
      if ( !*((_BYTE *)v46 + 25) )
      {
        v71 = (__int64 **)v46[2];
        if ( *((_BYTE *)v71 + 25) )
        {
          for ( i = (__int64 *)v46[1]; !*((_BYTE *)i + 25) && v46 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v46 = i;
          v46 = i;
        }
        else
        {
          v46 = (__int64 *)v46[2];
          for ( j = *v71; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v46 = j;
        }
      }
    }
    *((_BYTE *)this + 238) = v43;
    *((_DWORD *)this + 60) = v44;
    v74 = HidP_MaxUsageListLength(HidP_Input, 0, *((PHIDP_PREPARSED_DATA *)this + 7));
    *((_DWORD *)this + 66) = v74;
    v76 = v74;
    v75 = 4LL * v74;
    if ( !is_mul_ok(v76, 4uLL) )
      v75 = -1LL;
    v77 = operator new[](v75, (const struct std::nothrow_t *)&std::nothrow);
    v78 = (void *)*((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = v77;
    if ( v78 )
    {
      operator delete(v78);
      v77 = (void *)*((_QWORD *)this + 34);
    }
    if ( v77 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x492,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x494,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                           v27);
  }
  return result;
}
