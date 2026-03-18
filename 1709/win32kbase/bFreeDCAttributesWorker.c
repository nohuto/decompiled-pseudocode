/*
 * XREFs of bFreeDCAttributesWorker @ 0x1C001DEB0
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x1C001E0A0 (HmgFreeDcAttr.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall bFreeDCAttributesWorker(int *a1)
{
  int *v1; // rsi
  int *v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // r8
  int *v6; // rax
  int *v7; // rdx
  __int128 v8; // xmm1
  int v9; // eax
  unsigned int v10; // edx
  GdiHandleManager *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rbp
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r10
  unsigned int v17; // r8d
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // r9
  int *v25; // rdx

  v1 = a1 + 140;
  v3 = (int *)*((_QWORD *)a1 + 10);
  v4 = 0;
  if ( v3 != v1 )
  {
    v5 = 3LL;
    v6 = v1;
    v7 = v3;
    do
    {
      *(_OWORD *)v6 = *(_OWORD *)v7;
      *((_OWORD *)v6 + 1) = *((_OWORD *)v7 + 1);
      *((_OWORD *)v6 + 2) = *((_OWORD *)v7 + 2);
      *((_OWORD *)v6 + 3) = *((_OWORD *)v7 + 3);
      *((_OWORD *)v6 + 4) = *((_OWORD *)v7 + 4);
      *((_OWORD *)v6 + 5) = *((_OWORD *)v7 + 5);
      *((_OWORD *)v6 + 6) = *((_OWORD *)v7 + 6);
      v6 += 32;
      v8 = *((_OWORD *)v7 + 7);
      v7 += 32;
      *((_OWORD *)v6 - 1) = v8;
      --v5;
    }
    while ( v5 );
    *(_OWORD *)v6 = *(_OWORD *)v7;
    *((_OWORD *)v6 + 1) = *((_OWORD *)v7 + 1);
    if ( v3 == a1 + 246 )
      v3 = (int *)*((_QWORD *)a1 + 122);
    HmgFreeDcAttr(v3);
    v9 = *a1;
    v10 = (unsigned int)*a1 >> 8;
    *((_QWORD *)a1 + 10) = v1;
    v11 = gpHandleManager;
    v12 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v9 | v10 & 0xFF0000);
    v13 = *((_QWORD *)v11 + 2);
    v14 = *(_DWORD *)(v13 + 2056);
    if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    {
      v18 = 0LL;
    }
    else
    {
      if ( v12 >= v14 )
        v15 = ((v12 - v14) >> 16) + 1;
      else
        v15 = 0;
      v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
      if ( v15 )
        v17 = v12 + ((1 - v15) << 16) - v14;
      else
        v17 = v12;
      v18 = 0LL;
      if ( v17 >= *(_DWORD *)(v16 + 20) )
        v19 = 0LL;
      else
        v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                        + 16LL * (unsigned __int8)v17
                        + 8);
      if ( v19 )
        v18 = *(_QWORD *)v16 + 24LL * v17;
    }
    v20 = GdiHandleManager::DecodeIndex(v11, v12);
    v21 = *(_DWORD *)(v13 + 2056);
    v22 = v20;
    if ( v20 >= v21 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
      goto LABEL_26;
    if ( v20 >= v21 )
      v23 = ((v20 - v21) >> 16) + 1;
    else
      v23 = 0;
    v24 = *(_QWORD *)(v13 + 8LL * v23 + 8);
    if ( v23 )
      v22 = ((1 - v23) << 16) - v21 + v20;
    if ( (unsigned int)v22 >= *(_DWORD *)(v24 + 20) )
LABEL_26:
      v25 = 0LL;
    else
      v25 = *(int **)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22 + 8);
    if ( v25 != a1 )
      v18 = 0LL;
    *(_QWORD *)(v18 + 16) = 0LL;
    return 1;
  }
  return v4;
}
