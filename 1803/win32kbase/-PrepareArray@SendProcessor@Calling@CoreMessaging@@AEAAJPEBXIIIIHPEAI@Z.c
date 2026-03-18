/*
 * XREFs of ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1C01692C0
 * Callers:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C01695DC (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 * Callees:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C01695DC (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 */

int __fastcall CoreMessaging::Calling::SendProcessor::PrepareArray(
        CoreMessaging::Calling::SendProcessor *this,
        const void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rdi
  unsigned int v11; // ebp
  int result; // eax
  unsigned __int64 v13; // rax

  v8 = a8;
  *a8 = 0;
  if ( a2 || !a3 )
  {
    v11 = a5;
    result = CoreMessaging::Calling::SendProcessor::ReadParameterSize(this, 0LL, 1, a4, a5, a6, (unsigned int *)&a8);
    if ( result < 0 )
      return result;
    if ( !a7 )
      v11 = a3;
    v13 = (unsigned int)a8 * (unsigned __int64)v11;
    if ( is_mul_ok((unsigned int)a8, v11) && v13 <= 0xFFFFFFFF )
    {
      *v8 = v13;
      return 0;
    }
    *((_DWORD *)this + 30) = 106;
  }
  else
  {
    *((_DWORD *)this + 30) = 106;
  }
  return -2147024809;
}
