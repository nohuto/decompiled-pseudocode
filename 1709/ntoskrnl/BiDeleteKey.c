/*
 * XREFs of BiDeleteKey @ 0x140779740
 * Callers:
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140778BFC (BcdDeleteObject.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140131B74 (BiSanitizeHandle.c)
 *     BiZwClose @ 0x140134ADC (BiZwClose.c)
 *     BiZwDeleteKey @ 0x140290190 (BiZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  void *v1; // rax
  void *v2; // rsi
  const WCHAR **v3; // rbx
  __int64 v4; // rbp
  NTSTATUS v5; // ebx
  void *v7; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v1 = (void *)BiSanitizeHandle(a1);
  P = 0LL;
  v2 = v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, (ULONG *)&v7) >= 0 && (_DWORD)v7 )
  {
    v3 = (const WCHAR **)P;
    v4 = (unsigned int)v7;
    do
    {
      if ( (int)BiOpenKey((__int64)v2, *v3, 0xF003Fu, &v7) >= 0 && (int)BiDeleteKey(v7) < 0 )
        BiCloseKey(v7);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v5 = BiZwDeleteKey(v2);
  if ( v5 >= 0 )
    BiZwClose(v2);
  return (unsigned int)v5;
}
