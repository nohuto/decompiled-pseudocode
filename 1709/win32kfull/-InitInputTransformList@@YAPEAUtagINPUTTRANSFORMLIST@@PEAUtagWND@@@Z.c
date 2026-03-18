/*
 * XREFs of ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C0006F88
 * Callers:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0006E18 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006E78 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

struct tagINPUTTRANSFORMLIST *__fastcall InitInputTransformList(struct tagWND *a1)
{
  struct tagINPUTTRANSFORMLIST *result; // rax

  result = (struct tagINPUTTRANSFORMLIST *)*((_QWORD *)a1 + 44);
  if ( !result )
  {
    if ( gliQpcFreq
      && (result = (struct tagINPUTTRANSFORMLIST *)Win32AllocPoolZInit(104LL, 2020176725LL),
          (*((_QWORD *)a1 + 44) = result) != 0LL) )
    {
      *((_QWORD *)result + 2) = (char *)result + 8;
      *((_QWORD *)result + 1) = (char *)result + 8;
      *(_QWORD *)result = 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
