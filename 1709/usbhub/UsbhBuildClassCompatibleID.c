/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C0020C90
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C0023460 (UsbhBuildCompatibleID.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C005344C (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _DWORD *v5; // rdi
  char *v6; // r15
  SIZE_T v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // esi
  char *v12; // rax
  char *v13; // r14
  char *v14; // rcx
  unsigned int v15; // edi
  char *v16; // rax
  char *v17; // r15
  char *v18; // rcx
  unsigned int v19; // esi
  char *v20; // rax
  char *v21; // r14
  char *v22; // rdx
  unsigned int v23; // edi
  char *v24; // rax
  char *v25; // r15
  char *v26; // rcx
  unsigned int v27; // ebp
  char *v28; // rax
  char *v29; // r14
  char *v30; // rcx
  int v31; // esi
  char *v32; // rax
  char *v33; // rdi
  char *v34; // rcx
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rcx
  int v38; // r8d
  __int64 v40; // rbx
  __int64 v41; // r12
  _BYTE *v42; // rbx
  SIZE_T v43; // r14
  __int64 v44; // r14
  bool v45; // zf
  _QWORD *PoolWithTag; // rax
  _QWORD *v47; // r13
  _WORD *i; // rcx
  unsigned int j; // edx
  _BYTE *v50; // rsi
  __int64 v51; // rax
  char *v52; // rax
  char *v53; // rcx
  unsigned int k; // edx
  _BYTE *v55; // rdi
  SIZE_T v56; // rsi
  char *v57; // rax
  char *v58; // r14
  __int64 v59; // rbx
  char *v60; // rcx
  unsigned int m; // edx
  int v62; // r8d
  __int64 v63; // r12
  _BYTE *v64; // rbx
  SIZE_T v65; // r14
  __int64 v66; // r14
  _QWORD *v67; // rax
  _QWORD *v68; // r13
  _WORD *n; // rcx
  unsigned int ii; // edx
  _BYTE *v71; // rsi
  __int64 v72; // rax
  char *v73; // rax
  char *v74; // rcx
  unsigned int jj; // edx
  _BYTE *v76; // rdi
  SIZE_T v77; // rsi
  char *v78; // rax
  char *v79; // r14
  __int64 v80; // rbx
  char *v81; // rcx
  unsigned int kk; // edx
  unsigned __int64 v83; // [rsp+40h] [rbp-58h]
  unsigned __int64 v84; // [rsp+48h] [rbp-50h]
  unsigned __int8 v88; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v5 = PdoExt(a2);
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *((unsigned __int8 *)v5 + 2430);
  v9 = *((unsigned __int8 *)v5 + 2431);
  v88 = *((_BYTE *)v5 + 2432);
  v84 = v9;
  v83 = v8;
  Log(a1, 4096, 1684228420, v8, v9);
  if ( (v5[704] & 0x20) != 0 )
  {
    v40 = *((_QWORD *)v5 + 355);
    v41 = -1LL;
    if ( *(_BYTE *)(v40 + 12) )
    {
      v42 = (_BYTE *)(v40 + 4);
      if ( *v42 )
      {
        v43 = 26LL;
        if ( v42 )
        {
          v44 = -1LL;
          do
            v45 = v42[++v44] == 0;
          while ( !v45 );
          v43 = 2 * v44 + 24;
        }
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v43, 0x42554855u);
        v47 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_87;
        memset(PoolWithTag, 0, v43);
        *(_OWORD *)v47 = *(_OWORD *)L"USB\\MS_COMP_n";
        v47[2] = *(_QWORD *)L"OMP_n";
        *((_WORD *)v47 + 12) = aUsbMsCompN[12];
        for ( i = v47; *i != 110; ++i )
          ;
        if ( v42 )
        {
          for ( j = 0; j < 8; ++j )
          {
            if ( !*v42 )
              break;
            *i++ = (unsigned __int8)*v42++;
          }
        }
        v7 = (unsigned __int16)v43 + 28LL;
        v50 = (_BYTE *)(*((_QWORD *)v5 + 355) + 12LL);
        if ( *((_QWORD *)v5 + 355) != -12LL )
        {
          v51 = -1LL;
          do
            v45 = v50[++v51] == 0;
          while ( !v45 );
          v7 = v7 + 2 * v51 - 2;
        }
        v52 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x42554855u);
        v6 = v52;
        if ( v52 )
        {
          memset(v52, 0, v7);
          memmove(v6, v47, (unsigned int)v43);
          v53 = &v6[(unsigned int)v43];
          *(_OWORD *)v53 = *(_OWORD *)L"&MS_SUBCOMP_n";
          *((_QWORD *)v53 + 2) = *(_QWORD *)L"OMP_n";
          for ( *((_WORD *)v53 + 12) = aMsSubcompN[12]; *(_WORD *)v53 != 110; v53 += 2 )
            ;
          if ( v50 )
          {
            for ( k = 0; k < 8; ++k )
            {
              if ( !*v50 )
                break;
              *(_WORD *)v53 = (unsigned __int8)*v50++;
              v53 += 2;
            }
          }
        }
        else
        {
          LODWORD(v7) = 0;
        }
        ExFreePoolWithTag(v47, 0);
        if ( !v6 )
          goto LABEL_79;
        v9 = v84;
      }
    }
    v55 = (_BYTE *)(*((_QWORD *)v5 + 355) + 4LL);
    if ( !*v55 )
      goto LABEL_92;
    v56 = (unsigned __int16)v7 + 28LL;
    if ( v55 )
    {
      do
        v45 = v55[++v41] == 0;
      while ( !v45 );
      v56 = v56 + 2 * v41 - 2;
    }
    v57 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v56, 0x42554855u);
    v58 = v57;
    if ( v57 )
    {
      memset(v57, 0, v56);
      v59 = (unsigned int)v7;
      memmove(v58, v6, (unsigned int)v7);
      v60 = &v58[(unsigned int)v7];
      LODWORD(v7) = v56;
      *(_OWORD *)v60 = *(_OWORD *)L"USB\\MS_COMP_n";
      *((_QWORD *)v60 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v60 + 12) = aUsbMsCompN[12];
      if ( *(_WORD *)&v58[v59] != 110 )
      {
        do
          v60 += 2;
        while ( *(_WORD *)v60 != 110 );
      }
      if ( v55 )
      {
        for ( m = 0; m < 8; ++m )
        {
          if ( !*v55 )
            break;
          *(_WORD *)v60 = (unsigned __int8)*v55++;
          v60 += 2;
        }
      }
    }
    else
    {
      LODWORD(v7) = 0;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    v6 = v58;
    if ( v58 )
    {
LABEL_92:
      v4 = a2;
      goto LABEL_93;
    }
    goto LABEL_79;
  }
  v10 = *((_QWORD *)v5 + 315);
  if ( !v10 )
    goto LABEL_3;
  v63 = -1LL;
  if ( *(_BYTE *)(v10 + 26) )
  {
    v64 = (_BYTE *)(v10 + 18);
    v65 = 26LL;
    if ( v10 != -18 )
    {
      v66 = -1LL;
      do
        v45 = v64[++v66] == 0;
      while ( !v45 );
      v65 = 2 * v66 + 24;
    }
    v67 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v65, 0x42554855u);
    v68 = v67;
    if ( v67 )
    {
      memset(v67, 0, v65);
      *(_OWORD *)v68 = *(_OWORD *)L"USB\\MS_COMP_n";
      v68[2] = *(_QWORD *)L"OMP_n";
      *((_WORD *)v68 + 12) = aUsbMsCompN[12];
      for ( n = v68; *n != 110; ++n )
        ;
      if ( v64 )
      {
        for ( ii = 0; ii < 8; ++ii )
        {
          if ( !*v64 )
            break;
          *n++ = (unsigned __int8)*v64++;
        }
      }
      v7 = (unsigned __int16)v65 + 28LL;
      v71 = (_BYTE *)(*((_QWORD *)v5 + 315) + 26LL);
      if ( *((_QWORD *)v5 + 315) != -26LL )
      {
        v72 = -1LL;
        do
          v45 = v71[++v72] == 0;
        while ( !v45 );
        v7 = v7 + 2 * v72 - 2;
      }
      v73 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x42554855u);
      v6 = v73;
      if ( v73 )
      {
        memset(v73, 0, v7);
        memmove(v6, v68, (unsigned int)v65);
        v74 = &v6[(unsigned int)v65];
        *(_OWORD *)v74 = *(_OWORD *)L"&MS_SUBCOMP_n";
        *((_QWORD *)v74 + 2) = *(_QWORD *)L"OMP_n";
        for ( *((_WORD *)v74 + 12) = aMsSubcompN[12]; *(_WORD *)v74 != 110; v74 += 2 )
          ;
        if ( v71 )
        {
          for ( jj = 0; jj < 8; ++jj )
          {
            if ( !*v71 )
              break;
            *(_WORD *)v74 = (unsigned __int8)*v71++;
            v74 += 2;
          }
        }
      }
      else
      {
        LODWORD(v7) = 0;
      }
      ExFreePoolWithTag(v68, 0);
      if ( v6 )
      {
        v9 = v84;
        v4 = a2;
        goto LABEL_121;
      }
