/*
 * XREFs of LdrAddRefDll @ 0x18001AD60
 * Callers:
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     sub_180080D00 @ 0x180080D00 (sub_180080D00.c)
 * Callees:
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v2; // di
  NTSTATUS v3; // ebx
  bool v4; // zf
  PVOID v5; // rdi
  NTSTATUS v6; // eax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  v3 = sub_180030264(DllHandle, &BaseAddress, &v8);
  if ( v3 >= 0 )
  {
    v4 = (v2 & 1) == 0;
    v5 = BaseAddress;
    if ( v4 )
      v6 = sub_18001BDBC(BaseAddress);
    else
      v6 = sub_18001A084((__int64)BaseAddress);
    v3 = v6;
    sub_18003015C(v5);
  }
  return v3;
}
