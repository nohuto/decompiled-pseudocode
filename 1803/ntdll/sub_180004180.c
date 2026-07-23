/*
 * XREFs of sub_180004180 @ 0x180004180
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlComputePrivatizedDllName_U @ 0x180004250 (RtlComputePrivatizedDllName_U.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     sub_18003C82C @ 0x18003C82C (sub_18003C82C.c)
 *     RtlpEnsureBufferSize @ 0x180071DA0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180004180(_UNICODE_STRING *a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  _UNICODE_STRING *p_LocalName; // rbx
  unsigned __int64 v9; // r8
  __int64 *v10; // r14
  __int64 v11; // rcx
  size_t Length; // r8
  PWCH Buffer; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _UNICODE_STRING RealName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING LocalName; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)&RealName.Length = 0LL;
  RealName.Buffer = 0LL;
  *(_QWORD *)&LocalName.Length = 0LL;
  LocalName.Buffer = 0LL;
  if ( !a2 )
  {
    v6 = -1073741811;
    goto LABEL_8;
  }
  v6 = RtlComputePrivatizedDllName_U(a1, &RealName, &LocalName);
  if ( v6 >= 0 )
  {
    if ( LocalName.Buffer && (LOBYTE(v5) = 1, (unsigned __int8)sub_18003C82C(&LocalName, v5)) )
    {
      p_LocalName = &LocalName;
    }
    else
    {
      if ( !RealName.Buffer || (LOBYTE(v5) = 1, !(unsigned __int8)sub_18003C82C(&RealName, v5)) )
      {
LABEL_7:
        v6 = 0;
        goto LABEL_8;
      }
      p_LocalName = &RealName;
    }
    v9 = p_LocalName->Length + 2LL;
    *a2 = 0;
    if ( v9 > 0xFFFE )
    {
      v6 = -1073741562;
      goto LABEL_8;
    }
    v10 = (__int64 *)(a2 + 8);
    if ( (a2 == (unsigned __int16 *)-16LL || v9 > *((_QWORD *)a2 + 4)) && (int)RtlpEnsureBufferSize(0LL, a2 + 8) < 0 )
    {
      v6 = -1073741801;
      goto LABEL_8;
    }
    v11 = *v10;
    Length = p_LocalName->Length;
    Buffer = p_LocalName->Buffer;
    v14 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v10;
    memmove((void *)(v11 + 2 * v14), Buffer, Length);
    v15 = (unsigned __int16)(*a2 + p_LocalName->Length);
    *a2 = v15;
    a2[1] = v15 + 2;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v15 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
    goto LABEL_7;
  }
LABEL_8:
  RtlFreeUnicodeString(&RealName);
  RtlFreeUnicodeString(&LocalName);
  return (unsigned int)v6;
}
