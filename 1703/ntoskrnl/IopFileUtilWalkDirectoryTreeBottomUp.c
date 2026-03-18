/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405980F0
 * Callers:
 *     NtEnableLastKnownGood @ 0x140597E60 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  int v2; // edi
  SIZE_T v3; // r14
  PVOID **PoolWithTag; // rax
  PVOID **v5; // rbx
  _QWORD *v6; // rax
  PVOID *v7; // rax
  PVOID v9; // rbx
  PVOID *v10; // rax
  int v11; // [rsp+30h] [rbp-D8h]
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  PVOID p_P; // [rsp+50h] [rbp-B8h]
  __int64 v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+68h] [rbp-A0h] BYREF

  p_P = &P;
  P = &P;
  v2 = 0;
  v14[1] = (__int64)v14;
  v14[0] = (__int64)v14;
  v3 = (unsigned int)SourceString->Length + 38;
  PoolWithTag = (PVOID **)ExAllocatePoolWithTag(PagedPool, v3, 0x75466F49u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v3);
    *((_WORD *)v5 + 8) = 0;
    *((_WORD *)v5 + 9) = SourceString->Length;
    v5[3] = (PVOID *)(v5 + 4);
    RtlCopyUnicodeString((PUNICODE_STRING)v5 + 1, SourceString);
    v6 = P;
    if ( *((PVOID **)P + 1) != &P )
      __fastfail(3u);
    *v5 = (PVOID *)P;
    v5[1] = &P;
    v6[1] = v5;
    P = v5;
    if ( v5 == (PVOID **)&P )
      goto LABEL_16;
    while ( 1 )
    {
      v2 = IopFileUtilWalkDirectoryTreeHelper((int)v5 + 16, 8, 0, 0, FileInformation, v11, (__int64)&P);
      if ( v2 < 0 )
        break;
      v5 = (PVOID **)*v5;
      if ( v5 == (PVOID **)&P )
      {
        while ( 1 )
        {
          v5 = (PVOID **)P;
LABEL_16:
          if ( v5 == (PVOID **)&P )
            break;
          v9 = p_P;
          v10 = (PVOID *)*((_QWORD *)p_P + 1);
          if ( *(PVOID **)p_P != &P || *v10 != p_P )
            __fastfail(3u);
          p_P = (PVOID)*((_QWORD *)p_P + 1);
          *v10 = &P;
          v2 = IopFileUtilWalkDirectoryTreeHelper(
                 (int)v9 + 16,
                 7,
                 (int)PpLastGoodDeleteFilesCallback,
                 0,
                 FileInformation,
                 v11,
                 (__int64)v14);
          ExFreePoolWithTag(v9, 0x75466F49u);
        }
        if ( v2 < 0 )
          goto LABEL_6;
        return (unsigned int)v2;
      }
    }
  }
  else
  {
    v2 = -1073741670;
  }
  while ( 1 )
  {
    v5 = (PVOID **)P;
LABEL_6:
    if ( v5 == (PVOID **)&P )
      break;
    v7 = *v5;
    if ( v5[1] != &P || v7[1] != v5 )
      __fastfail(3u);
    P = *v5;
    v7[1] = &P;
    ExFreePoolWithTag(v5, 0x75466F49u);
  }
  return (unsigned int)v2;
}
