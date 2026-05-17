/*
 * XREFs of sub_1800D79F0 @ 0x1800D79F0
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_1800D79F0(unsigned __int16 *a1, int *a2)
{
  int v2; // esi
  __int64 v4; // rax
  int v5; // edx
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  v4 = *((_QWORD *)a1 + 1) + *a1;
  v5 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v4 - 2) == 92 )
        break;
      v4 -= 2LL;
      v5 -= 2;
    }
    while ( v5 );
  }
  v8 = v4;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)sub_18007C34C(&DestinationString.Length, 0xBu, (__int64)&v11) < 0 )
  {
    if ( (int)sub_18007C34C(&DestinationString.Length, 9u, (__int64)&v11) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v2 = 1;
  }
  v7 = LdrQueryImageFileKeyOption(v11, v8, 4, a2, 4u, &v10);
  if ( v7 >= 0 )
  {
    if ( v2 || !*a2 )
      goto LABEL_14;
    ZwSetValueKey();
  }
  else
  {
    *a2 = 1;
  }
  v7 = 0;
LABEL_14:
  ZwClose();
  return (unsigned int)v7;
}
