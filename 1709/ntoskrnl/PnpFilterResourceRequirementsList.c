/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x1405CB624
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x140557750 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x140557B18 (IopQueryDeviceResources.c)
 * Callees:
 *     RtlIoDecodeMemIoResource @ 0x140128820 (RtlIoDecodeMemIoResource.c)
 *     RtlCmDecodeMemIoResource @ 0x14012B970 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PnpCmResourcesToIoResources @ 0x1405D2108 (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, unsigned int **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r13d
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // r15
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v11; // r11
  __int64 v12; // r10
  _DWORD *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r9
  unsigned __int8 v16; // al
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  _DWORD *v19; // r14
  _DWORD *v20; // rdx
  int v21; // r10d
  char v22; // cl
  _DWORD *v23; // r8
  int v24; // eax
  int v25; // r9d
  __int64 v26; // rdi
  struct _IO_RESOURCE_DESCRIPTOR *v27; // r8
  __int64 v28; // rdx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // rcx
  int v30; // r10d
  unsigned int v31; // r11d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v32; // rax
  unsigned int v33; // r9d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v34; // r15
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v35; // r12
  unsigned __int64 v36; // r13
  unsigned int v37; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v38; // rdi
  UCHAR Type; // r13
  unsigned __int64 v40; // rax
  int ShareDisposition; // eax
  unsigned __int64 v42; // r10
  int v43; // edx
  bool v44; // cc
  int v45; // r8d
  int v46; // r9d
  unsigned __int64 v47; // r11
  unsigned __int64 Vector; // r12
  unsigned __int64 v49; // rdx
  unsigned __int64 Length; // rax
  unsigned __int64 v51; // rcx
  bool v52; // zf
  UCHAR v53; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // r14d
  unsigned int *v59; // rax
  unsigned int *v60; // rdi
  unsigned int *v61; // rax
  unsigned int v62; // eax
  int v63; // r11d
  _DWORD *v64; // r8
  _DWORD *v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r9
  __int16 v68; // ax
  char *v69; // rcx
  ULONGLONG v70; // rax
  ULONGLONG v71; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  int v74; // r13d
  int v75; // r13d
  int v76; // r13d
  int v77; // r13d
  int v78; // r13d
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v80; // [rsp+28h] [rbp-89h]
  unsigned __int64 v81; // [rsp+30h] [rbp-81h]
  int v82; // [rsp+38h] [rbp-79h]
  unsigned int v83; // [rsp+3Ch] [rbp-75h]
  int v84; // [rsp+40h] [rbp-71h]
  int v85; // [rsp+44h] [rbp-6Dh]
  __int16 v86; // [rsp+4Ch] [rbp-65h]
  unsigned int v87; // [rsp+50h] [rbp-61h]
  unsigned int v88; // [rsp+54h] [rbp-5Dh]
  int v89; // [rsp+58h] [rbp-59h]
  int v90; // [rsp+5Ch] [rbp-55h]
  unsigned __int64 Start; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+70h] [rbp-41h] BYREF
  int v94; // [rsp+78h] [rbp-39h]
  int v95; // [rsp+7Ch] [rbp-35h]
  int v96; // [rsp+80h] [rbp-31h]
  unsigned __int64 Alignment; // [rsp+88h] [rbp-29h] BYREF
  _DWORD *v98; // [rsp+90h] [rbp-21h]
  unsigned __int64 v99; // [rsp+98h] [rbp-19h]
  ULONGLONG v100; // [rsp+A0h] [rbp-11h]
  unsigned int *v101; // [rsp+A8h] [rbp-9h]
  __int64 v102; // [rsp+B0h] [rbp-1h]
  unsigned int *v103; // [rsp+B8h] [rbp+7h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v104; // [rsp+118h] [rbp+67h]
  UCHAR v105; // [rsp+118h] [rbp+67h]

  v4 = 0;
  v98 = 0LL;
  v6 = a2;
  v84 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = (unsigned int *)PnpCmResourcesToIoResources(Src, a2, 1LL);
    return 0LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*Src, 0x75737050u);
  v101 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, (unsigned int)*Src);
  if ( !v6 || !*v6 )
    goto LABEL_151;
  v11 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v6 + 1);
  v12 = *v6;
  v103 = v6 + 1;
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
        else if ( (v16 <= 0x7Fu || *(_BYTE *)v13 > 0x81u) && (unsigned __int8)(v16 - 1) <= 6u )
        {
          goto LABEL_12;
        }
        --v8;
