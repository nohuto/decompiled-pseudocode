/*
 * XREFs of ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180096080
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z @ 0x1802EA9FC (-UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z.c)
 */

void __fastcall JointResize::OnSizeConstraintsQueried(
        JointResize *this,
        struct IUnknown *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  if ( *((_BYTE *)this + 137) )
  {
    if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 14)) )
    {
      *((_BYTE *)this + 137) = 0;
      JointResize::UpdateSizeConstraints((JointResize *)((char *)this - 88), a3, a4);
    }
  }
}
