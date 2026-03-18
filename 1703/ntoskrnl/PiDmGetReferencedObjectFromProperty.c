/*
 * XREFs of PiDmGetReferencedObjectFromProperty @ 0x140449A9C
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1404DF1FC (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140449BD8 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x140487C44 (PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 */

__int64 __fastcall PiDmGetReferencedObjectFromProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        PVOID *a7)
{
  int CachedObjectReference; // eax
  unsigned int Object; // ebx
  int ObjectProperty; // eax
  PVOID v11; // rdi
  _BYTE *v12; // rdx
  __int64 v13; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v16[80]; // [rsp+80h] [rbp-88h] BYREF

  P = 0LL;
  *a7 = 0LL;
  CachedObjectReference = PiDmObjectGetCachedObjectReference(a1, a2, a3, a5, (__int64)a7);
  Object = CachedObjectReference;
  if ( CachedObjectReference >= 0 )
  {
    if ( *((_DWORD *)*a7 + 7) != a6 )
    {
      PiDmObjectRelease(*a7);
      *a7 = 0LL;
      return (unsigned int)-1073741772;
    }
    return Object;
  }
  if ( CachedObjectReference != -1073741802 )
    return Object;
  ObjectProperty = PnpGetObjectProperty(
                     0x5A706E50u,
                     0x10uLL,
                     0LL,
                     0LL,
                     a5,
                     (__int64)&v13,
                     (__int64)&P,
                     (__int64)&v15,
                     0);
  v11 = P;
  Object = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( (_DWORD)v13 == 13 )
    {
      Object = PnpStringFromGuid(P, v16);
      if ( (Object & 0x80000000) != 0 )
        goto LABEL_11;
      v12 = v16;
      goto LABEL_10;
    }
    if ( (_DWORD)v13 == 18 )
    {
      v12 = P;
LABEL_10:
      Object = PiDmGetObject(a6, v12, a7);
      goto LABEL_11;
    }
    Object = -1073741772;
  }
LABEL_11:
  if ( v11 )
    ExFreePoolWithTag(v11, 0x5A706E50u);
  return Object;
}
