/*
 * XREFs of BiDeleteKey @ 0x140578EEC
 * Callers:
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140734974 (BcdDeleteObject.c)
 * Callees:
 *     BiZwDeleteKey @ 0x14013C154 (BiZwDeleteKey.c)
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiZwClose @ 0x14014CF3C (BiZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x14058A920 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &Handle) >= 0 && (_DWORD)Handle )
  {
    v5 = P;
    v6 = (unsigned int)Handle;
    do
    {
      if ( (int)BiOpenKey(v2, *v5, 983103LL, &Handle) >= 0 && (int)BiDeleteKey(Handle) < 0 )
        BiCloseKey(Handle);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    BiZwClose(v2);
  return (unsigned int)v3;
}
