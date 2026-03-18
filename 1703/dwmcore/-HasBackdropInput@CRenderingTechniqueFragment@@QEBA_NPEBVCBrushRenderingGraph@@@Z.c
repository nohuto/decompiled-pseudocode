/*
 * XREFs of ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x180015C20
 * Callers:
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016B34 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::HasBackdropInput(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    for ( i = 0LL; ; i += 16LL )
    {
      v8 = *((_QWORD *)this + 4);
      if ( !*(_QWORD *)(i + v8 + 8) && !*(_BYTE *)(i + v8 + 4) )
      {
        v9 = *(_QWORD *)(((unsigned __int64)*(unsigned int *)(i + v8) << 6) + *((_QWORD *)a2 + 2));
        if ( v9 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 83LL) )
            break;
        }
      }
      if ( ++v6 >= (unsigned int)v4 )
        return v2;
    }
    return 1;
  }
  return v2;
}
