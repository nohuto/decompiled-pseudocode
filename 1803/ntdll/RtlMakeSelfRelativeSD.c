/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x1800703A0
 * Callers:
 *     RtlAbsoluteToSelfRelativeSD @ 0x180070380 (RtlAbsoluteToSelfRelativeSD.c)
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 * Callees:
 *     sub_180070500 @ 0x180070500 (sub_180070500.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
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

  sub_180070500(
    (_DWORD)AbsoluteSecurityDescriptor,
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
  else if ( SelfRelativeSecurityDescriptor )
  {
    memset(SelfRelativeSecurityDescriptor, 0, v9);
    *(_DWORD *)SelfRelativeSecurityDescriptor = *(_DWORD *)AbsoluteSecurityDescriptor;
    v10 = (char *)SelfRelativeSecurityDescriptor + 20;
    if ( (_DWORD)v8 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 20, v15, v8);
      v10 = (char *)SelfRelativeSecurityDescriptor + v8 + 20;
      v11 = 20;
    }
    else
    {
      v11 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = v11;
    if ( (_DWORD)Size )
    {
      v12 = (unsigned int)Size;
      memmove(v10, Src, (unsigned int)Size);
      v13 = (_DWORD)v10 - (_DWORD)SelfRelativeSecurityDescriptor;
      v10 += v12;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = v13;
    if ( (_DWORD)v6 )
    {
      memmove(v10, v17, v6);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = (_DWORD)v10 - (_DWORD)SelfRelativeSecurityDescriptor;
      v10 += v6;
    }
    if ( (_DWORD)v7 )
    {
      memmove(v10, v18, v7);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 2) = (_DWORD)v10 - (_DWORD)SelfRelativeSecurityDescriptor;
    }
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  else
  {
    return -1073741811;
  }
}
