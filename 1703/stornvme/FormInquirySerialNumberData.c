/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0007694
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0007C5C (ScsiInquiryRequest.c)
 * Callees:
 *     SerialNumberFromNvmeId @ 0x1C00075B8 (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  __int64 v10; // r9
  unsigned int v11; // esi
  __int64 v12; // r8
  unsigned int *v13; // rdi
  __int64 result; // rax
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // rcx

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v5 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v5 = *(unsigned __int8 *)(a2 + 7);
  v6 = *(_QWORD *)(a1 + 8 * v5 + 1184);
  v7 = (unsigned int)v5;
  v8 = *(_QWORD *)(v6 + 68);
  if ( !v8 )
    v8 = *(_QWORD *)(v6 + 76);
  v9 = v8 != 0 ? 40 : 20;
  v10 = v9;
  v11 = v9 + 4;
  if ( v2 == 40 )
  {
    v12 = *(_QWORD *)(a2 + 64);
    v13 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 24);
    v13 = (unsigned int *)(a2 + 16);
  }
  if ( *v13 >= v11 )
  {
    *(_WORD *)v12 = 0x8000;
    *(_BYTE *)(v12 + 3) = v9;
    v15 = v12 + 4;
    if ( v8 )
    {
      v16 = 16;
      v17 = v6 + 68;
    }
    else
    {
      v16 = 8;
      v17 = *(_QWORD *)(a1 + 8 * v7 + 1184) + 84LL;
    }
    result = SerialNumberFromNvmeId(v17, v16, v15, v10);
    if ( !(_DWORD)result )
    {
      *v13 = v11;
      *(_BYTE *)(a2 + 3) = 1;
    }
  }
  else
  {
    LOBYTE(v10) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, v12, v10);
    return 3238002694LL;
  }
  return result;
}
