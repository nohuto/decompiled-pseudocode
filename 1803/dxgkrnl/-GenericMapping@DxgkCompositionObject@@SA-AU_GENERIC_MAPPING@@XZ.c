/*
 * XREFs of ?GenericMapping@DxgkCompositionObject@@SA?AU_GENERIC_MAPPING@@XZ @ 0x1C004724C
 * Callers:
 *     CreateDxgkSharedObjectTypes @ 0x1C01A9F78 (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     <none>
 */

struct _GENERIC_MAPPING *__fastcall DxgkCompositionObject::GenericMapping(struct _GENERIC_MAPPING *__return_ptr retstr)
{
  struct _GENERIC_MAPPING *result; // rax

  result = retstr;
  *retstr = (struct _GENERIC_MAPPING)xmmword_1C0061260;
  return result;
}
