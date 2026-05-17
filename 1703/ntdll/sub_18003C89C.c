/*
 * XREFs of sub_18003C89C @ 0x18003C89C
 * Callers:
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 * Callees:
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_18003CAB0 @ 0x18003CAB0 (sub_18003CAB0.c)
 *     sub_18003CBC0 @ 0x18003CBC0 (sub_18003CBC0.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18004BC44 @ 0x18004BC44 (sub_18004BC44.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 */

__int64 __fastcall sub_18003C89C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  struct _PEB *v5; // r13
  _BYTE *v7; // r12
  __int64 v9; // rsi
  void *ApiSetMap; // rdi
  char v11; // bp
  int v12; // eax
  __int16 v13; // di
  int v14; // ebx
  char v15; // r15
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // edi
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _WORD v21[8]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+18h] BYREF

  v23 = a3;
  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  v11 = 1;
  *a5 = 0;
  sub_18003CA5C(0LL, a2, 5328LL);
  v12 = sub_18003CAB0((_DWORD)ApiSetMap, v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&v23, (__int64)v21);
  v13 = v21[0];
  v14 = v12;
  v15 = v23;
  if ( v12 >= 0 && (_BYTE)v23 )
  {
    v17 = v9;
    if ( v21[0] )
      v16 = 5329LL;
    else
      v16 = 5330LL;
  }
  else
  {
    v16 = 5331LL;
    v17 = v9;
  }
  sub_18003CA5C(0LL, v17, v16);
  if ( v15 )
  {
    if ( v13 )
    {
      v14 = sub_18003CBC0(a4, v21);
      if ( v14 >= 0 )
      {
        ProcessParameters = v5->ProcessParameters;
        if ( !ProcessParameters || (v11 = 1, (ProcessParameters->Flags & 0x1000) == 0) )
          v11 = 0;
        LODWORD(v9) = a4;
      }
    }
    else
    {
      v14 = -1073740671;
    }
  }
  if ( v14 >= 0 && v11 && !byte_18015B26C )
  {
    v18 = RtlDosApplyFileIsolationRedirection_Ustr(1, v9, (unsigned int)L"\b\n", 0, (__int64)v22, 0LL, 0LL, 0LL, 0LL);
    if ( v18 >= 0 )
    {
      *v7 = 1;
      sub_18004BC44(v22, a4);
      sub_18004C4D8(v22);
    }
    if ( v18 != -1072365560 )
      return (unsigned int)v18;
  }
  return (unsigned int)v14;
}
