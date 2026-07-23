/*
 * XREFs of RtlpCreateUserProcess @ 0x18008B0A8
 * Callers:
 *     RtlCreateUserProcessEx @ 0x18008AFF0 (RtlCreateUserProcessEx.c)
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtCreateUserProcess @ 0x1800A18D0 (NtCreateUserProcess.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, void *a2, ULONG a3, ULONG a4, __int64 a5, HANDLE *a6)
{
  unsigned int v10; // ecx
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+D0h] [rbp-30h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+130h] [rbp+30h] BYREF
  __int64 v28; // [rsp+158h] [rbp+58h]
  __int64 v29; // [rsp+160h] [rbp+60h]
  HANDLE *v30; // [rsp+168h] [rbp+68h]
  __int64 v31; // [rsp+170h] [rbp+70h]
  __int64 v32; // [rsp+178h] [rbp+78h]
  __int64 v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+188h] [rbp+88h]
  __int64 v35; // [rsp+190h] [rbp+90h]
  __int64 v36; // [rsp+198h] [rbp+98h]
  __int64 v37; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v38; // [rsp+1A8h] [rbp+A8h]
  __int64 v39; // [rsp+1B0h] [rbp+B0h]

  memset(a6, 0, 0x68uLL);
  *(_DWORD *)a6 = 104;
  if ( a5 && *(_WORD *)a5 != 1 )
    return -1073741811;
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.Length = 48;
  ProcessObjectAttributes.Attributes = 512;
  ProcessObjectAttributes.ObjectName = 0LL;
  if ( a5 )
    ProcessObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 8);
  else
    ProcessObjectAttributes.SecurityDescriptor = 0LL;
  ProcessObjectAttributes.SecurityQualityOfService = 0LL;
  ThreadObjectAttributes.Length = 48;
  ThreadObjectAttributes.RootDirectory = 0LL;
  ThreadObjectAttributes.Attributes = 512;
  ThreadObjectAttributes.ObjectName = 0LL;
  if ( a5 )
    ThreadObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 16);
  else
    ThreadObjectAttributes.SecurityDescriptor = 0LL;
  ThreadObjectAttributes.SecurityQualityOfService = 0LL;
  memset(&CreateInfo, 0, sizeof(CreateInfo));
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].Value = (ULONG_PTR)(a6 + 3);
  CreateInfo.Size = 88LL;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v28 = 6LL;
  v10 = 2;
  v29 = 64LL;
  v31 = 0LL;
  v30 = a6 + 5;
  if ( a1 )
  {
    v10 = 4;
    v33 = *a1;
    v34 = *((_QWORD *)a1 + 1);
    v32 = 131077LL;
    v35 = 0LL;
    v23 = v23 & 0xFFFFFFE0 | 2;
    v38 = &v23;
    v36 = 131082LL;
    v37 = 8LL;
    v39 = 0LL;
  }
  if ( a5 )
  {
    v11 = *(_QWORD *)(a5 + 24);
    if ( v11 )
    {
      v18 = v10++;
      AttributeList.Attributes[v18].Attribute = 393216LL;
      AttributeList.Attributes[v18].Size = 8LL;
      AttributeList.Attributes[v18].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v18 * 32) = v11;
    }
    v12 = *(_QWORD *)(a5 + 32);
    if ( v12 )
    {
      v19 = v10++;
      AttributeList.Attributes[v19].Attribute = 393217LL;
      AttributeList.Attributes[v19].Size = 8LL;
      AttributeList.Attributes[v19].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v19 * 32) = v12;
    }
    v13 = *(_QWORD *)(a5 + 40);
    if ( v13 )
    {
      v20 = v10++;
      AttributeList.Attributes[v20].Attribute = 393218LL;
      AttributeList.Attributes[v20].Size = 8LL;
      AttributeList.Attributes[v20].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v20 * 32) = v13;
    }
    if ( *(_QWORD *)(a5 + 48) )
    {
      v21 = v10++;
      AttributeList.Attributes[v21].Attribute = 131091LL;
      AttributeList.Attributes[v21].Size = 8LL;
      AttributeList.Attributes[v21].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v21 * 32) = a5 + 48;
    }
    v14 = *(_WORD *)(a5 + 2);
    if ( v14 )
    {
      v22 = v14 - 1;
      v17 = v10++;
      AttributeList.Attributes[v17].Attribute = 131085LL;
      AttributeList.Attributes[v17].Size = 2LL;
      AttributeList.Attributes[v17].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v17 * 32) = (ULONG_PTR)&v22;
    }
    else
    {
      a3 |= 0x100u;
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    v15 = v10++;
    AttributeList.Attributes[v15].Attribute = 393233LL;
    AttributeList.Attributes[v15].Size = 1LL;
    AttributeList.Attributes[v15].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v15 * 32) = 97LL;
  }
  AttributeList.TotalLength = 32LL * v10 + 8;
  return NtCreateUserProcess(
           a6 + 1,
           a6 + 2,
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           a3,
           a4,
           a2,
           &CreateInfo,
           &AttributeList);
}