LABEL_12:
        v13 = (_DWORD *)((char *)v13 + v17 + 20);
      }
    }
    --v12;
  }
  while ( v12 );
  v85 = v8;
  if ( !v8 )
  {
LABEL_151:
    *a3 = v10;
    return 0LL;
  }
  v18 = v10[7];
  v19 = v10 + 8;
  v20 = v10 + 8;
  v90 = 0;
  v21 = 0;
  while ( (--v18 & 0x80000000) == 0 )
  {
    v23 = v20 + 2;
    v20 += 8 * (unsigned int)v20[1] + 2;
    if ( v23 < v20 )
    {
      do
      {
        *((_BYTE *)v23 + 3) = 0;
        v22 = *((_BYTE *)v23 + 1);
        v23 += 8;
        v24 = v21 + 1;
        if ( v22 )
          v24 = v21;
        v21 = v24;
      }
      while ( v23 < v20 );
      v90 = v24;
    }
  }
  v96 = v10[7] - 1;
  v25 = v96;
  v89 = v96;
  if ( v96 >= 0 )
  {
    while ( 2 )
    {
      v86 = *(_WORD *)v19;
      if ( *(_WORD *)v19 == 0xFFFF )
        v86 = 1;
      v26 = (unsigned int)v19[1];
      v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
      *(_WORD *)v19 = 0;
      v28 = (__int64)&v19[8 * v26 + 2];
      v102 = v26;
      v81 = v28;
      if ( v19 + 2 == (_DWORD *)v28 )
      {
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_79;
      }
      v29 = v11;
      v30 = 1;
      v31 = 0;
      v104 = v29;
      v82 = 1;
      v88 = 0;
      if ( *v6 )
      {
        do
        {
          v32 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v29->u.Memory48 + 1);
          v33 = 0;
          v80 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v29->u.Memory48 + 1);
          v87 = 0;
          if ( v29->u.Generic.Length )
          {
            v34 = v104;
            v35 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v29->u.Memory48 + 1);
            do
            {
              if ( v35->Type == 5 )
              {
                LowPart = v35->u.Generic.Start.LowPart;
              }
              else
              {
                if ( v35->Type != 129 && (unsigned __int8)(v35->Type - 1) <= 6u )
                {
                  v36 = v81;
                  v37 = 0;
                  v83 = 0;
                  while ( 1 )
                  {
                    v38 = v27;
                    if ( (unsigned __int64)v27 >= v36 )
                      goto LABEL_66;
                    Type = v35->Type;
                    v40 = v81;
                    v105 = v35->Type;
                    while ( 1 )
                    {
                      if ( v38->Type != Type || v38->Spare1 )
                        goto LABEL_40;
                      ShareDisposition = v35->ShareDisposition;
                      v42 = 1LL;
                      v43 = v38->ShareDisposition;
                      v44 = (unsigned __int8)(v35->ShareDisposition - 1) <= 2u;
                      Alignment = 1LL;
                      v45 = ShareDisposition;
                      if ( !v44 )
                        v45 = v43;
                      v46 = v43;
                      v94 = v45;
                      v47 = 1LL;
                      if ( (unsigned __int8)(v43 - 1) > 2u )
                        v46 = (unsigned __int8)v45;
                      v95 = v46;
                      switch ( Type )
                      {
                        case 1u:
                          goto LABEL_96;
                        case 2u:
                          Vector = v35->u.Interrupt.Vector;
                          Start = Vector;
                          v49 = (unsigned int)Vector;
LABEL_50:
                          Length = v38->u.Port.Length;
                          v51 = v38->u.Port.Alignment;
                          MinimumAddress = Length;
                          MaximumAddress = v51;
                          break;
                        case 3u:
LABEL_96:
                          v70 = RtlCmDecodeMemIoResource(v35, &Start);
                          Vector = Start;
                          v100 = v70;
                          v99 = v70 + Start - 1;
                          v71 = RtlIoDecodeMemIoResource(v38, &Alignment, &MinimumAddress, &MaximumAddress);
                          v51 = MaximumAddress;
                          v47 = v71;
                          Length = MinimumAddress;
                          v49 = v99;
                          LOBYTE(v45) = v94;
                          LOBYTE(v46) = v95;
                          v42 = v100;
                          break;
                        case 4u:
                          v49 = v35->u.Generic.Start.LowPart;
                          Vector = v49;
                          Start = v49;
                          goto LABEL_50;
                        case 6u:
                          Vector = v35->u.Generic.Start.LowPart;
                          v51 = v38->u.Port.MinimumAddress.LowPart;
                          v47 = v38->u.Port.Length;
                          v42 = v80->u.Interrupt.Vector;
                          Length = v38->u.Port.Alignment;
                          Start = Vector;
                          MinimumAddress = Length;
                          MaximumAddress = v51;
                          v49 = (unsigned int)(Vector + v42 - 1);
                          break;
                        case 7u:
                          goto LABEL_96;
                        default:
                          Length = 0LL;
                          MinimumAddress = 0LL;
                          Vector = 0LL;
                          Start = 0LL;
                          v51 = 0LL;
                          MaximumAddress = 0LL;
                          v49 = 0LL;
                          break;
                      }
                      if ( v83 )
                      {
                        v82 = 0;
                        if ( Length <= Vector
                          && v51 >= v49
                          && (_BYTE)v45 == (_BYTE)v46
                          && v47 >= v42
                          && ((Alignment - 1) & Vector) == 0 )
                        {
                          v74 = Type - 1;
                          if ( !v74 )
                            goto LABEL_133;
                          v75 = v74 - 1;
                          if ( !v75 )
                            goto LABEL_137;
                          v76 = v75 - 1;
                          if ( !v76 )
                            goto LABEL_133;
                          v77 = v76 - 1;
                          if ( v77 )
                          {
                            v78 = v77 - 2;
                            if ( v78 )
                            {
                              if ( v78 == 1 )
                              {
LABEL_133:
                                v38->u.Port.MinimumAddress.QuadPart = Vector;
                                v38->u.Port.MaximumAddress.QuadPart = Vector + v47 - 1;
                              }
                            }
                            else
                            {
                              v38->u.Port.Alignment = Vector;
                              v38->u.Port.MinimumAddress.LowPart = v47 + Vector - 1;
                            }
                          }
                          else
                          {
LABEL_137:
                            v38->u.Port.Length = Vector;
                            v38->u.Port.Alignment = v49;
                          }
                          ++*(_WORD *)v19;
                          v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                          v52 = (v38->Option & 8) == 0;
                          v35 = v80;
                          v38->Spare1 = 0x80;
                          v38->Flags = v80->Flags;
                          if ( !v52 )
                          {
                            for ( j = v38 - 1; j >= v27; --j )
                            {
                              j->Type = 0;
                              --v19[1];
                              if ( j->Option != 8 )
                                break;
                            }
                          }
                          v36 = v81;
                          v38->Option = 1;
                          while ( (unsigned __int64)++v38 < v81 && (v38->Option & 8) != 0 )
                          {
                            v38->Type = 0;
                            --v19[1];
                          }
                          v30 = 0;
LABEL_42:
                          v37 = v83;
                          goto LABEL_66;
                        }
                        goto LABEL_99;
                      }
                      if ( Length == Vector && (_BYTE)v45 == (_BYTE)v46 && v51 >= v49 && v47 >= v42 )
                        break;
LABEL_99:
                      v35 = v80;
                      Type = v105;
                      v40 = v81;
LABEL_40:
                      if ( (unsigned __int64)++v38 >= v40 )
                      {
                        v36 = v81;
                        v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                        v30 = v82;
                        goto LABEL_42;
                      }
                    }
                    v30 = v82;
                    v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                    if ( v51 != v49 )
                      v30 = 0;
                    ++*(_WORD *)v19;
                    v52 = (v38->Option & 8) == 0;
                    v82 = v30;
                    v38->Spare1 = 0x80;
                    if ( !v52 )
                    {
                      for ( k = v38 - 1; k >= v27; --k )
                      {
                        k->Type = 0;
                        --v19[1];
                        if ( k->Option != 8 )
                          break;
                      }
                    }
                    v53 = v38->Type;
                    v38->Option = 1;
                    v38->Flags = v80->Flags;
                    if ( ((v53 - 1) & 0xF9) != 0 || v53 == 5 )
                    {
                      if ( v53 == 6 )
                      {
                        v38->u.Port.Alignment = Vector;
                        v38->u.Port.MinimumAddress.LowPart = v47 + Vector - 1;
                      }
                    }
                    else
                    {
                      v38->u.Port.MinimumAddress.QuadPart = Vector;
                      v38->u.Port.Alignment = 1;
                      v38->u.Port.MaximumAddress.QuadPart = Vector + v47 - 1;
                    }
                    v36 = v81;
                    for ( m = v38 + 1; (unsigned __int64)m < v81 && (m->Option & 8) != 0; ++m )
                    {
                      m->Type = 0;
                      --v19[1];
                    }
                    v35 = v80;
                    v37 = 1;
LABEL_66:
                    v83 = ++v37;
                    if ( v37 >= 2 )
                    {
                      v33 = v87;
                      break;
                    }
                  }
                }
                LowPart = 0LL;
              }
              ++v33;
              v35 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v35 + LowPart + 20);
              v87 = v33;
              v80 = v35;
            }
            while ( v33 < v34->u.Generic.Length );
            v6 = a2;
            v32 = v80;
            v31 = v88;
          }
          ++v31;
          v104 = v32;
          v29 = v32;
          v88 = v31;
        }
        while ( v31 < *v6 );
        v10 = v101;
        v8 = v85;
        v28 = v81;
        v25 = v89;
        LODWORD(v26) = v102;
      }
      if ( *(_WORD *)v19 == (_WORD)v8 )
      {
        v56 = v19[1];
        if ( v56 != v8 && (v56 != v8 + 1 || *((_BYTE *)v19 + 9) != 0x80) )
        {
          v84 += v56;
          *(_WORD *)v19 = v86;
          goto LABEL_78;
        }
        if ( !v98 )
        {
          v84 += v56;
          v98 = v19;
          *(_WORD *)v19 = v86;
          if ( v30 )
            *a4 = 1;
          goto LABEL_78;
        }
      }
      *(_WORD *)v19 = -1;
      --v10[7];
