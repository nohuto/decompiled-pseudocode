/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005510
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005B18 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180006014 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18002FBB0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 * Callees:
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180006AD4 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180006BCC (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcpy_s @ 0x180006E28 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18005BF54 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18005C038 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  __int64 v6; // rbx
  const void *v7; // r11
  unsigned __int64 v9; // r10
  unsigned __int8 *v10; // rbx
  char v11; // r13
  unsigned int v12; // r15d
  unsigned __int8 *v13; // r12
  unsigned __int64 v14; // r14
  unsigned __int8 *v15; // rsi
  unsigned __int16 v16; // ax
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int8 *v22; // r15
  unsigned __int16 v23; // r14
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned int v26; // esi
  unsigned __int16 v27; // r8
  char v28; // r9
  size_t v29; // rdx
  unsigned __int64 v30; // r12
  unsigned __int16 v31; // si
  __int64 v32; // r11
  unsigned __int8 *v33; // r11
  unsigned __int64 v34; // r13
  unsigned __int8 *v35; // rbx
  void *v36; // r13
  unsigned int v37; // eax
  unsigned __int8 *v38; // rbx
  unsigned __int64 v39; // rsi
  unsigned __int16 v40; // ax
  int v41; // eax
  __int64 v42; // rax
  int v43; // r9d
  unsigned __int16 v44; // r15
  char v45; // si
  void *v46; // r11
  __int16 v47; // r12
  __int64 v48; // rcx
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int8 *v53; // rcx
  size_t v54; // rax
  size_t v55; // r8
  unsigned __int8 *v56; // r8
  unsigned __int64 v57; // r14
  size_t v58; // rsi
  size_t v59; // r14
  unsigned __int8 *v61; // rsi
  unsigned int v62; // esi
  unsigned int v63; // esi
  unsigned int v64; // ebx
  void *v65; // r12
  unsigned __int8 *v66; // r8
  int v67; // eax
  __int16 v68; // [rsp+28h] [rbp-89h]
  unsigned __int16 v69; // [rsp+2Ah] [rbp-87h]
  unsigned __int16 v70; // [rsp+30h] [rbp-81h] BYREF
  char v71; // [rsp+32h] [rbp-7Fh]
  unsigned int v72; // [rsp+34h] [rbp-7Dh] BYREF
  unsigned __int16 v73; // [rsp+38h] [rbp-79h] BYREF
  __int128 v74; // [rsp+40h] [rbp-71h]
  __int16 v75; // [rsp+50h] [rbp-61h] BYREF
  char v76; // [rsp+52h] [rbp-5Fh]
  unsigned int Source; // [rsp+54h] [rbp-5Dh] BYREF
  unsigned __int16 v78; // [rsp+58h] [rbp-59h] BYREF
  void *Buf2[2]; // [rsp+60h] [rbp-51h]
  unsigned __int16 v80; // [rsp+70h] [rbp-41h] BYREF
  __int64 v81; // [rsp+78h] [rbp-39h]
  unsigned __int16 v82; // [rsp+80h] [rbp-31h] BYREF
  char v83; // [rsp+82h] [rbp-2Fh]
  int Destination; // [rsp+84h] [rbp-2Dh] BYREF
  unsigned __int16 v85; // [rsp+88h] [rbp-29h] BYREF
  __int128 v86; // [rsp+90h] [rbp-21h]
  unsigned __int8 *v87; // [rsp+A0h] [rbp-11h]
  unsigned __int8 *v88; // [rsp+A8h] [rbp-9h]
  unsigned __int8 *v89; // [rsp+B0h] [rbp-1h]
  unsigned __int8 *v90; // [rsp+108h] [rbp+57h] BYREF
  void *v91; // [rsp+110h] [rbp+5Fh]
  size_t v92; // [rsp+118h] [rbp+67h]
  void *Buf1; // [rsp+120h] [rbp+6Fh]

  Buf1 = a4;
  v92 = a3;
  v91 = a2;
  v6 = *((_QWORD *)this + 3);
  v7 = a2;
  if ( !v6 )
    return 0;
  v9 = 0LL;
  v10 = (unsigned __int8 *)(v6 + 10);
  v11 = 0;
  v12 = 0;
  v70 = *((_WORD *)this + 1);
  v71 = *((_BYTE *)this + 4);
  v72 = 0;
  v73 = 0;
  v74 = 0LL;
  while ( 1 )
  {
    v13 = v10;
    v14 = *((_QWORD *)this + 4);
    v15 = v10;
    v90 = v10;
    if ( v71 == 1 )
    {
      v15 = v10 + 2;
      if ( (unsigned __int64)(v10 + 2) > v14 )
        goto LABEL_53;
      *(_QWORD *)&v74 = v10;
      if ( v10 )
      {
        LOWORD(v12) = *(_WORD *)v10;
      }
      else
      {
        LOWORD(v12) = 0;
        *(_DWORD *)((__int64 (*)(void))_o__errno)() = 22;
        invalid_parameter_noinfo();
        a3 = v92;
        v9 = 0LL;
        v7 = v91;
      }
      v12 = (unsigned __int16)v12;
      v72 = (unsigned __int16)v12;
    }
    else if ( v71 == 2 )
    {
      v15 = v10 + 4;
      if ( (unsigned __int64)(v10 + 4) > v14 )
        goto LABEL_53;
      *(_QWORD *)&v74 = v10;
      memcpy_s(&v72, 4uLL, v10, 4uLL);
      a3 = v92;
      v9 = 0LL;
      v7 = v91;
      v12 = v72;
    }
    v16 = v70;
    v73 = v70;
    if ( !v70 )
    {
      if ( (unsigned __int64)(v15 + 2) > v14 )
      {
LABEL_53:
        v29 = Size;
        *((_QWORD *)this + 4) = v10;
        goto LABEL_54;
      }
      memcpy_s(&v73, 2uLL, v15, 2uLL);
      v16 = v73;
      v15 += 2;
      v12 = v72;
      v9 = 0LL;
      a3 = v92;
      v7 = v91;
    }
    if ( (unsigned __int64)&v15[v16] > v14 )
      goto LABEL_53;
    *((_QWORD *)&v74 + 1) = v15;
    v10 = &v15[v16];
    if ( a3 == v16 )
    {
      v17 = memcmp_0(v7, v15, a3);
      LOWORD(a3) = v92;
      v18 = v17;
      v7 = v91;
      v9 = 0LL;
    }
    else
    {
      v18 = a3 - v16;
    }
    if ( v18 < 0 )
    {
      v29 = Size;
      v10 = v13;
      v90 = v13;
      goto LABEL_55;
    }
    v19 = *((_QWORD *)this + 2);
    if ( !v18 )
      break;
    v90 = v10;
    if ( v19 )
    {
      v20 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
      if ( v19 == 4 )
        v21 = v20 >> 2;
      else
        v21 = v20 / v19;
      if ( v12 > v21 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v70, v21);
        v7 = v91;
        v9 = 0LL;
        v12 = v72;
      }
      v10 += *((_QWORD *)this + 2) * v12;
    }
    else
    {
      v75 = *((_WORD *)this + 3);
      v62 = 0;
      v76 = *((_BYTE *)this + 8);
      Source = 0;
      v78 = 0;
      *(_OWORD *)Buf2 = 0LL;
      if ( v12 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v75,
                  &v90,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v62;
        }
        while ( v62 < v12 );
        v10 = v90;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v70, v62);
      v7 = v91;
      v9 = 0LL;
      v12 = v72;
    }
    a3 = v92;
  }
  v69 = *((_WORD *)this + 3);
  v22 = v10;
  v82 = v69;
  v23 = 0;
  v83 = *((_BYTE *)this + 8);
  v81 = -1LL;
  Destination = 0;
  v85 = 0;
  v86 = 0LL;
  if ( v19 )
  {
    v24 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
    if ( v19 == 4 )
      v25 = v24 >> 2;
    else
      v25 = v24 / v19;
    v26 = v72;
    if ( v72 > v25 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v70, v25);
      v26 = v72;
    }
    v27 = *((_WORD *)this + 3);
    v28 = *((_BYTE *)this + 8);
    v29 = Size;
    v30 = v26;
    v31 = 0;
    v32 = v30 * *((_QWORD *)this + 2);
    *(_OWORD *)Buf2 = 0LL;
    v68 = v27;
    v33 = &v10[v32];
    v75 = v27;
    v89 = v33;
    LOBYTE(v90) = v28;
    v76 = v28;
    Source = 0;
    v87 = v10;
    if ( v30 )
    {
      while ( 1 )
      {
        v34 = *((_QWORD *)this + 4);
        v22 += (v30 >> 1) * *((_QWORD *)this + 2);
        v35 = v22;
        if ( v28 == 1 )
        {
          v35 = v22 + 2;
          if ( (unsigned __int64)(v22 + 2) > v34 )
            goto LABEL_32;
          Buf2[0] = v22;
          memcpy_s(&v80, 2uLL, v22, 2uLL);
          Source = v80;
        }
        else
        {
          if ( v28 != 2 )
            goto LABEL_29;
          v35 = v22 + 4;
          if ( (unsigned __int64)(v22 + 4) > v34 )
            goto LABEL_32;
          Buf2[0] = v22;
          if ( v22 )
          {
            Source = *(_DWORD *)v22;
            goto LABEL_29;
          }
          Source = 0;
          *(_DWORD *)_o__errno(v25, v29) = 22;
          invalid_parameter_noinfo();
        }
        v28 = (char)v90;
        v27 = v68;
        v29 = Size;
LABEL_29:
        v78 = v27;
        v31 = v27;
        if ( v27 )
          goto LABEL_30;
        v88 = v35 + 2;
        if ( (unsigned __int64)(v35 + 2) <= v34 )
        {
          memcpy_s(&v78, 2uLL, v35, 2uLL);
          v28 = v76;
          v27 = v75;
          v35 = v88;
          v31 = v78;
          v29 = Size;
          LOBYTE(v90) = v76;
          v68 = v75;
LABEL_30:
          if ( (unsigned __int64)&v35[v31] <= v34 )
          {
            Buf2[1] = v35;
            v22 = &v35[v31];
          }
        }
LABEL_32:
        v36 = Buf1;
        if ( v29 == v31 )
        {
          v37 = memcmp_0(Buf1, Buf2[1], v29);
          v29 = Size;
          v25 = v37;
          v27 = v68;
          v28 = (char)v90;
        }
        else
        {
          v25 = (unsigned int)v29 - v31;
        }
        if ( (int)v25 <= 0 )
        {
          v22 = v87;
          v30 >>= 1;
        }
        else
        {
          v87 = v22;
          v30 += -1LL - (v30 >> 1);
        }
        if ( !v30 )
        {
          v33 = v89;
          v23 = v85;
          goto LABEL_38;
        }
      }
    }
    v36 = Buf1;
