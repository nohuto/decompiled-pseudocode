/*
 * XREFs of MNEraseBackground @ 0x1C0215B44
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C0029144 (GreSetBrushOrg.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     GreGetBrushOrg @ 0x1C0114B20 (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF

  v10 = 1;
  GreGetBrushOrg(a1, &v25);
  v15 = 3;
  v16 = *(_DWORD *)(a2 + 56);
  if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
  {
    v17 = (v16 & 8) == 0;
    v18 = *(unsigned int *)(a2 + 136);
    if ( v17 )
    {
      v15 = -3;
      LODWORD(v25) = -3;
      if ( (_DWORD)v18 == -1 || (unsigned int)v18 >= *(_DWORD *)(a2 + 68) )
        v21 = 0LL;
      else
        v21 = *(_QWORD *)(a2 + 96) + 152 * v18;
      v20 = -3 - *(_DWORD *)(v21 + 76) - *(_DWORD *)(GetDPIMetrics(v12, v11, v13, v14, v24) + 28);
    }
    else
    {
      v15 = 0;
      LODWORD(v25) = 0;
      if ( (_DWORD)v18 == -1 || (unsigned int)v18 >= *(_DWORD *)(a2 + 68) )
        v19 = 0LL;
      else
        v19 = *(_QWORD *)(a2 + 96) + 152 * v18;
      v20 = -*(_DWORD *)(v19 + 76);
    }
    HIDWORD(v25) = v20;
    goto LABEL_16;
  }
  if ( (v16 & 8) != 0 )
  {
    v25 = 0x300000003LL;
    v20 = 3;
LABEL_16:
    GreSetBrushOrg(a1, v15, v20, &v25);
    goto LABEL_18;
  }
  v10 = 0;
LABEL_18:
  v22 = GreSelectBrush(a1, *(_QWORD *)(a2 + 128));
  NtGdiPatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v25, SHIDWORD(v25), 0LL);
  return GreSelectBrush(a1, v22);
}
