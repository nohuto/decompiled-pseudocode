/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x140617EE0
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x1405DB5D0 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x1405DB990 (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1400D0500 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x14016F550 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnpCmResourcesToIoResources @ 0x140617938 (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, char **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r13d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r15
  unsigned int *v11; // r11
  __int64 v12; // r9
  unsigned int *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r8
  char v16; // al
  unsigned int v17; // edx
  int v18; // eax
  _DWORD *v19; // r14
  int v20; // r10d
  _DWORD *v21; // rdx
  int v22; // r9d
  _DWORD *v23; // r8
  bool v24; // zf
  int v25; // ecx
  int v26; // r9d
  __int64 v27; // rdi
  struct _IO_RESOURCE_DESCRIPTOR *v28; // r8
  __int64 v29; // rdx
  unsigned int *v30; // rcx
  int v31; // r10d
  unsigned int v32; // r11d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v33; // rax
  unsigned int v34; // r9d
  _DWORD *v35; // r15
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v36; // r12
  unsigned __int64 v37; // r13
  unsigned int v38; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v39; // rdi
  UCHAR Type; // r13
  unsigned __int64 v41; // rax
  int ShareDisposition; // eax
  unsigned __int64 v43; // r10
  int v44; // edx
  bool v45; // cc
  int v46; // r8d
  int v47; // r9d
  unsigned __int64 v48; // r11
  unsigned __int64 Vector; // r12
  unsigned __int64 v50; // rdx
  unsigned __int64 Length; // rax
  unsigned __int64 v52; // rcx
  UCHAR v53; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v56; // ecx
  unsigned int v57; // r14d
  unsigned int *v58; // rax
  unsigned int *v59; // rdi
  unsigned int *v60; // rax
  unsigned int v61; // eax
  int v62; // r11d
  _DWORD *v63; // r8
  _DWORD *v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r9
  __int16 v67; // ax
  char *v68; // rcx
  ULONGLONG v69; // rax
  ULONGLONG v70; // rax
  int v72; // r13d
  int v73; // r13d
  int v74; // r13d
  int v75; // r13d
  int v76; // r13d
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v79; // [rsp+28h] [rbp-89h]
  unsigned __int64 v80; // [rsp+30h] [rbp-81h]
  int v81; // [rsp+38h] [rbp-79h]
  unsigned int v82; // [rsp+3Ch] [rbp-75h]
  int v83; // [rsp+40h] [rbp-71h]
  int v84; // [rsp+44h] [rbp-6Dh]
  __int16 v85; // [rsp+4Ch] [rbp-65h]
  unsigned int v86; // [rsp+50h] [rbp-61h]
  unsigned int v87; // [rsp+54h] [rbp-5Dh]
  int v88; // [rsp+58h] [rbp-59h]
  int v89; // [rsp+5Ch] [rbp-55h]
  unsigned __int64 Start; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+70h] [rbp-41h] BYREF
  int v93; // [rsp+78h] [rbp-39h]
  int v94; // [rsp+7Ch] [rbp-35h]
  int v95; // [rsp+80h] [rbp-31h]
  unsigned __int64 Alignment; // [rsp+88h] [rbp-29h] BYREF
  _DWORD *v97; // [rsp+90h] [rbp-21h]
  unsigned __int64 v98; // [rsp+98h] [rbp-19h]
  ULONGLONG v99; // [rsp+A0h] [rbp-11h]
  _DWORD *v100; // [rsp+A8h] [rbp-9h]
  __int64 v101; // [rsp+B0h] [rbp-1h]
  unsigned int *v102; // [rsp+B8h] [rbp+7h]
  _DWORD *p_Type; // [rsp+118h] [rbp+67h]
  UCHAR v104; // [rsp+118h] [rbp+67h]

  v4 = 0;
  v97 = 0LL;
  v6 = a2;
  v83 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = PnpCmResourcesToIoResources((__int64)Src, a2, 1);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)*Src, 0x75737050u);
  v100 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, (unsigned int)*Src);
  if ( !v6 || !*v6 )
    goto LABEL_151;
  v11 = v6 + 1;
  v12 = *v6;
  v102 = v6 + 1;
  v13 = v6 + 1;
  do
  {
    v14 = v13[3];
    v13 += 4;
    v8 += v14;
    if ( v14 )
    {
      for ( i = v14; i; --i )
      {
        v16 = *(_BYTE *)v13;
        v17 = 0;
        if ( *(_BYTE *)v13 == 5 )
        {
          v17 = v13[1];
        }
        else if ( v16 >= -126 && (unsigned __int8)(v16 - 1) <= 6u )
        {
          goto LABEL_12;
        }
        --v8;
LABEL_12:
        v13 = (unsigned int *)((char *)v13 + v17 + 20);
      }
    }
    --v12;
  }
  while ( v12 );
  v84 = v8;
  if ( !v8 )
  {
LABEL_151:
    *a3 = (char *)v10;
    return 0LL;
  }
  v18 = v10[7];
  v19 = v10 + 8;
  v20 = 0;
  v89 = 0;
  v21 = v10 + 8;
  v22 = v18 - 1;
  if ( v18 - 1 >= 0 )
  {
    do
    {
      v23 = v21 + 2;
      v21 += 8 * (unsigned int)v21[1] + 2;
      while ( v23 < v21 )
      {
        v24 = *((_BYTE *)v23 + 1) == 0;
        v25 = v20 + 1;
        *((_BYTE *)v23 + 3) = 0;
        if ( !v24 )
          v25 = v20;
        v23 += 8;
        v20 = v25;
      }
      --v22;
    }
    while ( v22 >= 0 );
    v18 = v10[7];
    v89 = v20;
  }
  v26 = v18 - 1;
  v95 = v18 - 1;
  v88 = v18 - 1;
  if ( v18 - 1 >= 0 )
  {
    while ( 2 )
    {
      v85 = *(_WORD *)v19;
      if ( *(_WORD *)v19 == 0xFFFF )
        v85 = 1;
      v27 = (unsigned int)v19[1];
      v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
      *(_WORD *)v19 = 0;
      v29 = (__int64)&v19[8 * v27 + 2];
      v101 = v27;
      v80 = v29;
      if ( v19 + 2 == (_DWORD *)v29 )
      {
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_78;
      }
      v30 = v11;
      v31 = 1;
      v32 = 0;
      p_Type = v30;
      v81 = 1;
      v87 = 0;
      if ( *v6 )
      {
        do
        {
          v33 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v30 + 4);
          v34 = 0;
          v79 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v30 + 4);
          v86 = 0;
          if ( v30[3] )
          {
            v35 = p_Type;
            v36 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v30 + 4);
            do
            {
              if ( v36->Type == 5 )
              {
                LowPart = v36->u.Generic.Start.LowPart;
              }
              else
              {
                if ( v36->Type != 129 && (unsigned __int8)(v36->Type - 1) <= 6u )
                {
                  v37 = v80;
                  v38 = 0;
                  v82 = 0;
                  while ( 1 )
                  {
                    v39 = v28;
                    if ( (unsigned __int64)v28 >= v37 )
                      goto LABEL_65;
                    Type = v36->Type;
                    v41 = v80;
                    v104 = v36->Type;
                    while ( 1 )
                    {
                      if ( v39->Type != Type || v39->Spare1 )
                        goto LABEL_39;
                      ShareDisposition = v36->ShareDisposition;
                      v43 = 1LL;
                      v44 = v39->ShareDisposition;
                      v45 = (unsigned __int8)(v36->ShareDisposition - 1) <= 2u;
                      Alignment = 1LL;
                      v46 = ShareDisposition;
                      if ( !v45 )
                        v46 = v44;
                      v47 = v44;
                      v93 = v46;
                      v48 = 1LL;
                      if ( (unsigned __int8)(v44 - 1) > 2u )
                        v47 = (unsigned __int8)v46;
                      v94 = v47;
                      switch ( Type )
                      {
                        case 1u:
                          goto LABEL_96;
                        case 2u:
                          Vector = v36->u.Interrupt.Vector;
                          Start = Vector;
                          v50 = (unsigned int)Vector;
LABEL_49:
                          Length = v39->u.Port.Length;
                          v52 = v39->u.Port.Alignment;
                          MinimumAddress = Length;
                          MaximumAddress = v52;
                          break;
                        case 3u:
LABEL_96:
                          v69 = RtlCmDecodeMemIoResource(v36, &Start);
                          Vector = Start;
                          v99 = v69;
                          v98 = v69 + Start - 1;
                          v70 = RtlIoDecodeMemIoResource(v39, &Alignment, &MinimumAddress, &MaximumAddress);
                          v52 = MaximumAddress;
                          v48 = v70;
                          Length = MinimumAddress;
                          v50 = v98;
                          LOBYTE(v46) = v93;
                          LOBYTE(v47) = v94;
                          v43 = v99;
                          break;
                        case 4u:
                          v50 = v36->u.Generic.Start.LowPart;
                          Vector = v50;
                          Start = v50;
                          goto LABEL_49;
                        case 6u:
                          Vector = v36->u.Generic.Start.LowPart;
                          v52 = v39->u.Port.MinimumAddress.LowPart;
                          v48 = v39->u.Port.Length;
                          v43 = v79->u.Interrupt.Vector;
                          Length = v39->u.Port.Alignment;
                          Start = Vector;
                          MinimumAddress = Length;
                          MaximumAddress = v52;
                          v50 = (unsigned int)(Vector + v43 - 1);
                          break;
                        case 7u:
                          goto LABEL_96;
                        default:
                          Length = 0LL;
                          MinimumAddress = 0LL;
                          Vector = 0LL;
                          Start = 0LL;
                          v52 = 0LL;
                          MaximumAddress = 0LL;
                          v50 = 0LL;
                          break;
                      }
                      if ( v82 )
                      {
                        v81 = 0;
                        if ( v52 >= v50
                          && (_BYTE)v46 == (_BYTE)v47
                          && Length <= Vector
                          && v48 >= v43
                          && ((Alignment - 1) & Vector) == 0 )
                        {
                          v72 = Type - 1;
                          if ( !v72 )
                            goto LABEL_125;
                          v73 = v72 - 1;
                          if ( !v73 )
                            goto LABEL_135;
                          v74 = v73 - 1;
                          if ( !v74 )
                            goto LABEL_125;
                          v75 = v74 - 1;
                          if ( v75 )
                          {
                            v76 = v75 - 2;
                            if ( v76 )
                            {
                              if ( v76 == 1 )
                              {
LABEL_125:
                                v39->u.Port.MinimumAddress.QuadPart = Vector;
                                v39->u.Port.MaximumAddress.QuadPart = Vector + v48 - 1;
                              }
                            }
                            else
                            {
                              v39->u.Port.Alignment = Vector;
                              v39->u.Port.MinimumAddress.LowPart = v48 + Vector - 1;
                            }
                          }
                          else
                          {
LABEL_135:
                            v39->u.Port.Length = Vector;
                            v39->u.Port.Alignment = v50;
                          }
                          ++*(_WORD *)v19;
                          v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                          v24 = (v39->Option & 8) == 0;
                          v36 = v79;
                          v39->Spare1 = 0x80;
                          v39->Flags = v79->Flags;
                          if ( !v24 )
                          {
                            for ( j = v39 - 1; j >= v28; --j )
                            {
                              j->Type = 0;
                              --v19[1];
                              if ( j->Option != 8 )
                                break;
                            }
                          }
                          v37 = v80;
                          v39->Option = 1;
                          while ( (unsigned __int64)++v39 < v80 && (v39->Option & 8) != 0 )
                          {
                            v39->Type = 0;
                            --v19[1];
                          }
                          v31 = 0;
LABEL_41:
                          v38 = v82;
                          goto LABEL_65;
                        }
                        goto LABEL_98;
                      }
                      if ( Length == Vector && (_BYTE)v46 == (_BYTE)v47 && v52 >= v50 && v48 >= v43 )
                        break;
LABEL_98:
                      v36 = v79;
                      Type = v104;
                      v41 = v80;
LABEL_39:
                      if ( (unsigned __int64)++v39 >= v41 )
                      {
                        v37 = v80;
                        v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                        v31 = v81;
                        goto LABEL_41;
                      }
                    }
                    v31 = v81;
                    v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                    if ( v52 != v50 )
                      v31 = 0;
                    ++*(_WORD *)v19;
                    v24 = (v39->Option & 8) == 0;
                    v81 = v31;
                    v39->Spare1 = 0x80;
                    if ( !v24 )
                    {
                      for ( k = v39 - 1; k >= v28; --k )
                      {
                        k->Type = 0;
                        --v19[1];
                        if ( k->Option != 8 )
                          break;
                      }
                    }
                    v53 = v39->Type;
                    v39->Option = 1;
                    v39->Flags = v79->Flags;
                    if ( ((v53 - 1) & 0xF9) != 0 || v53 == 5 )
                    {
                      if ( v53 == 6 )
                      {
                        v39->u.Port.Alignment = Vector;
                        v39->u.Port.MinimumAddress.LowPart = v48 + Vector - 1;
                      }
                    }
                    else
                    {
                      v39->u.Port.MinimumAddress.QuadPart = Vector;
                      v39->u.Port.Alignment = 1;
                      v39->u.Port.MaximumAddress.QuadPart = Vector + v48 - 1;
                    }
                    v37 = v80;
                    for ( m = v39 + 1; (unsigned __int64)m < v80 && (m->Option & 8) != 0; ++m )
                    {
                      m->Type = 0;
                      --v19[1];
                    }
                    v36 = v79;
                    v38 = 1;
LABEL_65:
                    v82 = ++v38;
                    if ( v38 >= 2 )
                    {
                      v34 = v86;
                      break;
                    }
                  }
                }
                LowPart = 0LL;
              }
              ++v34;
              v36 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v36 + LowPart + 20);
              v86 = v34;
              v79 = v36;
            }
            while ( v34 < v35[3] );
            v6 = a2;
            v33 = v79;
            v32 = v87;
          }
          ++v32;
          p_Type = &v33->Type;
          v30 = (unsigned int *)&v33->Type;
          v87 = v32;
        }
        while ( v32 < *v6 );
        v10 = v100;
        v8 = v84;
        v29 = v80;
        v26 = v88;
        LODWORD(v27) = v101;
      }
      if ( *(_WORD *)v19 == (_WORD)v8 )
      {
        v56 = v19[1];
        if ( v56 != v8 && (v56 != v8 + 1 || *((_BYTE *)v19 + 9) != 0x80) )
        {
          v83 += v56;
          *(_WORD *)v19 = v85;
          goto LABEL_77;
        }
        if ( !v97 )
        {
          v83 += v56;
          v97 = v19;
          *(_WORD *)v19 = v85;
          if ( v31 )
            *a4 = 1;
          goto LABEL_77;
        }
      }
      *(_WORD *)v19 = -1;
      --v10[7];
