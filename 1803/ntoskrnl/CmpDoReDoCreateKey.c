/*
 * XREFs of CmpDoReDoCreateKey @ 0x140706F88
 * Callers:
 *     CmpDoReDoRecord @ 0x1407070E4 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     CmpDoReOpenTransKey @ 0x1407073A8 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoCreateKey(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int16 v4; // dx
  __int64 v5; // r8
  __int64 result; // rax
  HANDLE v7; // rbx
  int v8; // eax
  NTSTATUS v9; // edi
  _WORD v10[4]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v11; // [rsp+48h] [rbp-1h]
  _WORD v12[4]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v13; // [rsp+58h] [rbp+Fh]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  v4 = *(_WORD *)(a2 + 32);
  v11 = v2;
  LOWORD(v5) = v4;
  v10[1] = *(_WORD *)(a2 + 34);
  do
  {
    v5 = (unsigned __int16)(v5 - 2);
    v10[0] = v5;
  }
  while ( *(_WORD *)(v2 + 2 * ((unsigned __int64)(unsigned int)v5 >> 1)) != 92 );
  v13 = v5 + v2 + 2;
  v12[0] = v4 - v5 - 2;
  v12[1] = v12[0];
  result = CmpDoReOpenTransKey(a1, v10, 131078LL, &Handle);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
    ObjectAttributes.SecurityDescriptor = *(PVOID *)(a2 + 56);
    v8 = *(_DWORD *)(a2 + 48) - 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 4928;
    v9 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 9 - (v8 != 0), &Disposition);
    ZwClose(v7);
    if ( v9 >= 0 )
      ZwClose(KeyHandle);
    return (unsigned int)v9;
  }
  return result;
}
