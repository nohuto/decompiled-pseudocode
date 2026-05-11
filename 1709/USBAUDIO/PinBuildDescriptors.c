/*
 * XREFs of PinBuildDescriptors @ 0x1C0014E2C
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0013EE8 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008440 (memset.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // edi
  unsigned int v6; // r10d
  __int64 *v7; // r15
  unsigned int v8; // r11d
  __int64 *v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  __int64 v13; // r14
  unsigned int v14; // esi
  int v15; // eax
  NTSTATUS v16; // edi
  unsigned __int64 v17; // rax
  int v18; // r9d
  SIZE_T v19; // rdx
  unsigned int v20; // r8d
  signed int v21; // ecx
  unsigned __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned __int64 v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // esi
  PVOID PoolWithTag; // rax
  char *v32; // r13
  __int64 v33; // r12
  unsigned int v34; // esi
  __int64 v35; // r8
  unsigned int v36; // r14d
  char *v37; // r8
  char *v38; // r12
  char *v39; // r9
  unsigned __int64 v40; // r10
  char *v41; // rbx
  __int64 v42; // r13
  _QWORD *v43; // r12
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rcx
  bool v47; // si
  __int64 v48; // rdx
  char *v49; // rcx
  unsigned int v50; // ecx
  bool v51; // r8
  __int64 v52; // r10
  unsigned int v53; // r11d
  __int64 v54; // rdx
  __int64 v55; // r9
  __int64 v56; // rcx
  unsigned int v57; // edx
  __int64 v58; // rax
  char v59; // cl
  __int64 v60; // rcx
  __int64 v61; // rax
  char v62; // cl
  __int64 v63; // rcx
  unsigned int v64; // ebx
  unsigned int v65; // r11d
  __int64 v66; // r14
  __int64 v67; // rax
  char v68; // cl
  char v69; // cl
  bool v70; // r10
  __int64 v71; // r8
  __int64 v72; // rax
  char v73; // cl
  char v74; // r9
  __int64 v75; // rcx
  _UNKNOWN **v76; // rax
  char *v77; // rdx
  char v78; // cl
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  char v82; // cl
  bool v83; // cf
  unsigned __int16 *v84; // rcx
  __int64 v85; // r9
  __int64 v86; // r8
  int v87; // ecx
  GUID v88; // xmm0
  int v89; // eax
  GUID v90; // xmm0
  unsigned int v92; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v93; // [rsp+54h] [rbp-25h] BYREF
  int v94; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v95; // [rsp+5Ch] [rbp-1Dh]
  char *v96; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v97; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v98; // [rsp+70h] [rbp-9h]
  __int64 v99; // [rsp+78h] [rbp-1h]
  char *v100; // [rsp+80h] [rbp+7h]
  char *v101; // [rsp+88h] [rbp+Fh]
  char *v102; // [rsp+90h] [rbp+17h]
  __int64 v103; // [rsp+98h] [rbp+1Fh]
  unsigned int v105; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v106; // [rsp+F8h] [rbp+7Fh] BYREF

  v103 = *(_QWORD *)(a1 + 16);
  v94 = 0;
  v5 = 0;
  v105 = 0;
  v6 = 0;
  v7 = (__int64 *)(v103 + 80);
  v93 = 0;
  v106 = 0;
  v8 = 0;
  v9 = *(__int64 **)(v103 + 80);
  v10 = 0;
  v99 = v103 + 80;
  v11 = 0;
  v98 = 0;
  v12 = 0;
  v95 = 0;
  if ( v9 != (__int64 *)(v103 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v9 + 5) <= 1u )
      {
        if ( *((_BYTE *)v9 + 72) )
          ++v11;
        else
          ++v12;
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != v7 );
    v95 = v12;
    v98 = v11;
  }
  v13 = v12 + v11;
  v14 = 0;
  *a3 = v13;
  *a4 = 176;
  if ( v11 )
  {
    do
    {
      v92 = 0;
      LODWORD(v96) = 0;
      LODWORD(v97) = 0;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, unsigned int *, char **, unsigned __int64 *))(pExtBusDeviceDispatchTable + 64))(
              a1,
              v14,
              0LL,
              0LL,
              0LL,
              &v94,
              &v92,
              &v96,
              &v97);
      v6 = v105;
      v8 = v93;
      v16 = v15;
      v10 = v106;
      if ( v15 >= 0 )
      {
        v6 = v92 + v105;
        v8 = (_DWORD)v96 + v93;
        v10 = v97 + v106;
        v106 += v97;
        v105 += v92;
        v93 += (unsigned int)v96;
      }
      ++v14;
    }
    while ( v14 < v11 );
    v7 = (__int64 *)v99;
    if ( v15 < 0 )
      return (unsigned int)v16;
    v5 = v94;
  }
  v17 = 336 * v13;
  v18 = 0;
  v19 = 0xFFFFFFFFLL;
  v20 = -1;
  if ( (unsigned __int64)(336 * v13) <= 0xFFFFFFFF )
    v20 = 336 * v13;
  v21 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v17 <= 0xFFFFFFFF )
  {
    v22 = v6 * (unsigned __int64)(unsigned int)(v5 + 8);
    v18 = -1;
    if ( v22 <= 0xFFFFFFFF )
      v18 = v6 * (v5 + 8);
    v21 = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  if ( v21 < 0 )
    return (unsigned int)-1073741670;
  if ( v18 + v20 < v20 )
    return (unsigned int)-1073741670;
  v23 = v18 + v20;
  v24 = 8LL * v8;
  if ( v24 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  if ( (unsigned int)v24 + v23 < v23 )
    return (unsigned int)-1073741670;
  v25 = v24 + v23;
  v26 = 16LL * v10;
  if ( v26 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  if ( (unsigned int)v26 + v25 < v25 )
    return (unsigned int)-1073741670;
  v27 = v26 + v25;
  v28 = 16LL * v95;
  if ( v28 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v29 = v27 + v28;
  if ( v27 + (unsigned int)v28 >= v27 )
    v19 = v29;
  v16 = v29 < v27 ? 0xC0000095 : 0;
  if ( v29 >= v27
    && (v30 = v19,
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v19, 0x41627845u),
        v101 = (char *)PoolWithTag,
        v32 = (char *)PoolWithTag,
        (*a2 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, v30);
    v33 = 5 * v13;
    v34 = 0;
    v35 = 176 * v13;
    v36 = v98;
    v37 = &v32[v35];
    v38 = &v37[32 * v33];
    v100 = v37;
    v102 = v38;
    v92 = 0;
    v39 = &v38[v28];
    v96 = &v38[v28];
    v99 = (__int64)&v38[16 * v106 + v28];
    v40 = v99 + 8 * (v105 + (unsigned __int64)v93);
    v97 = v40;
    if ( v98 )
    {
      v41 = v32 + 68;
      v42 = v99;
      v43 = v37 + 8;
      do
      {
        if ( v16 < 0 )
          break;
        v44 = *v7;
        v45 = 0;
        while ( (__int64 *)v44 != v7 && !v45 )
        {
          if ( *(_DWORD *)(v44 + 20) < 2u && *(_DWORD *)(v44 + 64) == v34 )
            v45 = 1;
          else
            v44 = *(_QWORD *)v44;
        }
        v46 = v44 & -(__int64)(v45 != 0);
        v47 = v46 && *(_DWORD *)(v46 + 68) == 257 && *(_DWORD *)(v46 + 76) == 2;
        *(_QWORD *)(v41 - 68) = &PinDispatch;
        if ( v47 )
        {
          *(_QWORD *)(v41 - 60) = 0LL;
        }
        else
        {
          *(_QWORD *)(v41 - 60) = &v37[48 * v92];
          *((_DWORD *)v43 - 2) = 5;
          *((_DWORD *)v43 - 1) = 72;
          *v43 = &off_1C000A1A0;
        }
        *(_QWORD *)(v41 - 44) = &PinInterface;
        v48 = v92;
        *((_DWORD *)v41 - 13) = 1;
        *((_DWORD *)v41 - 9) = 1;
        *(_QWORD *)(v41 - 28) = &PinMedium;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64, char *, int *, unsigned int *, unsigned int *, unsigned int *))(pExtBusDeviceDispatchTable + 64))(
                a1,
                v48,
                v42,
                v40,
                v39,
                &v94,
                &v105,
                &v93,
                &v106);
        if ( v16 < 0 )
        {
          v40 = v97;
        }
        else
        {
          v49 = v96;
          *(_QWORD *)(v41 + 100) = v96;
          *((_DWORD *)v41 + 23) = v106;
          v96 = &v49[16 * v106];
          v50 = v105 + v93;
          *((_DWORD *)v41 - 5) = v105 + v93;
          *(_QWORD *)(v41 - 12) = v42;
          if ( v105 <= 1 )
          {
            v41[80] = 0;
            *((_DWORD *)v41 + 10) = 1;
            *((_DWORD *)v41 + 17) = 1;
          }
          else
          {
            *((_DWORD *)v41 + 17) = 1;
            v51 = 0;
            v52 = *(_QWORD *)v42;
            v53 = v50;
            v54 = (unsigned int)((*(_DWORD *)(*(_QWORD *)v42 + 4LL) & 2) != 0) + 1;
            if ( (unsigned int)v54 < v50 )
            {
              do
              {
                if ( v51 )
                  break;
                v55 = *(_QWORD *)(v42 + 8 * v54);
                v56 = *(_QWORD *)(v52 + 32) - *(_QWORD *)(v55 + 32);
                if ( !v56 )
                  v56 = *(_QWORD *)(v52 + 40) - *(_QWORD *)(v55 + 40);
                v51 = v56 != 0;
                v54 = ((*(_DWORD *)(v55 + 4) & 2) != 0) + 1 + (unsigned int)v54;
              }
              while ( (unsigned int)v54 < v53 );
            }
            v41[80] = v51;
            *((_DWORD *)v41 + 10) = v51 + 1;
          }
          *((_DWORD *)v41 + 11) = 0;
          v16 = -1073741275;
          *((_DWORD *)v41 + 18) = 0;
          v42 += 8LL * (v105 + v93);
          v57 = v92;
          v40 = v94 * v105 + v97;
          v58 = *v7;
          v59 = 0;
          v97 = v40;
          while ( (__int64 *)v58 != v7 && !v59 )
          {
            if ( *(_DWORD *)(v58 + 20) < 2u && *(_DWORD *)(v58 + 64) == v92 )
              v59 = 1;
            else
              v58 = *(_QWORD *)v58;
          }
          v60 = v58 & -(__int64)(v59 != 0);
          if ( v60 )
          {
            *((_DWORD *)v41 - 1) = (*(_DWORD *)(v60 + 20) != 0) + 1;
            v16 = 0;
          }
          if ( v16 >= 0 )
          {
            *((_DWORD *)v41 + 9) = 2;
            if ( v47 )
            {
              *(_QWORD *)(v41 + 60) = PinMIDIDataFormatIntersection;
              *(_QWORD *)(v41 + 4) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
              if ( *((_DWORD *)v41 - 1) == 1 )
              {
                *(_DWORD *)v41 = 1;
                *((_DWORD *)v41 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v41 = 3;
                *((_DWORD *)v41 + 9) |= 8u;
              }
            }
            else
            {
              *(_QWORD *)(v41 + 60) = PinDataFormatIntersection;
              if ( *((_DWORD *)v41 - 1) == 1 )
              {
                *(_DWORD *)v41 = 1;
                *(_QWORD *)(v41 + 4) = &KSCATEGORY_AUDIO;
                *((_DWORD *)v41 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v41 = 3;
                *(_QWORD *)(v41 + 4) = &PINNAME_VIDEO_CAPTURE;
                *((_DWORD *)v41 + 9) |= 0x10000u;
              }
              v61 = *v7;
              v16 = -1073741275;
              v62 = 0;
              while ( (__int64 *)v61 != v7 && !v62 )
              {
                if ( *(_DWORD *)(v61 + 20) < 2u && *(_DWORD *)(v61 + 64) == v57 )
                  v62 = 1;
                else
                  v61 = *(_QWORD *)v61;
              }
              v63 = v61 & -(__int64)(v62 != 0);
              if ( v63 )
              {
                v16 = 0;
                *((_DWORD *)v41 + 19) = *(_DWORD *)(v63 + 28);
              }
            }
            *(_QWORD *)(v41 + 52) = &AllocatorFraming;
          }
        }
        v37 = v100;
        v34 = v92 + 1;
        v43 += 6;
        v39 = v96;
        v41 += 176;
        v92 = v34;
      }
      while ( v34 < v36 );
      v32 = v101;
      v38 = v102;
    }
    v64 = v95;
    v65 = 0;
    if ( v95 )
    {
      v66 = v103;
      while ( 1 )
      {
        if ( v16 < 0 )
          goto LABEL_165;
        v67 = *v7;
        v68 = 0;
        while ( (__int64 *)v67 != v7 && !v68 )
        {
          if ( *(_DWORD *)(v67 + 20) < 2u && *(_DWORD *)(v67 + 64) == v34 )
            v68 = 1;
          else
            v67 = *(_QWORD *)v67;
        }
        v69 = -v68;
        v70 = (v67 & -(__int64)(v69 != 0)) != 0 && *(_DWORD *)((v67 & -(__int64)(v69 != 0)) + 0x44) == 2305;
        v71 = 176LL * v34;
        *(_DWORD *)&v32[v71 + 136] = 0;
        *(_DWORD *)&v32[v71 + 140] = 0;
        v72 = *v7;
        v73 = 0;
        while ( (__int64 *)v72 != v7 && !v73 )
        {
          if ( *(_DWORD *)(v72 + 20) < 2u && *(_DWORD *)(v72 + 64) == v34 )
            v73 = 1;
          else
            v72 = *(_QWORD *)v72;
        }
        v74 = 0;
        v75 = v72 & -(__int64)(v73 != 0);
        if ( v75 && *(_DWORD *)(v75 + 20) == 1 && (*(_DWORD *)(v75 + 68) == 1538 || *(_DWORD *)(v75 + 68) == 1541) )
          v74 = 1;
        v32[v71 + 149] = v74;
        *(_QWORD *)&v32[v71] = 0LL;
        *(_QWORD *)&v32[v71 + 8] = 0LL;
        v16 = -1073741275;
        *(_DWORD *)&v32[v71 + 108] = 0;
        *(_DWORD *)&v32[v71 + 112] = 0;
        *(_QWORD *)&v32[v71 + 24] = &PinInterface;
        *(_QWORD *)&v32[v71 + 40] = &PinMedium;
        v76 = &pAudioBridgePinFormats;
        if ( v70 )
          v76 = &pMIDIBridgePinFormats;
        *(_DWORD *)&v32[v71 + 16] = 1;
        v77 = &v38[16 * v65];
        *(_DWORD *)&v32[v71 + 32] = 1;
        *(_QWORD *)&v32[v71 + 72] = v77;
        v78 = 0;
        *(_DWORD *)&v32[v71 + 48] = 1;
        *(_QWORD *)&v32[v71 + 56] = v76;
        *(_DWORD *)&v32[v71 + 68] = 4;
        v79 = *v7;
        while ( (__int64 *)v79 != v7 && !v78 )
        {
          if ( *(_DWORD *)(v79 + 20) < 2u && *(_DWORD *)(v79 + 64) == v34 )
            v78 = 1;
          else
            v79 = *(_QWORD *)v79;
        }
        v80 = v79 & -(__int64)(v78 != 0);
        if ( v80 )
        {
          *(_DWORD *)&v32[v71 + 64] = (*(_DWORD *)(v80 + 20) != 0) + 1;
          v16 = 0;
        }
        if ( v16 >= 0 )
        {
          v81 = *v7;
          v82 = 0;
          while ( (__int64 *)v81 != v7 && !v82 )
          {
            if ( *(_DWORD *)(v81 + 20) < 2u && *(_DWORD *)(v81 + 64) == v34 )
              v82 = 1;
            else
              v81 = *(_QWORD *)v81;
          }
          v83 = v82 != 0;
          v84 = (unsigned __int16 *)&unk_1C000AC32;
          v85 = v81 & -(__int64)v83;
          v86 = 0LL;
          while ( *(_DWORD *)(v66 + 40) != *(v84 - 1) || *(_DWORD *)(v66 + 44) != *v84 )
          {
            v86 = (unsigned int)(v86 + 1);
            v84 += 4;
            if ( (unsigned int)v86 >= 0xA )
            {
              LOBYTE(v87) = 0;
              goto LABEL_138;
            }
          }
          v87 = dword_1C000AC34[2 * v86];
LABEL_138:
          *(GUID *)v77 = GUID_NULL;
          if ( v85 )
            break;
        }
LABEL_162:
        ++v65;
        ++v34;
        if ( v65 >= v64 )
          goto LABEL_163;
      }
      if ( *(_DWORD *)((v81 & -(__int64)v83) + 0x44) == 2305 )
      {
        v88 = KSCATEGORY_AUDIO;
LABEL_161:
        *(GUID *)v77 = v88;
        goto LABEL_162;
      }
      v89 = *(unsigned __int16 *)((v81 & -(__int64)v83) + 0x44) - 537781792;
      *((_DWORD *)v77 + 1) = 298907407;
      *(_DWORD *)v77 = v89;
      *((_DWORD *)v77 + 2) = -1610606663;
      *((_DWORD *)v77 + 3) = -1775164727;
      if ( (v87 & 1) != 0 )
      {
        if ( *(_QWORD *)v77 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *((_QWORD *)v77 + 1) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
        {
          v90 = KSNODETYPE_COMMUNICATION_SPEAKER;
        }
        else
        {
          if ( *(_QWORD *)v77 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
            || *((_QWORD *)v77 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
          {
            goto LABEL_156;
          }
          v90 = KSNODETYPE_PERSONAL_MICROPHONE;
        }
      }
      else
      {
        if ( (v87 & 2) == 0
          || (*(_QWORD *)v77 != *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
           || *((_QWORD *)v77 + 1) != *(_QWORD *)KSNODETYPE_SPEAKER.Data4)
          && (*(_QWORD *)v77 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
           || *((_QWORD *)v77 + 1) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
        {
          goto LABEL_156;
        }
        v90 = KSNODETYPE_HANDSET;
      }
      *(GUID *)v77 = v90;
LABEL_156:
      if ( *(_QWORD *)v77 != *(_QWORD *)&KSNODETYPE_HEADSET.Data1
        || *((_QWORD *)v77 + 1) != *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
      {
        goto LABEL_162;
      }
      if ( *(_DWORD *)(v85 + 20) )
        v88 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v88 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_161;
    }
LABEL_163:
    if ( v16 < 0 || (v16 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v32, ExFreePool), v16 < 0) )
LABEL_165:
      ExFreePool(v32);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v16;
}
