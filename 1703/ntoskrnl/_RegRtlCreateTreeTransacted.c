/*
 * XREFs of _RegRtlCreateTreeTransacted @ 0x14048976C
 * Callers:
 *     _SysCtxRegCreateTree @ 0x1404896F8 (_SysCtxRegCreateTree.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14004BF9C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlCreateKeyTransacted @ 0x140489954 (_RegRtlCreateKeyTransacted.c)
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
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  NTSTATUS KeyTransacted; // edi
  size_t v13; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v15; // rsi
  unsigned __int64 v16; // rbx
  HANDLE i; // rbp
  unsigned __int64 v18; // rdi
  wchar_t *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  size_t pcchLength; // [rsp+58h] [rbp-30h] BYREF

  v7 = a4;
  v8 = a3;
  KeyTransacted = RegRtlCreateKeyTransacted(Handle, pszSrc, a3, a4, a5);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RtlUnalignedStringCchLengthW(pszSrc, 0x7FFFuLL, &pcchLength);
    if ( KeyTransacted >= 0 )
    {
      v13 = pcchLength + 1;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength + 1), 0x4C474552u);
      v15 = PoolWithTag;
      if ( PoolWithTag )
      {
        KeyTransacted = RtlStringCchCopyExW(PoolWithTag, v13, pszSrc, 0LL, 0LL, 0x100u);
        if ( !KeyTransacted )
        {
          v16 = (unsigned __int64)v15;
          for ( i = Handle; ; i = 0LL )
          {
            v18 = v16;
            v19 = wcschr((const wchar_t *)v16, 0x5Cu);
            v16 = (unsigned __int64)v19;
            if ( !v19 )
              goto LABEL_17;
            *v19 = 0;
            do
              v16 += 2LL;
            while ( *(_WORD *)v16 == 92 );
            v16 &= -(__int64)(*(_WORD *)v16 != 0);
            if ( v16 )
            {
              v20 = 4LL;
              v21 = v8 & 0xFFFFFFFC;
              v22 = 0LL;
            }
            else
            {
LABEL_17:
              v22 = a5;
              v21 = v8;
              v20 = v7;
            }
            KeyTransacted = RegRtlCreateKeyTransacted(i, v18, v21, v20, v22);
            if ( i != Handle )
              ZwClose(i);
            if ( KeyTransacted )
              break;
            if ( !v16 )
            {
              *a7 = 0LL;
              break;
            }
          }
        }
        ExFreePoolWithTag(v15, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)KeyTransacted;
}
