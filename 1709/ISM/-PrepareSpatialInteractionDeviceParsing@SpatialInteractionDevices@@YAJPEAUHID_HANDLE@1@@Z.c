/*
 * XREFs of ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x18007C3C8 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::IsValidButtonUsage @ 0x180078144 (SpatialInteractionDevices--IsValidButtonUsage.c)
 *     SpatialInteractionDevices::GetReportCaps @ 0x180079290 (SpatialInteractionDevices--GetReportCaps.c)
 *     ??0?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z @ 0x180079E40 (--0-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x18007A114 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_SpatialInteracti.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___ @ 0x18007A1A8 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_18007A1A8.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_1_ @ 0x18007A5E4 (SpatialInteractionDevices--StoreCapsIfMatches_1_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_4_ @ 0x18007A678 (SpatialInteractionDevices--StoreCapsIfMatches_4_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_2_ @ 0x18007A70C (SpatialInteractionDevices--StoreCapsIfMatches_2_.c)
 *     ??$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAX$$QEAUSpatialInputButtonCaps@SpatialInteractionDevices@@@Z @ 0x18007AABC (--$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@-$vector@USpatialInputButton.c)
 *     std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007AD8C (std--_Sort_unchecked1_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambd.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int16 v11; // ax
  __int128 v12; // xmm0
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int16 v15; // ax
  unsigned int v16; // ebx
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 ReportCaps; // r13
  unsigned int i; // edi
  __int64 v21; // rdx
  unsigned int v22; // r12d
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rdi
  int v26; // eax
  unsigned int v27; // esi
  const char *v28; // r9
  __int64 result; // rax
  int v30; // eax
  unsigned int v31; // esi
  int v32; // eax
  unsigned int v33; // esi
  int v34; // eax
  unsigned int v35; // esi
  int v36; // eax
  unsigned int v37; // esi
  char v38; // dl
  unsigned __int64 v39; // r8
  _WORD *v40; // rcx
  __int16 v41; // r9
  __int16 v42; // ax
  int v43; // eax
  unsigned int v44; // ebx
  int v45; // r12d
  __int64 *v46; // rdi
  __int64 *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rsi
  char v50; // al
  __int64 v51; // rcx
  _QWORD *v52; // rax
  char v53; // al
  unsigned __int64 v54; // rcx
  _QWORD *v55; // rax
  char v56; // al
  unsigned __int64 v57; // rcx
  _QWORD *v58; // rax
  char v59; // al
  unsigned __int64 v60; // rcx
  _QWORD *v61; // rax
  char v62; // al
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rax
  char v65; // al
  unsigned __int64 v66; // rcx
  _QWORD *v67; // rax
  char v68; // al
  char v69; // al
  __int64 v70; // rsi
  __int64 *v71; // rax
  __int64 *j; // rax
  ULONG v73; // eax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // kr10_8
  void *v76; // rax
  void *v77; // rcx
  int v78[4]; // [rsp+20h] [rbp-D8h] BYREF
  _WORD v79[4]; // [rsp+30h] [rbp-C8h] BYREF
  int v80; // [rsp+38h] [rbp-C0h]
  __int128 v81; // [rsp+40h] [rbp-B8h]
  __int64 v82; // [rsp+50h] [rbp-A8h]
  __int128 v83; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v84; // [rsp+68h] [rbp-90h] BYREF
  __int128 v85; // [rsp+80h] [rbp-78h] BYREF
  __int64 v86; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v87[16]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v88[72]; // [rsp+B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  int v90; // [rsp+100h] [rbp+8h] BYREF
  char v91; // [rsp+108h] [rbp+10h] BYREF
  char v92; // [rsp+110h] [rbp+18h]
  __int64 v93; // [rsp+118h] [rbp+20h]

  v82 = -2LL;
  try
  {
    *(_OWORD *)v78 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___(&v86);
    v83 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
                       v87,
                       v3,
                       &off_1800D98A0,
                       v4);
    v84 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
                       v88,
                       v5,
                       &off_1800D9B20,
                       v6);
    v8 = *(_OWORD *)&off_1800D9AC0;
    if ( *(_WORD *)(v7 + 106) != 1 || *(_WORD *)(v7 + 104) != 15 )
    {
      v9 = 0LL;
      v10 = 0LL;
      while ( 1 )
      {
        if ( *((_WORD *)this + 53) == *(_WORD *)((char *)&unk_1800D9AD4 + v10)
          && *((_WORD *)this + 52) == *(_WORD *)((char *)&unk_1800D9AD6 + v10) )
        {
          v11 = *(_WORD *)((char *)&unk_1800D9AD0 + v10);
          if ( !v11 && !*(_WORD *)((char *)&unk_1800D9AD2 + v10) )
            break;
          if ( *((_WORD *)this + 44) == v11 && *((_WORD *)this + 45) == *(_WORD *)((char *)&unk_1800D9AD2 + v10) )
            break;
        }
        ++v9;
        v10 += 24LL;
        if ( v10 >= 0x48 )
          goto LABEL_14;
      }
      v8 = *(__int128 *)((char *)&xmmword_1800D9AD8 + 24 * v9);
    }
LABEL_14:
    v81 = v8;
    v12 = *(_OWORD *)&off_1800D9A20;
    if ( *((_WORD *)this + 53) != 1 || *((_WORD *)this + 52) != 15 )
    {
      v13 = 0LL;
      v14 = 0LL;
      while ( 1 )
      {
        if ( *((_WORD *)this + 53) == *(_WORD *)((char *)&unk_1800D9A34 + v14)
          && *((_WORD *)this + 52) == *(_WORD *)((char *)&unk_1800D9A36 + v14) )
        {
          v15 = *(_WORD *)((char *)&unk_1800D9A30 + v14);
          if ( !v15 && !*(_WORD *)((char *)&unk_1800D9A32 + v14) )
            break;
          if ( *((_WORD *)this + 44) == v15 && *((_WORD *)this + 45) == *(_WORD *)((char *)&unk_1800D9A32 + v14) )
            break;
        }
        ++v13;
        v14 += 24LL;
        if ( v14 >= 0x60 )
          goto LABEL_26;
      }
      v12 = *(__int128 *)((char *)&xmmword_1800D9A38 + 24 * v13);
    }
LABEL_26:
    v85 = v12;
    *((_BYTE *)this + 277) = word_1800D9BB0[2] == 1;
    v16 = 0;
    v17 = *(_QWORD *)v78;
    while ( v16 < *((_DWORD *)this + 48) )
    {
      v18 = *((_QWORD *)this + 23) + 72LL * v16;
      ReportCaps = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v18 + 2), (__int64)this);
      for ( i = 0; i < v78[2]; ++i )
      {
        if ( SpatialInteractionDevices::IsValidButtonUsage(v18, (_WORD *)(v17 + 24LL * i)) )
        {
          *(_DWORD *)(ReportCaps + 144) |= *(_DWORD *)(v21 + 8);
          v79[0] = *(_WORD *)(v18 + 6);
          v79[1] = *(_WORD *)(v21 + 4);
          v79[2] = *(_WORD *)(v21 + 6);
          v80 = *(_DWORD *)(v21 + 8);
          std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::emplace_back<SpatialInteractionDevices::SpatialInputButtonCaps>(
            ReportCaps + 152,
            v79);
        }
      }
      ++v16;
    }
    v22 = 0;
    v23 = v81;
    while ( v22 < *((_DWORD *)this + 44) )
    {
      v24 = *((_QWORD *)this + 21) + 72LL * v22;
      v25 = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v24 + 2), (__int64)this);
      LOBYTE(v90) = 0;
      v26 = SpatialInteractionDevices::StoreCapsIfMatches_1_(&off_1800D9D80, v24, v25, &v90);
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x46C,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v26);
        return v27;
      }
      if ( !(_BYTE)v90 )
      {
        v30 = SpatialInteractionDevices::StoreCapsIfMatches_4_(&off_1800D9BF0, v24, v25 + 48, &v90);
        v31 = v30;
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x46D,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
            (const char *)(unsigned int)v30);
          return v31;
        }
        if ( !(_BYTE)v90 )
        {
          v32 = SpatialInteractionDevices::StoreCapsIfMatches_2_(&v83, v24, v25 + 24, &v90);
          v33 = v32;
          if ( v32 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x46E,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
              (const char *)(unsigned int)v32);
            return v33;
          }
          if ( !(_BYTE)v90 )
          {
            v34 = SpatialInteractionDevices::StoreCapsIfMatches_2_(&off_1800D9BA0, v24, v25 + 8, &v90);
            v35 = v34;
            if ( v34 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x46F,
                (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                (const char *)(unsigned int)v34);
              return v35;
            }
            if ( !(_BYTE)v90 )
            {
              v36 = SpatialInteractionDevices::StoreCapsIfMatches_1_(&v84, v24, v25 + 40, &v90);
              v37 = v36;
              if ( v36 < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x470,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                  (const char *)(unsigned int)v36);
                return v37;
              }
              if ( !(_BYTE)v90 )
              {
                if ( DWORD2(v81) != 3 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x41D,
                    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                    (const char *)0x8000FFFFLL);
                  wil::details::in1diag3::Return_Hr_NoOriginate(
                    retaddr,
                    (void *)0x471,
                    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                    (const char *)0x8000FFFFLL);
                  return 2147549183LL;
                }
                v38 = 0;
                LOBYTE(v90) = 0;
                v39 = 0LL;
                v40 = (_WORD *)(v23 + 4);
                while ( 1 )
                {
                  v41 = *(v40 - 1);
                  v42 = *(v40 - 2);
                  if ( (!v42 || *(_WORD *)(v24 + 10) == v42)
                    && (!v41 || *(_WORD *)(v24 + 8) == v41)
                    && *(_WORD *)v24 == *v40
                    && !*(_BYTE *)(v24 + 12)
                    && *(_WORD *)(v24 + 56) == v40[1] )
                  {
                    break;
                  }
                  ++v39;
                  v40 += 8;
                  if ( v39 >= 3 )
                    goto LABEL_64;
                }
                *(_QWORD *)(v25 + 8 * v39 + 80) = v24;
                v38 = 1;
                LOBYTE(v90) = 1;
LABEL_64:
                if ( !v38 )
                {
                  v43 = SpatialInteractionDevices::StoreCapsIfMatches_4_(&v85, v24, v25 + 104, &v90);
                  v44 = v43;
                  if ( v43 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0x472,
                      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                      (const char *)(unsigned int)v43);
                    return v44;
                  }
                }
              }
            }
          }
        }
      }
      ++v22;
    }
    v45 = 0;
    v46 = (__int64 *)*((_QWORD *)this + 36);
    v47 = (__int64 *)*v46;
    while ( v47 != v46 )
    {
      std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>(
        v78,
        v47 + 5);
      v48 = 0LL;
      v49 = *(_QWORD *)v78;
      while ( *(_QWORD *)(*(_QWORD *)v78 + 8 * v48) )
      {
        if ( ++v48 )
        {
          v50 = 1;
          goto LABEL_75;
        }
      }
      v50 = 0;
LABEL_75:
      *(_BYTE *)(*(_QWORD *)v78 + 136LL) = v50;
      v51 = 0LL;
      v52 = (_QWORD *)(v49 + 40);
      while ( *v52 )
      {
        ++v51;
        ++v52;
        if ( v51 )
        {
          v53 = 1;
          goto LABEL_80;
        }
      }
      v53 = 0;
LABEL_80:
      *(_BYTE *)(v49 + 137) = v53;
      v54 = 0LL;
      v55 = (_QWORD *)(v49 + 24);
      while ( *v55 )
      {
        ++v54;
        ++v55;
        if ( v54 >= 2 )
        {
          v56 = 1;
          goto LABEL_85;
        }
      }
      v56 = 0;
LABEL_85:
      *(_BYTE *)(v49 + 139) = v56;
      v57 = 0LL;
      v58 = (_QWORD *)(v49 + 8);
      while ( *v58 )
      {
        ++v57;
        ++v58;
        if ( v57 >= 2 )
        {
          v59 = 1;
          goto LABEL_90;
        }
      }
      v59 = 0;
LABEL_90:
      *(_BYTE *)(v49 + 138) = v59;
      v60 = 0LL;
      v61 = (_QWORD *)(v49 + 48);
      while ( *v61 )
      {
        ++v60;
        ++v61;
        if ( v60 >= 4 )
        {
          v62 = 1;
          goto LABEL_95;
        }
      }
      v62 = 0;
LABEL_95:
      *(_BYTE *)(v49 + 140) = v62;
      v63 = 0LL;
      v64 = (_QWORD *)(v49 + 80);
      while ( *v64 )
      {
        ++v63;
        ++v64;
        if ( v63 >= 3 )
        {
          v65 = 1;
          goto LABEL_100;
        }
      }
      v65 = 0;
LABEL_100:
      *(_BYTE *)(v49 + 141) = v65;
      v66 = 0LL;
      v67 = (_QWORD *)(v49 + 104);
      while ( *v67 )
      {
        ++v66;
        ++v67;
        if ( v66 >= 4 )
        {
          v68 = 1;
          goto LABEL_105;
        }
      }
      v68 = 0;
LABEL_105:
      *(_BYTE *)(v49 + 142) = v68;
      v45 |= *(_DWORD *)(v49 + 144);
      v92 = 0;
      v93 = *(_QWORD *)(v49 + 160);
      *(_QWORD *)&v81 = *(_QWORD *)(v49 + 152);
      v91 = 0;
      std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        v81,
        v93,
        (v93 - (__int64)v81) / 12,
        &v91);
      if ( *(_DWORD *)(v49 + 144)
        || *(_BYTE *)(v49 + 136)
        || *(_BYTE *)(v49 + 137)
        || *(_BYTE *)(v49 + 139)
        || *(_BYTE *)(v49 + 138)
        || *(_BYTE *)(v49 + 140)
        || *(_BYTE *)(v49 + 141)
        || (v69 = 0, *(_BYTE *)(v49 + 142)) )
      {
        v69 = 1;
      }
      *(_BYTE *)(v49 + 143) = v69;
      if ( *(_QWORD *)&v78[2] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v78[2] + 8LL), 0xFFFFFFFF) == 1 )
        {
          v70 = *(_QWORD *)&v78[2];
          (***(void (__fastcall ****)(_QWORD))&v78[2])(*(_QWORD *)&v78[2]);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v70 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v78[2] + 8LL))(*(_QWORD *)&v78[2]);
        }
      }
      if ( !*((_BYTE *)v47 + 25) )
      {
        v71 = (__int64 *)v47[2];
        if ( *((_BYTE *)v71 + 25) )
        {
          for ( j = (__int64 *)v47[1]; !*((_BYTE *)j + 25) && v47 == (__int64 *)j[2]; j = (__int64 *)j[1] )
            v47 = j;
          v47 = j;
        }
        else
        {
          do
          {
            v47 = v71;
            v71 = (__int64 *)*v71;
          }
          while ( !*((_BYTE *)v71 + 25) );
        }
      }
    }
    *((_DWORD *)this + 70) = v45;
    v73 = HidP_MaxUsageListLength(HidP_Input, 0, *((PHIDP_PREPARSED_DATA *)this + 12));
    *((_DWORD *)this + 76) = v73;
    v75 = v73;
    v74 = 4LL * v73;
    if ( !is_mul_ok(v75, 4uLL) )
      v74 = -1LL;
    v76 = operator new[](v74, (const struct std::nothrow_t *)&std::nothrow);
    v77 = (void *)*((_QWORD *)this + 39);
    *((_QWORD *)this + 39) = v76;
    if ( v77 )
      operator delete(v77);
    if ( *((_QWORD *)this + 39) )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49B,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x49D,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                           v28);
  }
  return result;
}
