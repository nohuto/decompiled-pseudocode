/*
 * XREFs of ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A187C
 * Callers:
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3464 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::MapAllPagingBuffers(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // rbp
  int v4; // eax
  _QWORD *v5; // rsi
  __int64 v6; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1748); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + i + 79);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 4) == 0 )
    {
      v5 = *(_QWORD **)(v3 + 96);
      if ( v5 != (_QWORD *)(v3 + 96) )
      {
        do
        {
          v6 = v5[7];
          v5 = (_QWORD *)*v5;
          if ( v6 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 136) + 168LL))(*(_QWORD *)(v6 + 136));
        }
        while ( v5 != (_QWORD *)(v3 + 96) );
        v4 = *(_DWORD *)(v3 + 32);
      }
      *(_DWORD *)(v3 + 32) = v4 | 4;
    }
  }
  *((_DWORD *)this + 10166) = 1;
}
