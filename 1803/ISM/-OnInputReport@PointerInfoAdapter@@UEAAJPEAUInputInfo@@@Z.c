/*
 * XREFs of ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1800618E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINTER_INFO_UNION@@@Z @ 0x180061688 (-PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINT.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x1800621A8 (-SetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNIO.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PointerInfoAdapter::OnInputReport(PointerInfoAdapter *this, struct InputInfo *a2)
{
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // ecx
  struct Pointer *v7; // r8
  PointerInfoAdapter *v8; // rcx
  char v9; // r15
  struct tagPOINTER_INFO_UNION *v10; // r12
  int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r9
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // r12d
  char v19; // r9
  int v20; // ebx
  int v21; // r11d
  unsigned int v22; // edx
  unsigned int v23; // r8d
  __int64 v24; // r10
  void *v25; // r15
  unsigned int v26; // ebx
  void *v27; // rax
  unsigned int i; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // r10
  char *v36; // r11
  struct tagPOINTER_INFO_UNION *v37; // r9
  unsigned int v38; // r15d
  unsigned int v39; // ecx
  unsigned int v40; // edx
  __int64 v41; // r8
  char v42; // dl
  int v43; // r10d
  unsigned int v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // r9
  unsigned int v47; // r11d
  int v48; // r8d
  void *v49; // r12
  unsigned int v50; // ebx
  void *v51; // rax
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // r8
  __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // r8
  __int64 v58; // r9
  PointerInfoAdapter *v59; // rcx
  char v60; // r8
  int v61; // eax
  __int64 v62; // r9
  __int64 *v63; // r12
  __int64 v64; // r11
  unsigned int v65; // ecx
  __int64 v66; // r8
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // edx
  __int64 v72; // r8
  __int64 v73; // rcx
  char v74; // [rsp+28h] [rbp-E0h]
  unsigned int v75; // [rsp+2Ch] [rbp-DCh]
  char v76; // [rsp+2Ch] [rbp-DCh]
  __int64 v77; // [rsp+30h] [rbp-D8h] BYREF
  struct tagPOINTER_INFO_UNION *v78; // [rsp+38h] [rbp-D0h]
  int v79; // [rsp+40h] [rbp-C8h]
  int v80; // [rsp+44h] [rbp-C4h]
  struct tagPOINTER_INFO_UNION *v81; // [rsp+48h] [rbp-C0h]
  char *v82; // [rsp+50h] [rbp-B8h]
  __int64 v83; // [rsp+58h] [rbp-B0h]
  __int128 v84; // [rsp+68h] [rbp-A0h]
  __int128 v85; // [rsp+78h] [rbp-90h]
  __int128 v86; // [rsp+88h] [rbp-80h]
  __int128 v87; // [rsp+98h] [rbp-70h]
  __int128 v88; // [rsp+A8h] [rbp-60h]
  __int128 v89; // [rsp+B8h] [rbp-50h]
  __int128 v90; // [rsp+C8h] [rbp-40h]
  __int128 v91; // [rsp+D8h] [rbp-30h]
  __int128 v92; // [rsp+E8h] [rbp-20h]
  _OWORD v93[9]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v94[4]; // [rsp+188h] [rbp+80h] BYREF
  int v95; // [rsp+18Ch] [rbp+84h]
  int v96; // [rsp+190h] [rbp+88h]
  int v97; // [rsp+194h] [rbp+8Ch]

  v83 = -2LL;
  v4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return (unsigned int)v4;
  memset_0(v94, 0, 0x5A0uLL);
  if ( *((_BYTE *)a2 + 512) )
  {
    if ( *((_DWORD *)a2 + 12) == 1 )
    {
      v5 = *((_DWORD *)a2 + 1);
      if ( v5 == *((_DWORD *)this + 22) || (v6 = 0, !*((_DWORD *)this + 20)) )
      {
LABEL_8:
        v7 = (struct InputInfo *)((char *)a2 + 56);
        if ( *((_BYTE *)this + 64) )
        {
          v8 = (PointerInfoAdapter *)*(unsigned int *)v7;
        }
        else
        {
          v8 = (PointerInfoAdapter *)*((unsigned int *)this + 14);
          *((_DWORD *)this + 14) = (_DWORD)v8 + 1;
        }
        v95 = (int)v8;
        v97 = 335872;
        if ( *((_DWORD *)a2 + 13) )
        {
          v96 = *((_DWORD *)a2 + 13);
        }
        else
        {
          v96 = *((_DWORD *)this + 15);
          *((_DWORD *)this + 15) = v96 + 1;
        }
        PointerInfoAdapter::PopulatePointerInfoProperties(v8, a2, v7, (struct tagPOINTER_INFO_UNION *)v94);
        (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 3) + 24LL))(
          *((_QWORD *)this + 3),
          *((unsigned int *)a2 + 12),
          v94);
        return (unsigned int)v4;
      }
      while ( *(_DWORD *)(*((_QWORD *)this + 9) + 16LL * v6) != v5 )
      {
        if ( ++v6 >= *((_DWORD *)this + 20) )
          goto LABEL_8;
      }
    }
LABEL_15:
    v4 = -2147418113;
    goto LABEL_47;
  }
  v9 = 1;
  v81 = 0LL;
  v10 = 0LL;
  v78 = 0LL;
  v79 = *((_DWORD *)a2 + 13);
  if ( !v79 )
  {
    v79 = *((_DWORD *)this + 15);
    *((_DWORD *)this + 15) = v79 + 1;
  }
  v11 = *((_DWORD *)a2 + 1);
  if ( v11 != *((_DWORD *)this + 22) )
  {
    v12 = 0;
    v13 = *((_DWORD *)this + 20);
    if ( v13 )
    {
      v14 = *((_QWORD *)this + 9);
      while ( *(_DWORD *)(v14 + 16LL * v12) != v11 )
      {
        if ( ++v12 >= v13 )
          goto LABEL_23;
      }
      if ( v11 == *((_DWORD *)this + 22) )
        goto LABEL_40;
      for ( i = 0; i < v13; ++i )
      {
        if ( *(_DWORD *)(v14 + 16LL * i) == v11 )
        {
          v15 = *(unsigned int **)(v14 + 16LL * i + 8);
          v4 = 0;
          goto LABEL_60;
        }
      }
LABEL_46:
      v4 = -2147467259;
LABEL_47:
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      return (unsigned int)v4;
    }
  }
LABEL_23:
  v15 = (unsigned int *)operator new(0x20uLL);
  v81 = (struct tagPOINTER_INFO_UNION *)v15;
  v15[6] = 0xFFFF;
  *((_QWORD *)v15 + 1) = operator new[](0x10uLL);
  v16 = 0LL;
  v17 = 2LL;
  do
  {
    *(_DWORD *)(v16 + *((_QWORD *)v15 + 1)) = v15[6];
    v16 += 8LL;
    --v17;
  }
  while ( v17 );
  *((_QWORD *)v15 + 2) = 2LL;
  *v15 = 0;
  *((_BYTE *)v15 + 4) = 1;
  v18 = 0;
  v19 = 0;
  v20 = *((_DWORD *)a2 + 1);
  v21 = *((_DWORD *)this + 22);
  if ( v20 == v21 )
  {
LABEL_40:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    v4 = -2147024809;
    goto LABEL_47;
  }
  v22 = 0;
  v23 = *((_DWORD *)this + 20);
  if ( !v23 )
    goto LABEL_34;
  v24 = *((_QWORD *)this + 9);
  do
  {
    if ( *(_DWORD *)(v24 + 16LL * v22) == v20 )
    {
      *(_QWORD *)(v24 + 16LL * v22 + 8) = v15;
      v4 = 0;
      v10 = 0LL;
      goto LABEL_60;
    }
    if ( !v19 && *(_DWORD *)(v24 + 16LL * v22) == v21 )
    {
      v18 = v22;
      v19 = 1;
    }
    ++v22;
  }
  while ( v22 < v23 );
  if ( v19 )
  {
LABEL_57:
    v32 = 2LL * v18;
    *(_DWORD *)(*((_QWORD *)this + 9) + 8 * v32) = *((_DWORD *)a2 + 1);
    *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v32 + 8) = v15;
    ++*((_DWORD *)this + 21);
    v4 = 0;
    goto LABEL_58;
  }
LABEL_34:
  if ( *((_DWORD *)this + 21) != v23 )
    goto LABEL_46;
  v18 = *((_DWORD *)this + 20);
  v25 = (void *)*((_QWORD *)this + 9);
  v26 = 2 * v23;
  v27 = operator new[](saturated_mul(2 * v23, 0x10uLL));
  *((_QWORD *)this + 9) = v27;
  if ( v27 )
  {
    memcpy_0(v27, v25, 16LL * *((unsigned int *)this + 20));
    if ( *((_DWORD *)this + 20) < v26 )
    {
      v30 = 16LL * *((unsigned int *)this + 20);
      v31 = v26 - *((_DWORD *)this + 20);
      do
      {
        *(_DWORD *)(v30 + *((_QWORD *)this + 9)) = *((_DWORD *)this + 22);
        v30 += 16LL;
        --v31;
      }
      while ( v31 );
    }
    *((_DWORD *)this + 20) = v26;
    operator delete(v25);
    goto LABEL_57;
  }
  v4 = -2147024882;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_58:
  if ( v4 < 0 )
    goto LABEL_47;
  v9 = 1;
  v10 = v78;
LABEL_60:
  v33 = 0LL;
  v80 = 0;
  v34 = *((unsigned int *)a2 + 12);
  if ( (_DWORD)v34 )
  {
    while ( 1 )
    {
      v35 = v9;
      v74 = v9;
      LODWORD(v77) = 0;
      v36 = (char *)a2 + 32 * v33 + 56;
      v82 = v36;
      v37 = (struct tagPOINTER_INFO_UNION *)&v94[144 * (unsigned int)v33];
      v81 = v37;
      v38 = *(_DWORD *)v36;
      if ( *(_DWORD *)v36 == v15[6] || (v39 = 0, (v40 = v15[4]) == 0) )
      {
LABEL_66:
        if ( !*((_BYTE *)this + 64) )
        {
          v38 = *((_DWORD *)this + 14);
          *((_DWORD *)this + 14) = v38 + 1;
        }
        LODWORD(v77) = v38;
        v42 = 0;
        v43 = *(_DWORD *)v36;
        if ( *(_DWORD *)v36 == v15[6] )
          goto LABEL_40;
        v44 = 0;
        v45 = v15[4];
        if ( v45 )
        {
          v46 = *((_QWORD *)v15 + 1);
          v47 = 0;
          do
          {
            v48 = *(_DWORD *)(v46 + 8LL * v44);
            if ( v48 == v43 )
            {
              *(_DWORD *)(v46 + 8LL * v44 + 4) = v38;
              goto LABEL_105;
            }
            if ( !v42 && v48 == v15[6] )
            {
              v47 = v44;
              v42 = 1;
            }
            ++v44;
          }
          while ( v44 < v45 );
          if ( v42 )
            goto LABEL_103;
        }
        if ( v15[5] != v45 )
          goto LABEL_46;
        v75 = v15[4];
        v49 = (void *)*((_QWORD *)v15 + 1);
        v50 = 2 * v45;
        v51 = operator new[](saturated_mul(v50, 8uLL));
        *((_QWORD *)v15 + 1) = v51;
        if ( v51 )
        {
          memcpy_0(v51, v49, 8LL * v15[4]);
          if ( v15[4] < v50 )
          {
            v57 = 8LL * v15[4];
            v58 = v50 - v15[4];
            do
            {
              *(_DWORD *)(v57 + *((_QWORD *)v15 + 1)) = v15[6];
              v57 += 8LL;
              --v58;
            }
            while ( v58 );
          }
          v15[4] = v50;
          operator delete(v49);
          v47 = v75;
LABEL_103:
          *(_DWORD *)(*((_QWORD *)v15 + 1) + 8LL * v47) = *(_DWORD *)v82;
          *(_DWORD *)(*((_QWORD *)v15 + 1) + 8LL * v47 + 4) = v38;
          ++v15[5];
          v4 = 0;
        }
        else
        {
          v4 = -2147024882;
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
        }
        if ( v4 < 0 )
          goto LABEL_47;
LABEL_105:
        v36 = v82;
        if ( (v82[4] & 2) != 0 )
        {
          v56 = 65537;
        }
        else
        {
          if ( (v82[4] & 1) == 0 )
            goto LABEL_15;
          v56 = 131073;
        }
        v10 = v78;
        v35 = v74;
        v37 = v81;
      }
      else
      {
        v41 = *((_QWORD *)v15 + 1);
        while ( *(_DWORD *)(v41 + 8LL * v39) != v38 )
        {
          if ( ++v39 >= v40 )
            goto LABEL_66;
        }
        if ( v38 == v15[6] )
          goto LABEL_40;
        v52 = 0;
        while ( *(_DWORD *)(v41 + 8LL * v52) != v38 )
        {
          if ( ++v52 >= v40 )
            goto LABEL_46;
        }
        v38 = *(_DWORD *)(v41 + 8LL * v52 + 4);
        LODWORD(v77) = v38;
        if ( v38 == *((_DWORD *)this + 12) )
          goto LABEL_40;
        v53 = 0;
        if ( !*((_DWORD *)this + 10) )
          goto LABEL_46;
        v54 = *((_QWORD *)this + 4);
        while ( *(_DWORD *)(152LL * v53 + v54) != v38 )
        {
          if ( ++v53 >= *((_DWORD *)this + 10) )
            goto LABEL_46;
        }
        v55 = v54 + 152LL * v53;
        v84 = *(_OWORD *)(v55 + 8);
        v85 = *(_OWORD *)(v55 + 24);
        v86 = *(_OWORD *)(v55 + 40);
        v87 = *(_OWORD *)(v55 + 56);
        v88 = *(_OWORD *)(v55 + 72);
        v89 = *(_OWORD *)(v55 + 88);
        v90 = *(_OWORD *)(v55 + 104);
        v91 = *(_OWORD *)(v55 + 120);
        v92 = *(_OWORD *)(v55 + 136);
        if ( *v15 == v38 )
          v10 = v37;
        v78 = v10;
        if ( (v36[4] & 2) != 0 )
          v56 = (BYTE12(v84) & 4) != 0 ? 0x20000 : 0x10000;
        else
          v56 = (BYTE12(v84) & 4) != 0 ? 0x40000 : 0x20000;
      }
      if ( !*v15 )
        *v15 = v38;
      if ( (v56 & 0x10000) == 0 )
        goto LABEL_120;
      if ( !*((_BYTE *)v15 + 4) )
        goto LABEL_118;
      if ( v38 != *v15 )
        break;
LABEL_119:
      *((_BYTE *)v15 + 4) = 0;
LABEL_120:
      if ( v38 == *v15 )
      {
        v56 |= 0x2000u;
        v78 = v37;
      }
LABEL_122:
      v59 = (PointerInfoAdapter *)(*((_DWORD *)v36 + 1) & 1);
      v60 = 0;
      if ( (*((_DWORD *)v36 + 1) & 1) == 0 )
        v60 = v35;
      v76 = v60;
      *((_DWORD *)v37 + 1) = v38;
      v61 = v56 | 2;
      if ( !(_DWORD)v59 )
        v61 = v56;
      *((_DWORD *)v37 + 3) = v61;
      *((_DWORD *)v37 + 2) = v79;
      PointerInfoAdapter::PopulatePointerInfoProperties(v59, a2, (struct Pointer *)v36, v37);
      v63 = (__int64 *)((char *)this + 32);
      if ( (*(_BYTE *)(v64 + 4) & 1) != 0 )
      {
        v4 = DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::SetValueForKey((char *)this + 32, &v77, v62);
        if ( v4 < 0 )
          goto LABEL_47;
      }
      else
      {
        v65 = 0;
        if ( !*((_DWORD *)this + 10) )
          goto LABEL_46;
        v66 = *v63;
        while ( *(_DWORD *)(152LL * v65 + v66) != v38 )
        {
          if ( ++v65 >= *((_DWORD *)this + 10) )
            goto LABEL_46;
        }
        v67 = 152LL * v65;
        *(_DWORD *)(v66 + v67) = *((_DWORD *)this + 12);
        memset_0(v93, 0, sizeof(v93));
        v68 = v67 + *v63;
        *(_OWORD *)(v68 + 8) = v93[0];
        *(_OWORD *)(v68 + 24) = v93[1];
        *(_OWORD *)(v68 + 40) = v93[2];
        *(_OWORD *)(v68 + 56) = v93[3];
        *(_OWORD *)(v68 + 72) = v93[4];
        *(_OWORD *)(v68 + 88) = v93[5];
        *(_OWORD *)(v68 + 104) = v93[6];
        *(_OWORD *)(v68 + 120) = v93[7];
        *(_OWORD *)(v68 + 136) = v93[8];
        --*((_DWORD *)this + 11);
        v69 = 0LL;
        if ( !v15[4] )
          goto LABEL_46;
        v70 = *((_QWORD *)v15 + 1);
        while ( *(_DWORD *)(v70 + 8 * v69) != *(_DWORD *)v82 )
        {
          v69 = (unsigned int)(v69 + 1);
          if ( (unsigned int)v69 >= v15[4] )
            goto LABEL_46;
        }
        *(_DWORD *)(v70 + 8LL * (unsigned int)v69) = v15[6];
        *(_DWORD *)(*((_QWORD *)v15 + 1) + 8LL * (unsigned int)v69 + 4) = 0;
        --v15[5];
        v4 = 0;
      }
      v33 = (unsigned int)(v80 + 1);
      v80 = v33;
      v34 = *((unsigned int *)a2 + 12);
      v9 = v76;
      if ( (unsigned int)v33 >= (unsigned int)v34 )
        goto LABEL_142;
      v10 = v78;
    }
    if ( v10 )
      *((_DWORD *)v10 + 3) &= ~0x2000u;
    *v15 = v38;
LABEL_118:
    if ( v38 != *v15 )
      goto LABEL_122;
    goto LABEL_119;
  }
LABEL_142:
  (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v34, v94);
  if ( !v9 )
    return (unsigned int)v4;
  v71 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_46;
  v72 = *((_QWORD *)this + 9);
  while ( *(_DWORD *)(v72 + 16LL * v71) != *((_DWORD *)a2 + 1) )
  {
    if ( ++v71 >= *((_DWORD *)this + 20) )
      goto LABEL_46;
  }
  v73 = 2LL * v71;
  *(_DWORD *)(v72 + 8 * v73) = *((_DWORD *)this + 22);
  *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v73 + 8) = 0LL;
  --*((_DWORD *)this + 21);
  v4 = 0;
  if ( v15 )
  {
    operator delete(*((void **)v15 + 1));
    operator delete(v15);
  }
  return (unsigned int)v4;
}
