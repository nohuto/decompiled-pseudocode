/*
 * XREFs of _lambda_1fd89715dd5e0780fcc681c03ba24d86_::operator() @ 0x1C00A9B54
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004269C (-Initialize@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__fastcall lambda_1fd89715dd5e0780fcc681c03ba24d86_::operator()(__int64 a1, unsigned int a2)
{
  ULONG v2; // edi
  struct _RTL_BITMAP *result; // rax
  struct _RTL_BITMAP *v4; // rbx

  v2 = 8;
  if ( a2 >= 8 )
    v2 = a2;
  result = (struct _RTL_BITMAP *)ExAllocatePoolWithTag(
                                   PagedPoolSession,
                                   (((v2 >> 3) + 7) & 0xFFFFFFF8) + 16,
                                   0x6F736955u);
  v4 = result;
  if ( result )
  {
    RtlInitializeBitMap(result, &result[1].SizeOfBitMap, v2);
    RtlClearAllBits(v4);
    return v4;
  }
  return result;
}
