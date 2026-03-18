/*
 * XREFs of ?FinalRelease@Input@Animations@Components@@MEAAXXZ @ 0x18002AB10
 * Callers:
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800910F4 (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 * Callees:
 *     ??_EConstantInput@Animations@Components@@MEAAPEAXI@Z @ 0x18002ABD0 (--_EConstantInput@Animations@Components@@MEAAPEAXI@Z.c)
 */

void __fastcall Components::Animations::Input::FinalRelease(
        Components::Animations::Input *(__fastcall ***this)(Components::Animations::Input *this, char a2))
{
  Components::Animations::Input *(__fastcall *v1)(Components::Animations::Input *, char); // rax

  if ( this )
  {
    v1 = **this;
    if ( (char *)v1 == (char *)Components::Animations::ConstantInput::`vector deleting destructor' )
    {
      Components::Animations::ConstantInput::`vector deleting destructor'(
        (Components::Animations::ConstantInput *)this,
        1u);
    }
    else if ( v1 == Components::Animations::Input::`vector deleting destructor' )
    {
      Components::Animations::Input::`vector deleting destructor'((Components::Animations::Input *)this, 1);
    }
    else
    {
      v1((Components::Animations::Input *)this, 1);
    }
  }
}
