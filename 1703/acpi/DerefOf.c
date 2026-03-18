/*
 * XREFs of DerefOf @ 0x1C0013AA0
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseObject @ 0x1C0012F98 (GetBaseObject.c)
 *     ReadObject @ 0x1C00141BC (ReadObject.c)
 *     GetBaseData @ 0x1C001423C (GetBaseData.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 BaseData; // rbx
  __int16 v6; // ax
  __int64 BaseObject; // rax

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "R");
  if ( !(_DWORD)result )
  {
    BaseData = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(BaseData + 2);
    if ( v6 == 128 )
    {
      BaseObject = GetBaseObject(*(_QWORD *)(BaseData + 16));
      BaseData = BaseObject + 64;
      DereferenceObjectEx(BaseObject, 0LL);
    }
    else if ( v6 == 129 )
    {
      BaseData = GetBaseData(*(_QWORD *)(BaseData + 16));
    }
    return ReadObject(a1, BaseData, *(_QWORD *)(a2 + 88));
  }
  return result;
}
