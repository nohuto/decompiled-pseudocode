/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x140475C10
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1400CE92C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1400DF830 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopCheckDeviceFlags @ 0x1404761FC (IopCheckDeviceFlags.c)
 *     IopCaptureObjectName @ 0x14047627C (IopCaptureObjectName.c)
 *     IopFreePoDeviceNotifyListHead @ 0x1404763A8 (IopFreePoDeviceNotifyListHead.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1, int a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  ULONG_PTR v7; // rbx
  ULONG_PTR i; // rax
  __int64 ***v9; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  ULONG_PTR *v15; // rcx
  ULONG_PTR j; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rdx
  __int64 *v21; // rax
  __int64 *k; // rcx
  __int64 *v23; // rcx
  ULONG_PTR v24; // rdx
  char v25; // r10
  ULONG_PTR m; // rax
  ULONG_PTR v27; // rax
  ULONG_PTR v28; // rcx
  ULONG_PTR v29; // rcx
  ULONG_PTR v30; // rax
  ULONG_PTR v31; // rcx
  ULONG_PTR n; // rax
  ULONG_PTR v33; // rdi
  _QWORD *ii; // rax
  ULONG_PTR v35; // rax
  ULONG_PTR jj; // rax
  _DWORD *LowerDeviceObjectWithTag; // rbx
  _DWORD *v38; // rsi
  ULONG_PTR v39; // rax
  ULONG_PTR v40; // rdx
  char v41; // al
  char v42; // r10
  ULONG_PTR v43; // rax
  char v44; // r10
  ULONG_PTR v45; // rax
  ULONG_PTR *v46; // r8
  __int64 v47; // rcx
  unsigned __int8 v48; // al
  ULONG_PTR i1; // rax
  ULONG_PTR i2; // rcx
  _QWORD *i3; // rcx
  ULONG_PTR v52; // rcx
  ULONG_PTR i4; // rax
  __int64 v54; // r8
  unsigned __int8 v55; // r9
  char **v56; // rcx
  char *v57; // r8
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  char *v60; // rax
  char **v61; // rcx
  ULONG_PTR v62; // rax
  __int64 *result; // rax
  int v64; // r9d
  int v65; // r9d
  __int64 v66; // r9
  char v67; // dl
  ULONG_PTR kk; // rax
  ULONG_PTR v69; // rcx
  ULONG_PTR v70; // rax
  ULONG_PTR v71; // rcx
  ULONG_PTR v72; // rax
  ULONG_PTR v73; // rcx
  ULONG_PTR mm; // rax
  _QWORD *nn; // rax
  __int64 v76; // r8
  int v77; // edx
  ULONG_PTR v78; // rax
  __int64 *v79; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v80; // [rsp+28h] [rbp-18h]
  __int64 v81; // [rsp+30h] [rbp-10h] BYREF
  char **v82; // [rsp+38h] [rbp-8h]

  v80 = &v79;
  v79 = (__int64 *)&v79;
  v82 = (char **)&v81;
  v81 = (__int64)&v81;
  PnpLockDeviceActionQueue();
  memset(a1, 0, 0x180uLL);
  v4 = a1 + 48;
  *((_DWORD *)a1 + 94) = a2;
  v5 = 5LL;
  do
  {
    *(v4 - 2) = v4 - 3;
    *(v4 - 3) = v4 - 3;
    *v4 = v4 - 1;
    *(v4 - 1) = v4 - 1;
    v4[2] = v4 + 1;
    v4[1] = v4 + 1;
    v6 = v4 + 3;
    v4[4] = v4 + 3;
    v4 += 9;
    *v6 = v6;
    --v5;
  }
  while ( v5 );
  v7 = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    v7 = i;
  while ( v7 != IopRootDeviceNode )
  {
    v9 = (__int64 ***)(v7 + 144);
    *(_DWORD *)(v7 + 232) = 0;
    *(_DWORD *)(v7 + 236) = 0;
    *(_DWORD *)(v7 + 240) = 0;
    *(_DWORD *)(v7 + 244) = 0;
    *(_BYTE *)(v7 + 200) = 0;
    *(_QWORD *)(v7 + 208) = *(_QWORD *)(v7 + 32);
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(v7 + 32));
    *(_QWORD *)(v7 + 192) = AttachedDeviceReference;
    v11 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v12 = *(_QWORD *)(v7 + 192);
    *(_QWORD *)(v7 + 224) = v11;
    v13 = IopCaptureObjectName(v12);
    v14 = *(void **)(v7 + 208);
    *(_QWORD *)(v7 + 216) = v13;
    ObfReferenceObject(v14);
    *(_BYTE *)(v7 + 200) = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v7 + 144, 0x2000LL) )
      *(_BYTE *)(v7 + 200) |= 2u;
    v15 = (ULONG_PTR *)(v7 + 16);
    if ( *(_QWORD *)(v7 + 16) == IopRootDeviceNode && *(_DWORD *)(v7 + 448) && (*(_DWORD *)(v7 + 396) & 4) == 0 )
    {
      v17 = v80;
      if ( *v80 != (__int64 *)&v79 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 152) = v80;
      *v9 = &v79;
      *v17 = v9;
      v80 = (__int64 **)(v7 + 144);
    }
    v7 = *(_QWORD *)v7;
    if ( v7 )
    {
      for ( j = *(_QWORD *)(v7 + 8); j; j = *(_QWORD *)(j + 8) )
        v7 = j;
    }
    else
    {
      v7 = *v15;
    }
  }
  while ( 1 )
  {
    v18 = v79;
    if ( v79 == (__int64 *)&v79 )
      break;
    if ( (__int64 **)v79[1] != &v79 || (v19 = (__int64 *)*v79, *(__int64 **)(*v79 + 8) != v79) )
      __fastfail(3u);
    v79 = (__int64 *)*v79;
    v19[1] = (__int64)&v79;
    v20 = v18 - 18;
    *((_BYTE *)v18 + 56) |= 1u;
    v21 = v20;
    for ( k = (__int64 *)v20[1]; k; k = (__int64 *)k[1] )
      v21 = k;
    while ( v21 != v20 )
    {
      *((_BYTE *)v21 + 200) |= 1u;
      v23 = (__int64 *)*v21;
      if ( *v21 )
      {
        do
        {
          v21 = v23;
          v23 = (__int64 *)v23[1];
        }
        while ( v23 );
      }
      else
      {
        v21 = (__int64 *)v21[2];
      }
    }
  }
  do
  {
    v24 = IopRootDeviceNode;
    v25 = 0;
    for ( m = *(_QWORD *)(IopRootDeviceNode + 8); m; m = *(_QWORD *)(m + 8) )
      v24 = m;
    while ( 1 )
    {
      v28 = IopRootDeviceNode;
      if ( v24 == IopRootDeviceNode )
        break;
      if ( (*(_BYTE *)(v24 + 200) & 2) != 0 )
      {
        v29 = *(_QWORD *)(v24 + 8);
        v30 = v24;
        while ( v29 )
        {
          v30 = v29;
          v29 = *(_QWORD *)(v29 + 8);
        }
        while ( v30 != v24 )
        {
          *(_BYTE *)(v30 + 200) |= 2u;
          v31 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 )
          {
            do
            {
              v30 = v31;
              v31 = *(_QWORD *)(v31 + 8);
            }
            while ( v31 );
          }
          else
          {
            v30 = *(_QWORD *)(v30 + 16);
          }
        }
      }
      v27 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 )
      {
        do
        {
          v24 = v27;
          v27 = *(_QWORD *)(v27 + 8);
        }
        while ( v27 );
      }
      else
      {
        v24 = *(_QWORD *)(v24 + 16);
      }
    }
    for ( n = *(_QWORD *)(IopRootDeviceNode + 8); n; n = *(_QWORD *)(n + 8) )
      v28 = n;
    v33 = IopRootDeviceNode;
    if ( v28 == IopRootDeviceNode )
      break;
    do
    {
      if ( (*(_BYTE *)(v28 + 200) & 2) != 0 )
      {
        for ( ii = *(_QWORD **)(v28 + 160); ii != (_QWORD *)(v28 + 160); ii = (_QWORD *)*ii )
        {
          v66 = *(ii - 1);
          v67 = *(_BYTE *)(v66 + 56);
          if ( (v67 & 2) == 0 )
          {
            v25 = 1;
            *(_BYTE *)(v66 + 56) = v67 | 2;
          }
        }
      }
      v35 = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 )
      {
        do
        {
          v28 = v35;
          v35 = *(_QWORD *)(v35 + 8);
        }
        while ( v35 );
      }
      else
      {
        v28 = *(_QWORD *)(v28 + 16);
      }
      v33 = IopRootDeviceNode;
    }
    while ( v28 != IopRootDeviceNode );
  }
  while ( v25 );
  for ( jj = *(_QWORD *)(v33 + 8); jj; jj = *(_QWORD *)(jj + 8) )
    v33 = jj;
  while ( 1 )
  {
    v40 = IopRootDeviceNode;
    if ( v33 == IopRootDeviceNode )
      break;
    v41 = *(_BYTE *)(v33 + 200);
    if ( (v41 & 2) != 0 )
    {
      v38 = *(_DWORD **)(v33 + 192);
      *(_BYTE *)(v33 + 200) = v41 + 1;
      ObfReferenceObjectWithTag(v38, 0x70506F50u);
      if ( v38 )
      {
        while ( v38[18] != 7 )
        {
          LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v38, 0x70506F50u);
          ObfDereferenceObjectWithTag(v38, 0x70506F50u);
          v38 = LowerDeviceObjectWithTag;
          if ( !LowerDeviceObjectWithTag )
            goto LABEL_66;
        }
        ObfDereferenceObjectWithTag(v38, 0x70506F50u);
        if ( (unsigned __int8)IopCheckDeviceFlags(v33 + 144, 256LL) )
          *(_BYTE *)(v33 + 200) = 2;
      }
    }
