/*
 * XREFs of ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18007B364
 * Callers:
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004CD98 (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall _TlgGuidIsZero(const struct _GUID *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 )
    return *(_DWORD *)&a1->Data4[4] == 0;
  return result;
}