LABEL_79:
      v35 = a2;
LABEL_80:
      v36 = 4;
LABEL_82:
      v62 = 1667839265;
LABEL_84:
      v37 = a1;
LABEL_86:
      Log(v37, v36, v62, v35, -1073741670LL);
      return 3221225626LL;
    }
LABEL_87:
    Log(a1, 4, 1667839265, a2, -1073741670LL);
    return 3221225626LL;
  }
LABEL_121:
  v76 = (_BYTE *)(*((_QWORD *)v5 + 315) + 18LL);
  if ( *v76 )
  {
    v77 = (unsigned __int16)v7 + 28LL;
    if ( v76 )
    {
      do
        v45 = v76[++v63] == 0;
      while ( !v45 );
      v77 = v77 + 2 * v63 - 2;
    }
    v78 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v77, 0x42554855u);
    v79 = v78;
    if ( v78 )
    {
      memset(v78, 0, v77);
      v80 = (unsigned int)v7;
      memmove(v79, v6, (unsigned int)v7);
      v81 = &v79[(unsigned int)v7];
      LODWORD(v7) = v77;
      *(_OWORD *)v81 = *(_OWORD *)L"USB\\MS_COMP_n";
      *((_QWORD *)v81 + 2) = *(_QWORD *)L"OMP_n";
      *((_WORD *)v81 + 12) = aUsbMsCompN[12];
      if ( *(_WORD *)&v79[v80] != 110 )
      {
        do
          v81 += 2;
        while ( *(_WORD *)v81 != 110 );
      }
      if ( v76 )
      {
        for ( kk = 0; kk < 8; ++kk )
        {
          if ( !*v76 )
            break;
          *(_WORD *)v81 = (unsigned __int8)*v76++;
          v81 += 2;
        }
      }
      v4 = a2;
    }
    else
    {
      LODWORD(v7) = 0;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    v6 = v79;
    if ( !v79 )
    {
      v35 = v4;
      goto LABEL_80;
    }
  }
