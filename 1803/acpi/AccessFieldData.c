/*
 * XREFs of AccessFieldData @ 0x1C004C4E0
 * Callers:
 *     ReadFieldObj @ 0x1C004D690 (ReadFieldObj.c)
 *     WriteFieldObj @ 0x1C004E010 (WriteFieldObj.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     GetFieldUnitRegionObj @ 0x1C0046B60 (GetFieldUnitRegionObj.c)
 *     AccessBaseField @ 0x1C004C1C0 (AccessBaseField.c)
 *     PushAccFieldObj @ 0x1C004CFE0 (PushAccFieldObj.c)
 *     PushPreserveWriteObj @ 0x1C004D0E0 (PushPreserveWriteObj.c)
 *     ReadBuffField @ 0x1C004D3F8 (ReadBuffField.c)
 *     WriteBuffField @ 0x1C004DA50 (WriteBuffField.c)
 */

__int64 __fastcall AccessFieldData(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v9; // rdx
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 (__fastcall *v13)(); // rdx
  __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // r11d
  __int64 v18; // r9
  unsigned int v19; // r10d
  int v20; // edx
  int v21; // eax
  char v22; // cl
  unsigned int FieldUnitRegionObj; // edi
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( a5 )
      return (unsigned int)ReadBuffField(a1, v9);
    else
      return (unsigned int)WriteBuffField(a1, v9, a3, *a4);
  }
  v11 = *(__int64 **)(a2 + 32);
  v25 = 0LL;
  if ( *(_WORD *)(*v11 + 66) == 132 )
  {
    v12 = *(_QWORD *)(*v11 + 96);
    if ( a5 )
    {
      v13 = ReadFieldObj;
      v14 = a1;
    }
    else
    {
      v15 = a3[2];
      if ( v15 < 0x40 )
        v16 = 1LL << v15;
      else
        v16 = 0LL;
      v17 = a3[3];
      v18 = ~((v16 - 1) << a3[1]);
      v19 = (v17 & 0xF) - 1;
      v20 = 1 << ((a3[3] & 0xF) - 1);
      v21 = v20;
      if ( v19 > 3 )
        v21 = 1;
      if ( 8 * v21 < 64 )
      {
        v22 = 1;
        if ( v19 <= 3 )
          v22 = v20;
        v5 = 1LL << (8 * v22);
      }
      v14 = a1;
      if ( ((v5 - 1) & v18) != 0 && (v17 & 0x60) == 0 )
        return (unsigned int)PushPreserveWriteObj(a1, *(_QWORD *)(v12 + 8) + 64LL, *a4);
      v13 = WriteFieldObj;
    }
    return (unsigned int)PushAccFieldObj(
                           v14,
                           v13,
                           *(_QWORD *)(v12 + 8) + 64LL,
                           *(_QWORD *)(*(_QWORD *)(v12 + 8) + 96LL) + 8LL,
                           a4,
                           4);
  }
  FieldUnitRegionObj = GetFieldUnitRegionObj(v11, &v25);
  if ( !FieldUnitRegionObj && v25 )
  {
    FieldUnitRegionObj = AccessBaseField(a1, v25, a3, a4, a5);
    DereferenceObjectEx(v25);
  }
  return FieldUnitRegionObj;
}
