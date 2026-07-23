/*
 * XREFs of sub_180082648 @ 0x180082648
 * Callers:
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockEx_0 @ 0x180082738 (LdrProcessRelocationBlockEx_0.c)
 */

__int64 __fastcall sub_180082648(PVOID BaseOfImage, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbp
  NTSTATUS v8; // eax
  USHORT *v9; // rcx
  DWORD v10; // esi
  unsigned int v11; // r8d
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  DWORD v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a3;
  v3 = 0;
  v14 = 0;
  if ( RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, (PIMAGE_NT_HEADERS *)&v13) < 0 )
    return (unsigned int)-1073741701;
  v5 = v13;
  v6 = *(unsigned __int16 *)(v13 + 24);
  if ( v6 == 267 )
  {
    v7 = *(unsigned int *)(v13 + 52);
  }
  else
  {
    if ( v6 != 523 )
      return (unsigned int)-1073741701;
    v7 = *(_QWORD *)(v13 + 48);
  }
  v8 = sub_18001014C((unsigned __int64)BaseOfImage, 1, 5u, &v14, (char **)&v13);
  v9 = (USHORT *)v13;
  if ( v8 < 0 )
    v9 = 0LL;
  if ( !v9 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v10 = v14;
  if ( !v14 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v11 = *((_DWORD *)v9 + 1);
    v10 -= v11;
    v9 = (USHORT *)LdrProcessRelocationBlockEx_0(
                     *(unsigned __int16 *)(v5 + 4),
                     (ULONG_PTR)BaseOfImage + *(unsigned int *)v9,
                     (v11 - 8) >> 1,
                     v9 + 4,
                     (LONG_PTR)BaseOfImage - v7);
    if ( !v9 )
      break;
    if ( !v10 )
      return v3;
  }
  return (unsigned int)-1073741701;
}
