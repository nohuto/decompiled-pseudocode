/*
 * XREFs of _RegRtlCreateTreeTransacted @ 0x140587028
 * Callers:
 *     _SysCtxRegCreateTree @ 0x140586FAC (_SysCtxRegCreateTree.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14006D844 (RtlStringCchCopyExW.c)
 *     RtlUnalignedStringCchLengthW @ 0x14006DC90 (RtlUnalignedStringCchLengthW.c)
 *     wcschr @ 0x14018A5C0 (wcschr.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _RegRtlCreateKeyTransacted @ 0x140587220 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall RegRtlCreateTreeTransacted(
        HANDLE Handle,
        NTSTRSAFE_PCWSTR pszSrc,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  NTSTATUS KeyTransacted; // edi
  size_t v11; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rsi
  unsigned __int64 v14; // rbx
  HANDLE i; // rbp
  wchar_t *v16; // rax
  size_t pcchLength; // [rsp+58h] [rbp-30h] BYREF

  KeyTransacted = RegRtlCreateKeyTransacted(Handle);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RtlUnalignedStringCchLengthW(pszSrc, 0x7FFFuLL, &pcchLength);
    if ( KeyTransacted >= 0 )
    {
      v11 = pcchLength + 1;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength + 1), 0x4C474552u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        KeyTransacted = RtlStringCchCopyExW(PoolWithTag, v11, pszSrc, 0LL, 0LL, 0x100u);
        if ( !KeyTransacted )
        {
          v14 = (unsigned __int64)v13;
          for ( i = Handle; ; i = 0LL )
          {
            v16 = wcschr((const wchar_t *)v14, 0x5Cu);
            v14 = (unsigned __int64)v16;
            if ( v16 )
            {
              *v16 = 0;
              do
                v14 += 2LL;
              while ( *(_WORD *)v14 == 92 );
              v14 &= -(__int64)(*(_WORD *)v14 != 0);
            }
            KeyTransacted = RegRtlCreateKeyTransacted(i);
            if ( i != Handle )
              ZwClose(i);
            if ( KeyTransacted )
              break;
            if ( !v14 )
            {
              *a7 = 0LL;
              break;
            }
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)KeyTransacted;
}