LABEL_93:
  v8 = v83;
LABEL_3:
  v11 = (unsigned __int16)v7 + 24;
  v12 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v7 + 24LL, 0x42554855u);
  v13 = v12;
  if ( v12 )
  {
    memset(v12, 0, (unsigned __int16)v7 + 24LL);
    memmove(v13, v6, (unsigned int)v7);
    v14 = &v13[(unsigned int)v7];
    *(_OWORD *)v14 = *(_OWORD *)L"USB\\Class_nn";
    for ( *((_QWORD *)v14 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v14 != 110; v14 += 2 )
      ;
    v4 = a2;
    *(_WORD *)v14 = (unsigned __int8)Nibble[v8 >> 4];
    *((_WORD *)v14 + 1) = (unsigned __int8)Nibble[v8 & 0xF];
  }
  else
  {
    v11 = 0;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( !v13 )
  {
    v35 = v4;
    v36 = 4096;
    goto LABEL_82;
  }
  v15 = (unsigned __int16)v11 + 24;
  v16 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v11 + 24LL, 0x42554855u);
  v17 = v16;
  if ( v16 )
  {
    memset(v16, 0, (unsigned __int16)v11 + 24LL);
    memmove(v17, v13, v11);
    v18 = &v17[v11];
    *(_OWORD *)v18 = *(_OWORD *)L"&SubClass_nn";
    for ( *((_QWORD *)v18 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v18 != 110; v18 += 2 )
      ;
    *(_WORD *)v18 = (unsigned __int8)Nibble[v9 >> 4];
    *((_WORD *)v18 + 1) = (unsigned __int8)Nibble[v9 & 0xF];
  }
  else
  {
    v15 = 0;
  }
  ExFreePoolWithTag(v13, 0);
  if ( !v17 )
  {
    v35 = a2;
    v36 = 4096;
    v62 = 1667839009;
    goto LABEL_84;
  }
  v19 = (unsigned __int16)v15 + 18;
  v20 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v15 + 18LL, 0x42554855u);
  v21 = v20;
  if ( v20 )
  {
    memset(v20, 0, (unsigned __int16)v15 + 18LL);
    memmove(v21, v17, v15);
    v22 = &v21[v15];
    for ( *(_OWORD *)v22 = *(_OWORD *)L"&Prot_nn"; *(_WORD *)v22 != 110; v22 += 2 )
      ;
    *(_WORD *)v22 = (unsigned __int8)Nibble[(unsigned __int64)v88 >> 4];
    *((_WORD *)v22 + 1) = (unsigned __int8)Nibble[v88 & 0xF];
  }
  else
  {
    v19 = 0;
  }
  ExFreePoolWithTag(v17, 0);
  if ( !v21 )
  {
    v35 = a2;
    v36 = 4096;
    v62 = 1667838753;
    goto LABEL_84;
  }
  v23 = (unsigned __int16)v19 + 24;
  v24 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v19 + 24LL, 0x42554855u);
  v25 = v24;
  if ( v24 )
  {
    memset(v24, 0, (unsigned __int16)v19 + 24LL);
    memmove(v25, v21, v19);
    v26 = &v25[v19];
    *(_OWORD *)v26 = *(_OWORD *)L"USB\\Class_nn";
    for ( *((_QWORD *)v26 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v26 != 110; v26 += 2 )
      ;
    *(_WORD *)v26 = (unsigned __int8)Nibble[v8 >> 4];
    *((_WORD *)v26 + 1) = (unsigned __int8)Nibble[v8 & 0xF];
  }
  else
  {
    v23 = 0;
  }
  ExFreePoolWithTag(v21, 0);
  if ( !v25 )
  {
    v35 = a2;
    v36 = 4096;
    v62 = 1667838497;
    goto LABEL_84;
  }
  v27 = (unsigned __int16)v23 + 26;
  v28 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v23 + 26LL, 0x42554855u);
  v29 = v28;
  if ( v28 )
  {
    memset(v28, 0, (unsigned __int16)v23 + 26LL);
    memmove(v29, v25, v23);
    v30 = &v29[v23];
    *(_OWORD *)v30 = *(_OWORD *)L"&SubClass_nn";
    for ( *((_QWORD *)v30 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v30 != 110; v30 += 2 )
      ;
    *(_WORD *)v30 = (unsigned __int8)Nibble[v9 >> 4];
    *((_WORD *)v30 + 1) = (unsigned __int8)Nibble[v9 & 0xF];
  }
  else
  {
    v27 = 0;
  }
  ExFreePoolWithTag(v25, 0);
  if ( !v29 )
  {
    v35 = a2;
    v36 = 4096;
    v62 = 1667838241;
    goto LABEL_84;
  }
  v31 = (unsigned __int16)v27 + 28;
  v32 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v27 + 28LL, 0x42554855u);
  v33 = v32;
  if ( v32 )
  {
    memset(v32, 0, (unsigned __int16)v27 + 28LL);
    memmove(v33, v29, v27);
    v34 = &v33[v27];
    *(_OWORD *)v34 = *(_OWORD *)L"USB\\Class_nn";
    for ( *((_QWORD *)v34 + 2) = *(_QWORD *)L"s_nn"; *(_WORD *)v34 != 110; v34 += 2 )
      ;
    *(_WORD *)v34 = (unsigned __int8)Nibble[v8 >> 4];
    *((_WORD *)v34 + 1) = (unsigned __int8)Nibble[v8 & 0xF];
  }
  else
  {
    v31 = 0;
  }
  ExFreePoolWithTag(v29, 0);
  v35 = a2;
  v36 = 4096;
  v37 = a1;
  if ( !v33 )
  {
    v62 = 1667837985;
    goto LABEL_86;
  }
  *(_QWORD *)(a3 + 8) = v33;
  *(_DWORD *)(a3 + 4) = v31;
  Log(a1, 4096, 1667459428, a2, (__int64)v33);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Sd(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v38,
      19,
      (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
      (__int64)v33,
      v31);
  return 0LL;
}
