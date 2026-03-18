/*
 * XREFs of ?GreSetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C007067C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall GreSetupDCAttributes(struct DC *a1, struct _DC_ATTR *a2)
{
  struct _DC_ATTR *v2; // rdi
  GdiHandleManager *v4; // r13
  unsigned int v5; // eax
  __int64 v6; // r15
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r11
  unsigned int v10; // r9d
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  struct DC *v18; // rdx
  _OWORD *v19; // rax
  __int64 v20; // rcx

  v2 = a2;
  *((_QWORD *)a1 + 10) = a2;
  v4 = gpHandleManager;
  v5 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000u);
  v6 = *((_QWORD *)v4 + 2);
  v7 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
  {
    v11 = 0LL;
  }
  else
  {
    if ( v5 >= v7 )
      v8 = ((v5 - v7) >> 16) + 1;
    else
      v8 = 0;
    v9 = *(_QWORD *)(v6 + 8LL * v8 + 8);
    if ( v8 )
      v10 = v5 + ((1 - v8) << 16) - v7;
    else
      v10 = v5;
    v11 = 0LL;
    if ( v10 >= *(_DWORD *)(v9 + 20) )
      v12 = 0LL;
    else
      v12 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
    if ( v12 )
      v11 = *(_QWORD *)v9 + 24LL * v10;
  }
  v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v4, v5);
  v14 = v13;
  v15 = *(_DWORD *)(v6 + 2056);
  if ( v13 >= v15 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_27;
  if ( v13 >= v15 )
    v16 = ((v13 - v15) >> 16) + 1;
  else
    v16 = 0;
  v17 = *(_QWORD *)(v6 + 8LL * v16 + 8);
  if ( v16 )
    v14 = ((1 - v16) << 16) - v15 + v13;
  if ( v14 >= *(_DWORD *)(v17 + 20) )
LABEL_27:
    v18 = 0LL;
  else
    v18 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8LL * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
  if ( v18 != a1 )
    v11 = 0LL;
  *(_QWORD *)(v11 + 16) = v2;
  v19 = (_OWORD *)((char *)a1 + 560);
  v20 = 3LL;
  do
  {
    *(_OWORD *)v2 = *v19;
    *((_OWORD *)v2 + 1) = v19[1];
    *((_OWORD *)v2 + 2) = v19[2];
    *((_OWORD *)v2 + 3) = v19[3];
    *((_OWORD *)v2 + 4) = v19[4];
    *((_OWORD *)v2 + 5) = v19[5];
    *((_OWORD *)v2 + 6) = v19[6];
    v2 = (struct _DC_ATTR *)((char *)v2 + 128);
    *((_OWORD *)v2 - 1) = v19[7];
    v19 += 8;
    --v20;
  }
  while ( v20 );
  *(_OWORD *)v2 = *v19;
  *((_OWORD *)v2 + 1) = v19[1];
}
