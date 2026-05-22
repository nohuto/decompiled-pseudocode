/*
 * XREFs of ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@_NW4EdgeGestureEdges@@1H@Z @ 0x18002E110
 * Callers:
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x18002DC28 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?OnFlick@EdgeGestureTarget@@AEAAJXZ @ 0x18002E018 (-OnFlick@EdgeGestureTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x18002B4E8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     McTemplateU0qqffq @ 0x18002BA94 (McTemplateU0qqffq.c)
 */

__int64 __fastcall EdgeGestureTarget::OnSwipe(__int64 a1, char a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v9; // rdi
  float v10; // xmm3_4
  int **v11; // rdx
  char v12; // si
  char Candidate; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // xmm4_1
  void *v17; // rcx
  bool v18; // zf
  unsigned int v19; // edx
  unsigned int v20; // r9d
  int v21; // r8d
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  bool v25; // al
  unsigned int v26; // r10d
  D2D_VECTOR_2F v28; // [rsp+40h] [rbp-18h] BYREF
  void *v29; // [rsp+48h] [rbp-10h] BYREF

  v5 = 0;
  if ( !a5 )
    return v5;
  v9 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v9 + 200) )
  {
    v28 = 0LL;
    if ( a2 )
    {
      v10 = (float)a5;
      v28.x = (float)a5;
    }
    else
    {
      LOBYTE(v10) = LOBYTE(v28.x);
      v28.y = (float)a5;
    }
    v11 = *(int ***)(v9 + 200);
    v29 = 0LL;
    v12 = 0;
    Candidate = Edges::GetCandidate((Edges *)(v9 + 288), v11, &v28, &v29);
    v17 = v29;
    if ( Candidate )
    {
      *(_QWORD *)(v9 + 208) = v29;
      v12 = 1;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      McTemplateU0qqffq((__int64)v17, v14, v15, (int)v17, SLOBYTE(v10), v16, v12);
    v18 = v12 == 0;
    goto LABEL_26;
  }
  v19 = *(_DWORD *)(v9 + 60);
  v20 = *(_DWORD *)(v9 + 64);
  v21 = (v19 < *(_DWORD *)(v9 + 52) ? 4 : 0) | 8;
  if ( v19 < *(_DWORD *)(v9 + 32) - *(_DWORD *)(v9 + 56) )
    v21 = v19 < *(_DWORD *)(v9 + 52) ? 4 : 0;
  v22 = v21 | 1;
  if ( v20 >= *(_DWORD *)(v9 + 44) )
    v22 = v21;
  v23 = v22 | 2;
  if ( v20 < *(_DWORD *)(v9 + 36) - *(_DWORD *)(v9 + 48) )
    v23 = v22;
  v24 = (a4 | a3) & v23;
  v25 = v24 != 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_21;
  if ( !v24 || (v24 & *(_DWORD *)(a1 + 44)) == 0 )
  {
    v25 = 0;
LABEL_21:
    if ( !v25 )
      return v5;
  }
  if ( (v24 & a3) != 0 )
    LOBYTE(v26) = a5 > 0;
  else
    v26 = (unsigned int)a5 >> 31;
  v18 = (_BYTE)v26 == 0;
LABEL_26:
  if ( !v18 )
    return 2;
  return v5;
}
