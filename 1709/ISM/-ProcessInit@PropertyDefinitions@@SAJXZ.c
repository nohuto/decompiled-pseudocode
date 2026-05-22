/*
 * XREFs of ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180033254
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Get@PropertyDefinitions@@SAJPEAPEAV1@@Z @ 0x1800331C0 (-Get@PropertyDefinitions@@SAJPEAPEAV1@@Z.c)
 *     ?DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x1800335AC (-DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     ??0PropertyTypeInfo@Input@@QEAA@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180033AF0 (--0PropertyTypeInfo@Input@@QEAA@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 PropertyDefinitions::ProcessInit(void)
{
  __int64 result; // rax
  int v1; // ebx
  unsigned int v2; // esi
  char *v3; // rdi
  const unsigned __int16 *v4; // r8
  int v5; // eax
  struct PropertyDefinitions *v6[2]; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v7[14]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v8[16]; // [rsp+128h] [rbp+20h] BYREF
  char v9; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v10[64]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v11[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v12[64]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v13[64]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v14[64]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v15[64]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v16[64]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v17[64]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v18[64]; // [rsp+368h] [rbp+260h] BYREF
  _BYTE v19[64]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE v20[64]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _BYTE v21[64]; // [rsp+428h] [rbp+320h] BYREF
  _BYTE v22[64]; // [rsp+468h] [rbp+360h] BYREF

  v6[1] = (struct PropertyDefinitions *)-2LL;
  result = PropertyDefinitions::Get(v6);
  v1 = result;
  if ( (int)result >= 0 )
  {
    v7[0] = PROPTYPE_BOOLEAN;
    v7[1] = PROPTYPE_BYTE;
    v7[2] = PROPTYPE_STRING;
    v7[3] = PROPTYPE_SINGLE;
    v7[4] = PROPTYPE_DOUBLE;
    v7[5] = PROPTYPE_GUID;
    v7[6] = PROPTYPE_INT16;
    v7[7] = PROPTYPE_INT32;
    v7[8] = PROPTYPE_INT64;
    v7[9] = PROPTYPE_UINT16;
    v7[10] = PROPTYPE_UINT32;
    v7[11] = PROPTYPE_UINT64;
    v7[12] = PROPTYPE_VECTOR;
    v7[13] = PROPTYPE_MAP;
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v8,
      L"System.Boolean",
      1u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Boolean_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v10,
      L"System.Byte",
      1u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Byte_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v11,
      L"System.String",
      0,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::WideString_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v12,
      L"System.Single",
      4u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Single_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v13,
      L"System.Double",
      8u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Double_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v14,
      L"System.Guid",
      0x10u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Guid_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v15,
      L"System.Int16",
      2u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Int16_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v16,
      L"System.Int32",
      4u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Int32_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v17,
      L"System.Int64",
      8u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Int64_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v18,
      L"System.UInt16",
      2u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::UInt16_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v19,
      L"System.Uint32",
      4u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::UInt32_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v20,
      L"System.Uint64",
      8u,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::UInt64_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v21,
      L"System.PropertyVector",
      0,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Void_ToString);
    Input::PropertyTypeInfo::PropertyTypeInfo(
      (Input::PropertyTypeInfo *)v22,
      L"System.PropertyMap",
      0,
      (int (*)(const void *, unsigned int, unsigned __int16 *, unsigned int))Input::Void_ToString);
    v2 = 0;
    v3 = &v9;
    while ( v1 >= 0 )
    {
      v4 = (const unsigned __int16 *)v3;
      if ( *((_QWORD *)v3 + 3) >= 8uLL )
        v4 = *(const unsigned __int16 **)v3;
      v5 = PropertyDefinitions::DefineType(
             v6[0],
             (const struct _GUID *)&v7[v2],
             v4,
             *((_DWORD *)v3 + 8),
             *((int (**)(const void *, unsigned int, unsigned __int16 *, unsigned int))v3 + 5));
      v1 = v5;
      ++v2;
      v3 += 64;
      if ( v2 >= 0xE )
      {
        if ( v5 >= 0 )
          goto LABEL_9;
        break;
      }
    }
    PropertyDefinitions::s_hrThis = v1;
LABEL_9:
    `eh vector destructor iterator'(v8, 0x40uLL, 0xEuLL, (void (*)(void *))Input::PropertyInfo::~PropertyInfo);
    return (unsigned int)v1;
  }
  return result;
}
