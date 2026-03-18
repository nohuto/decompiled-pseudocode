/*
 * XREFs of ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0083314
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00820D4 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0082584 (-CitpStart@@YAJXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CitpDPDataLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  void *v1; // r14
  _OWORD *v2; // rdi
  int v3; // r15d
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rax
  int v8; // r9d
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  char *v15; // rdi
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-A8h]
  _OWORD v27[15]; // [rsp+5Ch] [rbp-A4h] BYREF

  v1 = (void *)*((_QWORD *)a1 + 63);
  v2 = (_OWORD *)((char *)a1 + 512);
  v3 = *((_DWORD *)a1 + 72);
  memset((char *)a1 + 512, 0, 0xE8uLL);
  v5 = 0;
  if ( v1 )
  {
    memset(v27, 0, 0xE8uLL);
    RtlInitUnicodeString(&DestinationString, L"DP");
    ResultLength = 244;
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0xF4u, &ResultLength) < 0
      || v26 < 0x28
      || LOWORD(v27[0]) != 210
      || WORD1(v27[0]) > 0xE8u
      || HIDWORD(v27[0]) != v3 )
    {
      memset(v27, 0, 0xE8uLL);
      LOWORD(v27[0]) = 210;
      *((_QWORD *)&v27[1] + 1) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)&v27[2] = MEMORY[0xFFFFF78000000014];
    }
    WORD1(v27[0]) = 232;
    CitpStatIncrement((unsigned __int16 *)v27 + 4, 1);
    v7 = (unsigned int)(v6 + 127);
    *((_DWORD *)a1 + 186) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
    v9 = v27[1];
    *v2 = v27[0];
    v10 = v27[2];
    v2[1] = v9;
    v11 = v27[3];
    v2[2] = v10;
    v12 = v27[4];
    v2[3] = v11;
    v13 = v27[5];
    v2[4] = v12;
    v14 = v27[6];
    v2[5] = v13;
    v2[6] = v14;
    v15 = (char *)v2 + v7;
    *((_OWORD *)v15 - 1) = v27[7];
    v16 = *(_OWORD *)((char *)&v27[1] + v7);
    *(_OWORD *)v15 = *(_OWORD *)((char *)v27 + v7);
    v17 = *(_OWORD *)((char *)&v27[2] + v7);
    *((_OWORD *)v15 + 1) = v16;
    v18 = *(_OWORD *)((char *)&v27[3] + v7);
    *((_OWORD *)v15 + 2) = v17;
    v19 = *(_OWORD *)((char *)&v27[4] + v7);
    *((_OWORD *)v15 + 3) = v18;
    v20 = *(_OWORD *)((char *)&v27[5] + v7);
    v21 = *(_QWORD *)((char *)&v27[6] + v7);
    *((_OWORD *)v15 + 4) = v19;
    *((_OWORD *)v15 + 5) = v20;
    *((_QWORD *)v15 + 12) = v21;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
