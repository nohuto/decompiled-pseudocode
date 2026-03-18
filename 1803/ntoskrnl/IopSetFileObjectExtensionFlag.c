/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x1400686C4
 * Callers:
 *     IopCheckInitiatorHint @ 0x14012B520 (IopCheckInitiatorHint.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    result = IopAllocateFileObjectExtension(a1, &v6);
    v5 = v6;
    goto LABEL_3;
  }
  v5 = *(_DWORD **)(a1 + 208);
  if ( !v5 )
  {
    result = 3221226021LL;
LABEL_3:
    if ( (int)result < 0 )
      return result;
  }
  *v5 |= a2;
  return 0LL;
}
