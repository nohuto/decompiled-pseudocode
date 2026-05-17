/*
 * XREFs of LdrGetDllHandleEx @ 0x18003BF00
 * Callers:
 *     CsrClientConnectToServer @ 0x18000B620 (CsrClientConnectToServer.c)
 *     LdrGetDllHandle @ 0x18003BD20 (LdrGetDllHandle.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 * Callees:
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v8; // ebx
  unsigned __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v14; // [rsp+BCh] [rbp-2Ch]

  v12 = 0LL;
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      844,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      "DLL name: %wZ\n",
      a4);
  sub_18003BE90(*(_QWORD *)(a4 + 8), a2, v13);
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 || !a5 && (a1 & 2) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_6;
  }
  v8 = sub_18003C014(a4, v13, &v12);
  if ( v8 >= 0 )
  {
    v10 = v12;
    if ( (a1 & 2) != 0 )
    {
      v11 = sub_18001A084(v12);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_15;
      v11 = sub_18001BDBC(v12);
    }
    v8 = v11;
LABEL_15:
    if ( v8 >= 0 && a5 )
      *a5 = *(_QWORD *)(v10 + 48);
    sub_18003015C(v10);
  }
LABEL_6:
  if ( v14 )
    RtlReleasePath(v13[0]);
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      894,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      "Status: 0x%08lx\n",
      v8);
  return (unsigned int)v8;
}
