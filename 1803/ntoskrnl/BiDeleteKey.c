/*
 * XREFs of BiDeleteKey @ 0x1405EE92C
 * Callers:
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1407E1868 (BcdDeleteObject.c)
 * Callees:
 *     CmSiCloseSection @ 0x1400CC154 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1400D2628 (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x140155ACC (BiZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x140607E7C (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &v7) >= 0 && (_DWORD)v7 )
  {
    v5 = P;
    v6 = (unsigned int)v7;
    do
    {
      if ( (int)BiOpenKey(v2, *v5, 983103LL, &v7) >= 0 && (int)BiDeleteKey(v7) < 0 )
        BiCloseKey(v7);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    CmSiCloseSection(v2);
  return (unsigned int)v3;
}
