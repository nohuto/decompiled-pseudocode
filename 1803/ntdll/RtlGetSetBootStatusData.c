/*
 * XREFs of RtlGetSetBootStatusData @ 0x1800E6BD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800E70A4 @ 0x1800E70A4 (sub_1800E70A4.c)
 */

NTSTATUS __cdecl RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN Read,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // r8
  char v13; // al
  char v14; // [rsp+30h] [rbp-C8h]
  __int64 v15; // [rsp+34h] [rbp-C4h] BYREF
  char v16; // [rsp+40h] [rbp-B8h] BYREF

  if ( Read )
    return sub_1800E70A4(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = sub_1800E70A4(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = sub_1800E70A4(FileHandle, 136, 0LL);
    if ( result >= 0 )
    {
      result = sub_1800E70A4(FileHandle, BufferSize, (__int64)&v15);
      if ( result >= 0 )
      {
        v9 = (unsigned int)v15;
        if ( ReturnLength )
          *ReturnLength = v15;
        if ( (_DWORD)v9 )
        {
          v10 = v9;
          v11 = &v16;
          v12 = v9;
          v13 = v14;
          do
          {
            v13 += *v11++;
            --v12;
          }
          while ( v12 );
          do
          {
            v13 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v10;
          }
          while ( v10 );
        }
        return sub_1800E70A4(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
