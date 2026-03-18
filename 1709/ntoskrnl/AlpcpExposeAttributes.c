/*
 * XREFs of AlpcpExposeAttributes @ 0x14049F2C0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14046750C (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x14049F6E0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x14049F750 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x14049F8D4 (AlpcpExposeHandleAttribute.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     AlpcpExposeViewAttribute @ 0x14057F054 (AlpcpExposeViewAttribute.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x140582EF4 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpExposeContextAttribute32 @ 0x14058CF2C (AlpcpExposeContextAttribute32.c)
 */

void __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v7; // rbx
  _DWORD *v8; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  char *v23; // r8
  ULONG_PTR v24; // rsi
  ULONG_PTR v25; // rdi
  int v26; // ebp
  __int64 v27; // rdi
  _DWORD *v28; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  _DWORD *v34; // rdi
  int v35; // ecx
  __int64 v36; // rax
  __int64 MessageAttributeOffset32; // rax
  __int64 v38; // r9
  int v39; // [rsp+20h] [rbp-48h] BYREF
  int v40; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+30h] [rbp-38h]
  int v42; // [rsp+34h] [rbp-34h]
  int v43; // [rsp+38h] [rbp-30h]
  _QWORD *v44; // [rsp+90h] [rbp+28h]

  v7 = a4;
  v8 = a5 + 1;
  a5[1] = 0;
  if ( a2 < 0 )
  {
    if ( a4 < 0 )
    {
      MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32((unsigned int)a4, 0x80000000LL);
      if ( *(_QWORD *)(a3 + 136) != v38 )
      {
        *(_DWORD *)((char *)a5 + MessageAttributeOffset32) = v38;
        *(_DWORD *)((char *)a5 + MessageAttributeOffset32 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
        *v8 |= 0x80000000;
      }
    }
    if ( (v7 & 0x40000000) != 0 )
    {
      v28 = (_DWORD *)((char *)a5 + AlpcpGetMessageAttributeOffset32((unsigned int)v7, 0x40000000LL));
      AlpcpExposeViewAttribute(v29, a3, &v39, v8);
      if ( (*v8 & 0x40000000) != 0 )
      {
        v30 = v41;
        *v28 = v39;
        v31 = v40;
        v28[2] = v30;
        v32 = v43;
        v28[1] = v31;
        v28[3] = v32;
      }
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      v33 = AlpcpGetMessageAttributeOffset32((unsigned int)v7, 0x20000000LL);
      AlpcpExposeContextAttribute32(a1, a3, (char *)a5 + v33, v8);
    }
    if ( (v7 & 0x10000000) != 0 )
    {
      v34 = (_DWORD *)((char *)a5 + AlpcpGetMessageAttributeOffset32((unsigned int)v7, 0x10000000LL));
      AlpcpExposeHandleAttribute(a1, a3, &v39, v8);
      if ( (*v8 & 0x10000000) != 0 )
      {
        v35 = v39;
        v34[1] = v40;
        v34[2] = v41;
        v34[3] = v42;
        *v34 = v35;
      }
    }
    if ( (v7 & 0x8000000) != 0 )
    {
      v36 = AlpcpGetMessageAttributeOffset32((unsigned int)v7, 0x8000000LL);
      AlpcpExposeTokenAttribute(a1, a3, (char *)a5 + v36, v8);
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      v23 = (char *)a5 + AlpcpGetMessageAttributeOffset32((unsigned int)v7, 0x2000000LL);
LABEL_47:
      AlpcpExposeWorkOnBehalfAttribute(a1, a3, v23, v8);
    }
  }
  else
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      a5[2] = 0;
      *((_QWORD *)a5 + 3) = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
      *v8 |= 0x80000000;
    }
    if ( (a4 & 0x40000000) != 0 )
    {
      v10 = *(_QWORD *)(a3 + 144);
      v11 = 8LL;
      if ( (a4 & 0x80000000) == 0 )
        v11 = 2LL;
      v44 = &a5[v11];
      if ( v10 )
      {
        v24 = *(_QWORD *)(v10 + 16);
        AlpcpReferenceBlob(v24);
        v25 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v25);
        v26 = *(_DWORD *)(v25 + 48);
        AlpcpUnlockBlob(v25);
        AlpcpDereferenceBlobEx(v24, 1);
        v27 = *(_QWORD *)(a3 + 144);
        memset(v44, 0, 0x20uLL);
        v44[2] = *(_QWORD *)(v27 + 40);
        v44[3] = *(_QWORD *)(v27 + 48);
        if ( (v26 & 1) != 0 )
          *(_DWORD *)v44 = 0x40000;
        *v8 |= 0x40000000u;
      }
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      v12 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x40000000) == 0 )
        v12 = ((v7 >> 63) & 0x18) + 8;
      v13 = (char *)a5 + v12;
      if ( *(_QWORD *)(a3 + 56) == a1 || *(_QWORD *)(a3 + 64) == a1 )
        v14 = *(_QWORD *)(a3 + 128);
      else
        v14 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)v13 = v14;
      if ( *(_QWORD *)(a3 + 56) == a1 || *(_QWORD *)(a3 + 64) == a1 )
        v15 = *(_DWORD *)(a3 + 72);
      else
        v15 = *(_DWORD *)(a3 + 44);
      *((_DWORD *)v13 + 4) = v15;
      if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
        v16 = *(_QWORD *)(a3 + 104);
      else
        v16 = *(_QWORD *)(a3 + 112);
      *((_QWORD *)v13 + 1) = v16;
      *((_DWORD *)v13 + 5) = *(_DWORD *)(a3 + 264);
      *((_DWORD *)v13 + 6) = *(_DWORD *)(a3 + 272);
      if ( v8 && *(_QWORD *)v13 )
        *v8 |= 0x20000000u;
    }
    if ( (v7 & 0x10000000) != 0 )
    {
      v17 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x40000000) == 0 )
        v17 = ((v7 >> 63) & 0x18) + 8;
      if ( (v7 & 0x20000000) != 0 )
        v17 += 32LL;
      AlpcpExposeHandleAttribute(a1, a3, (char *)a5 + v17, v8);
    }
    if ( (v7 & 0x8000000) != 0 )
    {
      v18 = ((v7 >> 63) & 0x18) + 8;
      if ( (v7 & 0x40000000) != 0 )
        v18 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x20000000) != 0 )
        v18 += 32LL;
      v19 = v18 + 24;
      if ( (v7 & 0x10000000) == 0 )
        v19 = v18;
      AlpcpExposeTokenAttribute(a1, a3, (char *)a5 + v19, v8);
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      v20 = ((v7 >> 63) & 0x18) + 8;
      if ( (v7 & 0x40000000) != 0 )
        v20 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x20000000) != 0 )
        v20 += 32LL;
      v21 = v20 + 24;
      if ( (v7 & 0x10000000) == 0 )
        v21 = v20;
      v22 = v21 + 24;
      if ( (v7 & 0x8000000) == 0 )
        v22 = v21;
      v23 = (char *)a5 + v22;
      goto LABEL_47;
    }
  }
}
