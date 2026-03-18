/*
 * XREFs of ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x18017DDF4
 * Callers:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18017DC84 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x18017D990 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 */

__int64 __fastcall Mesh::RestoreCachedGraph(void ***this, const void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void **v5; // rax
  int v6; // r9d
  __int64 v7; // r8

  v3 = Mesh::CopyGraph(a2, this[22]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4E3u);
  }
  else
  {
    v5 = this[22];
    v6 = 0;
    if ( *((int *)v5 + 14) > 0 )
    {
      v7 = 0LL;
      do
      {
        v7 += 88LL;
        ++v6;
        *(_QWORD *)((char *)v5[6] + v7 - 80) = **(_QWORD **)(**(_QWORD **)((char *)v5[6] + v7 - 40) + 8LL);
        v5 = this[22];
      }
      while ( v6 < *((_DWORD *)v5 + 14) );
    }
    return 0;
  }
  return v4;
}
