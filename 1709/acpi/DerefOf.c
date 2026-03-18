/*
 * XREFs of DerefOf @ 0x1C00191C0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     ReadObject @ 0x1C001A0F0 (ReadObject.c)
 *     GetBaseData @ 0x1C001A170 (GetBaseData.c)
 *     GetBaseObject @ 0x1C001AA00 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 BaseData; // rbx
  __int16 v6; // ax
  __int64 BaseObject; // rax
  __int64 v8; // r8
  __int64 v9; // r9

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "R");
  if ( !(_DWORD)result )
  {
    BaseData = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(BaseData + 2);
    if ( v6 == 128 )
    {
      BaseObject = GetBaseObject(*(_QWORD *)(BaseData + 16));
      BaseData = BaseObject + 64;
      DereferenceObjectEx(BaseObject, 0LL, v8, v9);
    }
    else if ( v6 == 129 )
    {
      BaseData = GetBaseData(*(_QWORD *)(BaseData + 16));
    }
    return ReadObject(a1, BaseData, *(_QWORD *)(a2 + 88));
  }
  return result;
}