LABEL_38:
    if ( v22 < v33 )
    {
      v38 = v22;
      v39 = *((_QWORD *)this + 4);
      if ( v83 == 1 )
      {
        v38 = v22 + 2;
        if ( (unsigned __int64)(v22 + 2) > v39 )
          goto LABEL_125;
        *(_QWORD *)&v86 = v22;
        memcpy_s(&v90, 2uLL, v22, 2uLL);
        Destination = (unsigned __int16)v90;
LABEL_41:
        v40 = v69;
LABEL_42:
        v85 = v40;
        v23 = v40;
        if ( !v40 )
        {
          if ( (unsigned __int64)(v38 + 2) > v39 )
          {
            v23 = v85;
            goto LABEL_125;
          }
          memcpy_s(&v85, 2uLL, v38, 2uLL);
          v38 += 2;
          v23 = v85;
        }
        if ( (unsigned __int64)&v38[v23] > v39 )
          goto LABEL_125;
        *((_QWORD *)&v86 + 1) = v38;
      }
      else
      {
        if ( v83 != 2 )
          goto LABEL_41;
        v38 = v22 + 4;
        if ( (unsigned __int64)(v22 + 4) <= v39 )
        {
          *(_QWORD *)&v86 = v22;
          memcpy_s(&Destination, 4uLL, v22, 4uLL);
          v40 = v82;
          goto LABEL_42;
        }
LABEL_125:
        v38 = (unsigned __int8 *)*((_QWORD *)&v86 + 1);
      }
      v29 = Size;
      if ( Size == v23 )
      {
        LODWORD(v81) = memcmp_0(v36, v38, Size);
        goto LABEL_47;
      }
      v41 = Size - v23;
LABEL_48:
      if ( !v41 )
      {
        if ( v83 )
        {
          wil::details_abi::UsageIndexProperty::UpdateCount(
            (wil::details_abi::UsageIndexProperty *)&v82,
            Destination + a6);
        }
        else if ( !*((_BYTE *)this + 56) )
        {
          goto LABEL_51;
        }
        LOBYTE(v41) = 1;
LABEL_51:
        *((_BYTE *)this + 56) = v41;
        return 1;
      }
    }
  }
  else
  {
    v63 = v72;
    v64 = 0;
    if ( v72 )
    {
      v65 = Buf1;
      while ( 1 )
      {
        v66 = (unsigned __int8 *)*((_QWORD *)this + 4);
        v90 = v22;
        if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v82, &v90, v66) )
          break;
        v67 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v82, v65, Size);
        v81 = (unsigned int)v67;
        if ( v67 > 0 )
        {
          v22 = v90;
          if ( ++v64 < v63 )
            continue;
        }
        goto LABEL_47;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v70, v64);
