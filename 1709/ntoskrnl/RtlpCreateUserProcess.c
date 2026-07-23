/*
 * XREFs of RtlpCreateUserProcess @ 0x1408518F8
 * Callers:
 *     RtlCreateUserProcessEx @ 0x140851878 (RtlCreateUserProcessEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x14017F0E0 (ZwCreateUserProcess.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, void *a2, ULONG a3, __int64 a4, __int64 a5, HANDLE *a6)
{
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v13; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+D0h] [rbp-30h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+130h] [rbp+30h] BYREF
  __int64 v18; // [rsp+158h] [rbp+58h]
  __int64 v19; // [rsp+160h] [rbp+60h]
  HANDLE *v20; // [rsp+168h] [rbp+68h]
  __int64 v21; // [rsp+170h] [rbp+70h]
  __int64 v22; // [rsp+178h] [rbp+78h]
  __int64 v23; // [rsp+180h] [rbp+80h]
  __int64 v24; // [rsp+188h] [rbp+88h]
  __int64 v25; // [rsp+190h] [rbp+90h]
  __int64 v26; // [rsp+198h] [rbp+98h]
  __int64 v27; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v28; // [rsp+1A8h] [rbp+A8h]
  __int64 v29; // [rsp+1B0h] [rbp+B0h]

  memset(a6, 0, 0x68uLL);
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.ObjectName = 0LL;
  ThreadObjectAttributes.RootDirectory = 0LL;
  ThreadObjectAttributes.ObjectName = 0LL;
  ProcessObjectAttributes.Length = 48;
  ThreadObjectAttributes.Length = 48;
  *(_DWORD *)a6 = 104;
  ProcessObjectAttributes.Attributes = 512;
  *(_OWORD *)&ProcessObjectAttributes.SecurityDescriptor = 0LL;
  ThreadObjectAttributes.Attributes = 512;
  *(_OWORD *)&ThreadObjectAttributes.SecurityDescriptor = 0LL;
  memset(&CreateInfo, 0, sizeof(CreateInfo));
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v9 = 2;
  v21 = 0LL;
  AttributeList.Attributes[0].Value = (ULONG_PTR)(a6 + 3);
  v20 = a6 + 5;
  CreateInfo.Size = 88LL;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  v18 = 6LL;
  v19 = 64LL;
  if ( a1 )
  {
    v10 = *a1;
    v25 = 0LL;
    v23 = v10;
    v24 = *((_QWORD *)a1 + 1);
    v22 = 131077LL;
    v26 = 131082LL;
    v29 = 0LL;
    v9 = 4;
    v13 = v13 & 0xFFFFFFE0 | 2;
    v28 = &v13;
    v27 = 8LL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v11 = v9;
    AttributeList.Attributes[v11].ReturnLength = 0LL;
    ++v9;
    AttributeList.Attributes[v11].Attribute = 393233LL;
    AttributeList.Attributes[v11].Size = 1LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v11 * 32) = 97LL;
  }
  AttributeList.TotalLength = 32LL * v9 + 8;
  return ZwCreateUserProcess(
           a6 + 1,
           a6 + 2,
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           a3,
           1u,
           a2,
           &CreateInfo,
           &AttributeList);
}