LABEL_77:
      v19[1] = v27;
      v11 = v6 + 1;
      v19 = (_DWORD *)v29;
LABEL_78:
      v18 = v10[7];
      v88 = --v26;
      if ( v26 >= 0 )
        continue;
      break;
    }
    v20 = v89;
  }
  if ( v18 )
  {
    v57 = 32 * (v83 - v20 + 1) + 40 * v18;
    v58 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v57, 0x75737050u);
    v59 = v58;
    if ( v58 )
    {
      memset(v58, 0, v57);
      v60 = v102;
      *v59 = v57;
      v59[1] = *v60;
      v59[2] = a2[2];
      v59[3] = v10[3];
      v61 = v10[7];
      if ( v61 > 1 )
        *a4 = 0;
      v62 = v95;
      v63 = v59 + 8;
      v59[7] = v61;
      if ( v62 >= 0 )
      {
        v64 = v10 + 8;
        do
        {
          v65 = (unsigned __int64)(v64 + 2);
          v66 = (unsigned __int64)&v64[8 * v64[1] + 2];
          if ( *(_WORD *)v64 != 0xFFFF )
          {
            *(_WORD *)v63 = *(_WORD *)v64;
            v67 = *((_WORD *)v64 + 1);
            v68 = (char *)(v63 + 2);
            *((_WORD *)v63 + 1) = v67;
            if ( *(_BYTE *)(v65 + 1) == 0x80 )
            {
              *v59 -= 32;
            }
            else
            {
              *((_WORD *)v63 + 4) = -32767;
              v68 = (char *)(v63 + 10);
              *(_DWORD *)((char *)v63 + 10) = 3;
              *((_WORD *)v63 + 7) = 0;
              v63[4] = 1;
            }
            while ( v65 < v66 )
            {
              if ( *(_BYTE *)(v65 + 1) )
              {
                *(_OWORD *)v68 = *(_OWORD *)v65;
                *((_OWORD *)v68 + 1) = *(_OWORD *)(v65 + 16);
                v68 += 32;
              }
              v65 += 32LL;
            }
            v63[1] = (v68 - (char *)v63 - 8) >> 5;
            v63[4] = 1;
            v63 = v68;
          }
          --v62;
          v64 = (_DWORD *)v66;
        }
        while ( v62 >= 0 );
      }
      *a3 = (char *)v59;
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v4 = -1073741670;
  }
  else
  {
    *a3 = PnpCmResourcesToIoResources(0xFFFFLL, v6, 1);
  }
  ExFreePoolWithTag(v10, 0);
  return v4;
}
