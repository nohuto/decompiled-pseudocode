/*
 * XREFs of ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0087264
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0086458 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CitpDPDataLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  void *v1; // r14
  char *v2; // rsi
  int v3; // r15d
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // r9d
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-61h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-41h]
  unsigned __int16 v18[50]; // [rsp+64h] [rbp-3Dh] BYREF

  v1 = (void *)*((_QWORD *)a1 + 105);
  v2 = (char *)a1 + 848;
  v3 = *((_DWORD *)a1 + 160);
  memset((char *)a1 + 848, 0, 0x58uLL);
  v5 = 0;
  if ( v1 )
  {
    memset(v18, 0, 0x58uLL);
    RtlInitUnicodeString(&DestinationString, L"DP");
    ResultLength = 100;
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x64u, &ResultLength) < 0
      || v17 < 0x28
      || v18[0] != 206
      || v18[1] > 0x58u
      || *(_DWORD *)&v18[6] != v3 )
    {
      memset(v18, 0, 0x58uLL);
      v18[0] = 206;
      *(_QWORD *)&v18[12] = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)&v18[16] = MEMORY[0xFFFFF78000000014];
    }
    v18[1] = 88;
    CitpStatIncrement(&v18[4], 1);
    v6 = MEMORY[0xFFFFF78000000320];
    v7 = MEMORY[0xFFFFF78000000004];
    v8 = *(_OWORD *)&v18[8];
    *(_OWORD *)v2 = *(_OWORD *)v18;
    v9 = *(_OWORD *)&v18[16];
    *((_OWORD *)v2 + 1) = v8;
    v10 = *(_OWORD *)&v18[24];
    *((_OWORD *)v2 + 2) = v9;
    v11 = *(_OWORD *)&v18[32];
    *((_OWORD *)v2 + 3) = v10;
    *(_QWORD *)&v10 = *(_QWORD *)&v18[40];
    *((_OWORD *)v2 + 4) = v11;
    *((_QWORD *)v2 + 10) = v10;
    *((_DWORD *)a1 + 234) = ((unsigned __int64)(v6 * v7) >> 24) - v12;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
