/*
 * XREFs of AlpcpExposeAttributes @ 0x1404CA290
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x1404C9800 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1404CA6B0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x1404CA720 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x1404CA8B0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpExposeViewAttribute @ 0x1405602F0 (AlpcpExposeViewAttribute.c)
 *     AlpcpExposeContextAttribute32 @ 0x140560D28 (AlpcpExposeContextAttribute32.c)
 */

void __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v7; // rbx
  _DWORD *v8; // r12
  unsigned int v9; // r8d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  char *v24; // r8
  __int64 MessageAttributeOffset32; // rax
  __int64 v26; // r9
  _DWORD *v27; // rdi
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rax
  _DWORD *v33; // rdi
  int v34; // ecx
  __int64 v35; // rax
  ULONG_PTR v36; // rsi
  ULONG_PTR v37; // rdi
  int v38; // ebp
  __int64 v39; // rdi
  int v40; // [rsp+20h] [rbp-48h] BYREF
  int v41; // [rsp+28h] [rbp-40h]
  int v42; // [rsp+30h] [rbp-38h]
  int v43; // [rsp+34h] [rbp-34h]
  int v44; // [rsp+38h] [rbp-30h]
  _QWORD *v45; // [rsp+90h] [rbp+28h]

  v7 = a4;
  v8 = a5 + 1;
  v9 = a4 & 0x80000000;
  a5[1] = 0;
  if ( a2 < 0 )
  {
    if ( v9 )
    {
      MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(a4, 0x80000000);
      if ( *(_QWORD *)(a3 + 136) != v26 )
      {
        *(_DWORD *)((char *)a5 + MessageAttributeOffset32) = v26;
        *(_DWORD *)((char *)a5 + MessageAttributeOffset32 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
        *v8 |= 0x80000000;
      }
    }
    if ( (v7 & 0x40000000) != 0 )
    {
      v27 = (_DWORD *)((char *)a5 + AlpcpGetMessageAttributeOffset32(v7, 0x40000000));
      AlpcpExposeViewAttribute(v28, a3, &v40, v8);
      if ( (*v8 & 0x40000000) != 0 )
      {
        v29 = v42;
        *v27 = v40;
        v30 = v41;
        v27[2] = v29;
        v31 = v44;
        v27[1] = v30;
        v27[3] = v31;
      }
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      v32 = AlpcpGetMessageAttributeOffset32(v7, 0x20000000);
      AlpcpExposeContextAttribute32(a1, a3, (char *)a5 + v32, v8);
    }
    if ( (v7 & 0x10000000) != 0 )
    {
      v33 = (_DWORD *)((char *)a5 + AlpcpGetMessageAttributeOffset32(v7, 0x10000000));
      AlpcpExposeHandleAttribute(a1, a3, &v40, v8);
      if ( (*v8 & 0x10000000) != 0 )
      {
        v34 = v40;
        v33[1] = v41;
        v33[2] = v42;
        v33[3] = v43;
        *v33 = v34;
      }
    }
    if ( (v7 & 0x8000000) != 0 )
    {
      v35 = AlpcpGetMessageAttributeOffset32(v7, 0x8000000);
      AlpcpExposeTokenAttribute(a1, a3, (char *)a5 + v35, v8);
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      v24 = (char *)a5 + AlpcpGetMessageAttributeOffset32(v7, 0x2000000);
LABEL_47:
      AlpcpExposeWorkOnBehalfAttribute(a1, a3, v24, v8);
    }
  }
  else
  {
    if ( v9 && *(_QWORD *)(a3 + 136) )
    {
      a5[2] = 0;
      *((_QWORD *)a5 + 3) = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
      *v8 |= 0x80000000;
    }
    if ( (a4 & 0x40000000) != 0 )
    {
      v11 = *(_QWORD *)(a3 + 144);
      v12 = 8LL;
      if ( !v9 )
        v12 = 2LL;
      v45 = &a5[v12];
      if ( v11 )
      {
        v36 = *(_QWORD *)(v11 + 16);
        AlpcpReferenceBlob(v36);
        v37 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v37);
        v38 = *(_DWORD *)(v37 + 48);
        AlpcpUnlockBlob(v37);
        AlpcpDereferenceBlobEx(v36);
        v39 = *(_QWORD *)(a3 + 144);
        memset(v45, 0, 0x20uLL);
        v45[2] = *(_QWORD *)(v39 + 40);
        v45[3] = *(_QWORD *)(v39 + 48);
        if ( (v38 & 1) != 0 )
          *(_DWORD *)v45 = 0x40000;
        *v8 |= 0x40000000u;
      }
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      v13 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x40000000) == 0 )
        v13 = ((v7 >> 63) & 0x18) + 8;
      v14 = (char *)a5 + v13;
      if ( *(_QWORD *)(a3 + 56) == a1 || *(_QWORD *)(a3 + 64) == a1 )
        v15 = *(_QWORD *)(a3 + 128);
      else
        v15 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)v14 = v15;
      if ( *(_QWORD *)(a3 + 56) == a1 || *(_QWORD *)(a3 + 64) == a1 )
        v16 = *(_DWORD *)(a3 + 72);
      else
        v16 = *(_DWORD *)(a3 + 44);
      *((_DWORD *)v14 + 4) = v16;
      if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
        v17 = *(_QWORD *)(a3 + 104);
      else
        v17 = *(_QWORD *)(a3 + 112);
      *((_QWORD *)v14 + 1) = v17;
      *((_DWORD *)v14 + 5) = *(_DWORD *)(a3 + 264);
      *((_DWORD *)v14 + 6) = *(_DWORD *)(a3 + 272);
      if ( v8 && *(_QWORD *)v14 )
        *v8 |= 0x20000000u;
    }
    if ( (v7 & 0x10000000) != 0 )
    {
      v18 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x40000000) == 0 )
        v18 = ((v7 >> 63) & 0x18) + 8;
      if ( (v7 & 0x20000000) != 0 )
        v18 += 32LL;
      AlpcpExposeHandleAttribute(a1, a3, (char *)a5 + v18, v8);
    }
    if ( (v7 & 0x8000000) != 0 )
    {
      v19 = ((v7 >> 63) & 0x18) + 8;
      if ( (v7 & 0x40000000) != 0 )
        v19 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x20000000) != 0 )
        v19 += 32LL;
      v20 = v19 + 24;
      if ( (v7 & 0x10000000) == 0 )
        v20 = v19;
      AlpcpExposeTokenAttribute(a1, a3, (char *)a5 + v20, v8);
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      v21 = ((v7 >> 63) & 0x18) + 8;
      if ( (v7 & 0x40000000) != 0 )
        v21 = ((v7 >> 63) & 0x18) + 40;
      if ( (v7 & 0x20000000) != 0 )
        v21 += 32LL;
      v22 = v21 + 24;
      if ( (v7 & 0x10000000) == 0 )
        v22 = v21;
      v23 = v22 + 24;
      if ( (v7 & 0x8000000) == 0 )
        v23 = v22;
      v24 = (char *)a5 + v23;
      goto LABEL_47;
    }
  }
}
