/*
 * XREFs of sub_1800DC344 @ 0x1800DC344
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 *     sub_18003A4FC @ 0x18003A4FC (sub_18003A4FC.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800867F4 @ 0x1800867F4 (sub_1800867F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     ZwQuerySection @ 0x1800A5D20 (ZwQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A5E00 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A7730 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1800A7D10 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800DC344(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  int v8; // eax
  struct _TEB *v9; // rdi
  PVOID ArbitraryUserPointer; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r15
  char *v14; // r10
  __int128 v15; // xmm0
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // r8
  _WORD *i; // rdx
  __int16 v19; // ax
  _WORD *v20; // rdx
  __int16 v21; // cx
  char *v22; // rax
  __int64 v23; // rax
  int Section; // eax
  int v25; // eax
  unsigned int *v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  unsigned __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _DWORD *v35; // rdx
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rcx
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v48; // [rsp+58h] [rbp-A8h]
  char *v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  int *v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  int v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+A8h] [rbp-58h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  int v61; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  unsigned int *v64; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v65; // [rsp+E8h] [rbp-18h]
  __int64 v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  int v68; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+108h] [rbp+8h]
  struct _PEB *(__fastcall *v70)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v71)(); // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+120h] [rbp+20h]
  char *(__fastcall *v73)(_QWORD *, unsigned int); // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v74)(HANDLE, int, __int64); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v75)(__int64, __int64, unsigned int, __int64, int, __int64); // [rsp+138h] [rbp+38h]
  __int128 v76; // [rsp+140h] [rbp+40h]
  _DWORD *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v79)(unsigned __int16, unsigned __int16); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v80)(); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v81)(); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v82)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v83)(_QWORD, _QWORD); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v84)(_QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  UNICODE_STRING DestinationString; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING v86; // [rsp+1A0h] [rbp+A0h] BYREF
  UNICODE_STRING v87; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v88[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v89[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v90[520]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v66 = a2;
  v65 = a4;
  v67 = a3;
  v5 = (__int64 *)(a5 + 288);
  v53 = 0LL;
  v54 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  v49 = 0LL;
  v62 = 0LL;
  v51 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  v56 = 0LL;
  p_DestinationString = &DestinationString;
  v55 = 48;
  v58 = 64;
  v59 = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v86, L"KnownDllPath");
    v56 = v53;
    v55 = 48;
    p_DestinationString = &v86;
    v58 = 64;
    v59 = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      v48 = v90;
      v89[0] = 4128860;
      v89[1] = 6029375;
      v47 = 0x2000000;
      SymbolicLinkObject = ZwQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        v48 = v89;
        LOWORD(v47) = v47 + 8;
        HIWORD(v47) += 8;
        RtlInitUnicodeString(&v87, L"\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v47, (__int16 *)&v87);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v47, word_180111408);
          if ( SymbolicLinkObject >= 0 )
          {
            v55 = 48;
            p_DestinationString = (UNICODE_STRING *)&v47;
            v56 = 0LL;
            v58 = 64;
            v59 = 0LL;
            AttributesFile = ZwQueryAttributesFile();
            if ( AttributesFile != -1073741757 && AttributesFile != -1073741790 && AttributesFile < 0 )
              goto LABEL_9;
            v8 = ZwOpenFile();
            SymbolicLinkObject = v8;
            if ( v8 >= 0 )
            {
              SymbolicLinkObject = ZwCreateSection();
              if ( SymbolicLinkObject >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                v48 = v90;
                LOWORD(v47) = v47 - 8;
                HIWORD(v47) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 368), (unsigned __int16 *)&v47);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = v48;
                v11 = ZwMapViewOfSection();
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v11;
                if ( v11 == 1073741827 )
                  SymbolicLinkObject = sub_1800867F4(v49);
                if ( SymbolicLinkObject >= 0 )
                {
                  v12 = RtlImageNtHeader((unsigned __int64)v49);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = v49;
                  *(_QWORD *)(a5 + 48) = v49;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v12 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v12 + 8);
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v15 = *(_OWORD *)(a5 + 368);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v15;
                  v16 = *(_WORD *)(a5 + 72);
                  v17 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v17 + 2 * (((unsigned __int64)v16 >> 1) - 1)); (unsigned __int64)i > v17; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v19 = *(_WORD *)(a5 + 74);
                    v20 = i + 1;
                    *(_QWORD *)(a5 + 96) = v20;
                    v21 = 2 * ((__int64)((__int64)v20 - v17) >> 1);
                    *(_WORD *)(a5 + 88) = v16 - v21;
                    *(_WORD *)(a5 + 90) = v19 - v21;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v15;
LABEL_26:
                  if ( *(_DWORD *)(v13 + 40) )
                    v22 = &v14[*(unsigned int *)(v13 + 40)];
                  else
                    v22 = 0LL;
                  *(_QWORD *)(a5 + 56) = v22;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v13 + 48);
                  *(_QWORD *)(a5 + 152) = v5;
                  memset(v5, 0, 0x50uLL);
                  *(_QWORD *)(a5 + 296) = a5 + 288;
                  *v5 = (__int64)v5;
                  *(_QWORD *)(a5 + 160) = v5;
                  *(_QWORD *)(a5 + 168) = v5;
                  *v5 = a5 + 160;
                  *(_QWORD *)(a5 + 296) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v23 = *v5;
                  *(_DWORD *)(a5 + 312) = -1;
                  *(_WORD *)(v23 - 52) = -1;
                  Section = ZwQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_44;
                  }
                  if ( v63 )
                    *(_QWORD *)(a5 + 248) -= v63;
                  if ( (*(_WORD *)(v13 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = sub_180032C0C(*(_QWORD *)(a5 + 48), 1, 1u, &v61, (__int64 *)&v64);
                  v26 = v64;
                  if ( v25 < 0 )
                    v26 = 0LL;
                  if ( !v26 )
                  {
LABEL_18:
                    SymbolicLinkObject = -1073741701;
                    goto LABEL_44;
                  }
                  v27 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v26);
                  v28 = *(_QWORD *)(a5 + 48) + v26[4];
                  if ( *v27 )
                  {
                    memset(v88, 0, sizeof(v88));
                    v88[6] = a5;
                    SymbolicLinkObject = sub_18003999C(v88);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v88[12] )
                      {
                        v30 = v65;
                        v31 = v28 - (_QWORD)v27;
                        while ( 1 )
                        {
                          SymbolicLinkObject = sub_180030914(
                                                 v30,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v27 + 2LL),
                                                 0,
                                                 (_QWORD *)((char *)v27 + v31));
                          if ( SymbolicLinkObject < 0 )
                            break;
                          if ( !*++v27 )
                          {
                            ZwProtectVirtualMemory();
                            if ( sub_180030138() )
                              SymbolicLinkObject = sub_180001328(*(_QWORD *)(v88[6] + 48LL), 0, 0);
                            if ( SymbolicLinkObject < 0 )
                              break;
                            goto LABEL_61;
                          }
                        }
                      }
                      else
                      {
                        SymbolicLinkObject = -1073741701;
                      }
                    }
                  }
                  else
                  {
LABEL_61:
                    if ( (*(_DWORD *)(a5 + 104) & 0x2004) == 4 )
                    {
                      v60 = 0LL;
                      v32 = sub_18003A4FC();
                      sub_18003A528(
                        *(_QWORD *)(a5 + 48),
                        *(_DWORD *)(a5 + 64),
                        0LL,
                        v32 ^ (unsigned int)dword_18016B358,
                        &v60);
                      SymbolicLinkObject = sub_180039F38(a5, (unsigned __int16 *)v13, v60);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_44;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      sub_180039AE0((unsigned __int64)v49, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v33 = *(_QWORD *)(a5 + 48);
                    v34 = *(_QWORD *)(a5 + 56);
                    v69 = sub_1800F9090;
                    v68 = 144;
                    v79 = sub_180008E00;
                    v76 = 0LL;
                    v70 = sub_1800DB0B0;
                    v71 = sub_1800F8C80;
                    v80 = sub_1800F8CA0;
                    v81 = sub_1800F8D00;
                    v82 = sub_1800F8CC0;
                    v83 = sub_1800F8F30;
                    v84 = sub_1800F8F80;
                    v72 = v66;
                    v78 = v67;
                    v73 = RtlCommitDebugInfo;
                    v74 = RtlSetProcessDebugInformation;
                    v75 = LdrQueryImageFileExecutionOptionsEx;
                    v51 = &v68;
                    v77 = 0LL;
                    if ( sub_180043C64(v34, v33, 5)
                      && v51 == &v68
                      && (v35 = v77) != 0LL
                      && *v77 == 80
                      && (v36 = (_OWORD *)*((_QWORD *)&v76 + 1)) != 0LL
                      && **((_DWORD **)&v76 + 1) == 176 )
                    {
                      v37 = *(_OWORD *)(*((_QWORD *)&v76 + 1) + 16LL);
                      unk_180155408 = **((_OWORD **)&v76 + 1);
                      v38 = *(_OWORD *)(*((_QWORD *)&v76 + 1) + 32LL);
                      *((_OWORD *)&unk_180155408 + 1) = v37;
                      v39 = v36[3];
                      *((_OWORD *)&unk_180155408 + 2) = v38;
                      v40 = v36[4];
                      *((_OWORD *)&unk_180155408 + 3) = v39;
                      v41 = v36[5];
                      *((_OWORD *)&unk_180155408 + 4) = v40;
                      v42 = v36[6];
                      *((_OWORD *)&unk_180155408 + 5) = v41;
                      v43 = v36[8];
                      *((_OWORD *)&unk_180155408 + 6) = v42;
                      *((_OWORD *)&unk_180155408 + 7) = v36[7];
                      v44 = v36[9];
                      *((_OWORD *)&unk_180155408 + 8) = v43;
                      v45 = v36[10];
                      *((_OWORD *)&unk_180155408 + 9) = v44;
                      *((_OWORD *)&unk_180155408 + 10) = v45;
                      off_1801553F0 = (void *)v76;
                      v35[10] = dword_18015AE48;
                      v35[11] = dword_18015C494;
                      v46 = *(_QWORD *)(a5 + 48);
                      v49 = 0LL;
                      sub_18003CA5C(v46, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
                    }
                    else
                    {
                      SymbolicLinkObject = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v8 == -1073741772 )
            {
LABEL_9:
              SymbolicLinkObject = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_44:
  if ( v49 )
  {
    ZwUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( v52 )
    ZwClose();
  if ( v50 )
    ZwClose();
  if ( v53 )
    ZwClose();
  if ( v54 )
    ZwClose();
  return (unsigned int)SymbolicLinkObject;
}
