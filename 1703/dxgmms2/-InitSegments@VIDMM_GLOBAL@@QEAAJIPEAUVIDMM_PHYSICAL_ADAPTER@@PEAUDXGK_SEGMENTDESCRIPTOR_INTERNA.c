/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C0047064
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0073778 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C0075DD8 (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00A3868 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r15
  unsigned int v6; // r13d
  unsigned __int64 v9; // rdx
  unsigned int v10; // edi
  char v11; // si
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v12; // rbx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  int v15; // edx
  unsigned int v16; // ecx
  VIDMM_SEGMENT *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  VIDMM_SEGMENT *v22; // rax
  VIDMM_SEGMENT *v23; // rsi
  __int64 v24; // r15
  int v25; // edx
  bool v26; // al
  VIDMM_SEGMENT *v27; // rax
  VIDMM_SEGMENT *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned __int64 *v32; // r8
  unsigned __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned __int64 *v46; // rcx
  __int64 v48; // rax
  char v49; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v51; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+48h] [rbp-B8h]
  _QWORD v53[2]; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v54; // [rsp+60h] [rbp-A0h]
  _QWORD v55[14]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]

  v5 = 0LL;
  v6 = *((_DWORD *)a3 + 5);
  v9 = 0LL;
  v54 = a5;
  v52 = 0LL;
  v49 = 0;
  v51 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  if ( !*((_DWORD *)a3 + 6) )
  {
LABEL_59:
    v30 = 0LL;
    v31 = 2LL;
    do
    {
      v32 = (unsigned __int64 *)((char *)&v56 + v30 * 8);
      v33 = *(__int64 *)((char *)&v56 + v30 * 8 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v56);
      if ( v33 && *v32 <= v33 )
        v53[v30] = v33 - *v32;
      else
        v53[v30] = 0LL;
      ++v30;
      --v31;
    }
    while ( v31 );
    if ( !*((_DWORD *)a3 + 6) )
    {
LABEL_80:
      v46 = v54;
      *((_QWORD *)this + 886) = v51;
      *((_BYTE *)this + 7097) = v51 >= qword_1C003C120;
      *v46 = v52;
      return 0LL;
    }
    v34 = -v6;
    while ( 1 )
    {
      v35 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6);
      v36 = *(int *)(v35 + 500);
      if ( (_DWORD)v36 == 2 || (v37 = *((_QWORD *)a3 + v36)) == 0 )
      {
        v41 = *(_QWORD *)(v35 + 64);
      }
      else
      {
        if ( (*(_DWORD *)(v35 + 80) & 0x1000) != 0 )
        {
          *(_QWORD *)(v35 + 48) = v37;
          goto LABEL_76;
        }
        v38 = v53[v36];
        v39 = *(_QWORD *)(v35 + 56);
        v40 = v38;
        if ( *(_QWORD *)(v35 + 64) - v39 < v38 )
          v40 = *(_QWORD *)(v35 + 64) - v39;
        v53[v36] = v38 - v40;
        v41 = v40 + v39;
      }
      *(_QWORD *)(v35 + 48) = v41;
LABEL_76:
      v42 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6);
      v43 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD))(*(_QWORD *)v42 + 8LL))(
              v42,
              NotifyAllocationReclaimed,
              0LL);
      v12 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v43;
      if ( v43 < 0 )
      {
        _InterlockedIncrement(&dword_1C003C60C);
        v48 = WdLogNewEntry5_WdLowResource(v44);
        *(_QWORD *)(v48 + 24) = v12;
        WdLogEvent5_WdLowResource(v48);
        return (unsigned int)v12;
      }
      if ( (_DWORD)v36 != 2 )
      {
        v45 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6);
        *(_QWORD *)(*((_QWORD *)this + 5150) + 8 * (v36 + 35LL * a2) + 16) += *(_QWORD *)(v45 + 48)
                                                                            - *(_QWORD *)(v45 + 72);
      }
      ++v6;
      if ( v34 + v6 >= *((_DWORD *)a3 + 6) )
        goto LABEL_80;
    }
  }
  v10 = v6;
  while ( 1 )
  {
    v11 = *((_BYTE *)a3 + 436);
    v12 = a4;
    v53[0] = (char *)a4 + 104;
    if ( (v11 & 3) == 0 || v10 != *((unsigned __int16 *)a3 + 14) )
      break;
    memset(v55, 0, 0x68uLL);
    if ( (v11 & 1) != 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 896LL);
      if ( v13 )
        v14 = (_DWORD *)(v13 + 144LL * a2);
      else
        v14 = 0LL;
      v15 = (*v14 >> 4) & 1;
    }
    else
    {
      v15 = 1;
    }
    v55[2] = qword_1C003C128;
    if ( v5 )
      v16 = v55[0] & 0xFFFFEA6F | 0x1180 | (16 * (v15 | ((v49 & 1) << 6))) | 0x100004;
    else
      v16 = v55[0] & 0xFFFFEA6F | 0x1180 | (16 * (v15 | ((v49 & 1) << 6))) | 0x80004;
    LODWORD(v55[0]) = v16;
    v17 = (VIDMM_SEGMENT *)operator new[](0x1F8uLL, 0x36306956u, (POOL_TYPE)512);
    if ( v17 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v17, this, a2, v10, v10 - v6, (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v55);
      *(_QWORD *)v17 = &VIDMM_SYSMEM_SEGMENT::`vftable';
    }
    else
    {
      v17 = 0LL;
    }
    v18 = v10;
    *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v17;
    if ( !*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) )
    {
LABEL_18:
      _InterlockedIncrement(&dword_1C003C608);
LABEL_19:
      v19 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v19 + 24) = v10;
      WdLogEvent5_WdLowResource(v19);
      LODWORD(v12) = -1073741801;
      return (unsigned int)v12;
    }
LABEL_55:
    if ( ++v10 - v6 >= *((_DWORD *)a3 + 6) )
      goto LABEL_59;
    v9 = v51;
    a4 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v53[0];
  }
  v20 = *(unsigned int *)a4;
  if ( (unsigned int)v20 >= 0x200000
    || (v20 & 2) != 0
    || (v20 & 0x80u) == 0LL && (v20 & 0x300) != 0
    || (*(_DWORD *)a4 & 0x300) == 0x300
    || (v20 & 0x2000) != 0 && (v20 & 5) != 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v20, v9);
    *(_QWORD *)(v29 + 24) = v10;
    WdLogEvent5_WdAssertion(v29);
    LODWORD(v12) = -1073741811;
    return (unsigned int)v12;
  }
  if ( (*((_DWORD *)a4 + 4) & 0xFFFLL) != 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v20, v9);
    *(_QWORD *)(v21 + 24) = 4096LL;
    WdLogEvent5_WdWarning(v21);
    v9 = v51;
    *((_QWORD *)v12 + 2) -= *((_QWORD *)v12 + 2) & 0xFFFLL;
  }
  if ( (*(_DWORD *)v12 & 0x400) != 0 )
    v51 = *((_QWORD *)v12 + 2) + v9;
  if ( (*(_DWORD *)v12 & 1) != 0 )
  {
    v22 = (VIDMM_SEGMENT *)operator new[](0x218uLL, 0x36306956u, (POOL_TYPE)512);
    v23 = v22;
    if ( v22 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v22, this, a2, v10, v10 - v6, v12);
      *((_QWORD *)v23 + 63) = 0LL;
      *((_QWORD *)v23 + 64) = 0LL;
      *((_QWORD *)v23 + 66) = 0LL;
      *((_QWORD *)v23 + 65) = 0LL;
      *(_QWORD *)v23 = &VIDMM_APERTURE_SEGMENT::`vftable';
    }
    else
    {
      v23 = 0LL;
    }
    v24 = 8LL * v10;
    *(_QWORD *)(v24 + *((_QWORD *)this + 464)) = v23;
    v18 = *(_QWORD *)(v24 + *((_QWORD *)this + 464));
    if ( !v18 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v18 + 80) & 0x10) != 0 )
      *((_BYTE *)this + 6497) = 1;
    v25 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 0x400) != 0 )
      v49 = 1;
  }
  else
  {
    *((_BYTE *)a3 + 436) |= 8u;
    v26 = (*(_DWORD *)v12 & 0x10000) != 0 && !*((_DWORD *)v12 + 21);
    *((_BYTE *)a3 + 437) ^= (*((_BYTE *)a3 + 437) ^ (4 * v26)) & 4;
    v27 = (VIDMM_SEGMENT *)operator new[](0x208uLL, 0x36306956u, (POOL_TYPE)512);
    v28 = v27;
    if ( v27 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v27, this, a2, v10, v10 - v6, v12);
      *((_QWORD *)v28 + 63) = 0LL;
      *((_DWORD *)v28 + 128) = 0;
      *(_QWORD *)v28 = &VIDMM_MEMORY_SEGMENT::`vftable';
    }
    else
    {
      v28 = 0LL;
    }
    v24 = 8LL * v10;
    *(_QWORD *)(v24 + *((_QWORD *)this + 464)) = v28;
    if ( !*(_QWORD *)(v24 + *((_QWORD *)this + 464)) )
    {
      _InterlockedIncrement(&dword_1C003C5E4);
      goto LABEL_19;
    }
    if ( (*(_DWORD *)v12 & 0x800) != 0 )
      *((_BYTE *)a3 + 437) |= 2u;
    v25 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 0x40) == 0 )
      v52 += *(_QWORD *)(*(_QWORD *)(v24 + *((_QWORD *)this + 464)) + 48LL);
  }
  if ( (v25 & 0x10000) == 0
    || (LODWORD(v12) = VIDMM_SEGMENT::SetVprRange(
                         *(VIDMM_SEGMENT **)(v24 + *((_QWORD *)this + 464)),
                         *((_QWORD *)v12 + 8),
                         *((_QWORD *)v12 + 9),
                         *((_DWORD *)v12 + 20),
                         *((_DWORD *)v12 + 21),
                         *((unsigned int *)v12 + 22)),
        (int)v12 >= 0) )
  {
    *(&v56 + *(int *)(*(_QWORD *)(v24 + *((_QWORD *)this + 464)) + 500LL)) += *(_QWORD *)(*(_QWORD *)(v24 + *((_QWORD *)this + 464))
                                                                                        + 56LL);
    v5 = v57;
    goto LABEL_55;
  }
  return (unsigned int)v12;
}
