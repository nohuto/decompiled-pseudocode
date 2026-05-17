/*
 * XREFs of sub_1800D5B04 @ 0x1800D5B04
 * Callers:
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_18002AE58 @ 0x18002AE58 (sub_18002AE58.c)
 *     sub_18002B1E8 @ 0x18002B1E8 (sub_18002B1E8.c)
 *     sub_18002B488 @ 0x18002B488 (sub_18002B488.c)
 *     sub_18002B540 @ 0x18002B540 (sub_18002B540.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     ZwQuerySection @ 0x18009B4E0 (ZwQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18009B5C0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009CF70 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x18009D570 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800D5B04(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  int v7; // eax
  struct _TEB *v8; // rdi
  PVOID ArbitraryUserPointer; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r15
  char *v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  char *v21; // rax
  __int64 v22; // rax
  int Section; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int *v27; // rdx
  _DWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  _OWORD *v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rcx
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v50; // [rsp+58h] [rbp-A8h]
  char *v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+70h] [rbp-90h] BYREF
  int *v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  int v58; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+B0h] [rbp-50h]
  __int128 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v64; // [rsp+D0h] [rbp-30h]
  int v65; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  __int64 v68; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v69; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  int v72; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v73)(); // [rsp+118h] [rbp+18h]
  struct _PEB *(__fastcall *v74)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v75)(); // [rsp+128h] [rbp+28h]
  __int64 v76; // [rsp+130h] [rbp+30h]
  char *(__fastcall *v77)(_QWORD *, unsigned int); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v78)(HANDLE, int, __int64); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v79)(__int64, __int64, unsigned int, __int64, int, __int64); // [rsp+148h] [rbp+48h]
  __int128 v80; // [rsp+150h] [rbp+50h]
  _DWORD *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  unsigned __int64 v83; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v84)(unsigned __int16, unsigned __int16); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v85)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v86)(); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v87)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v88)(_QWORD, _QWORD); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v89)(_QWORD, _QWORD); // [rsp+1A0h] [rbp+A0h]
  UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v91; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v92; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v93[24]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v94[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v95[520]; // [rsp+2E8h] [rbp+1E8h] BYREF

  v70 = a2;
  v56 = 0LL;
  v57 = 0LL;
  v52 = 0LL;
  v55 = 0LL;
  v51 = 0LL;
  v66 = 0LL;
  v54 = 0LL;
  v64 = a4;
  v71 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  v59 = 0LL;
  p_DestinationString = &DestinationString;
  v58 = 48;
  v61 = 64;
  v62 = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v91, L"KnownDllPath");
    v59 = v56;
    v58 = 48;
    p_DestinationString = &v91;
    v61 = 64;
    v62 = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      v50 = v95;
      v94[0] = 4128860;
      v94[1] = 6029375;
      v49 = 0x2000000;
      SymbolicLinkObject = ZwQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        v50 = v94;
        LOWORD(v49) = v49 + 8;
        HIWORD(v49) += 8;
        RtlInitUnicodeString(&v92, "\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v49, (__int16 *)&v92);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v49, word_180111318);
          if ( SymbolicLinkObject >= 0 )
          {
            v58 = 48;
            p_DestinationString = (UNICODE_STRING *)&v49;
            v59 = 0LL;
            v61 = 64;
            v62 = 0LL;
            AttributesFile = ZwQueryAttributesFile();
            if ( AttributesFile < 0 && AttributesFile != -1073741757 && AttributesFile != -1073741790 )
              goto LABEL_9;
            v7 = ZwOpenFile();
            SymbolicLinkObject = v7;
            if ( v7 >= 0 )
            {
              SymbolicLinkObject = ZwCreateSection();
              if ( SymbolicLinkObject >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                v50 = v95;
                LOWORD(v49) = v49 - 8;
                HIWORD(v49) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 368), (unsigned __int16 *)&v49);
                v8 = NtCurrentTeb();
                ArbitraryUserPointer = v8->NtTib.ArbitraryUserPointer;
                v8->NtTib.ArbitraryUserPointer = v50;
                v10 = ZwMapViewOfSection();
                v8->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v10;
                if ( v10 == 1073741827 )
                  SymbolicLinkObject = sub_1800828E0(v51);
                if ( SymbolicLinkObject >= 0 )
                {
                  v11 = RtlImageNtHeader((unsigned __int64)v51);
                  v12 = v11;
                  if ( !v11 )
                    goto LABEL_18;
                  v13 = v51;
                  *(_QWORD *)(a5 + 48) = v51;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v11 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v11 + 8);
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v14 = *(_OWORD *)(a5 + 368);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v14;
                  v15 = *(_WORD *)(a5 + 72);
                  v16 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v16 + 2 * (((unsigned __int64)v15 >> 1) - 1)); (unsigned __int64)i > v16; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v18 = *(_WORD *)(a5 + 74);
                    v19 = i + 1;
                    *(_QWORD *)(a5 + 96) = v19;
                    v20 = 2 * ((__int64)((__int64)v19 - v16) >> 1);
                    *(_WORD *)(a5 + 88) = v15 - v20;
                    *(_WORD *)(a5 + 90) = v18 - v20;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v14;
LABEL_26:
                  if ( *(_DWORD *)(v12 + 40) )
                    v21 = &v13[*(unsigned int *)(v12 + 40)];
                  else
                    v21 = 0LL;
                  *(_QWORD *)(a5 + 56) = v21;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v12 + 48);
                  *(_QWORD *)(a5 + 152) = a5 + 288;
                  memset((void *)(a5 + 288), 0, 0x50uLL);
                  *(_QWORD *)(a5 + 160) = a5 + 288;
                  *(_QWORD *)(a5 + 168) = a5 + 288;
                  *(_QWORD *)(a5 + 288) = a5 + 160;
                  *(_QWORD *)(a5 + 296) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v22 = *(_QWORD *)(a5 + 288);
                  *(_DWORD *)(a5 + 312) = -1;
                  *(_WORD *)(v22 - 52) = -1;
                  Section = ZwQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_49;
                  }
                  if ( v67 )
                    *(_QWORD *)(a5 + 248) -= v67;
                  if ( (*(_WORD *)(v12 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v24 = sub_18001014C(*(_QWORD *)(a5 + 48), 1, 9u, &v53, &v68);
                  v25 = v68;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v53 )
                  {
                    DbgPrintEx(93, 0, (int)"AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = sub_18001014C(*(_QWORD *)(a5 + 48), 1, 1u, &v65, (__int64 *)&v69);
                  v27 = v69;
                  if ( v26 < 0 )
                    v27 = 0LL;
                  if ( !v27 )
                  {
LABEL_18:
                    SymbolicLinkObject = -1073741701;
                    goto LABEL_49;
                  }
                  v28 = (_DWORD *)(*(_QWORD *)(a5 + 48) + *v27);
                  v29 = *(_QWORD *)(a5 + 48) + v27[4];
                  if ( *(_QWORD *)v28 )
                  {
                    memset(v93, 0, sizeof(v93));
                    v93[7] = a5;
                    SymbolicLinkObject = sub_18002B540((__int64)v93);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v93[13] )
                      {
                        LODWORD(v31) = *v28;
                        v32 = v29 - (_QWORD)v28;
                        while ( 1 )
                        {
                          SymbolicLinkObject = sub_18000FA60(
                                                 v64,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + (unsigned int)v31 + 2LL),
                                                 0,
                                                 (char **)((char *)v28 + v32));
                          if ( SymbolicLinkObject < 0 )
                            break;
                          v28 += 2;
                          v31 = *(_QWORD *)v28;
                          if ( !*(_QWORD *)v28 )
                          {
                            ZwProtectVirtualMemory();
                            if ( (unsigned int)sub_18001F704() )
                              SymbolicLinkObject = sub_18004FEB8(*(_QWORD *)(v93[7] + 48LL), 0, 0);
                            if ( SymbolicLinkObject < 0 )
                              break;
                            goto LABEL_66;
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
LABEL_66:
                    v33 = *(_DWORD *)(a5 + 104);
                    if ( (v33 & 0x2004) == 4 )
                    {
                      v63 = 0LL;
                      v34 = sub_18002B488();
                      sub_18002B1E8(
                        *(_QWORD *)(a5 + 48),
                        *(_DWORD *)(a5 + 64),
                        0LL,
                        v34 ^ (unsigned int)dword_18016F368,
                        &v63);
                      SymbolicLinkObject = sub_180023700(a5, (unsigned __int16 *)v12, v63);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v33 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v33 & 0x200) == 0 )
                    {
                      sub_18002AE58((unsigned __int64)v51, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v35 = *(_QWORD *)(a5 + 48);
                    v36 = *(_QWORD *)(a5 + 56);
                    v73 = sub_1800F6B90;
                    v72 = 152;
                    v84 = sub_180029E80;
                    v80 = 0LL;
                    v74 = sub_1800D4850;
                    v75 = sub_1800F6780;
                    v85 = sub_1800F67A0;
                    v86 = sub_1800F6800;
                    v87 = sub_1800F67C0;
                    v88 = sub_1800F6A30;
                    v89 = sub_1800F6A80;
                    v76 = v70;
                    v82 = v71;
                    v77 = RtlCommitDebugInfo;
                    v78 = RtlSetProcessDebugInformation;
                    v79 = LdrQueryImageFileExecutionOptionsEx;
                    v83 = v64;
                    v54 = &v72;
                    v81 = 0LL;
                    if ( sub_18003B518(v36, v35, 5)
                      && v54 == &v72
                      && (v37 = v81) != 0LL
                      && *v81 == 80
                      && (v38 = (_OWORD *)*((_QWORD *)&v80 + 1)) != 0LL
                      && **((_DWORD **)&v80 + 1) == 176 )
                    {
                      v39 = *(_OWORD *)(*((_QWORD *)&v80 + 1) + 16LL);
                      unk_1801563F8 = **((_OWORD **)&v80 + 1);
                      v40 = *(_OWORD *)(*((_QWORD *)&v80 + 1) + 32LL);
                      *((_OWORD *)&unk_1801563F8 + 1) = v39;
                      v41 = v38[3];
                      *((_OWORD *)&unk_1801563F8 + 2) = v40;
                      v42 = v38[4];
                      *((_OWORD *)&unk_1801563F8 + 3) = v41;
                      v43 = v38[5];
                      *((_OWORD *)&unk_1801563F8 + 4) = v42;
                      v44 = v38[6];
                      *((_OWORD *)&unk_1801563F8 + 5) = v43;
                      v45 = v38[8];
                      *((_OWORD *)&unk_1801563F8 + 6) = v44;
                      *((_OWORD *)&unk_1801563F8 + 7) = v38[7];
                      v46 = v38[9];
                      *((_OWORD *)&unk_1801563F8 + 8) = v45;
                      v47 = v38[10];
                      *((_OWORD *)&unk_1801563F8 + 9) = v46;
                      *((_OWORD *)&unk_1801563F8 + 10) = v47;
                      off_1801563E0 = (void *)v80;
                      v37[10] = dword_18015B300;
                      v37[11] = dword_18015D498;
                      v48 = *(_QWORD *)(a5 + 48);
                      v51 = 0LL;
                      sub_18003BC9C(v48, a5 + 72, 0x14AEu);
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
            else if ( v7 == -1073741772 )
            {
LABEL_9:
              SymbolicLinkObject = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_49:
  if ( v51 )
  {
    ZwUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( v55 )
    ZwClose();
  if ( v52 )
    ZwClose();
  if ( v56 )
    ZwClose();
  if ( v57 )
    ZwClose();
  return (unsigned int)SymbolicLinkObject;
}
