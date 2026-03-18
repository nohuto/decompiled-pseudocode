/*
 * XREFs of PspInitializeFullProcessImageName @ 0x14049C5B4
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspSetProcessShortName @ 0x14049C538 (PspSetProcessShortName.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int NameStringMode; // eax
  int v6; // edi
  char *v7; // rax
  void *v8; // rbx
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v13[12]; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF

  if ( (*(_DWORD *)(a2 + 1740) & 1) == 0 )
  {
    *(_OWORD *)v13 = *(_OWORD *)(*(_QWORD *)(a1 + 176) + 88LL);
    PspSetProcessShortName(a2, v13);
    v4 = *(_QWORD *)(a1 + 176);
    Src[0] = 0LL;
    Src[1] = 0LL;
    LODWORD(NumberOfBytes) = 272;
    NameStringMode = ObQueryNameStringMode(v4, (unsigned int)Src, 272, (unsigned int)&NumberOfBytes, 0);
    v6 = NameStringMode;
    if ( NameStringMode == -2147483643 || NameStringMode == -1073741789 || NameStringMode == -1073741820 )
    {
      if ( (unsigned int)NumberOfBytes > 0x110 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          v6 = ObQueryNameStringMode(
                 *(_QWORD *)(a1 + 176),
                 (_DWORD)PoolWithTag,
                 NumberOfBytes,
                 (unsigned int)&NumberOfBytes,
                 0);
          if ( v6 >= 0 )
            goto LABEL_10;
          ExFreePoolWithTag(v8, 0);
LABEL_9:
          if ( v6 >= 0 )
            goto LABEL_10;
        }
      }
    }
    else if ( NameStringMode >= 0 && (unsigned int)(NumberOfBytes - 17) <= 0xFF )
    {
      v7 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
      v8 = v7;
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)Src;
        *((_QWORD *)v7 + 1) = v7 + 16;
        memmove(v7 + 16, Src[1], WORD1(Src[0]));
        goto LABEL_9;
      }
    }
  }
  LODWORD(NumberOfBytes) = 16;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
  v8 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned int)NumberOfBytes);
    v6 = 0;
  }
  else
  {
    v6 = -1073741801;
  }
LABEL_10:
  *(_QWORD *)(a2 + 1128) = v8;
  return (unsigned int)v6;
}
