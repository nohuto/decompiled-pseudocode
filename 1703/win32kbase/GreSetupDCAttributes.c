/*
 * XREFs of GreSetupDCAttributes @ 0x1C002BFCC
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgAllocateDcAttr @ 0x1C002C1D4 (HmgAllocateDcAttr.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00423CC (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetupDCAttributes(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r14
  __int64 DcAttr; // rax
  _OWORD *v4; // rdi
  GdiHandleManager *v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // edx
  signed int v9; // ecx
  __int64 v10; // r11
  unsigned int v11; // r9d
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  signed int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _OWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  v2 = v23[0];
  if ( !v23[0] )
    goto LABEL_24;
  DcAttr = HmgAllocateDcAttr();
  v4 = (_OWORD *)DcAttr;
  if ( !DcAttr )
    goto LABEL_24;
  *(_QWORD *)(v2 + 80) = DcAttr;
  v5 = gpHandleManager;
  v6 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)*(_DWORD *)v2 | (*(_DWORD *)v2 >> 8) & 0xFF0000);
  v7 = *((_QWORD *)v5 + 2);
  v8 = *(_DWORD *)(v7 + 2056);
  if ( v6 < v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
  {
    if ( v6 < v8 )
    {
      v9 = 0;
LABEL_6:
      v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
      v11 = v6;
      if ( v9 )
        v11 = v6 - (v9 << 16) - v8 + 0x10000;
      v12 = 0LL;
      if ( v11 >= *(_DWORD *)(v10 + 20) )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8LL * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
      if ( v13 )
        v12 = *(_QWORD *)v10 + 24LL * v11;
      goto LABEL_12;
    }
    v9 = ((v6 - v8) >> 16) + 1;
    if ( (v6 - v8) >> 16 != -2 )
      goto LABEL_6;
  }
  v12 = 0LL;
LABEL_12:
  v14 = GdiHandleManager::DecodeIndex(v5, v6);
  v15 = v14;
  v16 = *(_DWORD *)(v7 + 2056);
  if ( v14 >= v16 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    goto LABEL_30;
  if ( v14 < v16 )
  {
    v17 = 0;
    goto LABEL_15;
  }
  v17 = ((v14 - v16) >> 16) + 1;
  if ( (v14 - v16) >> 16 == -2 )
  {
LABEL_30:
    v19 = 0LL;
    goto LABEL_19;
  }
LABEL_15:
  v18 = *(_QWORD *)(v7 + 8LL * v17 + 8);
  if ( v17 )
    v15 = v14 - (v17 << 16) - v16 + 0x10000;
  if ( v15 >= *(_DWORD *)(v18 + 20) )
    goto LABEL_30;
  v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8LL * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
LABEL_19:
  if ( v19 != v2 )
    v12 = 0LL;
  *(_QWORD *)(v12 + 16) = v4;
  v20 = (_OWORD *)(v2 + 560);
  v21 = 3LL;
  do
  {
    *v4 = *v20;
    v4[1] = v20[1];
    v4[2] = v20[2];
    v4[3] = v20[3];
    v4[4] = v20[4];
    v4[5] = v20[5];
    v4[6] = v20[6];
    v4 += 8;
    *(v4 - 1) = v20[7];
    v20 += 8;
    --v21;
  }
  while ( v21 );
  *v4 = *v20;
  v4[1] = v20[1];
  v1 = 1;
LABEL_24:
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return v1;
}
