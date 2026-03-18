/*
 * XREFs of PiDmGetObjectConstraintList @ 0x1404E4390
 * Callers:
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1404E4308 (PiDmGetCmObjectConstraintListFromCache.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDmGetObjectConstraintList(
        int a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v7; // r15
  unsigned int *v10; // rdi
  unsigned int v11; // r14d
  _WORD *v12; // rsi
  int Object; // eax
  int v14; // ebx
  unsigned int v15; // eax
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v7 = a1;
  P = 0LL;
  memset(v17, 0, 0x20uLL);
  v10 = a7;
  v11 = a6;
  v12 = a5;
  *a7 = 0;
  if ( v11 )
    *v12 = 0;
  Object = PiDmGetObject(*((_DWORD *)&PiDmListDefs + 10 * v7), a2, (__int64 *)&P);
  v14 = Object;
  if ( Object < 0 )
  {
    if ( Object != -1073741772 )
      goto LABEL_10;
    v14 = 0;
  }
  else
  {
    v17[0] = PiDmCmObjectMatchCallback;
    v17[1] = a4;
    v17[2] = v12;
    v17[3] = v11;
    v14 = PiDmListEnumObjectsWithCallback(v7, (ULONG_PTR)P, PiDmGetObjectListCallback, (__int64)v17);
    if ( v14 < 0 )
      goto LABEL_10;
    *v10 = HIDWORD(v17[3]);
  }
  if ( *v10 )
  {
    v15 = *v10 + 1;
    *v10 = v15;
    if ( v12 && v11 >= v15 )
      v12[v15 - 1] = 0;
    else
      v14 = -1073741789;
  }
LABEL_10:
  if ( P )
    PiDmObjectRelease((unsigned int *)P);
  return (unsigned int)v14;
}
