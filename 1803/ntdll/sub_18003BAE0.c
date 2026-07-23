/*
 * XREFs of sub_18003BAE0 @ 0x18003BAE0
 * Callers:
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 * Callees:
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18003BCF0 @ 0x18003BCF0 (sub_18003BCF0.c)
 *     sub_18003BE00 @ 0x18003BE00 (sub_18003BE00.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003FB24 @ 0x18003FB24 (sub_18003FB24.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 */

__int64 __fastcall sub_18003BAE0(__int64 a1, _UNICODE_STRING *a2, __int64 a3, _UNICODE_STRING *a4, _BYTE *a5)
{
  struct _PEB *v5; // r13
  _BYTE *v7; // r12
  _UNICODE_STRING *v9; // rbp
  PAPI_SET_NAMESPACE ApiSetMap; // rdi
  char v11; // si
  int v12; // eax
  __int16 v13; // di
  int v14; // ebx
  char v15; // r15
  unsigned __int16 v16; // ax
  NTSTATUS v17; // edi
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rax
  _WORD v20[8]; // [rsp+50h] [rbp-48h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+18h] BYREF

  v22 = a3;
  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  v11 = 1;
  *a5 = 0;
  sub_18003BC9C(0LL, a2, 5328LL);
  v12 = sub_18003BCF0((_DWORD)ApiSetMap, (_DWORD)v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&v22, (__int64)v20);
  v13 = v20[0];
  v14 = v12;
  v15 = v22;
  if ( v12 >= 0 && (_BYTE)v22 )
  {
    if ( v20[0] )
      v16 = 5329;
    else
      v16 = 5330;
  }
  else
  {
    v16 = 5331;
  }
  sub_18003BC9C(0LL, v9, v16);
  if ( v15 )
  {
    if ( v13 )
    {
      v14 = sub_18003BE00(a4, v20);
      if ( v14 >= 0 )
      {
        ProcessParameters = v5->ProcessParameters;
        if ( !ProcessParameters || (v11 = 1, (ProcessParameters->Flags & 0x1000) == 0) )
          v11 = 0;
        v9 = a4;
      }
    }
    else
    {
      v14 = -1073740671;
    }
  }
  if ( v14 >= 0 && v11 && !byte_18015C298 )
  {
    v17 = RtlDosApplyFileIsolationRedirection_Ustr(
            1u,
            v9,
            (PUNICODE_STRING)&Extension,
            0LL,
            &DynamicString,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v17 >= 0 )
    {
      *v7 = 1;
      sub_18003FB24(&DynamicString, a4);
      sub_180042420(&DynamicString);
    }
    if ( v17 != -1072365560 )
      return (unsigned int)v17;
  }
  return (unsigned int)v14;
}
