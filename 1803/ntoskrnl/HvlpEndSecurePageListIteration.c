/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x14022EB88
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14022BCEC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x14022BDBC (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14022C7CC (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14022CF7C (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     VslEndSecurePageIteration @ 0x14022F618 (VslEndSecurePageIteration.c)
 */

void __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  int *v3; // rbx
  int v6; // edi
  int *v7; // rsi
  unsigned int v8; // eax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  v3 = &HvlpIteratorCrashdump;
  v6 = a1;
  v7 = &HvlpIteratorCrashdump;
  if ( !(_DWORD)a1 )
    v7 = &HvlpIteratorHibernate;
  if ( *((_BYTE *)v7 + 2) )
  {
    LOBYTE(a1) = (_DWORD)a1 == 0;
    VslEndSecurePageIteration(a1, &Size);
    if ( a3 )
    {
      v8 = Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( v8 )
          memmove(a2, *((const void **)v7 + 1), v8);
      }
    }
    if ( !v6 )
      v3 = &HvlpIteratorHibernate;
    *((_QWORD *)v3 + 1) = 0LL;
    *v3 = 0;
  }
}