LABEL_47:
      v41 = v81;
      v29 = Size;
      goto LABEL_48;
    }
    v29 = Size;
  }
  v10 = v22;
  v90 = v22;
  if ( !v22 )
    return 1;
  LOWORD(a3) = v92;
  v11 = 1;
  v7 = v91;
  v9 = 0LL;
LABEL_54:
  v42 = 0LL;
  if ( v11 )
  {
    v43 = v72;
  }
  else
  {
LABEL_55:
    v43 = 1;
    v72 = 1;
    v73 = a3;
    *(_QWORD *)&v74 = 0LL;
    *((_QWORD *)&v74 + 1) = v7;
    if ( v70 )
      v42 = v70;
    else
      v42 = (unsigned __int16)a3 + 2LL;
    if ( v71 == 1 )
    {
      v42 += 2LL;
    }
    else if ( v71 == 2 )
    {
      v42 += 4LL;
    }
  }
  v44 = *((_WORD *)this + 3);
  v45 = *((_BYTE *)this + 8);
  v46 = Buf1;
  v47 = a6;
  v75 = v44;
  v76 = v45;
  Source = a6;
  v78 = v29;
  Buf2[0] = 0LL;
  Buf2[1] = Buf1;
  if ( v44 )
    v48 = v44;
  else
    v48 = (unsigned __int16)v29 + 2LL;
  if ( v45 == 1 )
  {
    v48 += 2LL;
  }
  else if ( v45 == 2 )
  {
    v48 += 4LL;
  }
  v49 = v48 + v42;
  v50 = *((_QWORD *)this + 4);
  v51 = *((_QWORD *)this + 5);
  if ( v50 < v51 )
    v9 = v51 - v50;
  if ( v9 >= v49 )
  {
    v52 = v51 - v49;
    v53 = &v10[v49];
    v54 = v52 - (_QWORD)v10;
    v55 = *((_QWORD *)this + 4) - (_QWORD)v10;
    if ( !v55 )
      goto LABEL_68;
    if ( v53 && v10 )
    {
      if ( v54 >= v55 )
      {
        memmove(v53, v10, v55);
        goto LABEL_149;
      }
      *(_DWORD *)_o__errno(v53, v29) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v53, v29) = 22;
    }
    invalid_parameter_noinfo();
