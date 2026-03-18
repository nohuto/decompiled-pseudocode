/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x14010C2B8
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(unsigned __int64 *a1, __int64 a2, char a3, unsigned __int8 a4)
{
  unsigned __int64 PteShadow; // r10
  unsigned __int64 *v8; // r11
  unsigned int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *a1;
  v8 = a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *a1);
  v14 = PteShadow;
  if ( (PteShadow & 1) != 0 )
    return 1LL;
  v10 = 0;
  v11 = (PteShadow >> 11) & 1;
  if ( (_DWORD)v11 || (unsigned int)MiGetPagingFileOffset(&v14) )
  {
    if ( (a3 & 1) != 0 )
    {
      v12 = *(_QWORD *)(a2 + 8) | 0x200000LL;
      *(_QWORD *)(a2 + 8) = v12;
      if ( v11 )
        v13 = v12 & 0xFFFFFFFFFF3FFFFFuLL | 0x400000;
      else
        v13 = v12 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      *(_QWORD *)(a2 + 8) = v13;
    }
    else if ( (a3 & 2) != 0 )
    {
      MiMakeSystemAddressValid((__int64)((_QWORD)v8 << 25) >> 16, 0LL, 0, a4, v10);
      return 1;
    }
  }
  return v10;
}
