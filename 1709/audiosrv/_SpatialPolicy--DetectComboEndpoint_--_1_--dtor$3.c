/*
 * XREFs of _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$3 @ 0x1800BA7FB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18005B1C8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

void __fastcall SpatialPolicy::DetectComboEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::_Func_class<void,>::~_Func_class<void,>((_QWORD *)(a2 + 96), a2);
  }
}
