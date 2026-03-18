/*
 * XREFs of ?iOpenGLExtEscapeHelper@@YAXPEAX@Z @ 0x1C0257030
 * Callers:
 *     <none>
 * Callees:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C003D604 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 */

void __fastcall iOpenGLExtEscapeHelper(unsigned int *Parameter)
{
  Parameter[12] = PDEVOBJ::Escape(
                    *(struct PDEV ***)Parameter,
                    *((struct _SURFOBJ **)Parameter + 1),
                    Parameter[4],
                    Parameter[5],
                    *((void **)Parameter + 3),
                    Parameter[8],
                    *((void **)Parameter + 5));
}
