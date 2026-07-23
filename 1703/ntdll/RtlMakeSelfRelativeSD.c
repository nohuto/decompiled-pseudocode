/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x180076600
 * Callers:
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800765E0 (RtlAbsoluteToSelfRelativeSD.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 * Callees:
 *     sub_180076744 @ 0x180076744 (sub_180076744.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  size_t v6; // r12
  size_t v7; // r14
  size_t v8; // rbx
  ULONG v9; // ecx
  char *v10; // rsi
  __int64 v11; // rbx
  void *v13; // [rsp+50h] [rbp-20h] BYREF
  void *Src; // [rsp+58h] [rbp-18h] BYREF
  void *v15; // [rsp+60h] [rbp-10h] BYREF
  void *v16; // [rsp+68h] [rbp-8h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  size_t v18; // [rsp+B8h] [rbp+48h] BYREF
  size_t v19; // [rsp+C0h] [rbp+50h] BYREF
  size_t v20; // [rsp+C8h] [rbp+58h] BYREF

  sub_180076744(
    (_DWORD)AbsoluteSecurityDescriptor,
    (unsigned int)&v15,
    (unsigned int)&v18,
    (unsigned int)&v16,
    (__int64)&v19,
    (__int64)&Src,
    (__int64)&Size,
    (__int64)&v13,
    (__int64)&v20);
  v6 = (unsigned int)v18;
  v7 = (unsigned int)v19;
  v8 = (unsigned int)v20;
  v9 = Size + v18 + v19 + v20 + 20;
  if ( v9 > *BufferLength )
  {
    *BufferLength = v9;
    return -1073741789;
  }
  else if ( SelfRelativeSecurityDescriptor )
  {
    memset(SelfRelativeSecurityDescriptor, 0, v9);
    v10 = (char *)SelfRelativeSecurityDescriptor + 20;
    *(_DWORD *)SelfRelativeSecurityDescriptor = *(_DWORD *)AbsoluteSecurityDescriptor;
    if ( (_DWORD)v8 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 20, v13, v8);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = 20;
      v10 += v8;
    }
    else
    {
      *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = 0;
    }
    if ( (_DWORD)Size )
    {
      v11 = (unsigned int)Size;
      memmove(v10, Src, (unsigned int)Size);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = (_DWORD)v10 - (_DWORD)SelfRelativeSecurityDescriptor;
      v10 += v11;
    }
    else
    {
      *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = 0;
    }
    if ( (_DWORD)v6 )
    {
      memmove(v10, v15, v6);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = (_DWORD)v10 - (_DWORD)SelfRelativeSecurityDescriptor;
      v10 += v6;
    }
    if ( (_DWORD)v7 )
    {
      memmove(v10, v16, v7);
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
