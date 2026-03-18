/*
 * XREFs of ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005F8CC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0017AA0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rsi
  char v5; // bp
  __int64 v6; // rbx
  unsigned int *v7; // rbx
  char *v8; // rbx
  char *v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rax
  char *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  void *v21; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this + 48;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)v3;
    if ( *(char **)v3 == v3 )
      goto LABEL_3;
    if ( *(char **)(v6 + 8) != v3 || (v11 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v3 = v11;
    *(_QWORD *)(v11 + 8) = v3;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *(unsigned int *)(v6 + 16), &v21) )
      break;
    memmove(v21, (const void *)(v6 + 20), *(unsigned int *)(v6 + 16));
    Win32FreePool(v6);
  }
  v12 = *(_QWORD *)v3;
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
    __fastfail(3u);
  *(_QWORD *)v6 = v12;
  *(_QWORD *)(v6 + 8) = v3;
  *(_QWORD *)(v12 + 8) = v6;
  *(_QWORD *)v3 = v6;
  if ( (char *)v6 == v3 )
  {
LABEL_3:
    while ( 1 )
    {
      v7 = *(unsigned int **)this;
      if ( *(DirectComposition::CTelemetryInfo **)this == this )
        break;
      if ( *((DirectComposition::CTelemetryInfo **)v7 + 1) != this
        || (v13 = *(_QWORD *)v7, *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)this = v13;
      *(_QWORD *)(v13 + 8) = this;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v7[4], &v21) )
      {
        v14 = *(unsigned int **)this;
        if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this )
          __fastfail(3u);
        *(_QWORD *)v7 = v14;
        *((_QWORD *)v7 + 1) = this;
        *((_QWORD *)v14 + 1) = v7;
        *(_QWORD *)this = v7;
        if ( v7 != (unsigned int *)this )
          return v5;
        break;
      }
      memmove(v21, v7 + 5, v7[4]);
      Win32FreePool((__int64)v7);
    }
    v8 = (char *)this + 16;
    while ( *(char **)v8 != v8 )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x48uLL, &v21) )
      {
        if ( *(char **)v8 != v8 )
          return v5;
        break;
      }
      v15 = *(_OWORD **)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v16 = *(_QWORD *)v15, *(_OWORD **)(*(_QWORD *)v15 + 8LL) != v15) )
        __fastfail(3u);
      *(_QWORD *)v8 = v16;
      *(_QWORD *)(v16 + 8) = v8;
      v17 = (char *)v21;
      *(_DWORD *)v21 = 72;
      *((_DWORD *)v17 + 1) = 297;
      *(_OWORD *)(v17 + 8) = v15[1];
      *(_OWORD *)(v17 + 24) = v15[2];
      *(_OWORD *)(v17 + 40) = v15[3];
      *(_OWORD *)(v17 + 56) = v15[4];
      Win32FreePool((__int64)v15);
    }
    v9 = (char *)this + 32;
    while ( 1 )
    {
      if ( *(char **)v9 == v9 )
        return 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v21) )
        break;
      v18 = *(_QWORD **)v9;
      if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v19 = *v18, *(_QWORD **)(*v18 + 8LL) != v18) )
        __fastfail(3u);
      *(_QWORD *)v9 = v19;
      *(_QWORD *)(v19 + 8) = v9;
      v20 = v21;
      *(_DWORD *)v21 = 16;
      v20[1] = 296;
      *((_QWORD *)v20 + 1) = v18[2];
      Win32FreePool((__int64)v18);
    }
    if ( *(char **)v9 == v9 )
      return 1;
  }
  return v5;
}
