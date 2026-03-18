/*
 * XREFs of MNEraseBackground @ 0x1C0216AA0
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     GreSetBrushOrg @ 0x1C007F6C8 (GreSetBrushOrg.c)
 *     GreGetBrushOrg @ 0x1C011CB2C (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v10 = 1;
  GreGetBrushOrg(a1, &v22);
  v13 = 3;
  v14 = *(_DWORD *)(a2 + 56);
  if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
  {
    v15 = (v14 & 8) == 0;
    v16 = *(unsigned int *)(a2 + 136);
    if ( v15 )
    {
      v13 = -3;
      LODWORD(v22) = -3;
      if ( (_DWORD)v16 == -1 || (unsigned int)v16 >= *(_DWORD *)(a2 + 68) )
        v19 = 0LL;
      else
        v19 = *(_QWORD *)(a2 + 96) + 152 * v16;
      v18 = -3 - *(_DWORD *)(v19 + 76) - *(_DWORD *)(GetDPIMetrics(v12, v11) + 28);
    }
    else
    {
      v13 = 0;
      LODWORD(v22) = 0;
      if ( (_DWORD)v16 == -1 || (unsigned int)v16 >= *(_DWORD *)(a2 + 68) )
        v17 = 0LL;
      else
        v17 = *(_QWORD *)(a2 + 96) + 152 * v16;
      v18 = -*(_DWORD *)(v17 + 76);
    }
    HIDWORD(v22) = v18;
    goto LABEL_16;
  }
  if ( (v14 & 8) != 0 )
  {
    v22 = 0x300000003LL;
    v18 = 3;
LABEL_16:
    GreSetBrushOrg(a1, v13, v18, &v22);
    goto LABEL_18;
  }
  v10 = 0;
LABEL_18:
  v20 = GreSelectBrush(a1, *(_QWORD *)(a2 + 128));
  NtGdiPatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v22, SHIDWORD(v22), 0LL);
  return GreSelectBrush(a1, v20);
}
