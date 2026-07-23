/*
 * XREFs of sub_18007C34C @ 0x18007C34C
 * Callers:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800D79F0 @ 0x1800D79F0 (sub_1800D79F0.c)
 *     LdrOpenImageFileOptionsKey @ 0x1800E21D0 (LdrOpenImageFileOptionsKey.c)
 * Callees:
 *     sub_18007C40C @ 0x18007C40C (sub_18007C40C.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_18007C34C(unsigned __int16 *a1, ACCESS_MASK a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  __int16 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+88h] [rbp+20h] BYREF

  result = sub_18007C40C(&v13);
  if ( result >= 0 )
  {
    v7 = *a1;
    v8 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v8 - 2) == 92 )
          break;
        v8 -= 2LL;
        v7 -= 2;
      }
      while ( v7 );
    }
    v9 = *a1 - v7;
    v11 = v8;
    v10 = v9;
    if ( (unsigned __int16)v9 == v9 )
    {
      ObjectAttributes.RootDirectory = v13;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(a3, a2, &ObjectAttributes);
      if ( result >= 0 )
        return sub_18007C494(a3, a2, a1);
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
