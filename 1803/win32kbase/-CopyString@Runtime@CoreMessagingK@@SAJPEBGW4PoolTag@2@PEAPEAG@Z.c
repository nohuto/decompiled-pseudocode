/*
 * XREFs of ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C01663D0
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C01665E0 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C0166370 (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C016646C (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall CoreMessagingK::Runtime::CopyString(unsigned __int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (void *)a1;
  *a3 = 0LL;
  v4 = RtlStringCbLengthW(L"Kernel\\MIT\\InputPort", 0xFFFFFFFEuLL, (unsigned __int64 *)&v7);
  if ( v4 >= 0 )
  {
    v5 = (unsigned __int64)v7;
    if ( (unsigned __int64)v7 < 0xFFFFFFFC )
    {
      v4 = CoreMessagingK::Runtime::AllocUninitialized((SIZE_T)v7 + 2, 0x4E534D43u, &v7);
      if ( v4 >= 0 )
      {
        *a3 = v7;
        memmove(*a3, L"Kernel\\MIT\\InputPort", v5 + 2);
      }
    }
    else
    {
      return (unsigned int)-1073741585;
    }
  }
  return (unsigned int)v4;
}
