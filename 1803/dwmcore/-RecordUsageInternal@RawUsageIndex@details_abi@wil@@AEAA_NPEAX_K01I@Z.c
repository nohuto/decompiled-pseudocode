/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180057E50
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180058360 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18001C828 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x18001C864 (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800BC22C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800BC2DC (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x1800BC388 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     memcpy_s @ 0x1800BC3AC (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x1800DB752 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18013FF90 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        unsigned __int64 this,
        unsigned __int64 a2,
        size_t a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  __int64 v6; // rdi
  size_t v7; // r9
  const void *v8; // r10
  unsigned __int64 v9; // rsi
  void *v10; // r11
  unsigned __int8 *v11; // rdi
  unsigned int v12; // r12d
  unsigned __int64 v13; // r14
  unsigned __int8 *v14; // r13
  unsigned __int8 *v15; // rbx
  unsigned __int16 v16; // r15
  unsigned __int16 v17; // ax
  unsigned __int8 *v18; // r15
  int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  unsigned __int16 v23; // r13
  char v24; // r9
  unsigned __int16 v25; // r14
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // r11
  unsigned __int64 v29; // rdx
  unsigned __int16 v30; // r15
  unsigned __int8 *v31; // rbx
  size_t v32; // r14
  unsigned __int8 *v33; // r8
  void *v34; // rbx
  unsigned __int8 *v35; // rax
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rdi
  unsigned __int8 *v38; // r13
  int v39; // eax
  int v40; // ecx
  unsigned __int8 *v41; // rbx
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r15
  int v44; // ebx
  char v45; // al
  char v47; // al
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  unsigned __int64 v51; // r11
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int8 *v56; // rcx
  size_t v57; // rax
  size_t v58; // r8
  bool v59; // zf
  unsigned __int8 *v60; // r8
  unsigned int v61; // ebx
  int v62; // r14d
  unsigned __int8 *v63; // r8
  __int16 v64; // [rsp+28h] [rbp-99h]
  unsigned __int8 *v65; // [rsp+30h] [rbp-91h] BYREF
  unsigned __int16 v66[2]; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int16 v67; // [rsp+3Ch] [rbp-85h]
  unsigned __int16 v68; // [rsp+40h] [rbp-81h] BYREF
  char v69; // [rsp+42h] [rbp-7Fh]
  int Destination; // [rsp+44h] [rbp-7Dh] BYREF
  unsigned __int16 v71; // [rsp+48h] [rbp-79h] BYREF
  __int128 v72; // [rsp+50h] [rbp-71h]
  __int16 v73; // [rsp+60h] [rbp-61h] BYREF
  char v74; // [rsp+62h] [rbp-5Fh]
  unsigned int v75; // [rsp+64h] [rbp-5Dh] BYREF
  unsigned __int16 v76; // [rsp+68h] [rbp-59h] BYREF
  void *Buf2[2]; // [rsp+70h] [rbp-51h]
  unsigned __int64 v78; // [rsp+80h] [rbp-41h]
  unsigned __int8 *v79; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int16 v80; // [rsp+90h] [rbp-31h] BYREF
  char v81; // [rsp+92h] [rbp-2Fh]
  int v82; // [rsp+94h] [rbp-2Dh] BYREF
  unsigned __int16 v83; // [rsp+98h] [rbp-29h] BYREF
  __int128 v84; // [rsp+A0h] [rbp-21h]
  unsigned __int8 *v85; // [rsp+B0h] [rbp-11h]
  unsigned __int8 *v86; // [rsp+B8h] [rbp-9h]
  unsigned __int8 *v87; // [rsp+118h] [rbp+57h] BYREF
  void *v88; // [rsp+120h] [rbp+5Fh]
  size_t v89; // [rsp+128h] [rbp+67h]
  void *Buf1; // [rsp+130h] [rbp+6Fh]

  Buf1 = a4;
  v89 = a3;
  v88 = (void *)a2;
  v6 = *(_QWORD *)(this + 24);
  v7 = a3;
  v8 = (const void *)a2;
  v9 = this;
  if ( !v6 )
    return 0;
  v10 = 0LL;
  v11 = (unsigned __int8 *)(v6 + 10);
  v12 = 0;
  v68 = *(_WORD *)(this + 2);
  v69 = *(_BYTE *)(this + 4);
  LOBYTE(v87) = 0;
  Destination = 0;
  v71 = 0;
  v72 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v9 + 32);
    v14 = v11;
    v65 = v11;
    if ( v69 == 1 )
    {
      v15 = v11 + 2;
      if ( (unsigned __int64)(v11 + 2) > v13 )
        goto LABEL_55;
      *(_QWORD *)&v72 = v11;
      if ( v11 )
      {
        v16 = *(_WORD *)v11;
      }
      else
      {
        v16 = 0;
        *(_DWORD *)_o__errno(this, a2, 0LL, v7) = 22;
        invalid_parameter_noinfo();
        v7 = v89;
        v10 = 0LL;
        v8 = v88;
      }
      v12 = v16;
      Destination = v16;
    }
    else
    {
      v15 = v11;
      if ( v69 == 2 )
      {
        v15 = v11 + 4;
        if ( (unsigned __int64)(v11 + 4) > v13 )
          goto LABEL_55;
        *(_QWORD *)&v72 = v11;
        memcpy_s(&Destination, 4uLL, v11, 4uLL);
        v7 = v89;
        v10 = 0LL;
        v8 = v88;
        v12 = Destination;
      }
    }
    v17 = v68;
    v71 = v68;
    if ( !v68 )
    {
      if ( (unsigned __int64)(v15 + 2) > v13 )
      {
LABEL_55:
        LOWORD(v43) = Size;
        v47 = 0;
        *(_QWORD *)(v9 + 32) = v11;
        goto LABEL_56;
      }
      memcpy_s(&v71, 2uLL, v15, 2uLL);
      v17 = v71;
      v10 = 0LL;
      v7 = v89;
      v15 += 2;
      v8 = v88;
      v12 = Destination;
    }
    v18 = &v15[v17];
    if ( (unsigned __int64)v18 > v13 )
      goto LABEL_55;
    *((_QWORD *)&v72 + 1) = v15;
    v11 = &v15[v17];
    if ( v7 == v17 )
    {
      v19 = memcmp_0(v8, v15, v7);
      v7 = v89;
      v20 = v19;
      v8 = v88;
      v10 = 0LL;
    }
    else
    {
      v20 = v7 - v17;
    }
    if ( v20 < 0 )
      break;
    v21 = *(_QWORD *)(v9 + 16);
    if ( !v20 )
    {
      v23 = *(_WORD *)(v9 + 6);
      v24 = *(_BYTE *)(v9 + 8);
      v67 = v23;
      v25 = 0;
      v80 = v23;
      LOBYTE(v87) = v24;
      v81 = v24;
      v82 = 0;
      v83 = 0;
      v84 = 0LL;
      if ( v21 )
      {
        v26 = *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24);
        if ( v21 == 4 )
          v27 = v26 >> 2;
        else
          v27 = v26 / v21;
        v28 = v23;
        v64 = v23;
        if ( v12 > v27 )
        {
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v68, v27);
          v28 = *(_WORD *)(v9 + 6);
          v24 = *(_BYTE *)(v9 + 8);
          v21 = *(_QWORD *)(v9 + 16);
          v12 = Destination;
          v64 = v28;
          LOBYTE(v87) = v24;
        }
        v29 = v12;
        *(_OWORD *)Buf2 = 0LL;
        v78 = v12;
        v30 = 0;
        v31 = &v11[v12 * v21];
        v73 = v28;
        v86 = v31;
        v74 = v24;
        v75 = 0;
        v76 = 0;
        if ( v12 )
        {
          v32 = Size;
          v33 = v11;
          v34 = Buf1;
          v65 = v11;
          while ( 1 )
          {
            v35 = *(unsigned __int8 **)(v9 + 32);
            v36 = v29 >> 1;
            v37 = (v29 >> 1) * *(_QWORD *)(v9 + 16);
            v79 = v35;
            v11 = &v33[v37];
            v38 = v11;
            if ( v24 == 1 )
            {
              v38 = v11 + 2;
              if ( v11 + 2 > v35 )
                goto LABEL_32;
              Buf2[0] = v11;
              memcpy_s(v66, 2uLL, v11, 2uLL);
              v24 = (char)v87;
              v28 = v64;
              v75 = v66[0];
            }
            else
            {
              if ( v24 != 2 )
                goto LABEL_29;
              v38 = v11 + 4;
              if ( v11 + 4 > v35 )
                goto LABEL_32;
              Buf2[0] = v11;
              memcpy_s(&v75, 4uLL, v11, 4uLL);
              v24 = v74;
              v28 = v73;
              LOBYTE(v87) = v74;
              v64 = v73;
            }
            v33 = v65;
            v35 = v79;
            v29 = v78;
LABEL_29:
            v76 = v28;
            v30 = v28;
            if ( v28 )
              goto LABEL_30;
            v85 = v38 + 2;
            if ( v38 + 2 <= v35 )
            {
              memcpy_s(&v76, 2uLL, v38, 2uLL);
              v24 = v74;
              v28 = v73;
              v38 = v85;
              v30 = v76;
              v29 = v78;
              v33 = v65;
              LOBYTE(v87) = v74;
              v64 = v73;
LABEL_30:
              if ( &v38[v30] <= v79 )
              {
                Buf2[1] = v38;
                v11 = &v38[v30];
              }
            }
LABEL_32:
            if ( v32 == v30 )
            {
              v39 = memcmp_0(v34, Buf2[1], v32);
              v29 = v78;
              v40 = v39;
              v33 = v65;
              v24 = (char)v87;
              v28 = v64;
            }
            else
            {
              v40 = v32 - v30;
            }
            if ( v40 > 0 )
              v29 += -1LL - v36;
            else
              v29 = v36;
            v78 = v29;
            if ( v40 <= 0 )
              v11 = v33;
            v65 = v11;
            v33 = v11;
            if ( !v29 )
            {
              v31 = v86;
              v25 = v83;
              v23 = v67;
              break;
            }
          }
        }
        if ( v11 >= v31 )
        {
          LOWORD(v43) = Size;
          goto LABEL_73;
        }
        v41 = v11;
        v42 = *(_QWORD *)(v9 + 32);
        if ( v81 == 1 )
        {
          v41 = v11 + 2;
          if ( (unsigned __int64)(v11 + 2) <= v42 )
          {
            *(_QWORD *)&v84 = v11;
            memcpy_s(&v87, 2uLL, v11, 2uLL);
            v82 = (unsigned __int16)v87;
            goto LABEL_43;
          }
        }
        else
        {
          if ( v81 != 2 )
            goto LABEL_43;
          v41 = v11 + 4;
          if ( (unsigned __int64)(v11 + 4) <= v42 )
          {
            *(_QWORD *)&v84 = v11;
            memcpy_s(&v82, 4uLL, v11, 4uLL);
            v23 = v80;
LABEL_43:
            v83 = v23;
            v25 = v23;
            if ( v23 )
            {
LABEL_44:
              if ( (unsigned __int64)&v41[v25] <= v42 )
              {
                *((_QWORD *)&v84 + 1) = v41;
LABEL_46:
                LOWORD(v43) = Size;
                if ( Size == v25 )
                  v44 = memcmp_0(Buf1, v41, Size);
                else
                  v44 = Size - v25;
LABEL_48:
                if ( !v44 )
                {
                  if ( v81 )
                  {
                    wil::details_abi::UsageIndexProperty::UpdateCount(
                      (wil::details_abi::UsageIndexProperty *)&v80,
                      v82 + a6);
                  }
                  else if ( !*(_BYTE *)(v9 + 56) )
                  {
                    v45 = 0;
                    goto LABEL_52;
                  }
                  v45 = 1;
LABEL_52:
                  *(_BYTE *)(v9 + 56) = v45;
                  return 1;
                }
LABEL_73:
                v10 = 0LL;
LABEL_74:
                v65 = v11;
                if ( !v11 )
                  return 1;
                LOWORD(v7) = v89;
                v47 = 1;
                v8 = v88;
                LOBYTE(v87) = 1;
LABEL_56:
                if ( !v47 )
                  goto LABEL_57;
                goto LABEL_58;
              }
            }
            else if ( (unsigned __int64)(v41 + 2) <= v42 )
            {
              memcpy_s(&v83, 2uLL, v41, 2uLL);
              v25 = v83;
              v41 += 2;
              goto LABEL_44;
            }
          }
        }
        v41 = (unsigned __int8 *)*((_QWORD *)&v84 + 1);
        goto LABEL_46;
      }
      v43 = Size;
      v62 = 0;
      if ( v12 )
      {
        v44 = -1;
        while ( 1 )
        {
          v63 = *(unsigned __int8 **)(v9 + 32);
          v87 = v11;
          if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v80, &v87, v63) )
            break;
          v44 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v80, Buf1, v43);
          if ( v44 > 0 )
          {
            v11 = v87;
            if ( ++v62 < v12 )
              continue;
          }
          goto LABEL_48;
        }
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v68, v62);
        goto LABEL_48;
      }
      goto LABEL_74;
    }
    v79 = v18;
    if ( v21 )
    {
      v22 = *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24);
      if ( v21 == 4 )
      {
        this = v22 >> 2;
      }
      else
      {
        a2 = v22 % v21;
        this = v22 / v21;
      }
      if ( v12 > this )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v68, this);
        v7 = v89;
        v10 = 0LL;
        v8 = v88;
        v21 = *(_QWORD *)(v9 + 16);
        v12 = Destination;
      }
      v11 = &v18[v21 * v12];
    }
    else
    {
      v73 = *(_WORD *)(v9 + 6);
      v61 = 0;
      v74 = *(_BYTE *)(v9 + 8);
      v75 = 0;
      v76 = 0;
      *(_OWORD *)Buf2 = 0LL;
      if ( v12 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v73,
                  &v79,
                  *(unsigned __int8 **)(v9 + 32)) )
            break;
          ++v61;
        }
        while ( v61 < v12 );
        v11 = v79;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v68, v61);
      v7 = v89;
      v10 = 0LL;
      v8 = v88;
      v12 = Destination;
    }
  }
  LOWORD(v43) = Size;
  v11 = v14;
  v65 = v14;
