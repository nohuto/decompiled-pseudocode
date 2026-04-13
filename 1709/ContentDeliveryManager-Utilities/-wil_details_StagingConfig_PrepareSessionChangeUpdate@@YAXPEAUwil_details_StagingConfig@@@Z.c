/*
 * XREFs of ?wil_details_StagingConfig_PrepareSessionChangeUpdate@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x1800079A0
 * Callers:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180007AF8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_StagingConfig_PrepareSessionChangeUpdate(struct wil_details_StagingConfig *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned int i; // edx
  unsigned int j; // ecx
  unsigned int v6; // ebp
  unsigned int k; // edx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = *((_QWORD *)a1 + 3);
  v2 = *((_QWORD *)a1 + 4);
  for ( i = 0; i < *(unsigned __int16 *)(v1 + 4); ++i )
  {
    if ( (*(_BYTE *)(v2 + 12LL * i + 4) & 1) != 0 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(v1 + 4); ++j )
      {
        if ( j != i && *(_DWORD *)(v2 + 12LL * j) == *(_DWORD *)(v2 + 12LL * i) )
          *(_DWORD *)(v2 + 12LL * j) = 0;
      }
    }
  }
  v6 = 0;
  for ( k = 0; k < *(unsigned __int16 *)(v1 + 4); ++k )
  {
    if ( *(_DWORD *)(v2 + 12LL * k) )
    {
      v8 = *(_DWORD *)(v2 + 12LL * k + 4);
      if ( (v8 & 0x300) != 0 || (v8 & 0xC00) != 0 || (v8 & 0x3000) != 0 || (v8 & 0x3F000000) != 0 )
      {
        if ( v6 != k )
        {
          v9 = 3LL * v6;
          *(_QWORD *)(v2 + 4 * v9) = *(_QWORD *)(v2 + 12LL * k);
          *(_DWORD *)(v2 + 4 * v9 + 8) = *(_DWORD *)(v2 + 12LL * k + 8);
        }
        *(_DWORD *)(v2 + 12LL * v6++ + 4) &= ~1u;
      }
    }
  }
  v10 = *(unsigned __int16 *)(v1 + 4);
  if ( v6 != (_DWORD)v10 )
  {
    memmove((void *)(v2 + 12LL * v6), (const void *)(v2 + 12 * v10), 16LL * *(unsigned __int16 *)(v1 + 6));
    *((_QWORD *)a1 + 5) = v2 + 16LL * v6;
    v11 = *(unsigned __int16 *)(v1 + 4) - v6;
    *((_DWORD *)a1 + 4) = 1;
    *((_QWORD *)a1 + 8) -= 12 * v11;
    *(_WORD *)(v1 + 4) = v6;
  }
  *(_DWORD *)(v1 + 12) = *(_DWORD *)(v1 + 8);
}
