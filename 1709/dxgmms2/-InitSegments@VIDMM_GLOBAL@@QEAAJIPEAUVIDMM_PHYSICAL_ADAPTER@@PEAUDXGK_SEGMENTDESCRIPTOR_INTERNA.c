/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C007A540
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000EF90 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C0079544 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C007BFA4 (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00ABDD0 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // r11d
  __int64 v6; // r15
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdx
  unsigned int v12; // esi
  int v13; // r12d
  char v14; // r14
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  VIDMM_SEGMENT *v22; // rbx
  __int64 v23; // rcx
  VIDMM_SEGMENT *v24; // rax
  VIDMM_SEGMENT *v25; // r14
  __int64 v26; // r15
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r10
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // rcx
  int v32; // r15d
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  char v41; // cl
  unsigned __int64 *v42; // rcx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  char v45; // cl
  VIDMM_SEGMENT *v46; // rax
  VIDMM_SEGMENT *v47; // r14
  PPCW_INSTANCE *v48; // rsi
  int v49; // eax
  wchar_t *v50; // rax
  __int64 v51; // r8
  WCHAR *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v65; // [rsp+28h] [rbp-D8h]
  char v66; // [rsp+30h] [rbp-D0h]
  unsigned int v68; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v69; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v70; // [rsp+48h] [rbp-B8h]
  _QWORD v71[2]; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v72; // [rsp+60h] [rbp-A0h]
  struct _PCW_DATA v73; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v75[14]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v76; // [rsp+100h] [rbp+0h] BYREF
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 v78; // [rsp+110h] [rbp+10h]

  v5 = *((_DWORD *)a3 + 5);
  v6 = 0LL;
  v7 = a2;
  v8 = 0LL;
  v68 = v5;
  v70 = 0LL;
  v72 = a5;
  v66 = 0;
  v69 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
  {
    v12 = v5;
    v13 = -v5;
    while ( 1 )
    {
      v14 = *((_BYTE *)a3 + 436);
      v15 = a4;
      v71[0] = (char *)a4 + 104;
      if ( (v14 & 3) != 0 && v12 == *((unsigned __int16 *)a3 + 14) )
      {
        memset(v75, 0, 0x68uLL);
        if ( (v14 & 1) != 0 )
        {
          v43 = *(_QWORD *)(*((_QWORD *)this + 2) + 992LL);
          if ( v43 )
            v44 = (_DWORD *)(v43 + 144LL * a2);
          else
            v44 = 0LL;
          v19 = (*v44 >> 4) & 1;
        }
        else
        {
          v19 = 1;
        }
        v75[2] = qword_1C0040168;
        v20 = v75[0] & 0xFFFFEA6F | 0x1180 | (16 * (v19 | ((v66 & 1) << 6)));
        if ( v6 )
          LODWORD(v75[0]) = v20 | 0x100004;
        else
          LODWORD(v75[0]) = v20 | 0x80004;
        v22 = (VIDMM_SEGMENT *)operator new[](0x1E8uLL, 0x36306956u, (POOL_TYPE)512);
        if ( v22 )
        {
          VIDMM_SEGMENT::VIDMM_SEGMENT(
            v22,
            this,
            a2,
            v12,
            v13 + v12,
            (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v75);
          *(_QWORD *)v22 = &VIDMM_SYSMEM_SEGMENT::`vftable';
        }
        else
        {
          v22 = 0LL;
        }
        v23 = v12;
        *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v12) = v22;
        if ( !*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v12) )
        {
LABEL_97:
          _InterlockedIncrement(&dword_1C0040618);
LABEL_99:
          v58 = WdLogNewEntry5_WdLowResource(v23, v21);
          *(_QWORD *)(v58 + 24) = v12;
          WdLogEvent5_WdLowResource(v58);
          LODWORD(v15) = -1073741801;
          return (unsigned int)v15;
        }
      }
      else
      {
        v16 = *(unsigned int *)a4;
        if ( (unsigned int)v16 >= 0x200000
          || (v16 & 2) != 0
          || (v16 & 0x80u) == 0LL && (v16 & 0x300) != 0
          || (*(_DWORD *)a4 & 0x300) == 0x300
          || (v16 & 0x2000) != 0 && (v16 & 5) != 0 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v16, v8);
          *(_QWORD *)(v17 + 24) = v12;
          WdLogEvent5_WdAssertion(v17);
          LODWORD(v15) = -1073741811;
          return (unsigned int)v15;
        }
        if ( (*((_DWORD *)a4 + 4) & 0xFFFLL) != 0 )
        {
          v55 = WdLogNewEntry5_WdWarning(v16);
          *(_QWORD *)(v55 + 24) = 4096LL;
          WdLogEvent5_WdWarning(v55);
          *((_QWORD *)v15 + 2) &= 0xFFFFFFFFFFFFF000uLL;
          v8 = v69;
        }
        if ( (*(_DWORD *)v15 & 0x400) != 0 )
          v69 = *((_QWORD *)v15 + 2) + v8;
        if ( (*(_DWORD *)v15 & 1) != 0 )
        {
          v24 = (VIDMM_SEGMENT *)operator new[](0x208uLL, 0x36306956u, (POOL_TYPE)512);
          v25 = v24;
          if ( v24 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v24, this, a2, v12, v13 + v12, v15);
            *((_QWORD *)v25 + 61) = 0LL;
            *((_QWORD *)v25 + 62) = 0LL;
            *((_QWORD *)v25 + 64) = 0LL;
            *((_QWORD *)v25 + 63) = 0LL;
            *(_QWORD *)v25 = &VIDMM_APERTURE_SEGMENT::`vftable';
          }
          else
          {
            v25 = 0LL;
          }
          v26 = 8LL * v12;
          *(_QWORD *)(v26 + *((_QWORD *)this + 464)) = v25;
          v23 = *(_QWORD *)(v26 + *((_QWORD *)this + 464));
          if ( !v23 )
            goto LABEL_97;
          if ( (*(_DWORD *)(v23 + 80) & 0x10) != 0 )
            *((_BYTE *)this + 6497) = 1;
          v27 = *(_DWORD *)v15;
          if ( (*(_DWORD *)v15 & 0x400) != 0 )
            v66 = 1;
        }
        else
        {
          *((_BYTE *)a3 + 436) |= 8u;
          if ( (*(_DWORD *)v15 & 0x10000) == 0 || *((_DWORD *)v15 + 21) )
            v45 = 0;
          else
            v45 = 4;
          *((_BYTE *)a3 + 437) = v45 | *((_BYTE *)a3 + 437) & 0xFB;
          v46 = (VIDMM_SEGMENT *)operator new[](0x1F8uLL, 0x36306956u, (POOL_TYPE)512);
          v47 = v46;
          if ( v46 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v46, this, a2, v12, v13 + v12, v15);
            *((_QWORD *)v47 + 61) = 0LL;
            *((_DWORD *)v47 + 124) = 0;
            *(_QWORD *)v47 = &VIDMM_MEMORY_SEGMENT::`vftable';
          }
          else
          {
            v47 = 0LL;
          }
          v26 = 8LL * v12;
          *(_QWORD *)(v26 + *((_QWORD *)this + 464)) = v47;
          if ( !*(_QWORD *)(v26 + *((_QWORD *)this + 464)) )
          {
            _InterlockedIncrement(&dword_1C00405F4);
            goto LABEL_99;
          }
          if ( (*(_DWORD *)v15 & 0x800) != 0 )
            *((_BYTE *)a3 + 437) |= 2u;
          v27 = *(_DWORD *)v15;
          if ( (*(_DWORD *)v15 & 0x40) == 0 )
            v70 += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v12) + 48LL);
        }
        if ( (v27 & 0x10000) != 0 )
        {
          v56 = *(int **)(v26 + *((_QWORD *)this + 464));
          v57 = v56[119];
          if ( (_DWORD)v57 == 2 || !*((_QWORD *)a3 + v57) )
          {
            LODWORD(v15) = VIDMM_SEGMENT::SetVprRange(
                             (VIDMM_SEGMENT *)v56,
                             *((_QWORD *)v15 + 8),
                             *((_QWORD *)v15 + 9),
                             *((_DWORD *)v15 + 20),
                             *((_DWORD *)v15 + 21),
                             *((unsigned int *)v15 + 22));
            if ( (int)v15 < 0 )
              return (unsigned int)v15;
          }
          else
          {
            *(_DWORD *)v15 = v27 & 0xFFFEFFFF;
          }
        }
        *(&v76 + *(int *)(*(_QWORD *)(v26 + *((_QWORD *)this + 464)) + 476LL)) += *(_QWORD *)(*(_QWORD *)(v26 + *((_QWORD *)this + 464))
                                                                                            + 56LL);
        v6 = v77;
      }
      ++v12;
      if ( v13 + v12 >= *((_DWORD *)a3 + 6) )
        break;
      a4 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v71[0];
      v8 = v69;
    }
    v7 = a2;
    v5 = v68;
  }
  v28 = 0LL;
  v29 = 2LL;
  do
  {
    v30 = (unsigned __int64 *)((char *)&v76 + v28 * 8);
    v31 = *(__int64 *)((char *)&v76 + v28 * 8 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v76);
    if ( v31 && *v30 <= v31 )
      v71[v28] = v31 - *v30;
    else
      v71[v28] = 0LL;
    ++v28;
    --v29;
  }
  while ( v29 );
  v32 = 0;
  if ( *((_DWORD *)a3 + 6) )
  {
    while ( 1 )
    {
      v33 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v32 + v5));
      v34 = *(int *)(v33 + 476);
      if ( (_DWORD)v34 == 2 )
        break;
      v35 = *((_QWORD *)a3 + v34);
      if ( !v35 )
        break;
      if ( (*(_DWORD *)(v33 + 80) & 0x1000) == 0 )
      {
        v59 = v71[v34];
        v60 = *(_QWORD *)(v33 + 56);
        v61 = v59;
        if ( *(_QWORD *)(v33 + 64) - v60 < v59 )
          v61 = *(_QWORD *)(v33 + 64) - v60;
        v71[v34] = v59 - v61;
        v36 = v60 + v61;
        goto LABEL_46;
      }
      *(_QWORD *)(v33 + 48) = v35;
LABEL_47:
      v37 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD))(*(_QWORD *)v33 + 8LL))(
              v33,
              NotifyAllocationReclaimed,
              0LL);
      v15 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v37;
      if ( v37 < 0 )
      {
        _InterlockedIncrement(&dword_1C004061C);
        v62 = WdLogNewEntry5_WdLowResource(v39, v38);
        *(_QWORD *)(v62 + 24) = v15;
        WdLogEvent5_WdLowResource(v62);
        return (unsigned int)v15;
      }
      if ( (_DWORD)v34 )
      {
        if ( (_DWORD)v34 == 1 )
          *((_BYTE *)a3 + 437) |= 8u;
        if ( (_DWORD)v34 == 2 )
          goto LABEL_64;
      }
      else
      {
        if ( (*(_DWORD *)(v33 + 80) & 4) == 0 )
          *((_BYTE *)a3 + 437) |= 0x40u;
        if ( (*(_DWORD *)(v33 + 80) & 0x1001) != 0 )
          goto LABEL_52;
        *((_BYTE *)a3 + 437) |= 0x10u;
      }
      if ( (*(_DWORD *)(v33 + 80) & 0x1001) == 0 )
      {
        *((_QWORD *)a3 + 3 * v34 + 62) += *(_QWORD *)(v33 + 48) - *(_QWORD *)(v33 + 72);
LABEL_64:
        if ( (*(_DWORD *)(v33 + 80) & 0x1001) == 0 )
          goto LABEL_53;
      }
LABEL_52:
      *((_BYTE *)a3 + 437) |= 0x20u;
      *((_BYTE *)a3 + 24 * v34 + 504) |= 1u;
LABEL_53:
      v5 = v68;
      if ( (unsigned int)++v32 >= *((_DWORD *)a3 + 6) )
        goto LABEL_54;
    }
    v36 = *(_QWORD *)(v33 + 64);
LABEL_46:
    *(_QWORD *)(v33 + 48) = v36;
    goto LABEL_47;
  }
LABEL_54:
  if ( (*((_BYTE *)a3 + 437) & 0x30) == 0x30 )
    *((_BYTE *)a3 + 437) |= 0x80u;
  *((_BYTE *)a3 + 504) |= 2u;
  if ( (*((_BYTE *)a3 + 437) & 8) != 0 )
  {
    v48 = (PPCW_INSTANCE *)((char *)a3 + 536);
    *((_DWORD *)a3 + 122) = dword_1C00403A4;
    VIDMM_GLOBAL::InitializeSegmentGroupState(this, v7, (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a3 + 536), 0LL);
    v49 = dword_1C00403A8;
    *((_BYTE *)a3 + 528) |= 3u;
    *((_DWORD *)a3 + 128) = v49;
    v50 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    v51 = *((_QWORD *)this + 3);
    LODWORD(v65) = v7;
    v52 = v50;
    LODWORD(Data) = *(_DWORD *)(v51 + 268);
    LODWORD(v15) = RtlStringCbPrintfW(
                     v50,
                     0x208uLL,
                     L"luid_0x%08X_0x%08X_phys_%u",
                     *(unsigned int *)(v51 + 272),
                     Data,
                     v65);
    if ( (int)v15 < 0
      || (RtlInitUnicodeString(&DestinationString, v52),
          v73.Data = v48,
          v73.Size = 328,
          LODWORD(v15) = PcwCreateInstance(
                           v48 + 40,
                           GpuPerformanceCounterSetLocalAdapterMemory,
                           &DestinationString,
                           1u,
                           &v73),
          (int)v15 < 0) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v54, v53);
      WdLogEvent5_WdAssertion(v63);
    }
    operator delete(v52);
    if ( (int)v15 < 0 )
      return (unsigned int)v15;
  }
  else
  {
    v40 = dword_1C00403A8;
    v41 = *((_BYTE *)a3 + 504) | 1;
    *((_BYTE *)a3 + 528) &= ~2u;
    *((_BYTE *)a3 + 504) = v41;
    *((_DWORD *)a3 + 122) = v40;
  }
  v42 = v72;
  *((_QWORD *)this + 886) = v69;
  *((_BYTE *)this + 7097) = v69 >= qword_1C0040160;
  *v42 = v70;
  return 0LL;
}
