/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x1405B3B10
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x14055B65C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x14055BA24 (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140035830 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x140156B10 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpCmResourcesToIoResources @ 0x1405B2B24 (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, char **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r13d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r15
  unsigned int *v11; // rdi
  __int64 v12; // r10
  unsigned int *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r9
  unsigned __int8 v16; // al
  unsigned int v17; // r8d
  int v18; // r9d
  _DWORD *v19; // r14
  _DWORD *v20; // rdx
  int v21; // r10d
  char v22; // cl
  _DWORD *v23; // r8
  int v24; // eax
  int v25; // r9d
  __int64 v26; // r10
  struct _IO_RESOURCE_DESCRIPTOR *v27; // r8
  __int64 v28; // rdx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // rax
  int v30; // r11d
  unsigned int v31; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v32; // r13
  ULONG v33; // r9d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v34; // r15
  unsigned __int64 v35; // r12
  unsigned int v36; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v37; // rdi
  UCHAR Type; // r12
  unsigned __int64 v39; // rax
  int ShareDisposition; // eax
  unsigned __int64 v41; // r9
  int v42; // edx
  unsigned __int8 v43; // cl
  int v44; // r8d
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r11
  unsigned __int64 Vector; // r12
  unsigned __int64 v48; // r13
  unsigned __int64 Length; // rax
  unsigned __int64 v50; // rcx
  bool v51; // zf
  UCHAR v52; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v55; // ecx
  int v56; // eax
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
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  unsigned __int64 v74; // [rsp+28h] [rbp-89h]
  int v75; // [rsp+30h] [rbp-81h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v76; // [rsp+38h] [rbp-79h]
  unsigned int v77; // [rsp+40h] [rbp-71h]
  int v78; // [rsp+44h] [rbp-6Dh]
  int v79; // [rsp+48h] [rbp-69h]
  __int16 v80; // [rsp+50h] [rbp-61h]
  ULONG v81; // [rsp+54h] [rbp-5Dh]
  unsigned int v82; // [rsp+58h] [rbp-59h]
  int v83; // [rsp+5Ch] [rbp-55h]
  int v84; // [rsp+60h] [rbp-51h]
  unsigned __int64 Start; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+78h] [rbp-39h] BYREF
  int v88; // [rsp+80h] [rbp-31h]
  int v89; // [rsp+84h] [rbp-2Dh]
  int v90; // [rsp+88h] [rbp-29h]
  unsigned __int64 Alignment; // [rsp+90h] [rbp-21h] BYREF
  _DWORD *v92; // [rsp+98h] [rbp-19h]
  ULONGLONG v93; // [rsp+A0h] [rbp-11h]
  _DWORD *v94; // [rsp+A8h] [rbp-9h]
  __int64 v95; // [rsp+B0h] [rbp-1h]
  unsigned int *v96; // [rsp+B8h] [rbp+7h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v97; // [rsp+118h] [rbp+67h]
  UCHAR v98; // [rsp+118h] [rbp+67h]

  v4 = 0;
  v92 = 0LL;
  v6 = a2;
  v78 = 0;
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
  v94 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, (unsigned int)*Src);
  if ( !v6 || !*v6 )
    goto LABEL_152;
  v11 = v6 + 1;
  v12 = *v6;
  v96 = v6 + 1;
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
        v13 = (unsigned int *)((char *)v13 + v17 + 20);
      }
    }
    --v12;
  }
  while ( v12 );
  v79 = v8;
  if ( !v8 )
  {
LABEL_152:
    *a3 = (char *)v10;
    return 0LL;
  }
  v18 = v10[7];
  v19 = v10 + 8;
  v20 = v10 + 8;
  v84 = 0;
  v21 = 0;
  while ( --v18 >= 0 )
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
      v84 = v24;
    }
  }
  v90 = v10[7] - 1;
  v25 = v90;
  v83 = v90;
  if ( v90 >= 0 )
  {
    while ( 2 )
    {
      v80 = *(_WORD *)v19;
      if ( *(_WORD *)v19 == 0xFFFF )
        v80 = 1;
      v26 = (unsigned int)v19[1];
      v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
      *(_WORD *)v19 = 0;
      v28 = (__int64)&v19[8 * v26 + 2];
      v95 = v26;
      v74 = v28;
      if ( v19 + 2 == (_DWORD *)v28 )
      {
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_79;
      }
      v29 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v30 = 1;
      v31 = 0;
      v97 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v75 = 1;
      v82 = 0;
      if ( *v6 )
      {
        do
        {
          v32 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v29->u.Memory48 + 1);
          v33 = 0;
          v76 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v29->u.Memory48 + 1);
          v81 = 0;
          if ( v29->u.Generic.Length )
          {
            v34 = v97;
            do
            {
              if ( v32->Type == 5 )
              {
                LowPart = v32->u.Generic.Start.LowPart;
              }
              else
              {
                if ( v32->Type != 129 && (unsigned __int8)(v32->Type - 1) <= 6u )
                {
                  v35 = v74;
                  v36 = 0;
                  v77 = 0;
                  while ( 1 )
                  {
                    v37 = v27;
                    if ( (unsigned __int64)v27 >= v35 )
                      goto LABEL_66;
                    Type = v32->Type;
                    v39 = v74;
                    v98 = v32->Type;
                    while ( 1 )
                    {
                      if ( v37->Type != Type || v37->Spare1 )
                        goto LABEL_40;
                      ShareDisposition = v32->ShareDisposition;
                      v41 = 1LL;
                      v42 = v37->ShareDisposition;
                      v43 = v32->ShareDisposition - 1;
                      Alignment = 1LL;
                      v44 = ShareDisposition;
                      v45 = 1LL;
                      if ( v43 > 2u )
                        v44 = v42;
                      v46 = 1LL;
                      v88 = v44;
                      if ( (unsigned __int8)(v42 - 1) > 2u )
                        v42 = (unsigned __int8)v44;
                      v89 = v42;
                      switch ( Type )
                      {
                        case 1u:
                          goto LABEL_97;
                        case 2u:
                          Vector = v32->u.Interrupt.Vector;
                          Start = Vector;
                          v48 = (unsigned int)Vector;
LABEL_50:
                          Length = v37->u.Port.Length;
                          v50 = v37->u.Port.Alignment;
                          MinimumAddress = Length;
                          MaximumAddress = v50;
                          break;
                        case 3u:
LABEL_97:
                          v69 = RtlCmDecodeMemIoResource(v32, &Start);
                          Vector = Start;
                          v93 = v69;
                          v48 = v69 + Start - 1;
                          v70 = RtlIoDecodeMemIoResource(v37, &Alignment, &MinimumAddress, &MaximumAddress);
                          v46 = Alignment;
                          v45 = v70;
                          Length = MinimumAddress;
                          v50 = MaximumAddress;
                          LOBYTE(v44) = v88;
                          LOBYTE(v42) = v89;
                          v41 = v93;
                          break;
                        case 4u:
                          v48 = v32->u.Generic.Start.LowPart;
                          Vector = (unsigned int)v48;
                          Start = v48;
                          goto LABEL_50;
                        case 6u:
                          Vector = v32->u.Generic.Start.LowPart;
                          v41 = v32->u.Interrupt.Vector;
                          Length = v37->u.Port.Alignment;
                          v50 = v37->u.Port.MinimumAddress.LowPart;
                          v45 = v37->u.Port.Length;
                          v48 = (unsigned int)(v41 + Vector - 1);
                          Start = Vector;
                          MinimumAddress = Length;
                          MaximumAddress = v50;
                          break;
                        case 7u:
                          goto LABEL_97;
                        default:
                          Length = 0LL;
                          MinimumAddress = 0LL;
                          Vector = 0LL;
                          Start = 0LL;
                          v50 = 0LL;
                          MaximumAddress = 0LL;
                          v48 = 0LL;
                          break;
                      }
                      if ( v77 )
                      {
                        v75 = 0;
                        if ( v50 >= v48
                          && Length <= Vector
                          && (_BYTE)v44 == (_BYTE)v42
                          && v45 >= v41
                          && ((v46 - 1) & Vector) == 0 )
                        {
                          switch ( v98 )
                          {
                            case 1u:
                              goto LABEL_134;
                            case 2u:
                              goto LABEL_138;
                            case 3u:
                              goto LABEL_134;
                            case 4u:
LABEL_138:
                              v37->u.Port.Length = Vector;
                              v37->u.Port.Alignment = v48;
                              break;
                            case 6u:
                              v37->u.Port.Alignment = Vector;
                              v37->u.Port.MinimumAddress.LowPart = v45 + Vector - 1;
                              break;
                            case 7u:
LABEL_134:
                              v37->u.Port.MinimumAddress.QuadPart = Vector;
                              v37->u.Port.MaximumAddress.QuadPart = Vector + v45 - 1;
                              break;
                          }
                          ++*(_WORD *)v19;
                          v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                          v51 = (v37->Option & 8) == 0;
                          v32 = v76;
                          v37->Spare1 = 0x80;
                          v37->Flags = v76->Flags;
                          if ( !v51 )
                          {
                            for ( j = v37 - 1; j >= v27; --j )
                            {
                              j->Type = 0;
                              --v19[1];
                              if ( j->Option != 8 )
                                break;
                            }
                          }
                          v35 = v74;
                          v37->Option = 1;
                          while ( (unsigned __int64)++v37 < v74 && (v37->Option & 8) != 0 )
                          {
                            v37->Type = 0;
                            --v19[1];
                          }
                          v30 = 0;
LABEL_42:
                          v36 = v77;
                          goto LABEL_66;
                        }
                        goto LABEL_99;
                      }
                      if ( Length == Vector && (_BYTE)v44 == (_BYTE)v42 && v50 >= v48 && v45 >= v41 )
                        break;
LABEL_99:
                      Type = v98;
                      v32 = v76;
                      v39 = v74;
LABEL_40:
                      if ( (unsigned __int64)++v37 >= v39 )
                      {
                        v35 = v74;
                        v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                        v30 = v75;
                        goto LABEL_42;
                      }
                    }
                    v30 = v75;
                    v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                    if ( v50 != v48 )
                      v30 = 0;
                    ++*(_WORD *)v19;
                    v51 = (v37->Option & 8) == 0;
                    v75 = v30;
                    v37->Spare1 = 0x80;
                    if ( !v51 )
                    {
                      for ( k = v37 - 1; k >= v27; --k )
                      {
                        k->Type = 0;
                        --v19[1];
                        if ( k->Option != 8 )
                          break;
                      }
                    }
                    v32 = v76;
                    v52 = v37->Type;
                    v37->Option = 1;
                    v37->Flags = v76->Flags;
                    if ( ((v52 - 1) & 0xF9) != 0 || v52 == 5 )
                    {
                      if ( v52 == 6 )
                      {
                        v37->u.Port.Alignment = Vector;
                        v37->u.Port.MinimumAddress.LowPart = v45 + Vector - 1;
                      }
                    }
                    else
                    {
                      v37->u.Port.MinimumAddress.QuadPart = Vector;
                      v37->u.Port.Alignment = 1;
                      v37->u.Port.MaximumAddress.QuadPart = Vector + v45 - 1;
                    }
                    v35 = v74;
                    for ( m = v37 + 1; (unsigned __int64)m < v74 && (m->Option & 8) != 0; ++m )
                    {
                      m->Type = 0;
                      --v19[1];
                    }
                    v36 = 1;
LABEL_66:
                    v77 = ++v36;
                    if ( v36 >= 2 )
                    {
                      v33 = v81;
                      break;
                    }
                  }
                }
                LowPart = 0LL;
              }
              ++v33;
              v32 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v32 + LowPart + 20);
              v81 = v33;
              v76 = v32;
            }
            while ( v33 < v34->u.Generic.Length );
            v6 = a2;
            v31 = v82;
          }
          ++v31;
          v29 = v32;
          v97 = v32;
          v82 = v31;
        }
        while ( v31 < *v6 );
        v10 = v94;
        v11 = v6 + 1;
        v8 = v79;
        v28 = v74;
        v25 = v83;
        LODWORD(v26) = v95;
      }
      if ( *(_WORD *)v19 == (_WORD)v8 )
      {
        v55 = v19[1];
        if ( v55 != v8 && (v55 != v8 + 1 || *((_BYTE *)v19 + 9) != 0x80) )
        {
          v78 += v55;
          *(_WORD *)v19 = v80;
          goto LABEL_78;
        }
        if ( !v92 )
        {
          v78 += v55;
          v92 = v19;
          *(_WORD *)v19 = v80;
          if ( v30 )
            *a4 = 1;
          goto LABEL_78;
        }
      }
      *(_WORD *)v19 = -1;
      --v10[7];
LABEL_78:
      v19[1] = v26;
      v19 = (_DWORD *)v28;
LABEL_79:
      v83 = --v25;
      if ( v25 >= 0 )
        continue;
      break;
    }
    v21 = v84;
  }
  v56 = v10[7];
  if ( v56 )
  {
    v57 = 32 * (v78 - v21) + 8 * (v56 - 1 + 4 * (v56 - 1) + 9);
    v58 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v57, 0x75737050u);
    v59 = v58;
    if ( v58 )
    {
      memset(v58, 0, v57);
      v60 = v96;
      *v59 = v57;
      v59[1] = *v60;
      v59[2] = a2[2];
      v59[3] = v10[3];
      v61 = v10[7];
      if ( v61 > 1 )
        *a4 = 0;
      v62 = v90;
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