LABEL_66:
    v39 = *(_QWORD *)v33;
    if ( *(_QWORD *)v33 )
    {
      do
      {
        v33 = v39;
        v39 = *(_QWORD *)(v39 + 8);
      }
      while ( v39 );
    }
    else
    {
      v33 = *(_QWORD *)(v33 + 16);
    }
  }
  do
  {
    v42 = 0;
    if ( (*((_DWORD *)a1 + 94) & 1) == 0 )
      break;
    for ( kk = *(_QWORD *)(v40 + 8); kk; kk = *(_QWORD *)(kk + 8) )
      v40 = kk;
    while ( 1 )
    {
      v73 = IopRootDeviceNode;
      if ( v40 == IopRootDeviceNode )
        break;
      if ( (*(_DWORD *)(v40 + 704) & 0x6000) != 0 )
      {
        v69 = *(_QWORD *)(v40 + 8);
        v70 = v40;
        while ( v69 )
        {
          v70 = v69;
          v69 = *(_QWORD *)(v69 + 8);
        }
        while ( v70 != v40 )
        {
          *(_DWORD *)(v70 + 704) |= 0x4000u;
          v71 = *(_QWORD *)v70;
          if ( *(_QWORD *)v70 )
          {
            do
            {
              v70 = v71;
              v71 = *(_QWORD *)(v71 + 8);
            }
            while ( v71 );
          }
          else
          {
            v70 = *(_QWORD *)(v70 + 16);
          }
        }
      }
      v72 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 )
      {
        do
        {
          v40 = v72;
          v72 = *(_QWORD *)(v72 + 8);
        }
        while ( v72 );
      }
      else
      {
        v40 = *(_QWORD *)(v40 + 16);
      }
    }
    for ( mm = *(_QWORD *)(IopRootDeviceNode + 8); mm; mm = *(_QWORD *)(mm + 8) )
      v73 = mm;
    v40 = IopRootDeviceNode;
    if ( v73 == IopRootDeviceNode )
      break;
    do
    {
      if ( (*(_DWORD *)(v73 + 704) & 0x6000) != 0 )
      {
        for ( nn = *(_QWORD **)(v73 + 160); nn != (_QWORD *)(v73 + 160); nn = (_QWORD *)*nn )
        {
          v76 = *(nn - 1);
          v77 = *(_DWORD *)(v76 + 560);
          if ( (v77 & 0x6000) == 0 )
          {
            v42 = 1;
            *(_DWORD *)(v76 + 560) = v77 | 0x4000;
          }
        }
      }
      v78 = *(_QWORD *)v73;
      if ( *(_QWORD *)v73 )
      {
        do
        {
          v73 = v78;
          v78 = *(_QWORD *)(v78 + 8);
        }
        while ( v78 );
      }
      else
      {
        v73 = *(_QWORD *)(v73 + 16);
      }
      v40 = IopRootDeviceNode;
    }
    while ( v73 != IopRootDeviceNode );
  }
  while ( v42 );
  do
  {
    v43 = *(_QWORD *)(v40 + 8);
    v44 = 0;
    while ( v43 )
    {
      v40 = v43;
      v43 = *(_QWORD *)(v43 + 8);
    }
    while ( 1 )
    {
      v45 = IopRootDeviceNode;
      if ( v40 == IopRootDeviceNode )
        break;
      v46 = (ULONG_PTR *)(v40 + 16);
      v47 = *(_QWORD *)(v40 + 16);
      if ( v47 != IopRootDeviceNode )
      {
        v48 = *(_BYTE *)(v40 + 200);
        if ( *(_BYTE *)(v47 + 200) > v48 )
          *(_BYTE *)(v47 + 200) = v48;
      }
      v40 = *(_QWORD *)v40;
      if ( v40 )
      {
        for ( i1 = *(_QWORD *)(v40 + 8); i1; i1 = *(_QWORD *)(i1 + 8) )
          v40 = i1;
      }
      else
      {
        v40 = *v46;
      }
    }
    for ( i2 = *(_QWORD *)(IopRootDeviceNode + 8); i2; i2 = *(_QWORD *)(i2 + 8) )
      v45 = i2;
    v40 = IopRootDeviceNode;
    if ( v45 == IopRootDeviceNode )
      break;
    do
    {
      for ( i3 = *(_QWORD **)(v45 + 176); i3 != (_QWORD *)(v45 + 176); i3 = (_QWORD *)*i3 )
      {
        v54 = i3[5];
        v55 = *(_BYTE *)(v45 + 200);
        if ( *(_BYTE *)(v54 + 56) > v55 )
        {
          v44 = 1;
          *(_BYTE *)(v54 + 56) = v55;
        }
      }
      v52 = *(_QWORD *)v45;
      if ( *(_QWORD *)v45 )
      {
        do
        {
          v45 = v52;
          v52 = *(_QWORD *)(v52 + 8);
        }
        while ( v52 );
      }
      else
      {
        v45 = *(_QWORD *)(v45 + 16);
      }
      v40 = IopRootDeviceNode;
    }
    while ( v45 != IopRootDeviceNode );
  }
  while ( v44 );
  for ( i4 = *(_QWORD *)(v40 + 8); i4; i4 = *(_QWORD *)(i4 + 8) )
    v40 = i4;
  if ( v40 != IopRootDeviceNode )
  {
    v56 = v82;
    do
    {
      v57 = (char *)(v40 + 144);
      if ( (*((_DWORD *)a1 + 94) & 1) == 0 || (*(_DWORD *)(v40 + 704) & 0x6000) != 0 )
      {
        ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v40 + 200) + 16];
        if ( *(_QWORD *)(v40 + 16) != IopRootDeviceNode )
        {
          ++*(_DWORD *)(v40 + 240);
          ++*(_DWORD *)(*(_QWORD *)(v40 + 16) + 232LL);
        }
        v58 = *(_QWORD **)(v40 + 176);
        if ( v58 != (_QWORD *)(v40 + 176) )
        {
          v64 = *(_DWORD *)(v40 + 240);
          do
          {
            *(_DWORD *)(v40 + 240) = ++v64;
            v58 = (_QWORD *)*v58;
          }
          while ( v58 != (_QWORD *)(v40 + 176) );
        }
        v59 = *(_QWORD **)(v40 + 160);
        if ( v59 != (_QWORD *)(v40 + 160) )
        {
          v65 = *(_DWORD *)(v40 + 232);
          do
          {
            *(_DWORD *)(v40 + 232) = ++v65;
            v59 = (_QWORD *)*v59;
          }
          while ( v59 != (_QWORD *)(v40 + 160) );
        }
        v60 = &a1[64 * *(unsigned __int8 *)(v40 + 200) + 24 + 8 * *(unsigned __int8 *)(v40 + 200)];
        v61 = (char **)*((_QWORD *)v60 + 1);
        if ( *v61 != v60 )
          __fastfail(3u);
        *(_QWORD *)v57 = v60;
        *(_QWORD *)(v40 + 152) = v61;
        *v61 = v57;
        *((_QWORD *)v60 + 1) = v57;
        v56 = v82;
      }
      else
      {
        if ( *v56 != (char *)&v81 )
          __fastfail(3u);
        *(_QWORD *)(v40 + 152) = v56;
        *(_QWORD *)v57 = &v81;
        *v56 = v57;
        v56 = (char **)(v40 + 144);
        v82 = (char **)(v40 + 144);
      }
      v62 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 )
      {
        do
        {
          v40 = v62;
          v62 = *(_QWORD *)(v62 + 8);
        }
        while ( v62 );
      }
      else
      {
        v40 = *(_QWORD *)(v40 + 16);
      }
    }
    while ( v40 != IopRootDeviceNode );
  }
  IopFreePoDeviceNotifyListHead(&v81);
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
