/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C0060DDC
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x1C0012940 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // r10
  __int64 v11; // r15
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r14
  unsigned int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 SystemMemoryCommitLimit; // rax
  VIDMM_GLOBAL *v25; // rcx
  __int64 v26; // r11
  unsigned __int64 v27; // r10
  int v28; // ecx
  __int64 v29; // r9

  v8 = 0LL;
  v11 = a2;
  *a6 = 0LL;
  v13 = 0LL;
  *a7 = 0LL;
  v14 = 0LL;
  *a8 = 0LL;
  v15 = *(_DWORD *)(472LL * a2 + *((_QWORD *)this + 5021) + 24);
  if ( !v15 )
    goto LABEL_12;
  v16 = 0LL;
  v17 = v15;
  do
  {
    v18 = *(_QWORD *)(v16 + *((_QWORD *)this + 464));
    v19 = *(_QWORD *)(v18 + 48);
    if ( *(_QWORD *)(v18 + 232) < v19 )
      v19 = *(_QWORD *)(v18 + 232);
    v20 = *(_DWORD *)(v18 + 80);
    if ( (v20 & 0x1001) != 0 )
    {
      if ( (v20 & 1) != 0 )
        v8 += v19;
      else
        v13 += v19;
    }
    else if ( (v20 & 0x40) != 0 )
    {
      *a7 += v19;
    }
    else
    {
      *a6 += v19;
    }
    v21 = v16 + *((_QWORD *)this + 464);
    v16 += 8LL;
    v22 = *(_DWORD *)(*(_QWORD *)v21 + 500LL);
    v23 = v19 + v14;
    if ( v22 != 2 )
      v23 = v14;
    v14 = v23;
    --v17;
  }
  while ( v17 );
  if ( v8 <= v13 )
LABEL_12:
    v8 = v13;
  *a8 = v8;
  SystemMemoryCommitLimit = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(this);
  if ( v27 > SystemMemoryCommitLimit )
    *a8 = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(v25);
  v28 = *(_DWORD *)(v26 + 40864);
  if ( *a8 > 1LL << v28 && (*(_BYTE *)(v26 + 40872) & 1) != 0 )
    *a8 = 1LL << v28;
  v29 = *(_QWORD *)(v26 + 41200) + 280 * v11;
  *a3 = 100LL * *(_QWORD *)(v29 + 32) / (unsigned __int64)(unsigned int)(100 - *(_DWORD *)(v29 + 240));
  *a4 = 100LL * *(_QWORD *)(v29 + 40) / (unsigned __int64)(unsigned int)(100 - *(_DWORD *)(v29 + 244));
  *a5 = v14;
}
