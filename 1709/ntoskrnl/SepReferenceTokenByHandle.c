/*
 * XREFs of SepReferenceTokenByHandle @ 0x140076550
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x140482C50 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 * Callees:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14006A3A0 (SepReferenceTokenUsingPseudoHandle.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SepReferenceTokenByHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PACCESS_TOKEN *a4,
        _BYTE *Object,
        _QWORD *a6)
{
  _BYTE *v7; // r8
  _QWORD *v9; // r9
  unsigned int v10; // ecx
  __int64 result; // rax

  v7 = Object;
  v9 = a6;
  *Object = 0;
  *v9 = 0LL;
  if ( (unsigned __int64)a1 + 6 > 2 )
  {
    v10 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, (PVOID *)&Object, 0LL);
    *a4 = Object;
    return v10;
  }
  if ( (a2 & 0xFFFFFFE7) != 0 )
    return 3221225506LL;
  result = SepReferenceTokenUsingPseudoHandle((__int64)a1, a4, v7, v9);
  v10 = result;
  if ( (int)result >= 0 )
    return v10;
  return result;
}
