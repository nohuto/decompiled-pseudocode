/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x14042D858
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopCaptureObjectName @ 0x14042DE30 (IopCaptureObjectName.c)
 *     IopCheckDeviceFlags @ 0x14042DEE0 (IopCheckDeviceFlags.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR i; // rax
  __int64 ***v7; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  ULONG_PTR *v13; // rcx
  _QWORD *v14; // rax
  ULONG_PTR j; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  __int64 *v19; // rax
  __int64 *k; // rcx
  __int64 *v21; // rcx
  ULONG_PTR v22; // rdx
  char v23; // r11
  ULONG_PTR m; // rax
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // rax
  ULONG_PTR v27; // rcx
  ULONG_PTR v28; // rax
  ULONG_PTR v29; // rcx
  ULONG_PTR n; // rax
  ULONG_PTR v31; // r10
  _QWORD *ii; // rax
  __int64 v33; // r9
  char v34; // dl
  ULONG_PTR v35; // rax
  ULONG_PTR jj; // rax
  char v37; // al
  __int64 kk; // rax
  __int64 v39; // rcx
  ULONG_PTR v40; // rax
  ULONG_PTR v41; // rdx
  ULONG_PTR v42; // rax
  char v43; // r10
  ULONG_PTR *v44; // r8
  __int64 v45; // rcx
  unsigned __int8 v46; // al
  ULONG_PTR mm; // rax
  ULONG_PTR v48; // rax
  ULONG_PTR nn; // rcx
  _QWORD *i1; // rcx
  __int64 v51; // r8
  unsigned __int8 v52; // r9
  ULONG_PTR v53; // rcx
  ULONG_PTR i2; // rax
  char *v55; // r8
  ULONG_PTR *v56; // r10
  _QWORD *v57; // rax
  int v58; // r9d
  _QWORD *v59; // rax
  int v60; // r9d
  char *v61; // rax
  char **v62; // rcx
  ULONG_PTR i3; // rax
  __int64 *result; // rax
  __int64 *v65; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v66; // [rsp+28h] [rbp-8h]

  v66 = &v65;
  v65 = (__int64 *)&v65;
  PnpLockDeviceActionQueue();
  memset(a1, 0, 0x178uLL);
  v2 = a1 + 48;
  v3 = 5LL;
  do
  {
    *(v2 - 2) = v2 - 3;
    *(v2 - 3) = v2 - 3;
    *v2 = v2 - 1;
    *(v2 - 1) = v2 - 1;
    v2[2] = v2 + 1;
    v2[1] = v2 + 1;
    v4 = v2 + 3;
    v2[4] = v2 + 3;
    v2 += 9;
    *v4 = v4;
    --v3;
  }
  while ( v3 );
  v5 = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    v5 = i;
  while ( v5 != IopRootDeviceNode )
  {
    v7 = (__int64 ***)(v5 + 144);
    *(_DWORD *)(v5 + 232) = 0;
    *(_DWORD *)(v5 + 236) = 0;
    *(_DWORD *)(v5 + 240) = 0;
    *(_DWORD *)(v5 + 244) = 0;
    *(_BYTE *)(v5 + 200) = 0;
    *(_QWORD *)(v5 + 208) = *(_QWORD *)(v5 + 32);
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(v5 + 32));
    *(_QWORD *)(v5 + 192) = AttachedDeviceReference;
    v9 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v10 = *(_QWORD *)(v5 + 192);
    *(_QWORD *)(v5 + 224) = v9;
    v11 = IopCaptureObjectName(v10);
    v12 = *(void **)(v5 + 208);
    *(_QWORD *)(v5 + 216) = v11;
    ObfReferenceObject(v12);
    *(_BYTE *)(v5 + 200) = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v5 + 144, 0x2000LL) )
      *(_BYTE *)(v5 + 200) = 2;
    v13 = (ULONG_PTR *)(v5 + 16);
    if ( *(_QWORD *)(v5 + 16) == IopRootDeviceNode && *(_DWORD *)(v5 + 448) && (*(_DWORD *)(v5 + 396) & 4) == 0 )
    {
      v14 = v66;
      if ( *v66 != (__int64 *)&v65 )
        __fastfail(3u);
      *(_QWORD *)(v5 + 152) = v66;
      *v7 = &v65;
      *v14 = v7;
      v66 = (__int64 **)(v5 + 144);
    }
    v5 = *(_QWORD *)v5;
    if ( v5 )
    {
      for ( j = *(_QWORD *)(v5 + 8); j; j = *(_QWORD *)(j + 8) )
        v5 = j;
    }
    else
    {
      v5 = *v13;
    }
  }
  while ( 1 )
  {
    v16 = v65;
    if ( v65 == (__int64 *)&v65 )
      break;
    if ( (__int64 **)v65[1] != &v65 || (v17 = (__int64 *)*v65, *(__int64 **)(*v65 + 8) != v65) )
      __fastfail(3u);
    v65 = (__int64 *)*v65;
    v17[1] = (__int64)&v65;
    v18 = v16 - 18;
    *((_BYTE *)v16 + 56) |= 1u;
    v19 = v18;
    for ( k = (__int64 *)v18[1]; k; k = (__int64 *)k[1] )
      v19 = k;
    while ( v19 != v18 )
    {
      *((_BYTE *)v19 + 200) |= 1u;
      v21 = (__int64 *)*v19;
      if ( *v19 )
      {
        do
        {
          v19 = v21;
          v21 = (__int64 *)v21[1];
        }
        while ( v21 );
      }
      else
      {
        v19 = (__int64 *)v19[2];
      }
    }
  }
  do
  {
    v22 = IopRootDeviceNode;
    v23 = 0;
    for ( m = *(_QWORD *)(IopRootDeviceNode + 8); m; m = *(_QWORD *)(m + 8) )
      v22 = m;
    while ( 1 )
    {
      v29 = IopRootDeviceNode;
      if ( v22 == IopRootDeviceNode )
        break;
      if ( (*(_BYTE *)(v22 + 200) & 2) != 0 )
      {
        v25 = *(_QWORD *)(v22 + 8);
        v26 = v22;
        while ( v25 )
        {
          v26 = v25;
          v25 = *(_QWORD *)(v25 + 8);
        }
        while ( v26 != v22 )
        {
          *(_BYTE *)(v26 + 200) |= 2u;
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 )
          {
            do
            {
              v26 = v27;
              v27 = *(_QWORD *)(v27 + 8);
            }
            while ( v27 );
          }
          else
          {
            v26 = *(_QWORD *)(v26 + 16);
          }
        }
      }
      v28 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 )
      {
        do
        {
          v22 = v28;
          v28 = *(_QWORD *)(v28 + 8);
        }
        while ( v28 );
      }
      else
      {
        v22 = *(_QWORD *)(v22 + 16);
      }
    }
    for ( n = *(_QWORD *)(IopRootDeviceNode + 8); n; n = *(_QWORD *)(n + 8) )
      v29 = n;
    v31 = IopRootDeviceNode;
    if ( v29 == IopRootDeviceNode )
      break;
    do
    {
      if ( (*(_BYTE *)(v29 + 200) & 2) != 0 )
      {
        for ( ii = *(_QWORD **)(v29 + 160); ii != (_QWORD *)(v29 + 160); ii = (_QWORD *)*ii )
        {
          v33 = *(ii - 1);
          v34 = *(_BYTE *)(v33 + 56);
          if ( (v34 & 2) == 0 )
          {
            v23 = 1;
            *(_BYTE *)(v33 + 56) = v34 | 2;
          }
        }
      }
      v35 = *(_QWORD *)v29;
      if ( *(_QWORD *)v29 )
      {
        do
        {
          v29 = v35;
          v35 = *(_QWORD *)(v35 + 8);
        }
        while ( v35 );
      }
      else
      {
        v29 = *(_QWORD *)(v29 + 16);
      }
      v31 = IopRootDeviceNode;
    }
    while ( v29 != IopRootDeviceNode );
  }
  while ( v23 );
  for ( jj = *(_QWORD *)(v31 + 8); jj; jj = *(_QWORD *)(jj + 8) )
    v31 = jj;
  while ( 1 )
  {
    v41 = IopRootDeviceNode;
    if ( v31 == IopRootDeviceNode )
      break;
    v37 = *(_BYTE *)(v31 + 200);
    if ( (v37 & 2) != 0 )
    {
      *(_BYTE *)(v31 + 200) = v37 + 1;
      for ( kk = *(_QWORD *)(v31 + 192); kk; kk = *(_QWORD *)(*(_QWORD *)(kk + 312) + 48LL) )
      {
        if ( *(_DWORD *)(kk + 72) == 7 )
        {
          if ( (unsigned __int8)IopCheckDeviceFlags(v31 + 144, 256LL) )
            *(_BYTE *)(v39 + 56) = 2;
          break;
        }
      }
    }
    v40 = *(_QWORD *)v31;
    if ( *(_QWORD *)v31 )
    {
      do
      {
        v31 = v40;
        v40 = *(_QWORD *)(v40 + 8);
      }
      while ( v40 );
    }
    else
    {
      v31 = *(_QWORD *)(v31 + 16);
    }
  }
  do
  {
    v42 = *(_QWORD *)(v41 + 8);
    v43 = 0;
    while ( v42 )
    {
      v41 = v42;
      v42 = *(_QWORD *)(v42 + 8);
    }
    while ( 1 )
    {
      v48 = IopRootDeviceNode;
      if ( v41 == IopRootDeviceNode )
        break;
      v44 = (ULONG_PTR *)(v41 + 16);
      v45 = *(_QWORD *)(v41 + 16);
      if ( v45 != IopRootDeviceNode )
      {
        v46 = *(_BYTE *)(v41 + 200);
        if ( *(_BYTE *)(v45 + 200) > v46 )
          *(_BYTE *)(v45 + 200) = v46;
      }
      v41 = *(_QWORD *)v41;
      if ( v41 )
      {
        for ( mm = *(_QWORD *)(v41 + 8); mm; mm = *(_QWORD *)(mm + 8) )
          v41 = mm;
      }
      else
      {
        v41 = *v44;
      }
    }
    for ( nn = *(_QWORD *)(IopRootDeviceNode + 8); nn; nn = *(_QWORD *)(nn + 8) )
      v48 = nn;
    v41 = IopRootDeviceNode;
    if ( v48 == IopRootDeviceNode )
      break;
    do
    {
      for ( i1 = *(_QWORD **)(v48 + 176); i1 != (_QWORD *)(v48 + 176); i1 = (_QWORD *)*i1 )
      {
        v51 = i1[5];
        v52 = *(_BYTE *)(v48 + 200);
        if ( *(_BYTE *)(v51 + 56) > v52 )
        {
          v43 = 1;
          *(_BYTE *)(v51 + 56) = v52;
        }
      }
      v53 = *(_QWORD *)v48;
      if ( *(_QWORD *)v48 )
      {
        do
        {
          v48 = v53;
          v53 = *(_QWORD *)(v53 + 8);
        }
        while ( v53 );
      }
      else
      {
        v48 = *(_QWORD *)(v48 + 16);
      }
      v41 = IopRootDeviceNode;
    }
    while ( v48 != IopRootDeviceNode );
  }
  while ( v43 );
  for ( i2 = *(_QWORD *)(v41 + 8); i2; i2 = *(_QWORD *)(i2 + 8) )
    v41 = i2;
  while ( v41 != IopRootDeviceNode )
  {
    v55 = (char *)(v41 + 144);
    v56 = (ULONG_PTR *)(v41 + 16);
    ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v41 + 200) + 16];
    if ( *(_QWORD *)(v41 + 16) != IopRootDeviceNode )
    {
      ++*(_DWORD *)(v41 + 240);
      ++*(_DWORD *)(*v56 + 232);
    }
    v57 = *(_QWORD **)(v41 + 176);
    if ( v57 != (_QWORD *)(v41 + 176) )
    {
      v58 = *(_DWORD *)(v41 + 240);
      do
      {
        *(_DWORD *)(v41 + 240) = ++v58;
        v57 = (_QWORD *)*v57;
      }
      while ( v57 != (_QWORD *)(v41 + 176) );
    }
    v59 = *(_QWORD **)(v41 + 160);
    if ( v59 != (_QWORD *)(v41 + 160) )
    {
      v60 = *(_DWORD *)(v41 + 232);
      do
      {
        *(_DWORD *)(v41 + 232) = ++v60;
        v59 = (_QWORD *)*v59;
      }
      while ( v59 != (_QWORD *)(v41 + 160) );
    }
    v61 = &a1[64 * *(unsigned __int8 *)(v41 + 200) + 24 + 8 * *(unsigned __int8 *)(v41 + 200)];
    v62 = (char **)*((_QWORD *)v61 + 1);
    if ( *v62 != v61 )
      __fastfail(3u);
    *(_QWORD *)v55 = v61;
    *(_QWORD *)(v41 + 152) = v62;
    *v62 = v55;
    *((_QWORD *)v61 + 1) = v55;
    v41 = *(_QWORD *)v41;
    if ( v41 )
    {
      for ( i3 = *(_QWORD *)(v41 + 8); i3; i3 = *(_QWORD *)(i3 + 8) )
        v41 = i3;
    }
    else
    {
      v41 = *v56;
    }
  }
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