LABEL_57:
  Destination = 1;
  v71 = v7;
  *(_QWORD *)&v72 = 0LL;
  *((_QWORD *)&v72 + 1) = v8;
  wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v68);
LABEL_58:
  v73 = *(_WORD *)(v9 + 6);
  v74 = *(_BYTE *)(v9 + 8);
  v75 = a6;
  Buf2[1] = Buf1;
  v76 = v43;
  Buf2[0] = v10;
  v48 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v73);
  v52 = *(_QWORD *)(v9 + 40);
  v53 = v49 + v48;
  v54 = *(_QWORD *)(v9 + 32);
  if ( v54 < v52 )
    v51 = v52 - v54;
  if ( v51 < v53 )
    return 0;
  v55 = v52 - v53;
  v56 = &v11[v53];
  v57 = v55 - (_QWORD)v11;
  v58 = *(_QWORD *)(v9 + 32) - (_QWORD)v11;
  if ( !v58 )
    goto LABEL_62;
  if ( v56 && v11 )
  {
    if ( v57 >= v58 )
    {
      memmove(v56, v11, v58);
      goto LABEL_62;
    }
    *(_DWORD *)_o__errno(v56, v49, v58, v50) = 34;
  }
  else
  {
    *(_DWORD *)_o__errno(v56, v49, v58, v50) = 22;
  }
  invalid_parameter_noinfo();
LABEL_62:
  v59 = (_BYTE)v87 == 0;
  v60 = (unsigned __int8 *)(v53 + *(_QWORD *)(v9 + 32));
  *(_QWORD *)(v9 + 32) = v60;
  if ( v59 )
    wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v68, &v65, v60);
  else
    wil::details_abi::UsageIndexProperty::AddToCount((wil::details_abi::UsageIndexProperty *)&v68, 1);
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v73,
    &v65,
    *(unsigned __int8 **)(v9 + 32));
  *(_BYTE *)(v9 + 56) = 1;
  return 1;
}
