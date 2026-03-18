/*
 * XREFs of ObpGrantAccess @ 0x14053E3CC
 * Callers:
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObCheckObjectAccess @ 0x14053E470 (ObCheckObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x140562B1C (ObpAdjustCreatorAccessState.c)
 */

__int64 __fastcall ObpGrantAccess(int a1, void *a2, struct _ACCESS_STATE *a3, __int64 a4, NTSTATUS a5, ACCESS_MASK *a6)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 1 )
  {
    result = ObpAdjustCreatorAccessState(a3);
    if ( (int)result >= 0 )
      goto LABEL_3;
  }
  else
  {
    if ( (unsigned __int8)ObCheckObjectAccess(a2, a3, &a5) )
    {
LABEL_3:
      *a6 = a3->PreviouslyGrantedAccess;
      return 0LL;
    }
    return (unsigned int)a5;
  }
  return result;
}
