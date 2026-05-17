/*
 * XREFs of sub_1800D0368 @ 0x1800D0368
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_1800D0368(unsigned __int16 *a1, _DWORD *a2)
{
  int v3; // r14d
  int v4; // r8d
  __int64 v5; // rax
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v4 = *a1;
  v5 = *((_QWORD *)a1 + 1) + *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v5 - 2) == 92 )
        break;
      v5 -= 2LL;
      v4 -= 2;
    }
    while ( v4 );
  }
  v8 = v5;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)sub_180076270(&DestinationString.Length, 11LL, 0, &v11) < 0 )
  {
    if ( (int)sub_180076270(&DestinationString.Length, 9LL, 0, &v11) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v3 = 1;
  }
  v7 = LdrQueryImageFileKeyOption(v11, v8, 4, a2, 4u, &v10);
  if ( v7 >= 0 )
  {
    if ( v3 || !*a2 )
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
