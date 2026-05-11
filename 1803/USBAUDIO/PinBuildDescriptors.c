/*
 * XREFs of PinBuildDescriptors @ 0x1C001926C
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0018328 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000A580 (memset.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, char **a2, _DWORD *a3, _DWORD *a4)
{
  char *PoolWithTag; // r13
  __int64 *v7; // r15
  int v8; // edi
  __int64 *v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  __int64 v15; // rsi
  unsigned int v16; // ebx
  int v17; // eax
  NTSTATUS v18; // edi
  unsigned __int64 v19; // rax
  unsigned int v20; // r8d
  int v21; // ebx
  unsigned int v22; // edx
  unsigned int v23; // r14d
  signed int v24; // ecx
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ebx
  unsigned __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // r10d
  unsigned __int64 v33; // rax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // r9d
  unsigned __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  size_t v40; // rbx
  unsigned int v41; // ebx
  __int64 v42; // r12
  unsigned int v43; // r14d
  __int64 v44; // r9
  unsigned int v45; // esi
  char *v46; // r9
  char *v47; // r12
  char *v48; // r8
  __int64 *v49; // r10
  char *v50; // rbx
  __int64 *v51; // r13
  _QWORD *v52; // r12
  __int64 v53; // rax
  char v54; // cl
  __int64 v55; // rcx
  bool v56; // si
  __int64 v57; // rdx
  char *v58; // rcx
  unsigned int v59; // ecx
  bool v60; // r8
  __int64 v61; // r10
  unsigned int v62; // r11d
  __int64 v63; // rdx
  __int64 v64; // r9
  __int64 v65; // rcx
  unsigned int v66; // edx
  __int64 v67; // rax
  char v68; // cl
  __int64 v69; // rcx
  __int64 v70; // rax
  char v71; // cl
  __int64 v72; // rcx
  unsigned int v73; // r11d
  __int64 v74; // r14
  __int64 v75; // rax
  char v76; // cl
  char v77; // cl
  bool v78; // r10
  __int64 v79; // r8
  __int64 v80; // rax
  char v81; // cl
  char v82; // r9
  __int64 v83; // rcx
  _UNKNOWN **v84; // rax
  char *v85; // rdx
  char v86; // cl
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  char v90; // cl
  bool v91; // cf
  unsigned __int16 *v92; // rcx
  __int64 v93; // r9
  __int64 v94; // r8
  int v95; // ecx
  int v96; // eax
  GUID v97; // xmm0
  GUID v98; // xmm0
  unsigned int v100; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v101; // [rsp+54h] [rbp-25h] BYREF
  int v102; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v103; // [rsp+5Ch] [rbp-1Dh]
  char *v104; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v105; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v106; // [rsp+70h] [rbp-9h]
  char *v107; // [rsp+78h] [rbp-1h]
  char *v108; // [rsp+80h] [rbp+7h]
  char *v109; // [rsp+88h] [rbp+Fh]
  char *v110; // [rsp+90h] [rbp+17h]
  __int64 v111; // [rsp+98h] [rbp+1Fh]
  unsigned int v113; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v114; // [rsp+F8h] [rbp+7Fh] BYREF

  v111 = *(_QWORD *)(a1 + 16);
  v102 = 0;
  v113 = 0;
  PoolWithTag = 0LL;
  v7 = (__int64 *)(v111 + 80);
  v101 = 0;
  v114 = 0;
  v8 = 0;
  v9 = *(__int64 **)(v111 + 80);
  v10 = 0;
  v107 = 0LL;
  v11 = 0;
  v106 = 0;
  v12 = 0;
  v103 = 0;
  v13 = 0;
  v14 = 0;
  if ( v9 != (__int64 *)(v111 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v9 + 5) <= 1u )
      {
        if ( *((_BYTE *)v9 + 72) )
          ++v13;
        else
          ++v14;
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != v7 );
    v103 = v14;
    v106 = v13;
  }
  v15 = v13 + v14;
  *a3 = v15;
  *a4 = 176;
  v16 = 0;
  if ( v13 )
  {
    do
    {
      v100 = 0;
      LODWORD(v104) = 0;
      LODWORD(v105) = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, unsigned int *, char **, __int64 **))(pExtBusDeviceDispatchTable + 72))(
              a1,
              v16,
              0LL,
              0LL,
              0LL,
              &v102,
              &v100,
              &v104,
              &v105);
      v10 = v113;
      v11 = v101;
      v18 = v17;
      v12 = v114;
      if ( v17 >= 0 )
      {
        v10 = v100 + v113;
        v11 = (_DWORD)v104 + v101;
        v12 = (_DWORD)v105 + v114;
        v114 += (unsigned int)v105;
        v113 += v100;
        v101 += (unsigned int)v104;
      }
      ++v16;
    }
    while ( v16 < v13 );
    PoolWithTag = 0LL;
    if ( v17 < 0 )
      return (unsigned int)v18;
    v8 = v102;
  }
  v19 = 336 * v15;
  v20 = -1;
  v21 = 0;
  v22 = -1;
  if ( (unsigned __int64)(336 * v15) <= 0xFFFFFFFF )
    v22 = 336 * v15;
  v23 = v22;
  v24 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v19 <= 0xFFFFFFFF )
  {
    v25 = v10 * (unsigned __int64)(unsigned int)(v8 + 8);
    v21 = -1;
    if ( v25 <= 0xFFFFFFFF )
      v21 = v10 * (v8 + 8);
    v24 = v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  if ( v24 < 0 )
    goto LABEL_37;
  v26 = v21 + v22;
  v27 = -1;
  if ( v21 + v22 >= v22 )
    v27 = v21 + v22;
  v22 = v27;
  v28 = v27;
  if ( v26 < v23 )
    goto LABEL_37;
  v29 = 8LL * v11;
  if ( v29 > 0xFFFFFFFF )
    goto LABEL_37;
  v30 = v28 + v29;
  v31 = -1;
  if ( v30 >= v28 )
    v31 = v30;
  v22 = v31;
  v32 = v31;
  if ( v30 < v28 )
    goto LABEL_37;
  v33 = 16LL * v12;
  if ( v33 > 0xFFFFFFFF )
    goto LABEL_37;
  v34 = v22 + v33;
  v35 = -1;
  if ( v34 >= v22 )
    v35 = v34;
  v22 = v35;
  v36 = v35;
  if ( v34 < v32 )
    goto LABEL_37;
  v37 = 16LL * v103;
  if ( v37 > 0xFFFFFFFF )
    goto LABEL_37;
  v38 = v22 + v37;
  v39 = v22;
  if ( v38 >= v22 )
    v20 = v38;
  v22 = v20;
  v18 = v38 < v39 ? 0xC0000095 : 0;
  if ( v38 < v36 )
  {
LABEL_37:
    v18 = -1073741436;
    v40 = v22;
  }
  else
  {
    v40 = v20;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x41627845u);
    v107 = PoolWithTag;
    *a2 = PoolWithTag;
  }
  if ( v18 >= 0 && PoolWithTag )
  {
    memset(PoolWithTag, 0, v40);
    v41 = v103;
    v42 = 5 * v15;
    v43 = v106;
    v44 = 176 * v15;
    v45 = 0;
    v46 = &PoolWithTag[v44];
    v47 = &v46[32 * v42];
    v48 = &v47[16 * v103];
    v109 = v46;
    v110 = v47;
    v108 = &v48[16 * v114];
    v104 = v48;
    v100 = 0;
    v49 = (__int64 *)&v108[8 * v113 + 8 * (unsigned __int64)v101];
    v105 = v49;
    if ( v106 )
    {
      v50 = PoolWithTag + 68;
      v51 = (__int64 *)v108;
      v52 = v46 + 8;
      do
      {
        if ( v18 < 0 )
          break;
        v53 = *v7;
        v54 = 0;
        while ( (__int64 *)v53 != v7 && !v54 )
        {
          if ( *(_DWORD *)(v53 + 20) < 2u && *(_DWORD *)(v53 + 64) == v45 )
            v54 = 1;
          else
            v53 = *(_QWORD *)v53;
        }
        v55 = v53 & -(__int64)(v54 != 0);
        v56 = v55 && *(_DWORD *)(v55 + 68) == 257 && *(_DWORD *)(v55 + 76) == 2;
        *(_QWORD *)(v50 - 68) = &PinDispatch;
        if ( v56 )
        {
          *(_QWORD *)(v50 - 60) = 0LL;
        }
        else
        {
          *(_QWORD *)(v50 - 60) = &v46[48 * v100];
          *((_DWORD *)v52 - 2) = 5;
          *((_DWORD *)v52 - 1) = 72;
          *v52 = &off_1C000C1A0;
        }
        *(_QWORD *)(v50 - 44) = &PinInterface;
        v57 = v100;
        *((_DWORD *)v50 - 13) = 1;
        *((_DWORD *)v50 - 9) = 1;
        *(_QWORD *)(v50 - 28) = &PinMedium;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *, char *, int *, unsigned int *, unsigned int *, unsigned int *))(pExtBusDeviceDispatchTable + 72))(
                a1,
                v57,
                v51,
                v49,
                v48,
                &v102,
                &v113,
                &v101,
                &v114);
        if ( v18 < 0 )
        {
          v49 = v105;
        }
        else
        {
          v58 = v104;
          *(_QWORD *)(v50 + 100) = v104;
          *((_DWORD *)v50 + 23) = v114;
          v104 = &v58[16 * v114];
          v59 = v113 + v101;
          *((_DWORD *)v50 - 5) = v113 + v101;
          *(_QWORD *)(v50 - 12) = v51;
          if ( v113 <= 1 )
          {
            v50[80] = 0;
            *((_DWORD *)v50 + 10) = 1;
            *((_DWORD *)v50 + 17) = 1;
          }
          else
          {
            *((_DWORD *)v50 + 17) = 1;
            v60 = 0;
            v61 = *v51;
            v62 = v59;
            v63 = (unsigned int)((*(_DWORD *)(*v51 + 4) & 2) != 0) + 1;
            if ( (unsigned int)v63 < v59 )
            {
              do
              {
                if ( v60 )
                  break;
                v64 = v51[v63];
                v65 = *(_QWORD *)(v61 + 32) - *(_QWORD *)(v64 + 32);
                if ( !v65 )
                  v65 = *(_QWORD *)(v61 + 40) - *(_QWORD *)(v64 + 40);
                v60 = v65 != 0;
                v63 = ((*(_DWORD *)(v64 + 4) & 2) != 0) + 1 + (unsigned int)v63;
              }
              while ( (unsigned int)v63 < v62 );
            }
            v50[80] = v60;
            *((_DWORD *)v50 + 10) = v60 + 1;
          }
          *((_DWORD *)v50 + 11) = 0;
          v18 = -1073741275;
          *((_DWORD *)v50 + 18) = 0;
          v51 += v113 + v101;
          v66 = v100;
          v49 = (__int64 *)((char *)v105 + v102 * v113);
          v67 = *v7;
          v68 = 0;
          v105 = v49;
          while ( (__int64 *)v67 != v7 && !v68 )
          {
            if ( *(_DWORD *)(v67 + 20) < 2u && *(_DWORD *)(v67 + 64) == v100 )
              v68 = 1;
            else
              v67 = *(_QWORD *)v67;
          }
          v69 = v67 & -(__int64)(v68 != 0);
          if ( v69 )
          {
            *((_DWORD *)v50 - 1) = (*(_DWORD *)(v69 + 20) != 0) + 1;
            v18 = 0;
          }
          if ( v18 >= 0 )
          {
            *((_DWORD *)v50 + 9) = 2;
            if ( v56 )
            {
              *(_QWORD *)(v50 + 60) = PinMIDIDataFormatIntersection;
              *(_QWORD *)(v50 + 4) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
              if ( *((_DWORD *)v50 - 1) == 1 )
              {
                *(_DWORD *)v50 = 1;
                *((_DWORD *)v50 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v50 = 3;
                *((_DWORD *)v50 + 9) |= 8u;
              }
            }
            else
            {
              *(_QWORD *)(v50 + 60) = PinDataFormatIntersection;
              if ( *((_DWORD *)v50 - 1) == 1 )
              {
                *(_DWORD *)v50 = 1;
                *(_QWORD *)(v50 + 4) = &KSCATEGORY_AUDIO;
                *((_DWORD *)v50 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v50 = 3;
                *(_QWORD *)(v50 + 4) = &PINNAME_VIDEO_CAPTURE;
                *((_DWORD *)v50 + 9) |= 0x10000u;
              }
              v70 = *v7;
              v18 = -1073741275;
              v71 = 0;
              while ( (__int64 *)v70 != v7 && !v71 )
              {
                if ( *(_DWORD *)(v70 + 20) < 2u && *(_DWORD *)(v70 + 64) == v66 )
                  v71 = 1;
                else
                  v70 = *(_QWORD *)v70;
              }
              v72 = v70 & -(__int64)(v71 != 0);
              if ( v72 )
              {
                v18 = 0;
                *((_DWORD *)v50 + 19) = *(_DWORD *)(v72 + 28);
              }
            }
            *(_QWORD *)(v50 + 52) = &AllocatorFraming;
          }
        }
        v48 = v104;
        v45 = v100 + 1;
        v52 += 6;
        v46 = v109;
        v50 += 176;
        v100 = v45;
      }
      while ( v45 < v43 );
      PoolWithTag = v107;
      v41 = v103;
      v47 = v110;
    }
    v73 = 0;
    if ( v41 )
    {
      v74 = v111;
      while ( 1 )
      {
        if ( v18 < 0 )
          goto LABEL_174;
        v75 = *v7;
        v76 = 0;
        while ( (__int64 *)v75 != v7 && !v76 )
        {
          if ( *(_DWORD *)(v75 + 20) < 2u && *(_DWORD *)(v75 + 64) == v45 )
            v76 = 1;
          else
            v75 = *(_QWORD *)v75;
        }
        v77 = -v76;
        v78 = (v75 & -(__int64)(v77 != 0)) != 0 && *(_DWORD *)((v75 & -(__int64)(v77 != 0)) + 0x44) == 2305;
        v79 = 176LL * v45;
        *(_DWORD *)&PoolWithTag[v79 + 136] = 0;
        *(_DWORD *)&PoolWithTag[v79 + 140] = 0;
        v80 = *v7;
        v81 = 0;
        while ( (__int64 *)v80 != v7 && !v81 )
        {
          if ( *(_DWORD *)(v80 + 20) < 2u && *(_DWORD *)(v80 + 64) == v45 )
            v81 = 1;
          else
            v80 = *(_QWORD *)v80;
        }
        v82 = 0;
        v83 = v80 & -(__int64)(v81 != 0);
        if ( v83 && *(_DWORD *)(v83 + 20) == 1 && (*(_DWORD *)(v83 + 68) == 1538 || *(_DWORD *)(v83 + 68) == 1541) )
          v82 = 1;
        PoolWithTag[v79 + 149] = v82;
        *(_QWORD *)&PoolWithTag[v79] = 0LL;
        *(_QWORD *)&PoolWithTag[v79 + 8] = 0LL;
        v18 = -1073741275;
        *(_DWORD *)&PoolWithTag[v79 + 108] = 0;
        *(_DWORD *)&PoolWithTag[v79 + 112] = 0;
        *(_QWORD *)&PoolWithTag[v79 + 24] = &PinInterface;
        *(_QWORD *)&PoolWithTag[v79 + 40] = &PinMedium;
        v84 = &pAudioBridgePinFormats;
        if ( v78 )
          v84 = &pMIDIBridgePinFormats;
        *(_DWORD *)&PoolWithTag[v79 + 16] = 1;
        v85 = &v47[16 * v73];
        *(_DWORD *)&PoolWithTag[v79 + 32] = 1;
        *(_QWORD *)&PoolWithTag[v79 + 72] = v85;
        v86 = 0;
        *(_DWORD *)&PoolWithTag[v79 + 48] = 1;
        *(_QWORD *)&PoolWithTag[v79 + 56] = v84;
        *(_DWORD *)&PoolWithTag[v79 + 68] = 4;
        v87 = *v7;
        while ( (__int64 *)v87 != v7 && !v86 )
        {
          if ( *(_DWORD *)(v87 + 20) < 2u && *(_DWORD *)(v87 + 64) == v45 )
            v86 = 1;
          else
            v87 = *(_QWORD *)v87;
        }
        v88 = v87 & -(__int64)(v86 != 0);
        if ( v88 )
        {
          *(_DWORD *)&PoolWithTag[v79 + 64] = (*(_DWORD *)(v88 + 20) != 0) + 1;
          v18 = 0;
        }
        if ( v18 >= 0 )
        {
          v89 = *v7;
          v90 = 0;
          while ( (__int64 *)v89 != v7 && !v90 )
          {
            if ( *(_DWORD *)(v89 + 20) < 2u && *(_DWORD *)(v89 + 64) == v45 )
              v90 = 1;
            else
              v89 = *(_QWORD *)v89;
          }
          v91 = v90 != 0;
          v92 = (unsigned __int16 *)&unk_1C000CC62;
          v93 = v89 & -(__int64)v91;
          v94 = 0LL;
          while ( *(_DWORD *)(v74 + 40) != *(v92 - 1) || *(_DWORD *)(v74 + 44) != *v92 )
          {
            v94 = (unsigned int)(v94 + 1);
            v92 += 4;
            if ( (unsigned int)v94 >= 0xA )
            {
              LOBYTE(v95) = 0;
              goto LABEL_147;
            }
          }
          v95 = dword_1C000CC64[2 * v94];
LABEL_147:
          *(GUID *)v85 = GUID_NULL;
          if ( v93 )
            break;
        }
LABEL_171:
        ++v73;
        ++v45;
        if ( v73 >= v41 )
          goto LABEL_172;
      }
      v96 = *(_DWORD *)((v89 & -(__int64)v91) + 0x44);
      if ( v96 == 2305 )
      {
        v97 = KSCATEGORY_AUDIO;
LABEL_170:
        *(GUID *)v85 = v97;
        goto LABEL_171;
      }
      *((_DWORD *)v85 + 1) = 298907407;
      *(_DWORD *)v85 = (unsigned __int16)v96 - 537781792;
      *((_DWORD *)v85 + 2) = -1610606663;
      *((_DWORD *)v85 + 3) = -1775164727;
      if ( (v95 & 1) != 0 )
      {
        if ( *(_QWORD *)v85 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *((_QWORD *)v85 + 1) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
        {
          v98 = KSNODETYPE_COMMUNICATION_SPEAKER;
        }
        else
        {
          if ( *(_QWORD *)v85 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
            || *((_QWORD *)v85 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
          {
            goto LABEL_165;
          }
          v98 = KSNODETYPE_PERSONAL_MICROPHONE;
        }
      }
      else
      {
        if ( (v95 & 2) == 0
          || (*(_QWORD *)v85 != *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
           || *((_QWORD *)v85 + 1) != *(_QWORD *)KSNODETYPE_SPEAKER.Data4)
          && (*(_QWORD *)v85 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
           || *((_QWORD *)v85 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
        {
          goto LABEL_165;
        }
        v98 = KSNODETYPE_HANDSET;
      }
      *(GUID *)v85 = v98;
LABEL_165:
      if ( *(_QWORD *)v85 != *(_QWORD *)&KSNODETYPE_HEADSET.Data1
        || *((_QWORD *)v85 + 1) != *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
      {
        goto LABEL_171;
      }
      if ( *(_DWORD *)(v93 + 20) )
        v97 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v97 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_170;
    }
LABEL_172:
    if ( v18 < 0 || (v18 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool), v18 < 0) )
LABEL_174:
      ExFreePool(PoolWithTag);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v18;
}
