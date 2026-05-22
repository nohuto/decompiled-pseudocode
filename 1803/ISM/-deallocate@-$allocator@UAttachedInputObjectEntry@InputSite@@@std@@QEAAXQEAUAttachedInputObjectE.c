/*
 * XREFs of ?deallocate@?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@QEAAXQEAUAttachedInputObjectEntry@InputSite@@_K@Z @ 0x18000CC3C
 * Callers:
 *     _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::emplace_back_InputSite::AttachedInputObjectEntry__::_1_::catch$66 @ 0x1800E3C27 (_std--vector_InputSite--AttachedInputObjectEntry_std--allocator_InputSite--AttachedInputObjectEn.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<InputSite::AttachedInputObjectEntry>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x38E38E38E38E38ELL )
    goto LABEL_8;
  if ( 72 * a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x18000CC8FLL);
  }
LABEL_7:
  operator delete((void *)a2);
}
