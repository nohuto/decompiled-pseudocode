/*
 * XREFs of sub_18010A710 @ 0x18010A710
 * Callers:
 *     sub_18010A810 @ 0x18010A810 (sub_18010A810.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall sub_18010A710(__int64 a1, void *a2, char *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  _WORD Buffer[30]; // [rsp+30h] [rbp-168h] BYREF
  int v9; // [rsp+6Ch] [rbp-12Ch]
  _DWORD v10[6]; // [rsp+70h] [rbp-128h] BYREF
  __int16 v11; // [rsp+88h] [rbp-110h]
  __int64 v12; // [rsp+A0h] [rbp-F8h]
  int v13; // [rsp+C0h] [rbp-D8h]
  int v14; // [rsp+C8h] [rbp-D0h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = ZwReadVirtualMemory(a2, a3, Buffer, 0x40uLL, 0LL);
  if ( result >= 0 )
  {
    if ( Buffer[0] != 23117 )
      return -1073741521;
    result = ZwReadVirtualMemory(a2, &a3[v9], v10, 0xF8uLL, 0LL);
    if ( result >= 0 )
    {
      if ( v10[0] != 17744 )
        return -1073741701;
      if ( v11 == 267 )
      {
        v7 = HIDWORD(v12);
      }
      else
      {
        if ( v11 != 523 )
          return -1073741701;
        v7 = v12;
      }
      *(_QWORD *)(a1 + 8) = v7;
      *(_DWORD *)a1 = v10[2];
      *(_DWORD *)(a1 + 4) = v13;
      *(_DWORD *)(a1 + 16) = v14;
      return 0;
    }
  }
  return result;
}
