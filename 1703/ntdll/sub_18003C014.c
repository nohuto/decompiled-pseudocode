/*
 * XREFs of sub_18003C014 @ 0x18003C014
 * Callers:
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 * Callees:
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18003C014(__int64 a1, int a2, char **a3)
{
  int v5; // ebx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v10[128]; // [rsp+50h] [rbp-B0h] BYREF

  *(_DWORD *)&v9.Length = 0x1000000;
  *a3 = 0LL;
  v7 = 0;
  v9.Buffer = v10;
  v10[0] = 0;
  v5 = sub_18003C6F4(a1, &v9, 0LL, &v7);
  if ( v5 >= 0 )
  {
    v5 = sub_18003BD44(&v9, a2, a3, v8, v7);
    if ( v5 >= 0 && v8[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      sub_18003015C(*a3);
      *a3 = 0LL;
      sub_18001AE14(0);
      v5 = sub_18003BD44(&v9, a2, a3, v8, v7);
      sub_18001A338();
      if ( v5 >= 0 && v8[0] != 9 )
      {
        sub_18003015C(*a3);
        *a3 = 0LL;
        v5 = -1073741515;
      }
    }
  }
  if ( v10 != v9.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v9.Buffer);
  return (unsigned int)v5;
}
