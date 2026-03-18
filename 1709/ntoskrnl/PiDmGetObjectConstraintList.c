/*
 * XREFs of PiDmGetObjectConstraintList @ 0x140518260
 * Callers:
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1405181D8 (PiDmGetCmObjectConstraintListFromCache.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140526D90 (PiDmListEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDmGetObjectConstraintList(
        int a1,
        __int64 a2,
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
  Object = PiDmGetObject(*((unsigned int *)&PiDmListDefs + 10 * v7), a2, &P);
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
    v14 = ((__int64 (__fastcall *)(_QWORD, PVOID, __int64 (__fastcall *)(), _QWORD *))PiDmListEnumObjectsWithCallback)(
            (unsigned int)v7,
            P,
            PiDmGetObjectListCallback,
            v17);
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
    PiDmObjectRelease(P);
  return (unsigned int)v14;
}
