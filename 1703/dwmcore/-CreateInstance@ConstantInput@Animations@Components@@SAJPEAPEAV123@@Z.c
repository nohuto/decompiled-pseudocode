/*
 * XREFs of ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002AB6C
 * Callers:
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180020FA8 (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002A570 (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x18002C254 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x18002C2EC (-ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z.c)
 *     ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x1801B78B0 (-ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x1801B7984 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x1801B7A54 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 */

__int64 __fastcall Components::Animations::ConstantInput::CreateInstance(
        struct Components::Animations::ConstantInput **a1)
{
  _DWORD *v2; // rax

  v2 = Components::Animations::Interpolation::operator new(0x30uLL);
  if ( v2 )
  {
    v2[2] = 1;
    *(_QWORD *)v2 = &Components::Animations::ConstantInput::`vftable';
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
    *a1 = (struct Components::Animations::ConstantInput *)v2;
  return v2 == 0LL ? 0x8007000E : 0;
}
