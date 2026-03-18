/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C007DC38
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C007D5D0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0004C4C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C007E0D4 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C007EED4 (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00B4698 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  unsigned int v8; // r11d
  unsigned int v10; // esi
  char v11; // bl
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v12; // r14
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v18; // eax
  int v19; // ecx
  VIDMM_SEGMENT *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **v24; // r8
  unsigned __int64 v25; // rcx
  unsigned int i; // r15d
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  char v33; // cl
  int v34; // eax
  __int64 v35; // rax
  bool v36; // al
  unsigned __int64 *v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  VIDMM_SEGMENT *v40; // rax
  VIDMM_SEGMENT *v41; // rbx
  __int64 v42; // r15
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rax
  char v48; // cl
  VIDMM_SEGMENT *v49; // rax
  VIDMM_SEGMENT *v50; // rbx
  int *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  PPCW_INSTANCE *v58; // rsi
  int v59; // eax
  wchar_t *v60; // rax
  __int64 v61; // r8
  WCHAR *v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v67; // [rsp+28h] [rbp-D8h]
  unsigned int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+34h] [rbp-CCh]
  char v70; // [rsp+38h] [rbp-C8h]
  unsigned int v71; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v72; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v74[2]; // [rsp+58h] [rbp-A8h]
  struct _PCW_DATA v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v76; // [rsp+78h] [rbp-88h]
  _QWORD v77[14]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v78; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h]
  __int64 v80; // [rsp+100h] [rbp+0h]

  v5 = 0LL;
  v72 = 0LL;
  v6 = 0LL;
  v8 = *((_DWORD *)a3 + 5);
  v68 = a2;
  v76 = a5;
  v71 = v8;
  v70 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
  {
    v10 = v8;
    v69 = -v8;
    while ( 1 )
    {
      v11 = *((_BYTE *)a3 + 436);
      v12 = a4;
      v13 = a4;
      v74[0] = (char *)a4 + 104;
      if ( (v11 & 3) != 0 && v10 == *((unsigned __int16 *)a3 + 14) )
      {
        memset(v77, 0, 0x68uLL);
        if ( (v11 & 1) != 0 )
        {
          v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
          if ( v45 )
            v46 = (_DWORD *)(v45 + 144LL * v68);
          else
            v46 = 0LL;
          v18 = (*v46 >> 4) & 1;
        }
        else
        {
          v18 = 1;
        }
        v77[2] = qword_1C0047168;
        if ( v6 )
          v19 = (16 * (v18 | ((v70 & 1) << 6))) | 0x101184;
        else
          v19 = (16 * (v18 | ((v70 & 1) << 6))) | 0x81184;
        LODWORD(v77[0]) = v19;
        v20 = (VIDMM_SEGMENT *)operator new[](0x1E8uLL, 0x36306956u, (POOL_TYPE)512);
        if ( v20 )
        {
          VIDMM_SEGMENT::VIDMM_SEGMENT(
            v20,
            this,
            v68,
            v10,
            v10 + v69,
            (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v77);
          *(_QWORD *)v20 = &VIDMM_SYSMEM_SEGMENT::`vftable';
        }
        else
        {
          v20 = 0LL;
        }
        v21 = v10;
        *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v20;
        if ( !*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) )
        {
LABEL_88:
          _InterlockedAdd(&dword_1C0047618, 1u);
LABEL_90:
          v53 = WdLogNewEntry5_WdLowResource(v21);
          *(_QWORD *)(v53 + 24) = v10;
          WdLogEvent5_WdLowResource(v53);
          LODWORD(v16) = -1073741801;
          return (unsigned int)v16;
        }
        v5 = *(_QWORD *)&DestinationString.Length;
      }
      else
      {
        v14 = *(unsigned int *)a4;
        if ( (unsigned int)v14 >= 0x200000
          || (v14 & 2) != 0
          || (v14 & 0x80u) == 0LL && (v14 & 0x300) != 0
          || (*(_DWORD *)a4 & 0x300) == 0x300
          || (v14 & 0x2000) != 0 && (v14 & 5) != 0 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v14, a2);
          *(_QWORD *)(v15 + 24) = v10;
          WdLogEvent5_WdAssertion(v15);
          LODWORD(v16) = -1073741811;
          return (unsigned int)v16;
        }
        v38 = *((_QWORD *)a4 + 2);
        if ( (v38 & 0xFFF) != 0 )
        {
          v47 = WdLogNewEntry5_WdWarning(v14, a2);
          *(_QWORD *)(v47 + 24) = 4096LL;
          WdLogEvent5_WdWarning(v47);
          *((_QWORD *)v12 + 2) &= 0xFFFFFFFFFFFFF000uLL;
          v38 = *((_QWORD *)v12 + 2);
          LODWORD(v14) = *(_DWORD *)v13;
        }
        v39 = v38 + *(_QWORD *)&DestinationString.Length;
        if ( (v14 & 0x400) == 0 )
          v39 = *(_QWORD *)&DestinationString.Length;
        v5 = v39;
        *(_QWORD *)&DestinationString.Length = v39;
        if ( (v14 & 1) != 0 )
        {
          v40 = (VIDMM_SEGMENT *)operator new[](0x208uLL, 0x36306956u, (POOL_TYPE)512);
          v41 = v40;
          if ( v40 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v40, this, v68, v10, v10 + v69, v12);
            *((_QWORD *)v41 + 61) = 0LL;
            *(_QWORD *)v41 = &VIDMM_APERTURE_SEGMENT::`vftable';
            *((_QWORD *)v41 + 62) = 0LL;
            *((_QWORD *)v41 + 64) = 0LL;
            *((_QWORD *)v41 + 63) = 0LL;
          }
          else
          {
            v41 = 0LL;
          }
          v42 = v10;
          *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v41;
          v21 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10);
          if ( !v21 )
            goto LABEL_88;
          if ( (*(_DWORD *)(v21 + 80) & 0x10) != 0 )
            *((_BYTE *)this + 7073) = 1;
          a2 = *(unsigned int *)v12;
          v43 = v70;
          if ( (a2 & 0x400) != 0 )
            v43 = 1;
          v70 = v43;
        }
        else
        {
          *((_BYTE *)a3 + 436) |= 8u;
          if ( (*(_DWORD *)v12 & 0x10000) == 0 || (v48 = 4, *((_DWORD *)v12 + 21)) )
            v48 = 0;
          *((_BYTE *)a3 + 437) = v48 | *((_BYTE *)a3 + 437) & 0xFB;
          v49 = (VIDMM_SEGMENT *)operator new[](0x1F8uLL, 0x36306956u, (POOL_TYPE)512);
          v50 = v49;
          if ( v49 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v49, this, v68, v10, v10 + v69, v12);
            *((_QWORD *)v50 + 61) = 0LL;
            *(_QWORD *)v50 = &VIDMM_MEMORY_SEGMENT::`vftable';
            *((_DWORD *)v50 + 124) = 0;
          }
          else
          {
            v50 = 0LL;
          }
          v42 = v10;
          *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v50;
          if ( !*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) )
          {
            _InterlockedAdd(&dword_1C00475F4, 1u);
            goto LABEL_90;
          }
          a2 = *(unsigned int *)v12;
          if ( (a2 & 0x800) != 0 )
          {
            *((_BYTE *)a3 + 437) |= 2u;
            a2 = *(unsigned int *)v12;
          }
          if ( (a2 & 0x40) == 0 )
            v72 += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) + 48LL);
        }
        if ( (a2 & 0x10000) != 0 )
        {
          v51 = *(int **)(*((_QWORD *)this + 464) + 8 * v42);
          v52 = v51[119];
          if ( (_DWORD)v52 == 2 || !*((_QWORD *)a3 + v52) )
          {
            LODWORD(v16) = VIDMM_SEGMENT::SetVprRange(
                             (VIDMM_SEGMENT *)v51,
                             *((_QWORD *)v12 + 8),
                             *((_QWORD *)v12 + 9),
                             *((_DWORD *)v12 + 20),
                             *((_DWORD *)v12 + 21),
                             *((unsigned int *)v12 + 22));
            if ( (int)v16 < 0 )
              return (unsigned int)v16;
          }
          else
          {
            *(_DWORD *)v12 &= ~0x10000u;
          }
        }
        v44 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v42);
        *(&v78 + *(int *)(v44 + 476)) += *(_QWORD *)(v44 + 56);
        v6 = v79;
      }
      if ( ++v10 + v69 >= *((_DWORD *)a3 + 6) )
        break;
      a4 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v74[0];
    }
    v8 = v71;
  }
  v22 = 0LL;
  v23 = 2LL;
  do
  {
    v24 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **)((char *)&v78 + v22 * 8);
    v25 = *(__int64 *)((char *)&v78 + v22 * 8 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v78);
    if ( v25 && (a4 = *v24, (unsigned __int64)*v24 <= v25) )
      v74[v22] = v25 - (_QWORD)a4;
    else
      v74[v22] = 0LL;
    ++v22;
    --v23;
  }
  while ( v23 );
  for ( i = 0; i < *((_DWORD *)a3 + 6); ++i )
  {
    v27 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (i + v8));
    v28 = *(int *)(v27 + 476);
    if ( (_DWORD)v28 != 2 && (v29 = *((_QWORD *)a3 + v28)) != 0 )
    {
      if ( (*(_DWORD *)(v27 + 80) & 0x1000) == 0 )
      {
        v54 = v74[v28];
        v55 = *(_QWORD *)(v27 + 56);
        v56 = *(_QWORD *)(v27 + 64) - v55;
        if ( v56 >= v54 )
          v56 = v74[v28];
        v74[v28] = v54 - v56;
        v29 = v55 + v56;
      }
    }
    else
    {
      v29 = *(_QWORD *)(v27 + 64);
    }
    *(_QWORD *)(v27 + 48) = v29;
    v30 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *))(*(_QWORD *)v27 + 8LL))(
            v27,
            NotifyAllocationReclaimed,
            0LL,
            a4);
    v16 = v30;
    if ( v30 < 0 )
    {
      _InterlockedAdd(&dword_1C004761C, 1u);
      v57 = WdLogNewEntry5_WdLowResource(v31);
      *(_QWORD *)(v57 + 24) = v16;
      WdLogEvent5_WdLowResource(v57);
      return (unsigned int)v16;
    }
    if ( (_DWORD)v28 )
    {
      if ( (_DWORD)v28 == 1 )
        *((_BYTE *)a3 + 437) |= 8u;
      if ( (_DWORD)v28 == 2 )
        goto LABEL_103;
    }
    else
    {
      v32 = *(_DWORD *)(v27 + 80);
      if ( (v32 & 4) == 0 )
      {
        *((_BYTE *)a3 + 437) |= 0x40u;
        v32 = *(_DWORD *)(v27 + 80);
      }
      if ( (v32 & 0x1001) == 0 )
        *((_BYTE *)a3 + 437) |= 0x10u;
    }
    if ( (*(_DWORD *)(v27 + 80) & 0x1001) == 0 )
    {
      *((_QWORD *)a3 + 3 * v28 + 63) += *(_QWORD *)(v27 + 48) - *(_QWORD *)(v27 + 72);
LABEL_103:
      if ( (*(_DWORD *)(v27 + 80) & 0x1001) == 0 )
        goto LABEL_38;
    }
    *((_BYTE *)a3 + 437) |= 0x20u;
    *((_BYTE *)a3 + 24 * v28 + 512) |= 1u;
LABEL_38:
    v8 = v71;
  }
  if ( (*((_BYTE *)a3 + 437) & 0x30) == 0x30 )
    *((_BYTE *)a3 + 437) |= 0x80u;
  v33 = *((_BYTE *)a3 + 512) | 2;
  *((_BYTE *)a3 + 512) = v33;
  if ( (*((_BYTE *)a3 + 437) & 8) != 0 )
  {
    v58 = (PPCW_INSTANCE *)((char *)a3 + 544);
    *((_DWORD *)a3 + 124) = dword_1C00473A4;
    VIDMM_GLOBAL::InitializeSegmentGroupState(this, v68, (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a3 + 544), 0LL);
    v59 = dword_1C00473A8;
    *((_BYTE *)a3 + 536) |= 1u;
    *((_BYTE *)a3 + 536) |= 2u;
    *((_DWORD *)a3 + 130) = v59;
    v60 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    v61 = *((_QWORD *)this + 3);
    LODWORD(v67) = v68;
    v62 = v60;
    LODWORD(Data) = *(_DWORD *)(v61 + 268);
    LODWORD(v16) = RtlStringCbPrintfW(
                     v60,
                     0x208uLL,
                     L"luid_0x%08X_0x%08X_phys_%u",
                     *(unsigned int *)(v61 + 272),
                     Data,
                     v67);
    if ( (int)v16 < 0
      || (RtlInitUnicodeString(&DestinationString, v62),
          v75.Data = v58,
          v75.Size = 328,
          LODWORD(v16) = PcwCreateInstance(
                           v58 + 40,
                           GpuPerformanceCounterSetLocalAdapterMemory,
                           &DestinationString,
                           1u,
                           &v75),
          (int)v16 < 0) )
    {
      v65 = WdLogNewEntry5_WdAssertion(v64, v63);
      WdLogEvent5_WdAssertion(v65);
    }
    operator delete(v62);
    if ( (int)v16 < 0 )
      return (unsigned int)v16;
  }
  else
  {
    v34 = dword_1C00473A8;
    *((_BYTE *)a3 + 536) &= ~2u;
    *((_BYTE *)a3 + 512) = v33 | 1;
    *((_DWORD *)a3 + 124) = v34;
  }
  v35 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 958) = v5;
  if ( (*(_DWORD *)(v35 + 300) & 8) != 0 )
    v36 = v5 != 0;
  else
    v36 = v5 >= qword_1C0047160;
  v37 = v76;
  *((_BYTE *)this + 7673) = v36;
  *v37 = v72;
  return 0LL;
}
