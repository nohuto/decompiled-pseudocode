/*
 * XREFs of ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z @ 0x1C00AF570
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00BE504 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0004008 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00B1B90 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall Ndis::BindStack::OpenV2InterfaceKey(const struct _GUID *a1, __int64 a2, struct KRegKey *a3)
{
  __int64 result; // rax
  int Data3; // [rsp+20h] [rbp-198h]
  int v6; // [rsp+28h] [rbp-190h]
  int v7; // [rsp+30h] [rbp-188h]
  int v8; // [rsp+38h] [rbp-180h]
  int v9; // [rsp+40h] [rbp-178h]
  int v10; // [rsp+48h] [rbp-170h]
  int v11; // [rsp+50h] [rbp-168h]
  int v12; // [rsp+58h] [rbp-160h]
  int v13; // [rsp+60h] [rbp-158h]
  struct _UNICODE_STRING v14; // [rsp+70h] [rbp-148h] BYREF
  char v15; // [rsp+80h] [rbp-138h] BYREF

  *(_DWORD *)&v14.Length = 0x1000000;
  v14.Buffer = (wchar_t *)&v15;
  v13 = a1->Data4[7];
  v12 = a1->Data4[6];
  v11 = a1->Data4[5];
  v10 = a1->Data4[4];
  v9 = a1->Data4[3];
  v8 = a1->Data4[2];
  v7 = a1->Data4[1];
  v6 = a1->Data4[0];
  Data3 = a1->Data3;
  result = RtlUnicodeStringPrintf(
             &v14,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\{%08x-%04x-%04x-%02x%02"
              "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
             a1->Data1,
             a1->Data2,
             Data3,
             v6,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13);
  if ( (int)result >= 0 )
    return KRegKey::Open(a3, 1u, &v14, 0LL);
  return result;
}
