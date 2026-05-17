/*
 * XREFs of LdrLoadDll @ 0x18003AED0
 * Callers:
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_180085C94 @ 0x180085C94 (sub_180085C94.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D8D70 (RtlWow64LogMessageInEventLogger.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v8; // ebx
  int v9; // r9d
  int v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v14[15]; // [rsp+40h] [rbp-B8h] BYREF
  char v15; // [rsp+BCh] [rbp-3Ch]

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274((unsigned int)"minkernel\\ntdll\\ldrapi.c", 144, (unsigned int)"LdrLoadDll", 3, "DLL name: %wZ\n", a3);
  if ( (dword_180158674 & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( !a2 )
  {
    v8 = 0;
LABEL_6:
    sub_18003BE90(*(_QWORD *)(a3 + 8), a1, v14);
    LOBYTE(v9) = 1;
    v10 = sub_18003C350(a3, (unsigned int)v14, v8, v9, (__int64)&v13);
    if ( v15 )
      RtlReleasePath(v14[0]);
    if ( v10 >= 0 )
    {
      v11 = v13;
      *a4 = *(_QWORD *)(v13 + 48);
      sub_18003015C(v11);
    }
    goto LABEL_10;
  }
  v8 = *a2;
  if ( (v8 & 4) == 0 || (dword_180158674 & 8) != 0 )
    goto LABEL_6;
  if ( (dword_180155A10 & 3) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      168,
      (unsigned int)"LdrLoadDll",
      0,
      "Nonpackaged process attempted to load a packaged DLL.\n");
  if ( (dword_180155A10 & 0x10) != 0 )
    __debugbreak();
  v10 = -1073741398;
LABEL_10:
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      195,
      (unsigned int)"LdrLoadDll",
      4,
      "Status: 0x%08lx\n",
      v10);
  return (unsigned int)v10;
}
