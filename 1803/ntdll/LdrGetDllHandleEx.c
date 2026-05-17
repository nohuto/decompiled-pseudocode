/*
 * XREFs of LdrGetDllHandleEx @ 0x180041D20
 * Callers:
 *     LdrGetDllHandle @ 0x180041CF0 (LdrGetDllHandle.c)
 *     CsrClientConnectToServer @ 0x1800597A0 (CsrClientConnectToServer.c)
 *     sub_180109668 @ 0x180109668 (sub_180109668.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v8; // ebx
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v16[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v17; // [rsp+BCh] [rbp-2Ch]

  v15 = 0LL;
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      856,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      "DLL name: %wZ\n",
      a4);
  sub_180042054(*(_QWORD *)(a4 + 8), a2, v16);
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 || !a5 && (a1 & 2) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_6;
  }
  v8 = sub_180041E34(a4, v16, &v15);
  if ( v8 >= 0 )
  {
    v13 = v15;
    if ( (a1 & 2) != 0 )
    {
      v14 = sub_180059158(v15);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_15;
      v14 = sub_1800389D0(v15, v10, v11, v12);
    }
    v8 = v14;
LABEL_15:
    if ( v8 >= 0 && a5 )
      *a5 = *(_QWORD *)(v13 + 48);
    sub_18001F5FC(v13);
  }
LABEL_6:
  if ( v17 )
    RtlReleasePath(v16[0]);
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      906,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      "Status: 0x%08lx\n",
      v8);
  return (unsigned int)v8;
}
