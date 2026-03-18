/*
 * XREFs of PiDmGetObjectList @ 0x1405902C0
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1405232C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmGetCmObjectListFromCache @ 0x140590270 (PiDmGetCmObjectListFromCache.c)
 * Callees:
 *     PiDmEnumObjectsWithCallback @ 0x140526100 (PiDmEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDmGetObjectList(int a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5, _DWORD *a6)
{
  int v7; // edx
  int v8; // ecx
  _QWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  v10[0] = a2;
  v10[1] = a3;
  v10[2] = a4;
  *a6 = 0;
  v11 = a5;
  v12 = 0;
  if ( a5 )
    *a4 = 0;
  v7 = PiDmEnumObjectsWithCallback(
         a1,
         (__int64 (__fastcall *)(unsigned int *, __int64, _BYTE *))PiDmGetObjectListCallback,
         (__int64)v10);
  if ( v7 >= 0 )
  {
    v8 = v12;
    *a6 = v12;
    if ( v8 )
    {
      *a6 = v8 + 1;
      if ( a4 && a5 >= v8 + 1 )
        a4[v8] = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
