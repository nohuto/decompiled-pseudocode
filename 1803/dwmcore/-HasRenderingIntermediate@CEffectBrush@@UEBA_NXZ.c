/*
 * XREFs of ?HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ @ 0x18018B560
 * Callers:
 *     <none>
 * Callees:
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x18000A2FC (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::HasRenderingIntermediate(CEffectBrush *this)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( (unsigned __int8)CEffectBrush::HasBlurEffectNode(this) )
    return 1;
  v3 = 0LL;
  if ( *((_DWORD *)this + 32) )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v3);
      if ( v4 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 256LL))(v4) )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 32) )
        return 0;
    }
    return 1;
  }
  return 0;
}
