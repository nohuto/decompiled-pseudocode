/*
 * XREFs of ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z @ 0x1C0169594
 * Callers:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C01695DC (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareStruct(
        CoreMessaging::Calling::SendProcessor *this,
        const void *a2,
        int a3,
        unsigned int *a4)
{
  __int64 result; // rax
  unsigned __int8 *v6; // rax
  int v7; // edx
  __int16 v8; // cx

  *a4 = 0;
  if ( !a3 && !a2 )
    return 2147500035LL;
  v6 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v7 = *v6++;
  *((_QWORD *)this + 1) = v6;
  v8 = *v6;
  *((_QWORD *)this + 1) = v6 + 1;
  result = 0LL;
  *a4 = v7 | (unsigned __int16)(v8 << 8);
  return result;
}
