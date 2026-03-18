/*
 * XREFs of AlpcpExposeAttributes @ 0x140523560
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1404730E0 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x140439174 (AlpcpGetMessageAttributeOffset32.c)
 *     AlpcpExposeViewAttribute @ 0x14043FA80 (AlpcpExposeViewAttribute.c)
 *     AlpcpExposeContextAttribute32 @ 0x140441DAC (AlpcpExposeContextAttribute32.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     AlpcpExposeTokenAttribute @ 0x140523980 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x140523B10 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x140523B90 (AlpcpExposeHandleAttribute.c)
 */

void __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  signed int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  ULONG_PTR v27; // rsi
  ULONG_PTR v28; // rdi
  int v29; // ebp
  __int64 v30; // rdi
  __int64 MessageAttributeOffset32; // rax
  __int64 v32; // r9
  _DWORD *v33; // rsi
  __int64 v34; // rcx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rax
  _DWORD *v39; // rsi
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+20h] [rbp-48h] BYREF
  int v44; // [rsp+28h] [rbp-40h]
  int v45; // [rsp+30h] [rbp-38h]
  int v46; // [rsp+34h] [rbp-34h]
  int v47; // [rsp+38h] [rbp-30h]
  _QWORD *v48; // [rsp+88h] [rbp+20h]

  v4 = *(_DWORD *)a4;
  v5 = (_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = 0;
  if ( a2 < 0 )
  {
    if ( v4 < 0 )
    {
      MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(v4, 0x80000000);
      if ( *(_QWORD *)(a3 + 136) != v32 )
      {
        *(_DWORD *)(MessageAttributeOffset32 + a4) = v32;
        *(_DWORD *)(MessageAttributeOffset32 + a4 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
        *v5 |= 0x80000000;
      }
    }
    if ( (v4 & 0x40000000) != 0 )
    {
      v33 = (_DWORD *)(a4 + AlpcpGetMessageAttributeOffset32(v4, 0x40000000));
      AlpcpExposeViewAttribute(v34, a3, &v43, v5);
      if ( (*v5 & 0x40000000) != 0 )
      {
        v35 = v45;
        *v33 = v43;
        v36 = v44;
        v33[2] = v35;
        v37 = v47;
        v33[1] = v36;
        v33[3] = v37;
      }
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v38 = AlpcpGetMessageAttributeOffset32(v4, 0x20000000);
      AlpcpExposeContextAttribute32(a1, a3, (_DWORD *)(a4 + v38), v5);
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v39 = (_DWORD *)(a4 + AlpcpGetMessageAttributeOffset32(v4, 0x10000000));
      AlpcpExposeHandleAttribute(a1, a3, &v43, v5);
      if ( (*v5 & 0x10000000) != 0 )
      {
        v40 = v43;
        v39[1] = v44;
        v39[2] = v45;
        v39[3] = v46;
        *v39 = v40;
      }
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v41 = AlpcpGetMessageAttributeOffset32(v4, 0x8000000);
      AlpcpExposeTokenAttribute(a1, a3, a4 + v41, v5);
    }
    if ( (v4 & 0x2000000) != 0 )
    {
      v42 = AlpcpGetMessageAttributeOffset32(v4, 0x2000000);
      AlpcpExposeWorkOnBehalfAttribute(a1, a3, a4 + v42, v5);
    }
  }
  else
  {
    if ( v4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a4 + 8) = 0;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
      *v5 |= 0x80000000;
    }
    v9 = 32LL;
    if ( (v4 & 0x40000000) != 0 )
    {
      v10 = 32LL;
      if ( v4 >= 0 )
        v10 = 8LL;
      v11 = *(_QWORD *)(a3 + 144);
      v48 = (_QWORD *)(a4 + v10);
      if ( v11 )
      {
        v27 = *(_QWORD *)(v11 + 16);
        AlpcpReferenceBlob(v27);
        v28 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v28);
        v29 = *(_DWORD *)(v28 + 48);
        AlpcpUnlockBlob(v28);
        AlpcpDereferenceBlobEx(v27, 1);
        v30 = *(_QWORD *)(a3 + 144);
        memset(v48, 0, 0x20uLL);
        v48[2] = *(_QWORD *)(v30 + 40);
        v48[3] = *(_QWORD *)(v30 + 48);
        if ( (v29 & 1) != 0 )
          *(_DWORD *)v48 = 0x40000;
        *(_DWORD *)(a4 + 4) |= 0x40000000u;
        v5 = (_DWORD *)(a4 + 4);
      }
    }
    if ( (v4 & 0x20000000) != 0 )
    {
      v12 = 32LL;
      if ( v4 >= 0 )
        v12 = 8LL;
      v13 = v12 + 32;
      if ( (v4 & 0x40000000) == 0 )
        v13 = v12;
      v14 = v13 + a4;
      if ( *(_QWORD *)(a3 + 56) == a1 || *(_QWORD *)(a3 + 64) == a1 )
        v15 = *(_QWORD *)(a3 + 128);
      else
        v15 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)v14 = v15;
      if ( *(_QWORD *)(a3 + 56) == a1 || *(_QWORD *)(a3 + 64) == a1 )
        v16 = *(_DWORD *)(a3 + 72);
      else
        v16 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v14 + 16) = v16;
      if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
        v17 = *(_QWORD *)(a3 + 104);
      else
        v17 = *(_QWORD *)(a3 + 112);
      v18 = *(_QWORD *)v14 == 0LL;
      *(_QWORD *)(v14 + 8) = v17;
      *(_DWORD *)(v14 + 20) = *(_DWORD *)(a3 + 264);
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(a3 + 272);
      if ( !v18 )
        *v5 |= 0x20000000u;
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v19 = 32LL;
      if ( v4 >= 0 )
        v19 = 8LL;
      v20 = v19 + 32;
      if ( (v4 & 0x40000000) == 0 )
        v20 = v19;
      if ( (v4 & 0x20000000) != 0 )
        v20 += 32LL;
      AlpcpExposeHandleAttribute(a1, a3, v20 + a4, v5);
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v21 = 32LL;
      if ( v4 >= 0 )
        v21 = 8LL;
      v22 = v21 + 32;
      if ( (v4 & 0x40000000) == 0 )
        v22 = v21;
      if ( (v4 & 0x20000000) != 0 )
        v22 += 32LL;
      v23 = v22 + 24;
      if ( (v4 & 0x10000000) == 0 )
        v23 = v22;
      AlpcpExposeTokenAttribute(a1, a3, a4 + v23, v5);
    }
    if ( (v4 & 0x2000000) != 0 )
    {
      v24 = v4 & 0xFC000000;
      if ( v24 >= 0 )
        v9 = 8LL;
      if ( (v24 & 0x40000000) != 0 )
        v9 += 32LL;
      if ( (v24 & 0x20000000) != 0 )
        v9 += 32LL;
      v25 = v9 + 24;
      if ( (v24 & 0x10000000) == 0 )
        v25 = v9;
      v26 = v25 + 24;
      if ( (v24 & 0x8000000) == 0 )
        v26 = v25;
      AlpcpExposeWorkOnBehalfAttribute(a1, a3, a4 + v26, v5);
    }
  }
}
