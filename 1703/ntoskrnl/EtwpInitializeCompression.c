/*
 * XREFs of EtwpInitializeCompression @ 0x140257FA8
 * Callers:
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 * Callees:
 *     EtwpFreePlaceholderList @ 0x14001B798 (EtwpFreePlaceholderList.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14012D430 (RtlGetCompressionWorkSpaceSize.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // edi
  PVOID v4; // rax
  unsigned int v5; // ebp
  _DWORD *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONG v8; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 1020) = 5;
  *(_DWORD *)(a1 + 1024) = 3;
  *(_QWORD *)(a1 + 968) = EtwpCompressionProc;
  *(_QWORD *)(a1 + 976) = a1;
  *(_QWORD *)(a1 + 952) = 0LL;
  result = RtlGetCompressionWorkSpaceSize(3u, (PULONG)&NumberOfBytes, &v8);
  v3 = result;
  if ( result >= 0 )
  {
    if ( !(_DWORD)NumberOfBytes
      || (v4 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x5A777445u),
          (*(_QWORD *)(a1 + 1008) = v4) != 0LL) )
    {
      *(_QWORD *)(a1 + 992) = 0LL;
      *(_QWORD *)(a1 + 1064) = EtwpCompressionDpc;
      *(_DWORD *)(a1 + 1040) = 275;
      v5 = 0;
      *(_QWORD *)(a1 + 1072) = a1;
      *(_QWORD *)(a1 + 1096) = 0LL;
      *(_QWORD *)(a1 + 1056) = 0LL;
      *(_QWORD *)(a1 + 1032) = 0LL;
      if ( *(_DWORD *)(a1 + 1020) )
      {
        while ( 1 )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 300), 0x48uLL, 0x42777445u);
          if ( !PoolWithTag )
            break;
          PoolWithTag[11] = 6;
          ++v5;
          *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 1032);
          *(_QWORD *)(a1 + 1032) = PoolWithTag + 8;
          if ( v5 >= *(_DWORD *)(a1 + 1020) )
            goto LABEL_8;
        }
        v3 = -1073741801;
        EtwpFreePlaceholderList(a1);
      }
      else
      {
LABEL_8:
        _InterlockedExchange((volatile __int32 *)(a1 + 1016), 1);
      }
      return v3;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