LABEL_149:
    v46 = Buf1;
    v43 = v72;
    v29 = Size;
LABEL_68:
    v56 = (unsigned __int8 *)(v49 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v56;
    if ( v11 )
    {
      if ( !v71 )
      {
LABEL_71:
        v57 = *((_QWORD *)this + 4);
        if ( v45 == 1 )
        {
          v61 = v10 + 2;
          if ( (unsigned __int64)(v10 + 2) > v57 )
            goto LABEL_80;
          LOWORD(v90) = v47;
          memcpy_s(v10, 2uLL, &v90, 2uLL);
          v29 = Size;
          v46 = Buf1;
        }
        else
        {
          if ( v45 != 2 )
          {
LABEL_73:
            if ( !v44 )
            {
              if ( (unsigned __int64)(v10 + 2) > v57 )
                goto LABEL_80;
              memcpy_s(v10, v57 - (_QWORD)v10, &v78, 2uLL);
              v46 = Buf2[1];
              v10 += 2;
              v29 = v78;
              Buf1 = Buf2[1];
            }
            v58 = (unsigned __int16)v29;
            if ( (unsigned __int64)&v10[(unsigned __int16)v29] > v57 )
              goto LABEL_80;
            v59 = v57 - (_QWORD)v10;
            if ( !(_WORD)v29 )
              goto LABEL_80;
            if ( !v10 )
              goto LABEL_154;
            if ( v46 && v59 >= (unsigned __int16)v29 )
            {
              memcpy_0(v10, v46, (unsigned __int16)v29);
LABEL_80:
              *((_BYTE *)this + 56) = 1;
              return 1;
            }
            memset(v10, 0, v59);
            if ( Buf1 )
            {
              if ( v59 >= v58 )
                goto LABEL_80;
              *(_DWORD *)_o__errno(v53, v29) = 34;
            }
            else
            {
LABEL_154:
              *(_DWORD *)_o__errno(v53, v29) = 22;
            }
            invalid_parameter_noinfo();
            goto LABEL_80;
          }
          v61 = v10 + 4;
          if ( (unsigned __int64)(v10 + 4) > v57 )
            goto LABEL_80;
          memcpy_s(v10, 4uLL, &Source, 4uLL);
          v46 = Buf2[1];
          v29 = v78;
          v44 = v75;
          Buf1 = Buf2[1];
        }
        v10 = v61;
        goto LABEL_73;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v70, v43 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v70, &v90, v56);
      v10 = v90;
    }
    v46 = Buf1;
    v29 = Size;
    goto LABEL_71;
  }
  return 0;
}