LABEL_78:
      v19[1] = v26;
      v11 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(v6 + 1);
      v19 = (_DWORD *)v28;
LABEL_79:
      v89 = --v25;
      if ( v25 >= 0 )
        continue;
      break;
    }
    v21 = v90;
  }
  v57 = v10[7];
  if ( v57 )
  {
    v58 = 32 * (v84 - v21) + 8 * (v57 - 1 + 4 * (v57 - 1) + 9);
    v59 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v58, 0x75737050u);
    v60 = v59;
    if ( v59 )
    {
      memset(v59, 0, v58);
      v61 = v103;
      *v60 = v58;
      v60[1] = *v61;
      v60[2] = a2[2];
      v60[3] = v10[3];
      v62 = v10[7];
      if ( v62 > 1 )
        *a4 = 0;
      v63 = v96;
      v64 = v60 + 8;
      v60[7] = v62;
      if ( v63 >= 0 )
      {
        v65 = v10 + 8;
        do
        {
          v66 = (unsigned __int64)(v65 + 2);
          v67 = (unsigned __int64)&v65[8 * v65[1] + 2];
          if ( *(_WORD *)v65 != 0xFFFF )
          {
            *(_WORD *)v64 = *(_WORD *)v65;
            v68 = *((_WORD *)v65 + 1);
            v69 = (char *)(v64 + 2);
            *((_WORD *)v64 + 1) = v68;
            if ( *(_BYTE *)(v66 + 1) == 0x80 )
            {
              *v60 -= 32;
            }
            else
            {
              *((_WORD *)v64 + 4) = -32767;
              v69 = (char *)(v64 + 10);
              *(_DWORD *)((char *)v64 + 10) = 3;
              *((_WORD *)v64 + 7) = 0;
              v64[4] = 1;
            }
            while ( v66 < v67 )
            {
              if ( *(_BYTE *)(v66 + 1) )
              {
                *(_OWORD *)v69 = *(_OWORD *)v66;
                *((_OWORD *)v69 + 1) = *(_OWORD *)(v66 + 16);
                v69 += 32;
              }
              v66 += 32LL;
            }
            v64[1] = (v69 - (char *)v64 - 8) >> 5;
            v64[4] = 1;
            v64 = v69;
          }
          --v63;
          v65 = (_DWORD *)v67;
        }
        while ( v63 >= 0 );
      }
      *a3 = v60;
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v4 = -1073741670;
  }
  else
  {
    *a3 = (unsigned int *)PnpCmResourcesToIoResources(0xFFFFLL, v6, 1LL);
  }
  ExFreePoolWithTag(v10, 0);
  return v4;
}
