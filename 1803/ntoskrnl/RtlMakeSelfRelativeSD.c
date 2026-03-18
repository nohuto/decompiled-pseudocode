/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x1405E1188
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1405C39A8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1405E1160 (RtlAbsoluteToSelfRelativeSD.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpQuerySecurityDescriptor @ 0x1405E12C8 (RtlpQuerySecurityDescriptor.c)
 */

NTSTATUS __stdcall RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSD,
        PSECURITY_DESCRIPTOR SelfRelativeSD,
        PULONG BufferLength)
{
  __int64 v6; // r13
  size_t v7; // r15
  size_t v8; // r12
  ULONG v9; // ecx
  char *v10; // rsi
  int v11; // r14d
  __int64 v12; // rbx
  int v13; // eax
  void *v15; // [rsp+50h] [rbp-28h] BYREF
  void *Src; // [rsp+58h] [rbp-20h] BYREF
  void *v17; // [rsp+60h] [rbp-18h] BYREF
  void *v18; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  size_t v20; // [rsp+C8h] [rbp+50h] BYREF
  int v21; // [rsp+D0h] [rbp+58h] BYREF
  size_t v22; // [rsp+D8h] [rbp+60h] BYREF

  RtlpQuerySecurityDescriptor(
    (_DWORD)AbsoluteSD,
    (unsigned int)&v17,
    (unsigned int)&Size,
    (unsigned int)&v18,
    (__int64)&v20,
    (__int64)&Src,
    (__int64)&v21,
    (__int64)&v15,
    (__int64)&v22);
  v6 = (unsigned int)Size;
  v7 = (unsigned int)v20;
  v8 = (unsigned int)v22;
  LODWORD(Size) = v21;
  v9 = v21 + v20 + v6 + v22 + 20;
  if ( v9 > *BufferLength )
  {
    *BufferLength = v9;
    return -1073741789;
  }
  else if ( SelfRelativeSD )
  {
    memset(SelfRelativeSD, 0, v9);
    *(_DWORD *)SelfRelativeSD = *(_DWORD *)AbsoluteSD;
    v10 = (char *)SelfRelativeSD + 20;
    if ( (_DWORD)v8 )
    {
      memmove((char *)SelfRelativeSD + 20, v15, v8);
      v10 = (char *)SelfRelativeSD + v8 + 20;
      v11 = 20;
    }
    else
    {
      v11 = 0;
    }
    *((_DWORD *)SelfRelativeSD + 3) = v11;
    if ( (_DWORD)Size )
    {
      v12 = (unsigned int)Size;
      memmove(v10, Src, (unsigned int)Size);
      v13 = (_DWORD)v10 - (_DWORD)SelfRelativeSD;
      v10 += v12;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)SelfRelativeSD + 4) = v13;
    if ( (_DWORD)v6 )
    {
      memmove(v10, v17, v6);
      *((_DWORD *)SelfRelativeSD + 1) = (_DWORD)v10 - (_DWORD)SelfRelativeSD;
      v10 += v6;
    }
    if ( (_DWORD)v7 )
    {
      memmove(v10, v18, v7);
      *((_DWORD *)SelfRelativeSD + 2) = (_DWORD)v10 - (_DWORD)SelfRelativeSD;
    }
    *((_WORD *)SelfRelativeSD + 1) |= 0x8000u;
    return 0;
  }
  else
  {
    return -1073741811;
  }
}
